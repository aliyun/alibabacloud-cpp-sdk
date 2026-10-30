#include <darabonba/Core.hpp>
#include <alibabacloud/AgentCore20260804.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AgentCore20260804::Models;
namespace AlibabaCloud
{
namespace AgentCore20260804
{

AlibabaCloud::AgentCore20260804::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("agentcore", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Writes messages or text to a memory store. By default, sync is set to true, which means the operation synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId, which you can query by calling GetMemoryTask.
 *
 * @description Writes messages or text to a memory store. By default, sync is set to true, which means the operation synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId, which you can query by calling GetMemoryTask.
 *
 * @param tmpReq AddMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMemoriesResponse
 */
AddMemoriesResponse Client::addMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const AddMemoriesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddMemoriesShrinkRequest request = AddMemoriesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddMemories"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMemoriesResponse>();
}

/**
 * @summary Writes messages or text to a memory store. By default, sync is set to true, which means the operation synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId, which you can query by calling GetMemoryTask.
 *
 * @description Writes messages or text to a memory store. By default, sync is set to true, which means the operation synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId, which you can query by calling GetMemoryTask.
 *
 * @param request AddMemoriesRequest
 * @return AddMemoriesResponse
 */
AddMemoriesResponse Client::addMemories(const string &workspaceId, const string &memoryStoreName, const AddMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addMemoriesWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
 *
 * @param tmpReq BatchDeleteModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteModelsResponse
 */
BatchDeleteModelsResponse Client::batchDeleteModelsWithOptions(const string &workspaceId, const BatchDeleteModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteModelsShrinkRequest request = BatchDeleteModelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeleteModels"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models/actions/batch-delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteModelsResponse>();
}

/**
 * @summary Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
 *
 * @param request BatchDeleteModelsRequest
 * @return BatchDeleteModelsResponse
 */
BatchDeleteModelsResponse Client::batchDeleteModels(const string &workspaceId, const BatchDeleteModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchDeleteModelsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
 *
 * @description ## Request description
 * Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
 *
 * @param tmpReq BatchUploadSkillsViaOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUploadSkillsViaOssResponse
 */
BatchUploadSkillsViaOssResponse Client::batchUploadSkillsViaOssWithOptions(const string &workspaceId, const BatchUploadSkillsViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUploadSkillsViaOssShrinkRequest request = BatchUploadSkillsViaOssShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUploadSkillsViaOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skill-actions/batch-upload-via-oss")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUploadSkillsViaOssResponse>();
}

/**
 * @summary Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
 *
 * @description ## Request description
 * Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
 *
 * @param request BatchUploadSkillsViaOssRequest
 * @return BatchUploadSkillsViaOssResponse
 */
BatchUploadSkillsViaOssResponse Client::batchUploadSkillsViaOss(const string &workspaceId, const BatchUploadSkillsViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchUploadSkillsViaOssWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Converts an MCP to free-edit mode.
 *
 * @description Disables template usage constraints. After the conversion, the MCP retains its source and tags, but no longer appears on the usage page.
 *
 * @param request ConvertMcpToFreeEditRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertMcpToFreeEditResponse
 */
ConvertMcpToFreeEditResponse Client::convertMcpToFreeEditWithOptions(const string &workspaceId, const string &mcpServerId, const ConvertMcpToFreeEditRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertMcpToFreeEdit"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId) , "/convert-to-free-edit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertMcpToFreeEditResponse>();
}

/**
 * @summary Converts an MCP to free-edit mode.
 *
 * @description Disables template usage constraints. After the conversion, the MCP retains its source and tags, but no longer appears on the usage page.
 *
 * @param request ConvertMcpToFreeEditRequest
 * @return ConvertMcpToFreeEditResponse
 */
ConvertMcpToFreeEditResponse Client::convertMcpToFreeEdit(const string &workspaceId, const string &mcpServerId, const ConvertMcpToFreeEditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return convertMcpToFreeEditWithOptions(workspaceId, mcpServerId, request, headers, runtime);
}

/**
 * @summary Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
 *
 * @description Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
 *
 * @param tmpReq CreateAgentIMChannelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentIMChannelResponse
 */
CreateAgentIMChannelResponse Client::createAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const CreateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentIMChannelShrinkRequest request = CreateAgentIMChannelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentIMChannel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/im-channels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentIMChannelResponse>();
}

/**
 * @summary Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
 *
 * @description Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
 *
 * @param request CreateAgentIMChannelRequest
 * @return CreateAgentIMChannelResponse
 */
CreateAgentIMChannelResponse Client::createAgentIMChannel(const string &workspaceId, const string &agentId, const CreateAgentIMChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentIMChannelWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
 *
 * @description ## Request description
 * Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
 *
 * @param tmpReq CreateAgentSpecRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentSpecResponse
 */
CreateAgentSpecResponse Client::createAgentSpecWithOptions(const string &workspaceId, const CreateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentSpecShrinkRequest request = CreateAgentSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentSpec"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentSpecResponse>();
}

/**
 * @summary Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
 *
 * @description ## Request description
 * Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
 *
 * @param request CreateAgentSpecRequest
 * @return CreateAgentSpecResponse
 */
CreateAgentSpecResponse Client::createAgentSpec(const string &workspaceId, const CreateAgentSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentSpecWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
 *
 * @description ## Request description
 * Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
 *
 * @param tmpReq CreateAgentSpecVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentSpecVersionResponse
 */
CreateAgentSpecVersionResponse Client::createAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const CreateAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentSpecVersionShrinkRequest request = CreateAgentSpecVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentSpecVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentSpecVersionResponse>();
}

/**
 * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
 *
 * @description ## Request description
 * Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
 *
 * @param request CreateAgentSpecVersionRequest
 * @return CreateAgentSpecVersionResponse
 */
CreateAgentSpecVersionResponse Client::createAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const CreateAgentSpecVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentSpecVersionWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Creates a credential in a specified workspace for authentication when an agent accesses external services. Currently, only the apiKey type is supported. The credential content is passed as a JSON string through credentialMetadata and can only be queried in a desensitized format after it is written.
 *
 * @description Creates a credential in a workspace for authentication of services such as Connector.
 *
 * @param tmpReq CreateCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredentialWithOptions(const string &workspaceId, const CreateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCredentialShrinkRequest request = CreateCredentialShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/credentials")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCredentialResponse>();
}

/**
 * @summary Creates a credential in a specified workspace for authentication when an agent accesses external services. Currently, only the apiKey type is supported. The credential content is passed as a JSON string through credentialMetadata and can only be queried in a desensitized format after it is written.
 *
 * @description Creates a credential in a workspace for authentication of services such as Connector.
 *
 * @param request CreateCredentialRequest
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredential(const string &workspaceId, const CreateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCredentialWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a custom agent in a specified workspace by using a container image or a code package. The creation process is asynchronous. You can call GetCustomAgent to query the deployment result.
 *
 * @description Before you call this operation, prepare a writable workspace, a RAM role ARN, a container image or code package, and runtime configurations. You must specify name, artifact, roleArn, and runtime. The runtime parameter must include both compute and sessionPolicy.
 * To use the container mode, configure artifact.container and specify artifact.port. The image must have the required access permissions and be accessible over the network allowed by the workspace.
 * To use the code package pattern, specify artifact.port, and configure sourceUri, languageRuntime, and entrypoint in artifact.code. Do not configure container at the same time. Dependencies must be packaged by the user. ZIP and TAR.GZ formats are supported. The compressed package size cannot exceed 500,000,000 bytes. You can call ListAgentCodeRuntimes to query the runtime environment identity. The sourceUri parameter supports oss:// addresses or HTTPS object addresses of standard OSS public domain names, including signed URLs. To upload a local file, call GetAgentCodePackageUploadUrl to obtain the upload URL, upload the file directly, and then commit the returned sourceUri.
 * When you submit a new code package source, the backend rechecks the read permissions, object, and size. The configuration is saved only after the transfer succeeds. If the transfer fails, the current configuration is not saved. Saved fixed packages can be reused. Set the client timeout to 210 seconds for code package requests. Archive integrity and secure decompression are checked at startup. A successful acceptance does not indicate that the agent is ready to run.
 * The creation process is asynchronous. A successful response indicates that the request is accepted. Use the returned agentId to call GetCustomAgent and check latestVersionStatus, latestExecutionError, and status corresponding to latestSpecVersion to confirm the deployment result. After the deployment is ready, you can call CreateServiceEndpoint to configure the access endpoint.
 * The clientToken parameter does not provide idempotence guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold parameter for health checks does not take effect. Omit this parameter.
 *
 * @param tmpReq CreateCustomAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgentWithOptions(const string &workspaceId, const CreateCustomAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCustomAgentShrinkRequest request = CreateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCustomAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-agents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomAgentResponse>();
}

/**
 * @summary Creates a custom agent in a specified workspace by using a container image or a code package. The creation process is asynchronous. You can call GetCustomAgent to query the deployment result.
 *
 * @description Before you call this operation, prepare a writable workspace, a RAM role ARN, a container image or code package, and runtime configurations. You must specify name, artifact, roleArn, and runtime. The runtime parameter must include both compute and sessionPolicy.
 * To use the container mode, configure artifact.container and specify artifact.port. The image must have the required access permissions and be accessible over the network allowed by the workspace.
 * To use the code package pattern, specify artifact.port, and configure sourceUri, languageRuntime, and entrypoint in artifact.code. Do not configure container at the same time. Dependencies must be packaged by the user. ZIP and TAR.GZ formats are supported. The compressed package size cannot exceed 500,000,000 bytes. You can call ListAgentCodeRuntimes to query the runtime environment identity. The sourceUri parameter supports oss:// addresses or HTTPS object addresses of standard OSS public domain names, including signed URLs. To upload a local file, call GetAgentCodePackageUploadUrl to obtain the upload URL, upload the file directly, and then commit the returned sourceUri.
 * When you submit a new code package source, the backend rechecks the read permissions, object, and size. The configuration is saved only after the transfer succeeds. If the transfer fails, the current configuration is not saved. Saved fixed packages can be reused. Set the client timeout to 210 seconds for code package requests. Archive integrity and secure decompression are checked at startup. A successful acceptance does not indicate that the agent is ready to run.
 * The creation process is asynchronous. A successful response indicates that the request is accepted. Use the returned agentId to call GetCustomAgent and check latestVersionStatus, latestExecutionError, and status corresponding to latestSpecVersion to confirm the deployment result. After the deployment is ready, you can call CreateServiceEndpoint to configure the access endpoint.
 * The clientToken parameter does not provide idempotence guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold parameter for health checks does not take effect. Omit this parameter.
 *
 * @param request CreateCustomAgentRequest
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgent(const string &workspaceId, const CreateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCustomAgentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates an external agent in a specified workspace.
 *
 * @description Creates an external agent in a specified workspace.
 *
 * @param tmpReq CreateExternalAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExternalAgentResponse
 */
CreateExternalAgentResponse Client::createExternalAgentWithOptions(const string &workspaceId, const CreateExternalAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateExternalAgentShrinkRequest request = CreateExternalAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExternalAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExternalAgentResponse>();
}

/**
 * @summary Creates an external agent in a specified workspace.
 *
 * @description Creates an external agent in a specified workspace.
 *
 * @param request CreateExternalAgentRequest
 * @return CreateExternalAgentResponse
 */
CreateExternalAgentResponse Client::createExternalAgent(const string &workspaceId, const CreateExternalAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExternalAgentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
 *
 * @description Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
 *
 * @param request CreateExternalAgentBootstrapTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExternalAgentBootstrapTokenResponse
 */
CreateExternalAgentBootstrapTokenResponse Client::createExternalAgentBootstrapTokenWithOptions(const string &workspaceId, const string &agentId, const CreateExternalAgentBootstrapTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkType()) {
    query["networkType"] = request.getNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExternalAgentBootstrapToken"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/bootstrap/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExternalAgentBootstrapTokenResponse>();
}

/**
 * @summary Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
 *
 * @description Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
 *
 * @param request CreateExternalAgentBootstrapTokenRequest
 * @return CreateExternalAgentBootstrapTokenResponse
 */
CreateExternalAgentBootstrapTokenResponse Client::createExternalAgentBootstrapToken(const string &workspaceId, const string &agentId, const CreateExternalAgentBootstrapTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExternalAgentBootstrapTokenWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Binds a DingTalk, Lark, or CustomSSO identity source to a workspace. CustomSSO only asynchronously initializes the shared user pool. SAML logon and SCIM synchronization are configured separately later.
 *
 * @description ## Features and prerequisites
 * The WAITING_CONFIGURATION status also occupies the single external identity source quota for a workspace. CustomSSO (SAML/OIDC and SCIM) is mutually exclusive with DingTalk and Lark. SCIM reuses the CustomSSO binding and does not create a second identity source. Creating another type returns a 409 IdentityProviderAlreadyBound error. You can change the identity source only after the existing binding is unbound and removed.
 * A workspace can have only one external identity source binding. The identityProviderType parameter supports DingTalk, Lark, and CustomSSO. CustomSSO only initializes the shared user pool. Do not pass non-empty metadata, and do not pass true for loginEnabled or syncEnabled. Both switches are disabled by default. Protocols and SAML configurations are saved by using UpdateIdentityProvider. SCIM is configured by using a separate API operation. You do not need to save SAML configurations first. If initialization is complete but SAML metadata is not saved, the system returns WAITING_CONFIGURATION. CONFIGURED and SYNCING indicate that the resource is still being initialized. You can call GetIdentityProvider to query the status. After you save the metadata, the system returns UPDATING. After the configuration is complete and the internal OIDC is published, the system returns READY. READY does not mean that the logon switch is enabled. For the same CustomSSO binding, the system may return the existing binding after the initialization request is accepted or completed. You cannot treat all statuses as repeatable creations.
 * For DingTalk, the metadata must include appKey, appSecret, and corpId. For Lark, the metadata must include appId and appSecret. The vendor logon switch is enabled by default, and the synchronization switch is disabled by default. If synchronization is enabled, encryptKey and verificationToken are also required. The vendor syncOnBind and syncScope parameters retain the existing department-based synchronization definitions. Do not use these vendor pull parameters to replace SCIM configurations during CustomSSO initialization.
 * ## Requests and examples
 * POST /workspaces/{workspaceId}/identity-providers
 * Call conventions: Call the API operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API operation, not the extra body wrapper of the backend direct connection API operation. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * POST /workspaces/ws-example/identity-providers
 * {"identityProviderType": "CustomSSO"}
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "loginEnabled": false,
 *     "syncEnabled": false,
 *     "status": "WAITING_CONFIGURATION"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: A 400 InvalidParameter error indicates that the parameters or current configuration prerequisites are not met. A 404 IdentityProviderNotFound error indicates that no binding of the matching type exists. If a synchronous call to the upstream service fails, a 503 IdentityProviderProvisioningUnavailable error may be returned. Retain the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 409 IdentityProviderAlreadyBound: An external binding already exists. Query and reuse the correct binding first. Do not automatically unbind the entire binding. If the initialization request fails, retain the request ID for troubleshooting. If a binding already exists, query the current status first to avoid repeated creation.
 * ## Call relationships and usage boundaries
 * CustomSSO call sequence: Create the binding first. After initialization is complete, the system returns WAITING_CONFIGURATION. If the system returns CONFIGURED or SYNCING, you can call GetIdentityProvider to query the status. Then, you can configure SAML and SCIM separately. You do not need to complete them in a fixed sequence. For SAML, use GetIdentityProviderServiceProvider to obtain the SP information of your side, and use UpdateIdentityProvider to save the external IdP configuration. For SCIM, use PrepareIdentityProviderSCIM to obtain the pre-provisioning address and credentials, and then use UpdateIdentityProviderSCIM to confirm synchronization.
 *
 * @param tmpReq CreateIdentityProviderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProviderWithOptions(const string &workspaceId, const CreateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIdentityProviderShrinkRequest request = CreateIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIdentityProvider"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentityProviderResponse>();
}

/**
 * @summary Binds a DingTalk, Lark, or CustomSSO identity source to a workspace. CustomSSO only asynchronously initializes the shared user pool. SAML logon and SCIM synchronization are configured separately later.
 *
 * @description ## Features and prerequisites
 * The WAITING_CONFIGURATION status also occupies the single external identity source quota for a workspace. CustomSSO (SAML/OIDC and SCIM) is mutually exclusive with DingTalk and Lark. SCIM reuses the CustomSSO binding and does not create a second identity source. Creating another type returns a 409 IdentityProviderAlreadyBound error. You can change the identity source only after the existing binding is unbound and removed.
 * A workspace can have only one external identity source binding. The identityProviderType parameter supports DingTalk, Lark, and CustomSSO. CustomSSO only initializes the shared user pool. Do not pass non-empty metadata, and do not pass true for loginEnabled or syncEnabled. Both switches are disabled by default. Protocols and SAML configurations are saved by using UpdateIdentityProvider. SCIM is configured by using a separate API operation. You do not need to save SAML configurations first. If initialization is complete but SAML metadata is not saved, the system returns WAITING_CONFIGURATION. CONFIGURED and SYNCING indicate that the resource is still being initialized. You can call GetIdentityProvider to query the status. After you save the metadata, the system returns UPDATING. After the configuration is complete and the internal OIDC is published, the system returns READY. READY does not mean that the logon switch is enabled. For the same CustomSSO binding, the system may return the existing binding after the initialization request is accepted or completed. You cannot treat all statuses as repeatable creations.
 * For DingTalk, the metadata must include appKey, appSecret, and corpId. For Lark, the metadata must include appId and appSecret. The vendor logon switch is enabled by default, and the synchronization switch is disabled by default. If synchronization is enabled, encryptKey and verificationToken are also required. The vendor syncOnBind and syncScope parameters retain the existing department-based synchronization definitions. Do not use these vendor pull parameters to replace SCIM configurations during CustomSSO initialization.
 * ## Requests and examples
 * POST /workspaces/{workspaceId}/identity-providers
 * Call conventions: Call the API operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API operation, not the extra body wrapper of the backend direct connection API operation. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * POST /workspaces/ws-example/identity-providers
 * {"identityProviderType": "CustomSSO"}
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "loginEnabled": false,
 *     "syncEnabled": false,
 *     "status": "WAITING_CONFIGURATION"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: A 400 InvalidParameter error indicates that the parameters or current configuration prerequisites are not met. A 404 IdentityProviderNotFound error indicates that no binding of the matching type exists. If a synchronous call to the upstream service fails, a 503 IdentityProviderProvisioningUnavailable error may be returned. Retain the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 409 IdentityProviderAlreadyBound: An external binding already exists. Query and reuse the correct binding first. Do not automatically unbind the entire binding. If the initialization request fails, retain the request ID for troubleshooting. If a binding already exists, query the current status first to avoid repeated creation.
 * ## Call relationships and usage boundaries
 * CustomSSO call sequence: Create the binding first. After initialization is complete, the system returns WAITING_CONFIGURATION. If the system returns CONFIGURED or SYNCING, you can call GetIdentityProvider to query the status. Then, you can configure SAML and SCIM separately. You do not need to complete them in a fixed sequence. For SAML, use GetIdentityProviderServiceProvider to obtain the SP information of your side, and use UpdateIdentityProvider to save the external IdP configuration. For SCIM, use PrepareIdentityProviderSCIM to obtain the pre-provisioning address and credentials, and then use UpdateIdentityProviderSCIM to confirm synchronization.
 *
 * @param request CreateIdentityProviderRequest
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProvider(const string &workspaceId, const CreateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIdentityProviderWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Issues a SCIM credential explicitly and returns the plaintext token only for the current call. A maximum of two credentials are allowed in the same pool. This operation does not automatically revoke old credentials or enable AC user synchronization.
 *
 * @description ## Features and prerequisites
 * Issues a new credential explicitly. This requires an available shared pool and the AgentIdentity SCIM reception to be Enabled. This operation does not automatically enable reception. If it is not enabled, call prepare first. Returns the configuration, credential summary, and the current token. The limit of a maximum of two credentials is enforced by AgentIdentity. An existing available token does not prevent users from explicitly creating a second one. Old credentials are not automatically revoked, and no extended rotation process is provided.
 * The token is returned only once and cannot be retrieved again in subsequent list and query operations. Do not automatically retry the issuance. If the response is lost, check the list first to verify whether it has been created. Creating a credential does not enable AC syncEnabled, start a full user import, or switch SAML logon. Deleting an old token should be performed explicitly after the user confirms the actual usage of the external provisioning system.
 * ## Request and examples
 * POST /workspaces/{workspaceId}/scim-provisioning/credentials
 * Call conventions: Call the operation in the region of the target workspace, using an AK/STS identity that has permissions for the identity source resources of the corresponding workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameter content of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not log the key. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * POST /workspaces/ws-example/scim-provisioning/credentials
 * No business request body.
 * ```
 * ## Response example
 * ```json
 * {
 *   "data": {
 *     "configuration": {
 *       "status": "Enabled",
 *       "baseUrl": "https://example.com/scim/v2"
 *     },
 *     "credential": {
 *       "credentialId": "credential-example",
 *       "status": "Enabled",
 *       "expireTime": "<Upstream expiration time>"
 *     },
 *     "token": "<Newly issued token for the current request>"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that there is no binding of the matching type. Synchronous calls to the upstream may fail and return 503 IdentityProviderProvisioningUnavailable. Keep the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling.
 * 400 LimitExceeded.ScimCredential: A maximum of two credentials are allowed. Delete one before you can continue to create. 400 InvalidParameter: Reception is not enabled or the shared pool is unavailable. Do not retry quota errors as system failures.
 * ## Call relationships and usage boundaries
 * After creation, securely save the token that is returned only once and configure it in the external provisioning system. Existing tokens remain valid. Only DeleteIdentityProviderSCIMCredential revokes the specified credential. Do not automatically retry when the response is lost. Call ListIdentityProviderSCIMCredentials to check first. This operation does not provide automatic rotation or scaling.
 *
 * @param request CreateIdentityProviderSCIMCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderSCIMCredentialResponse
 */
CreateIdentityProviderSCIMCredentialResponse Client::createIdentityProviderSCIMCredentialWithOptions(const string &workspaceId, const CreateIdentityProviderSCIMCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIdentityProviderSCIMCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/scim-provisioning/credentials")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentityProviderSCIMCredentialResponse>();
}

/**
 * @summary Issues a SCIM credential explicitly and returns the plaintext token only for the current call. A maximum of two credentials are allowed in the same pool. This operation does not automatically revoke old credentials or enable AC user synchronization.
 *
 * @description ## Features and prerequisites
 * Issues a new credential explicitly. This requires an available shared pool and the AgentIdentity SCIM reception to be Enabled. This operation does not automatically enable reception. If it is not enabled, call prepare first. Returns the configuration, credential summary, and the current token. The limit of a maximum of two credentials is enforced by AgentIdentity. An existing available token does not prevent users from explicitly creating a second one. Old credentials are not automatically revoked, and no extended rotation process is provided.
 * The token is returned only once and cannot be retrieved again in subsequent list and query operations. Do not automatically retry the issuance. If the response is lost, check the list first to verify whether it has been created. Creating a credential does not enable AC syncEnabled, start a full user import, or switch SAML logon. Deleting an old token should be performed explicitly after the user confirms the actual usage of the external provisioning system.
 * ## Request and examples
 * POST /workspaces/{workspaceId}/scim-provisioning/credentials
 * Call conventions: Call the operation in the region of the target workspace, using an AK/STS identity that has permissions for the identity source resources of the corresponding workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameter content of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not log the key. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * POST /workspaces/ws-example/scim-provisioning/credentials
 * No business request body.
 * ```
 * ## Response example
 * ```json
 * {
 *   "data": {
 *     "configuration": {
 *       "status": "Enabled",
 *       "baseUrl": "https://example.com/scim/v2"
 *     },
 *     "credential": {
 *       "credentialId": "credential-example",
 *       "status": "Enabled",
 *       "expireTime": "<Upstream expiration time>"
 *     },
 *     "token": "<Newly issued token for the current request>"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that there is no binding of the matching type. Synchronous calls to the upstream may fail and return 503 IdentityProviderProvisioningUnavailable. Keep the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling.
 * 400 LimitExceeded.ScimCredential: A maximum of two credentials are allowed. Delete one before you can continue to create. 400 InvalidParameter: Reception is not enabled or the shared pool is unavailable. Do not retry quota errors as system failures.
 * ## Call relationships and usage boundaries
 * After creation, securely save the token that is returned only once and configure it in the external provisioning system. Existing tokens remain valid. Only DeleteIdentityProviderSCIMCredential revokes the specified credential. Do not automatically retry when the response is lost. Call ListIdentityProviderSCIMCredentials to check first. This operation does not provide automatic rotation or scaling.
 *
 * @param request CreateIdentityProviderSCIMCredentialRequest
 * @return CreateIdentityProviderSCIMCredentialResponse
 */
CreateIdentityProviderSCIMCredentialResponse Client::createIdentityProviderSCIMCredential(const string &workspaceId, const CreateIdentityProviderSCIMCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIdentityProviderSCIMCredentialWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Initiates a manual synchronization of an identity provider.
 *
 * @description Initiates a one-time user synchronization based on the saved scope without saving the configuration or requiring syncEnabled=true. Prerequisites: the identity provider is in the READY or SYNC_FAILED state, a user pool exists, and no other pending identity provider operations are in progress. The returned taskId only indicates that the request is accepted. Call GetIdentityProviderSyncJob to poll the status until it reaches SUCCESS, FAILED, or CANCELED. If the task fails, check the failureReason. The workspace user quota still applies, and previously synchronized users are not automatically deleted if the scope is reduced.
 * Authorization information: RAM action agentcore:CreateIdentityProviderSyncJob, access level Write, resource ARN: acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource is required for authorization.
 * Idempotency and retry: This operation does not provide a ClientToken parameter for conditional idempotency. Repeated submissions do not guarantee the same task is returned. If an operation is already in progress, an operation conflict is returned. Submitting again after the task ends creates a new synchronization task. If a submission times out, query the identity provider status first to avoid blindly resubmitting the request.
 * Calling this API is free of charge, and operation records support ActionTrail auditing.
 * Initial selective synchronization process: CreateIdentityProvider (syncOnBind=false, it is recommended to keep syncEnabled=false initially) → GetIdentityProvider and wait for READY → ListIdentityProviderDepartments to select departments → UpdateIdentityProvider to save syncScope and wait for READY → CreateIdentityProviderSyncJob → GetIdentityProviderSyncJob to query the terminal state. If incremental synchronization is required, configure callbacks and event subscriptions, and then update syncEnabled=true.
 * Response example:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "data": {
 *     "taskId": "12345678-1234-4234-8234-123456789abc",
 *     "status": "PENDING"
 *   }
 * }
 * ```
 *
 * @param request CreateIdentityProviderSyncJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderSyncJobResponse
 */
CreateIdentityProviderSyncJobResponse Client::createIdentityProviderSyncJobWithOptions(const string &workspaceId, const string &identityProviderType, const CreateIdentityProviderSyncJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIdentityProviderSyncJob"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType) , "/sync-jobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentityProviderSyncJobResponse>();
}

/**
 * @summary Initiates a manual synchronization of an identity provider.
 *
 * @description Initiates a one-time user synchronization based on the saved scope without saving the configuration or requiring syncEnabled=true. Prerequisites: the identity provider is in the READY or SYNC_FAILED state, a user pool exists, and no other pending identity provider operations are in progress. The returned taskId only indicates that the request is accepted. Call GetIdentityProviderSyncJob to poll the status until it reaches SUCCESS, FAILED, or CANCELED. If the task fails, check the failureReason. The workspace user quota still applies, and previously synchronized users are not automatically deleted if the scope is reduced.
 * Authorization information: RAM action agentcore:CreateIdentityProviderSyncJob, access level Write, resource ARN: acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource is required for authorization.
 * Idempotency and retry: This operation does not provide a ClientToken parameter for conditional idempotency. Repeated submissions do not guarantee the same task is returned. If an operation is already in progress, an operation conflict is returned. Submitting again after the task ends creates a new synchronization task. If a submission times out, query the identity provider status first to avoid blindly resubmitting the request.
 * Calling this API is free of charge, and operation records support ActionTrail auditing.
 * Initial selective synchronization process: CreateIdentityProvider (syncOnBind=false, it is recommended to keep syncEnabled=false initially) → GetIdentityProvider and wait for READY → ListIdentityProviderDepartments to select departments → UpdateIdentityProvider to save syncScope and wait for READY → CreateIdentityProviderSyncJob → GetIdentityProviderSyncJob to query the terminal state. If incremental synchronization is required, configure callbacks and event subscriptions, and then update syncEnabled=true.
 * Response example:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "data": {
 *     "taskId": "12345678-1234-4234-8234-123456789abc",
 *     "status": "PENDING"
 *   }
 * }
 * ```
 *
 * @param request CreateIdentityProviderSyncJobRequest
 * @return CreateIdentityProviderSyncJobResponse
 */
CreateIdentityProviderSyncJobResponse Client::createIdentityProviderSyncJob(const string &workspaceId, const string &identityProviderType, const CreateIdentityProviderSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIdentityProviderSyncJobWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Creates an image cache.
 *
 * @description Creates or reuses an image cache in the current workspace based on the image source and tag. Both public and private images uniformly reuse the workspace\\"s source image pull authorization and resource roles. The resource manager parses the tag during the transfer node and performs image replication based on the parsed summary. The digest is empty before parsing is complete. For regular tags, the saved summary is reused after parsing. For the latest tag, it is parsed again when registered after reaching the desired state, and duplicate registrations in progress reuse the node. The logical imageId remains stable. accessInternet and accessVpc only determine the source reading and transfer for the current request and do not modify the agent network. An HTTP 200 response returns an acceptance snapshot of PENDING, READY, or FAILED, which does not indicate that the creation is complete. ClientToken does not guarantee to deduplicate requests or recover the original result. If the result is unconfirmed, query the query cache status first before deciding whether to recommit.
 *
 * @param tmpReq CreateImageCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageCacheResponse
 */
CreateImageCacheResponse Client::createImageCacheWithOptions(const CreateImageCacheRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateImageCacheShrinkRequest request = CreateImageCacheShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateImageCache"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/image-caches")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageCacheResponse>();
}

/**
 * @summary Creates an image cache.
 *
 * @description Creates or reuses an image cache in the current workspace based on the image source and tag. Both public and private images uniformly reuse the workspace\\"s source image pull authorization and resource roles. The resource manager parses the tag during the transfer node and performs image replication based on the parsed summary. The digest is empty before parsing is complete. For regular tags, the saved summary is reused after parsing. For the latest tag, it is parsed again when registered after reaching the desired state, and duplicate registrations in progress reuse the node. The logical imageId remains stable. accessInternet and accessVpc only determine the source reading and transfer for the current request and do not modify the agent network. An HTTP 200 response returns an acceptance snapshot of PENDING, READY, or FAILED, which does not indicate that the creation is complete. ClientToken does not guarantee to deduplicate requests or recover the original result. If the result is unconfirmed, query the query cache status first before deciding whether to recommit.
 *
 * @param request CreateImageCacheRequest
 * @return CreateImageCacheResponse
 */
CreateImageCacheResponse Client::createImageCache(const CreateImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createImageCacheWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a managed agent in a specified workspace.
 *
 * @param tmpReq CreateManagedAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateManagedAgentResponse
 */
CreateManagedAgentResponse Client::createManagedAgentWithOptions(const string &workspaceId, const CreateManagedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateManagedAgentShrinkRequest request = CreateManagedAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateManagedAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateManagedAgentResponse>();
}

/**
 * @summary Creates a managed agent in a specified workspace.
 *
 * @param request CreateManagedAgentRequest
 * @return CreateManagedAgentResponse
 */
CreateManagedAgentResponse Client::createManagedAgent(const string &workspaceId, const CreateManagedAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createManagedAgentWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
 *
 * @description ## Operation description
 * Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
 *
 * @param tmpReq CreateMcpRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcpResponse
 */
CreateMcpResponse Client::createMcpWithOptions(const string &workspaceId, const CreateMcpRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMcpShrinkRequest request = CreateMcpShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMcp"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcpResponse>();
}

/**
 * @summary Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
 *
 * @description ## Operation description
 * Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
 *
 * @param request CreateMcpRequest
 * @return CreateMcpResponse
 */
CreateMcpResponse Client::createMcp(const string &workspaceId, const CreateMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMcpWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a long-term memory store in a specified workspace.
 *
 * @description Creates a long-term memory store in a specified workspace.
 *
 * @param tmpReq CreateMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemoryStoreResponse
 */
CreateMemoryStoreResponse Client::createMemoryStoreWithOptions(const string &workspaceId, const CreateMemoryStoreRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMemoryStoreShrinkRequest request = CreateMemoryStoreShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMemoryStore"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemoryStoreResponse>();
}

/**
 * @summary Creates a long-term memory store in a specified workspace.
 *
 * @description Creates a long-term memory store in a specified workspace.
 *
 * @param request CreateMemoryStoreRequest
 * @return CreateMemoryStoreResponse
 */
CreateMemoryStoreResponse Client::createMemoryStore(const string &workspaceId, const CreateMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemoryStoreWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a model configuration for model creation under a model connection in a specified workspace.
 *
 * @param tmpReq CreateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const string &workspaceId, const CreateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateModelShrinkRequest request = CreateModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary Creates a model configuration for model creation under a model connection in a specified workspace.
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const string &workspaceId, const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a model connection in a specified workspace and configures the upstream model service endpoint, invoke protocol, and access credentials to support model creation.
 *
 * @param tmpReq CreateModelConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelConnectionResponse
 */
CreateModelConnectionResponse Client::createModelConnectionWithOptions(const string &workspaceId, const CreateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateModelConnectionShrinkRequest request = CreateModelConnectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModelConnection"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/model-connections")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelConnectionResponse>();
}

/**
 * @summary Creates a model connection in a specified workspace and configures the upstream model service endpoint, invoke protocol, and access credentials to support model creation.
 *
 * @param request CreateModelConnectionRequest
 * @return CreateModelConnectionResponse
 */
CreateModelConnectionResponse Client::createModelConnection(const string &workspaceId, const CreateModelConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelConnectionWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
 *
 * @description ## Operation description
 * Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
 *
 * @param tmpReq CreateSkillDraftRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillDraftResponse
 */
CreateSkillDraftResponse Client::createSkillDraftWithOptions(const string &workspaceId, const CreateSkillDraftRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSkillDraftShrinkRequest request = CreateSkillDraftShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSkillDraft"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillDraftResponse>();
}

/**
 * @summary Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
 *
 * @description ## Operation description
 * Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
 *
 * @param request CreateSkillDraftRequest
 * @return CreateSkillDraftResponse
 */
CreateSkillDraftResponse Client::createSkillDraft(const string &workspaceId, const CreateSkillDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSkillDraftWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a team in a specified workspace and configures user members and agent members at the same time. Exactly one user member must have the ADMIN role, and agent members can only have the LEADER or WORKER role.
 *
 * @param tmpReq CreateTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeamWithOptions(const string &workspaceId, const CreateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTeamShrinkRequest request = CreateTeamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTeam"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/teams")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTeamResponse>();
}

/**
 * @summary Creates a team in a specified workspace and configures user members and agent members at the same time. Exactly one user member must have the ADMIN role, and agent members can only have the LEADER or WORKER role.
 *
 * @param request CreateTeamRequest
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeam(const string &workspaceId, const CreateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTeamWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates a user in a specified workspace. The username must be unique within the workspace, can contain only lowercase letters, digits, and hyphens, and cannot use reserved names such as manager, admin, or names starting with worker-. If the password is not specified, the server generates an initial password and returns it in the initialPassword field of the response.
 *
 * @param tmpReq CreateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const string &workspaceId, const CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserShrinkRequest request = CreateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/users")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary Creates a user in a specified workspace. The username must be unique within the workspace, can contain only lowercase letters, digits, and hyphens, and cannot use reserved names such as manager, admin, or names starting with worker-. If the password is not specified, the server generates an initial password and returns it in the initialPassword field of the response.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const string &workspaceId, const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUserWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Creates an AgentCore workspace control plane record. The server completes the state transition from Initializing to Initialized within the same transaction.
 *
 * @description ## Request description\\nCreates an AgentCore workspace control plane record. The server completes the state transition from `Initializing` to `Initialized` within the same transaction. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
 *
 * @param tmpReq CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkspaceShrinkRequest request = CreateWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates an AgentCore workspace control plane record. The server completes the state transition from Initializing to Initialized within the same transaction.
 *
 * @description ## Request description\\nCreates an AgentCore workspace control plane record. The server completes the state transition from `Initializing` to `Initialized` within the same transaction. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Calls a specified model through a published model connection to verify whether the model call chain is available.
 *
 * @param tmpReq DebugModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugModelResponse
 */
DebugModelResponse Client::debugModelWithOptions(const string &workspaceId, const string &modelId, const DebugModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DebugModelShrinkRequest request = DebugModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DebugModel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models/" , Darabonba::Encode::Encoder::percentEncode(modelId) , "/actions/debug")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugModelResponse>();
}

/**
 * @summary Calls a specified model through a published model connection to verify whether the model call chain is available.
 *
 * @param request DebugModelRequest
 * @return DebugModelResponse
 */
DebugModelResponse Client::debugModel(const string &workspaceId, const string &modelId, const DebugModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return debugModelWithOptions(workspaceId, modelId, request, headers, runtime);
}

/**
 * @summary Deletes an IM channel of a specified agent.
 *
 * @description Deletes an IM channel of a specified agent.
 *
 * @param request DeleteAgentIMChannelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentIMChannelResponse
 */
DeleteAgentIMChannelResponse Client::deleteAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const DeleteAgentIMChannelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentIMChannel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/im-channels/" , Darabonba::Encode::Encoder::percentEncode(imChannelId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentIMChannelResponse>();
}

/**
 * @summary Deletes an IM channel of a specified agent.
 *
 * @description Deletes an IM channel of a specified agent.
 *
 * @param request DeleteAgentIMChannelRequest
 * @return DeleteAgentIMChannelResponse
 */
DeleteAgentIMChannelResponse Client::deleteAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const DeleteAgentIMChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentIMChannelWithOptions(workspaceId, agentId, imChannelId, request, headers, runtime);
}

/**
 * @summary Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
 *
 * @description ## Operation description
 * Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
 *
 * @param request DeleteAgentSpecRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentSpecResponse
 */
DeleteAgentSpecResponse Client::deleteAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const DeleteAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentSpec"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentSpecResponse>();
}

/**
 * @summary Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
 *
 * @description ## Operation description
 * Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
 *
 * @param request DeleteAgentSpecRequest
 * @return DeleteAgentSpecResponse
 */
DeleteAgentSpecResponse Client::deleteAgentSpec(const string &workspaceId, const string &agentSpecName, const DeleteAgentSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentSpecWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
 *
 * @description ## Request description
 * Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
 *
 * @param request DeleteAgentSpecVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentSpecVersionResponse
 */
DeleteAgentSpecVersionResponse Client::deleteAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const DeleteAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentSpecVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName) , "/draft")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentSpecVersionResponse>();
}

/**
 * @summary Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
 *
 * @description ## Request description
 * Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
 *
 * @param request DeleteAgentSpecVersionRequest
 * @return DeleteAgentSpecVersionResponse
 */
DeleteAgentSpecVersionResponse Client::deleteAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const DeleteAgentSpecVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentSpecVersionWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Deletes a credential in a specified workspace and deletes the ciphertext hosted in the credential service. After deletion, agents bound to the credential can no longer obtain the credential content.
 *
 * @description Deletes an access credential in a specified workspace. A credential cannot be deleted if it is still bound to an MCP service.
 *
 * @param request DeleteCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredentialWithOptions(const string &workspaceId, const string &credentialId, const DeleteCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCredentialResponse>();
}

/**
 * @summary Deletes a credential in a specified workspace and deletes the ciphertext hosted in the credential service. After deletion, agents bound to the credential can no longer obtain the credential content.
 *
 * @description Deletes an access credential in a specified workspace. A credential cannot be deleted if it is still bound to an MCP service.
 *
 * @param request DeleteCredentialRequest
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredential(const string &workspaceId, const string &credentialId, const DeleteCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCredentialWithOptions(workspaceId, credentialId, request, headers, runtime);
}

/**
 * @summary Deletes a custom agent from a specified workspace. A successful request indicates that the deletion is accepted. The runtime resources are subsequently cleaned up in the background.
 *
 * @description Before calling this operation, ensure that the workspace is writable. If the agent is still associated with a team, you must dissociate it from the team first.
 * Deletion is an asynchronous process. After the request is accepted, the associated invocation endpoints become unavailable, and the runtime resources are subsequently cleaned up. The status in the response is typically Deleting. If the agent is already in the deletion process, a subsequent request returns the current summary.
 * You can call GetCustomAgent to check the deletion progress. After the deletion is complete, a detail query returns a resource not found error.
 *
 * @param request DeleteCustomAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgentWithOptions(const string &workspaceId, const string &agentId, const DeleteCustomAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAgentResponse>();
}

/**
 * @summary Deletes a custom agent from a specified workspace. A successful request indicates that the deletion is accepted. The runtime resources are subsequently cleaned up in the background.
 *
 * @description Before calling this operation, ensure that the workspace is writable. If the agent is still associated with a team, you must dissociate it from the team first.
 * Deletion is an asynchronous process. After the request is accepted, the associated invocation endpoints become unavailable, and the runtime resources are subsequently cleaned up. The status in the response is typically Deleting. If the agent is already in the deletion process, a subsequent request returns the current summary.
 * You can call GetCustomAgent to check the deletion progress. After the deletion is complete, a detail query returns a resource not found error.
 *
 * @param request DeleteCustomAgentRequest
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgent(const string &workspaceId, const string &agentId, const DeleteCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCustomAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Deletes a specified external agent.
 *
 * @description Deletes a specified external agent.
 *
 * @param request DeleteExternalAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExternalAgentResponse
 */
DeleteExternalAgentResponse Client::deleteExternalAgentWithOptions(const string &workspaceId, const string &agentId, const DeleteExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExternalAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExternalAgentResponse>();
}

/**
 * @summary Deletes a specified external agent.
 *
 * @description Deletes a specified external agent.
 *
 * @param request DeleteExternalAgentRequest
 * @return DeleteExternalAgentResponse
 */
DeleteExternalAgentResponse Client::deleteExternalAgent(const string &workspaceId, const string &agentId, const DeleteExternalAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExternalAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Disconnects the identity source integration of a workspace. For CustomSSO, this operation clears the shared user pool and related SAML and SCIM resources. To disable only logon or synchronization, use the corresponding toggle operations.
 *
 * @description ## Features and prerequisites
 * This operation disconnects the integration as a whole, rather than disabling logon individually. Disconnecting CustomSSO clears the users imported from this identity source, the remote shared user pool and related resources, and the logon publishing configurations and bindings. Therefore, both SAML and SCIM are affected. This operation does not delete the enterprise applications created by users on external platforms such as Azure. The system checks the references between users and teams before disconnecting. If references exist, the disconnection is rejected.
 * After the request is accepted, the system returns DISCONNECTING. You can call GetIdentityProvider to query the status. The cleanup is complete only when the binding does not exist (IdentityProviderNotFound). The binding should also no longer appear in the list. DISCONNECT_FAILED indicates that partial cleanup may have occurred and the state cannot be restored to a brand new unconfigured state. You can retry based on the returned status. If the binding does not exist in the first place, the operation returns a placeholder result indicating no binding without creating new resources. An ongoing disconnection task may return the current binding. Do not use this operation as a substitute for setting loginEnabled=false, syncEnabled=false, or deleting a single token.
 * ## Requests and examples
 * DELETE /workspaces/{workspaceId}/identity-providers/{identityProviderType}
 * Calling conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API operation, not the extra body wrapper of the backend direct connection API operation. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * DELETE /workspaces/ws-example/identity-providers/CustomSSO
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "status": "DISCONNECTING"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to the upstream may fail and return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling.
 * 409 IdentityProvider.Disconnect.Conflict: Users of this identity source still belong to a team. Remove the references first. 409 IdentityProviderOperationConflict: The current status does not allow disconnection. 404 IdentityProviderNotFound: An external binding exists but the type does not match. Asynchronous failures may result in partial cleanup. You cannot claim completion based solely on the first response.
 * ## Call relationships and usage boundaries
 * If you only need to disable a specific capability: To disable SAML logon, set loginEnabled=false in UpdateIdentityProvider. To disable SCIM, set syncEnabled=false in UpdateIdentityProviderSCIM. To revoke a single token, use DeleteIdentityProviderSCIMCredential. Call this operation only when you need to disconnect the integration as a whole.
 *
 * @param request DeleteIdentityProviderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const DeleteIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIdentityProvider"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIdentityProviderResponse>();
}

/**
 * @summary Disconnects the identity source integration of a workspace. For CustomSSO, this operation clears the shared user pool and related SAML and SCIM resources. To disable only logon or synchronization, use the corresponding toggle operations.
 *
 * @description ## Features and prerequisites
 * This operation disconnects the integration as a whole, rather than disabling logon individually. Disconnecting CustomSSO clears the users imported from this identity source, the remote shared user pool and related resources, and the logon publishing configurations and bindings. Therefore, both SAML and SCIM are affected. This operation does not delete the enterprise applications created by users on external platforms such as Azure. The system checks the references between users and teams before disconnecting. If references exist, the disconnection is rejected.
 * After the request is accepted, the system returns DISCONNECTING. You can call GetIdentityProvider to query the status. The cleanup is complete only when the binding does not exist (IdentityProviderNotFound). The binding should also no longer appear in the list. DISCONNECT_FAILED indicates that partial cleanup may have occurred and the state cannot be restored to a brand new unconfigured state. You can retry based on the returned status. If the binding does not exist in the first place, the operation returns a placeholder result indicating no binding without creating new resources. An ongoing disconnection task may return the current binding. Do not use this operation as a substitute for setting loginEnabled=false, syncEnabled=false, or deleting a single token.
 * ## Requests and examples
 * DELETE /workspaces/{workspaceId}/identity-providers/{identityProviderType}
 * Calling conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API operation, not the extra body wrapper of the backend direct connection API operation. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * DELETE /workspaces/ws-example/identity-providers/CustomSSO
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "status": "DISCONNECTING"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to the upstream may fail and return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling.
 * 409 IdentityProvider.Disconnect.Conflict: Users of this identity source still belong to a team. Remove the references first. 409 IdentityProviderOperationConflict: The current status does not allow disconnection. 404 IdentityProviderNotFound: An external binding exists but the type does not match. Asynchronous failures may result in partial cleanup. You cannot claim completion based solely on the first response.
 * ## Call relationships and usage boundaries
 * If you only need to disable a specific capability: To disable SAML logon, set loginEnabled=false in UpdateIdentityProvider. To disable SCIM, set syncEnabled=false in UpdateIdentityProviderSCIM. To revoke a single token, use DeleteIdentityProviderSCIMCredential. Call this operation only when you need to disconnect the integration as a whole.
 *
 * @param request DeleteIdentityProviderRequest
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProvider(const string &workspaceId, const string &identityProviderType, const DeleteIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIdentityProviderWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Revokes a specified SCIM credential. This operation does not automatically create a new token, modify the AC synchronization switch, or disable SAML logon.
 *
 * @description ## Features and prerequisites
 * Revokes a specified credential. The credentialId parameter is required and cannot be empty. You can obtain it from the credential list. The shared pool must be available, but SAML configuration or SCIM accept being Enabled is not required. After deletion, external provisioning requests that use this token become invalid. This operation only affects the selected credential. It does not automatically disable the accept feature, does not automatically disable AC syncEnabled, and does not affect other credentials or SAML.
 * Even if you delete the last credential, the synchronization switch is not automatically written back and a new token is not reissued. Disable external provisioning or replace the token in use as needed. A successful response returns a common response without business data. Refresh the list to confirm the deletion. The result for unknown or deleted IDs is determined by the upstream service. A unified 404 or unconditional idempotent success is not guaranteed.
 * ## Request and examples
 * DELETE /workspaces/{workspaceId}/scim-provisioning/credentials/{credentialId}
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey (AK) or Security Token Service (STS) identity that has permissions on the identity provider resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API, not the extra body wrapper of the backend direct-connect API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * DELETE /workspaces/ws-example/scim-provisioning/credentials/credential-example
 * ```
 * ## Response example
 * ```json
 * {
 *   "success": true,
 *   "httpStatusCode": 200
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. If a synchronous call to the upstream service fails, a 503 IdentityProviderProvisioningUnavailable error may be returned. Keep the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow common error handling.
 * 400 InvalidParameter: The credentialId parameter is empty or the shared pool is not available. 404 IdentityProviderNotFound indicates that the binding does not exist, which does not mean that all unknown credential IDs return this code. Handle other deletion errors based on upstream results. If the operation fails, refresh the list to check. No automatic creation of a replacement token is performed.
 * ## Call relationships and usage boundaries
 * Call ListIdentityProviderSCIMCredentials to obtain the credentialId and then delete the specified credential. If the external provisioning system still uses this token, subsequent provisioning may result in authentication failures. Therefore, confirm the actual usage first. After deletion, no automatic creation of a new credential is performed, and the AC synchronization switch or SAML logon is not disabled.
 *
 * @param request DeleteIdentityProviderSCIMCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdentityProviderSCIMCredentialResponse
 */
DeleteIdentityProviderSCIMCredentialResponse Client::deleteIdentityProviderSCIMCredentialWithOptions(const string &workspaceId, const string &credentialId, const DeleteIdentityProviderSCIMCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIdentityProviderSCIMCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/scim-provisioning/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIdentityProviderSCIMCredentialResponse>();
}

/**
 * @summary Revokes a specified SCIM credential. This operation does not automatically create a new token, modify the AC synchronization switch, or disable SAML logon.
 *
 * @description ## Features and prerequisites
 * Revokes a specified credential. The credentialId parameter is required and cannot be empty. You can obtain it from the credential list. The shared pool must be available, but SAML configuration or SCIM accept being Enabled is not required. After deletion, external provisioning requests that use this token become invalid. This operation only affects the selected credential. It does not automatically disable the accept feature, does not automatically disable AC syncEnabled, and does not affect other credentials or SAML.
 * Even if you delete the last credential, the synchronization switch is not automatically written back and a new token is not reissued. Disable external provisioning or replace the token in use as needed. A successful response returns a common response without business data. Refresh the list to confirm the deletion. The result for unknown or deleted IDs is determined by the upstream service. A unified 404 or unconditional idempotent success is not guaranteed.
 * ## Request and examples
 * DELETE /workspaces/{workspaceId}/scim-provisioning/credentials/{credentialId}
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey (AK) or Security Token Service (STS) identity that has permissions on the identity provider resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API, not the extra body wrapper of the backend direct-connect API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * DELETE /workspaces/ws-example/scim-provisioning/credentials/credential-example
 * ```
 * ## Response example
 * ```json
 * {
 *   "success": true,
 *   "httpStatusCode": 200
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. If a synchronous call to the upstream service fails, a 503 IdentityProviderProvisioningUnavailable error may be returned. Keep the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow common error handling.
 * 400 InvalidParameter: The credentialId parameter is empty or the shared pool is not available. 404 IdentityProviderNotFound indicates that the binding does not exist, which does not mean that all unknown credential IDs return this code. Handle other deletion errors based on upstream results. If the operation fails, refresh the list to check. No automatic creation of a replacement token is performed.
 * ## Call relationships and usage boundaries
 * Call ListIdentityProviderSCIMCredentials to obtain the credentialId and then delete the specified credential. If the external provisioning system still uses this token, subsequent provisioning may result in authentication failures. Therefore, confirm the actual usage first. After deletion, no automatic creation of a new credential is performed, and the AC synchronization switch or SAML logon is not disabled.
 *
 * @param request DeleteIdentityProviderSCIMCredentialRequest
 * @return DeleteIdentityProviderSCIMCredentialResponse
 */
DeleteIdentityProviderSCIMCredentialResponse Client::deleteIdentityProviderSCIMCredential(const string &workspaceId, const string &credentialId, const DeleteIdentityProviderSCIMCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIdentityProviderSCIMCredentialWithOptions(workspaceId, credentialId, request, headers, runtime);
}

/**
 * @summary Deletes an image cache.
 *
 * @description Deletes the logical image cache of the current workspace. The deletion requires that no enabled agent configurations reference the cache and no active instances are using it. Concurrency is rechecked upon submission. Caches in the PENDING or FAILED state can still be deleted, and the backend handles the cleanup. An HTTP 200 response returns an imageId that matches the request. If deletionPending is true, the current workspace is still undergoing deletion, and a Get request returns DELETING until ImageCacheNotFound is explicitly returned. If false, the deletion is complete or the current workspace no longer exists. Usage by other workspaces does not block the deletion for the current workspace. The physical content is reclaimed only after all workspaces in the same region have removed their associations and no active instances are using it.
 *
 * @param request DeleteImageCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageCacheResponse
 */
DeleteImageCacheResponse Client::deleteImageCacheWithOptions(const string &imageId, const DeleteImageCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteImageCache"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/image-caches/" , Darabonba::Encode::Encoder::percentEncode(imageId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageCacheResponse>();
}

/**
 * @summary Deletes an image cache.
 *
 * @description Deletes the logical image cache of the current workspace. The deletion requires that no enabled agent configurations reference the cache and no active instances are using it. Concurrency is rechecked upon submission. Caches in the PENDING or FAILED state can still be deleted, and the backend handles the cleanup. An HTTP 200 response returns an imageId that matches the request. If deletionPending is true, the current workspace is still undergoing deletion, and a Get request returns DELETING until ImageCacheNotFound is explicitly returned. If false, the deletion is complete or the current workspace no longer exists. Usage by other workspaces does not block the deletion for the current workspace. The physical content is reclaimed only after all workspaces in the same region have removed their associations and no active instances are using it.
 *
 * @param request DeleteImageCacheRequest
 * @return DeleteImageCacheResponse
 */
DeleteImageCacheResponse Client::deleteImageCache(const string &imageId, const DeleteImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteImageCacheWithOptions(imageId, request, headers, runtime);
}

/**
 * @summary Deletes a specified managed agent.
 *
 * @param request DeleteManagedAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteManagedAgentResponse
 */
DeleteManagedAgentResponse Client::deleteManagedAgentWithOptions(const string &workspaceId, const string &agentId, const DeleteManagedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteManagedAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteManagedAgentResponse>();
}

/**
 * @summary Deletes a specified managed agent.
 *
 * @param request DeleteManagedAgentRequest
 * @return DeleteManagedAgentResponse
 */
DeleteManagedAgentResponse Client::deleteManagedAgent(const string &workspaceId, const string &agentId, const DeleteManagedAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteManagedAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
 *
 * @description ## Request description
 * Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
 *
 * @param request DeleteMcpRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcpResponse
 */
DeleteMcpResponse Client::deleteMcpWithOptions(const string &mcpServerId, const string &workspaceId, const DeleteMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMcp"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcpResponse>();
}

/**
 * @summary Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
 *
 * @description ## Request description
 * Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
 *
 * @param request DeleteMcpRequest
 * @return DeleteMcpResponse
 */
DeleteMcpResponse Client::deleteMcp(const string &mcpServerId, const string &workspaceId, const DeleteMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMcpWithOptions(mcpServerId, workspaceId, request, headers, runtime);
}

/**
 * @summary Deletes a long-term memory based on the memory ID.
 *
 * @description Deletes a long-term memory based on the memory ID.
 *
 * @param request DeleteMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemory"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryResponse>();
}

/**
 * @summary Deletes a long-term memory based on the memory ID.
 *
 * @description Deletes a long-term memory based on the memory ID.
 *
 * @param request DeleteMemoryRequest
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const DeleteMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryWithOptions(workspaceId, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Asynchronously deletes a MemoryStore and all long-term memory within it.
 *
 * @description Asynchronously deletes a MemoryStore and all long-term memory within it.
 *
 * @param request DeleteMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryStoreResponse
 */
DeleteMemoryStoreResponse Client::deleteMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const DeleteMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemoryStore"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryStoreResponse>();
}

/**
 * @summary Asynchronously deletes a MemoryStore and all long-term memory within it.
 *
 * @description Asynchronously deletes a MemoryStore and all long-term memory within it.
 *
 * @param request DeleteMemoryStoreRequest
 * @return DeleteMemoryStoreResponse
 */
DeleteMemoryStoreResponse Client::deleteMemoryStore(const string &workspaceId, const string &memoryStoreName, const DeleteMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryStoreWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Deletes a model from a specified workspace. Models that are currently in use cannot be deleted.
 *
 * @param request DeleteModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModelWithOptions(const string &workspaceId, const string &modelId, const DeleteModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models/" , Darabonba::Encode::Encoder::percentEncode(modelId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelResponse>();
}

/**
 * @summary Deletes a model from a specified workspace. Models that are currently in use cannot be deleted.
 *
 * @param request DeleteModelRequest
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const string &workspaceId, const string &modelId, const DeleteModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelWithOptions(workspaceId, modelId, request, headers, runtime);
}

/**
 * @summary Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
 *
 * @param request DeleteModelConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelConnectionResponse
 */
DeleteModelConnectionResponse Client::deleteModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const DeleteModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelConnection"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/model-connections/" , Darabonba::Encode::Encoder::percentEncode(connectionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelConnectionResponse>();
}

/**
 * @summary Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
 *
 * @param request DeleteModelConnectionRequest
 * @return DeleteModelConnectionResponse
 */
DeleteModelConnectionResponse Client::deleteModelConnection(const string &workspaceId, const string &connectionId, const DeleteModelConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelConnectionWithOptions(workspaceId, connectionId, request, headers, runtime);
}

/**
 * @summary Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
 *
 * @description ## Operation description
 * Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
 *
 * @param request DeleteSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkillWithOptions(const string &workspaceId, const string &skillName, const DeleteSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkill"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillResponse>();
}

/**
 * @summary Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
 *
 * @description ## Operation description
 * Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
 *
 * @param request DeleteSkillRequest
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkill(const string &workspaceId, const string &skillName, const DeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSkillWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Deletes the draft version currently being edited for a specified Skill.
 *
 * @description ## Operation description
 * Deletes the draft version currently being edited for a specified Skill.
 *
 * @param request DeleteSkillDraftRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillDraftResponse
 */
DeleteSkillDraftResponse Client::deleteSkillDraftWithOptions(const string &workspaceId, const string &skillName, const DeleteSkillDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkillDraft"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/draft")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillDraftResponse>();
}

/**
 * @summary Deletes the draft version currently being edited for a specified Skill.
 *
 * @description ## Operation description
 * Deletes the draft version currently being edited for a specified Skill.
 *
 * @param request DeleteSkillDraftRequest
 * @return DeleteSkillDraftResponse
 */
DeleteSkillDraftResponse Client::deleteSkillDraft(const string &workspaceId, const string &skillName, const DeleteSkillDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSkillDraftWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Deletes a team from a specified workspace. Deleting a team does not delete the users or agents within it. Only the membership associations are removed.
 *
 * @param request DeleteTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeamWithOptions(const string &workspaceId, const string &teamId, const DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTeam"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/teams/" , Darabonba::Encode::Encoder::percentEncode(teamId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTeamResponse>();
}

/**
 * @summary Deletes a team from a specified workspace. Deleting a team does not delete the users or agents within it. Only the membership associations are removed.
 *
 * @param request DeleteTeamRequest
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeam(const string &workspaceId, const string &teamId, const DeleteTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTeamWithOptions(workspaceId, teamId, request, headers, runtime);
}

/**
 * @summary Deletes a user from a specified workspace. A user cannot be deleted while the user is still a member of any team. Remove the user from all teams before deleting the user.
 *
 * @param request DeleteUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const DeleteUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(agentCoreUserId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary Deletes a user from a specified workspace. A user cannot be deleted while the user is still a member of any team. Remove the user from all teams before deleting the user.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const string &workspaceId, const string &agentCoreUserId, const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUserWithOptions(workspaceId, agentCoreUserId, request, headers, runtime);
}

/**
 * @summary Deletes the control plane record of a specified workspace. The server completes the state transition from Deleting to Deleted within the same transaction. The server processes repeated deletion requests for workspaces in the Deleting or Deleted state idempotently.
 *
 * @description ## Request description\\nDeletes the control plane record of a specified workspace. The server completes the state transition from `Deleting` to `Deleted` within the same transaction. The server processes repeated deletion requests for workspaces in the `Deleting` or `Deleted` state idempotently.\\n.
 *
 * @param request DeleteWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceId, const DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes the control plane record of a specified workspace. The server completes the state transition from Deleting to Deleted within the same transaction. The server processes repeated deletion requests for workspaces in the Deleting or Deleted state idempotently.
 *
 * @description ## Request description\\nDeletes the control plane record of a specified workspace. The server completes the state transition from `Deleting` to `Deleted` within the same transaction. The server processes repeated deletion requests for workspaces in the `Deleting` or `Deleted` state idempotently.\\n.
 *
 * @param request DeleteWorkspaceRequest
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceId, const DeleteWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Disables a QoderCLI Connector in a specified workspace. The Connector can be disabled only when no Agent is using it. After the Connector is disabled, the Connector and its Service Account Key configuration are removed.
 *
 * @description Disables a Connector in a specified workspace.
 *
 * @param request DisableConnectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableConnectorResponse
 */
DisableConnectorResponse Client::disableConnectorWithOptions(const string &workspaceId, const string &connectorName, const DisableConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableConnector"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/connectors/" , Darabonba::Encode::Encoder::percentEncode(connectorName) , "/actions/disable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableConnectorResponse>();
}

/**
 * @summary Disables a QoderCLI Connector in a specified workspace. The Connector can be disabled only when no Agent is using it. After the Connector is disabled, the Connector and its Service Account Key configuration are removed.
 *
 * @description Disables a Connector in a specified workspace.
 *
 * @param request DisableConnectorRequest
 * @return DisableConnectorResponse
 */
DisableConnectorResponse Client::disableConnector(const string &workspaceId, const string &connectorName, const DisableConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableConnectorWithOptions(workspaceId, connectorName, request, headers, runtime);
}

/**
 * @summary Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
 *
 * @description ## Request description
 * Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
 *
 * @param request DownloadAgentSpecViaOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadAgentSpecViaOssResponse
 */
DownloadAgentSpecViaOssResponse Client::downloadAgentSpecViaOssWithOptions(const string &workspaceId, const string &agentSpecName, const DownloadAgentSpecViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpecVersion()) {
    query["agentSpecVersion"] = request.getAgentSpecVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadAgentSpecViaOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName) , "/actions/download-via-oss")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadAgentSpecViaOssResponse>();
}

/**
 * @summary Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
 *
 * @description ## Request description
 * Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
 *
 * @param request DownloadAgentSpecViaOssRequest
 * @return DownloadAgentSpecViaOssResponse
 */
DownloadAgentSpecViaOssResponse Client::downloadAgentSpecViaOss(const string &workspaceId, const string &agentSpecName, const DownloadAgentSpecViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return downloadAgentSpecViaOssWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
 *
 * @description ## Operation description
 * Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
 *
 * @param request DownloadSkillVersionViaOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSkillVersionViaOssResponse
 */
DownloadSkillVersionViaOssResponse Client::downloadSkillVersionViaOssWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const DownloadSkillVersionViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSkillVersionViaOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(skillVersion) , "/actions/download-via-oss")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSkillVersionViaOssResponse>();
}

/**
 * @summary Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
 *
 * @description ## Operation description
 * Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
 *
 * @param request DownloadSkillVersionViaOssRequest
 * @return DownloadSkillVersionViaOssResponse
 */
DownloadSkillVersionViaOssResponse Client::downloadSkillVersionViaOss(const string &workspaceId, const string &skillName, const string &skillVersion, const DownloadSkillVersionViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return downloadSkillVersionViaOssWithOptions(workspaceId, skillName, skillVersion, request, headers, runtime);
}

/**
 * @summary Enables a QoderCLI Connector in a specified workspace. The request must include the site, API key, and at least one service account key. The service validates all account keys before saving the configuration.
 *
 * @description Enables a Connector in a specified workspace. Credential verification is required before the Connector can be enabled.
 *
 * @param tmpReq EnableConnectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableConnectorResponse
 */
EnableConnectorResponse Client::enableConnectorWithOptions(const string &workspaceId, const string &connectorName, const EnableConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EnableConnectorShrinkRequest request = EnableConnectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnableConnector"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/connectors/" , Darabonba::Encode::Encoder::percentEncode(connectorName) , "/actions/enable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableConnectorResponse>();
}

/**
 * @summary Enables a QoderCLI Connector in a specified workspace. The request must include the site, API key, and at least one service account key. The service validates all account keys before saving the configuration.
 *
 * @description Enables a Connector in a specified workspace. Credential verification is required before the Connector can be enabled.
 *
 * @param request EnableConnectorRequest
 * @return EnableConnectorResponse
 */
EnableConnectorResponse Client::enableConnector(const string &workspaceId, const string &connectorName, const EnableConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableConnectorWithOptions(workspaceId, connectorName, request, headers, runtime);
}

/**
 * @summary Retrieves the image preparation task by using the client token submitted when creating or explicitly updating an image. This operation only queries the task and does not create a dump. If the returned phase is SUCCEEDED, the target version is deployed successfully.
 *
 * @description Retrieves the task by using the original client token for creation or update when the response is lost. The backend parses the target agent and verifies permissions. A 404 error does not necessarily mean that the original submission was not accepted.
 *
 * @param request FindCustomAgentImagePreparationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindCustomAgentImagePreparationResponse
 */
FindCustomAgentImagePreparationResponse Client::findCustomAgentImagePreparationWithOptions(const string &workspaceId, const FindCustomAgentImagePreparationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindCustomAgentImagePreparation"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-image-preparations")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindCustomAgentImagePreparationResponse>();
}

/**
 * @summary Retrieves the image preparation task by using the client token submitted when creating or explicitly updating an image. This operation only queries the task and does not create a dump. If the returned phase is SUCCEEDED, the target version is deployed successfully.
 *
 * @description Retrieves the task by using the original client token for creation or update when the response is lost. The backend parses the target agent and verifies permissions. A 404 error does not necessarily mean that the original submission was not accepted.
 *
 * @param request FindCustomAgentImagePreparationRequest
 * @return FindCustomAgentImagePreparationResponse
 */
FindCustomAgentImagePreparationResponse Client::findCustomAgentImagePreparation(const string &workspaceId, const FindCustomAgentImagePreparationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return findCustomAgentImagePreparationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Skips the regular review process and forcibly publishes a specified Skill version.
 *
 * @description ## Operation description
 * Skips the regular review process and forcibly publishes a specified Skill version.
 *
 * @param tmpReq ForcePublishSkillVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForcePublishSkillVersionResponse
 */
ForcePublishSkillVersionResponse Client::forcePublishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const ForcePublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ForcePublishSkillVersionShrinkRequest request = ForcePublishSkillVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ForcePublishSkillVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(skillVersion) , "/actions/force-publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForcePublishSkillVersionResponse>();
}

/**
 * @summary Skips the regular review process and forcibly publishes a specified Skill version.
 *
 * @description ## Operation description
 * Skips the regular review process and forcibly publishes a specified Skill version.
 *
 * @param request ForcePublishSkillVersionRequest
 * @return ForcePublishSkillVersionResponse
 */
ForcePublishSkillVersionResponse Client::forcePublishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const ForcePublishSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return forcePublishSkillVersionWithOptions(workspaceId, skillName, skillVersion, request, headers, runtime);
}

/**
 * @summary Retrieves the download URL for the saved code package of an agent.
 *
 * @description Generates a time-limited, read-only download URL for the code package referenced by the currently saved agent configuration. This applies to code packages uploaded locally or imported from Object Storage Service (OSS). The operation uses workspaceId and agentId for locating and does not accept arbitrary bucket, object key, or historical version parameters. The current configuration must reference an available, fixed code package, and does not require waiting for a running instance to be ready. An error is returned if the code package does not exist, has changed, or is unreadable. The link is valid for up to 10 minutes and does not exceed the underlying credential expiration time. Call the operation again after it expires. The resourceVersionId indicates the saved configuration version corresponding to this download. The sample download link is redacted. Use the downloadUrl in the response.
 *
 * @param request GetAgentCodePackageDownloadUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentCodePackageDownloadUrlResponse
 */
GetAgentCodePackageDownloadUrlResponse Client::getAgentCodePackageDownloadUrlWithOptions(const string &workspaceId, const string &agentId, const GetAgentCodePackageDownloadUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentCodePackageDownloadUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/code-package/download-url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentCodePackageDownloadUrlResponse>();
}

/**
 * @summary Retrieves the download URL for the saved code package of an agent.
 *
 * @description Generates a time-limited, read-only download URL for the code package referenced by the currently saved agent configuration. This applies to code packages uploaded locally or imported from Object Storage Service (OSS). The operation uses workspaceId and agentId for locating and does not accept arbitrary bucket, object key, or historical version parameters. The current configuration must reference an available, fixed code package, and does not require waiting for a running instance to be ready. An error is returned if the code package does not exist, has changed, or is unreadable. The link is valid for up to 10 minutes and does not exceed the underlying credential expiration time. Call the operation again after it expires. The resourceVersionId indicates the saved configuration version corresponding to this download. The sample download link is redacted. Use the downloadUrl in the response.
 *
 * @param request GetAgentCodePackageDownloadUrlRequest
 * @return GetAgentCodePackageDownloadUrlResponse
 */
GetAgentCodePackageDownloadUrlResponse Client::getAgentCodePackageDownloadUrl(const string &workspaceId, const string &agentId, const GetAgentCodePackageDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentCodePackageDownloadUrlWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Retrieves the OSS RAM authorization URL for the agent code package.
 *
 * @description Generates a RAM authorization URL for the resource role of the current workspace for a specified source bucket. The client cannot specify or override the role. After you open the authorizeUrl and confirm the authorization, call VerifyAgentCodePackageOssRamAuthorization to check the policy binding, and call ValidateAgentCodePackageFromOss to check specific objects.
 * This authorization reuses the OSSObjectRestoreCustom template, which includes permissions to read, write, and delete objects, and is not a read-only authorization. Retrieving the URL itself does not complete the authorization, transfer the code package, or modify the default OSS binding of the workspace. Existing authorizations for the same role and bucket can be reused. The example URL is provided to demonstrate the format. Use the actual authorization URL returned by the API operation.
 *
 * @param request GetAgentCodePackageOssRamAuthorizeUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentCodePackageOssRamAuthorizeUrlResponse
 */
GetAgentCodePackageOssRamAuthorizeUrlResponse Client::getAgentCodePackageOssRamAuthorizeUrlWithOptions(const string &workspaceId, const GetAgentCodePackageOssRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssBucketName()) {
    query["ossBucketName"] = request.getOssBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentCodePackageOssRamAuthorizeUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-code-packages/oss/authorize")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentCodePackageOssRamAuthorizeUrlResponse>();
}

/**
 * @summary Retrieves the OSS RAM authorization URL for the agent code package.
 *
 * @description Generates a RAM authorization URL for the resource role of the current workspace for a specified source bucket. The client cannot specify or override the role. After you open the authorizeUrl and confirm the authorization, call VerifyAgentCodePackageOssRamAuthorization to check the policy binding, and call ValidateAgentCodePackageFromOss to check specific objects.
 * This authorization reuses the OSSObjectRestoreCustom template, which includes permissions to read, write, and delete objects, and is not a read-only authorization. Retrieving the URL itself does not complete the authorization, transfer the code package, or modify the default OSS binding of the workspace. Existing authorizations for the same role and bucket can be reused. The example URL is provided to demonstrate the format. Use the actual authorization URL returned by the API operation.
 *
 * @param request GetAgentCodePackageOssRamAuthorizeUrlRequest
 * @return GetAgentCodePackageOssRamAuthorizeUrlResponse
 */
GetAgentCodePackageOssRamAuthorizeUrlResponse Client::getAgentCodePackageOssRamAuthorizeUrl(const string &workspaceId, const GetAgentCodePackageOssRamAuthorizeUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentCodePackageOssRamAuthorizeUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves the upload URL for an agent code package.
 *
 * @description Retrieves a time-limited upload URL for a code package without uploading the file content. The fileName must be a ZIP or TAR.GZ filename without directories. The format must match the file extension. The fileSize is in bytes, with valid values ranging from 1 to 500,000,000.
 * Use the uploadMethod, uploadUrl, and headers from the response to upload the file directly. After the upload is complete, pass the sourceUri to the artifact.code.sourceUri parameter of CreateCustomAgent or UpdateCustomAgent. The actual object and size are verified and a fixed copy is saved during creation or update. The upload URL is valid for up to 10 minutes and does not exceed the expiration time of the underlying temporary credentials. Retrieve a new URL after it expires. The example URL is desensitized and cannot be used for actual uploads. Use the original URL and request headers from this response.
 *
 * @param tmpReq GetAgentCodePackageUploadUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentCodePackageUploadUrlResponse
 */
GetAgentCodePackageUploadUrlResponse Client::getAgentCodePackageUploadUrlWithOptions(const string &workspaceId, const GetAgentCodePackageUploadUrlRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentCodePackageUploadUrlShrinkRequest request = GetAgentCodePackageUploadUrlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAgentCodePackageUploadUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-code-packages/upload-url")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentCodePackageUploadUrlResponse>();
}

/**
 * @summary Retrieves the upload URL for an agent code package.
 *
 * @description Retrieves a time-limited upload URL for a code package without uploading the file content. The fileName must be a ZIP or TAR.GZ filename without directories. The format must match the file extension. The fileSize is in bytes, with valid values ranging from 1 to 500,000,000.
 * Use the uploadMethod, uploadUrl, and headers from the response to upload the file directly. After the upload is complete, pass the sourceUri to the artifact.code.sourceUri parameter of CreateCustomAgent or UpdateCustomAgent. The actual object and size are verified and a fixed copy is saved during creation or update. The upload URL is valid for up to 10 minutes and does not exceed the expiration time of the underlying temporary credentials. Retrieve a new URL after it expires. The example URL is desensitized and cannot be used for actual uploads. Use the original URL and request headers from this response.
 *
 * @param request GetAgentCodePackageUploadUrlRequest
 * @return GetAgentCodePackageUploadUrlResponse
 */
GetAgentCodePackageUploadUrlResponse Client::getAgentCodePackageUploadUrl(const string &workspaceId, const GetAgentCodePackageUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentCodePackageUploadUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified agent IM channel.
 *
 * @description Queries the details of a specified agent IM channel.
 *
 * @param request GetAgentIMChannelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentIMChannelResponse
 */
GetAgentIMChannelResponse Client::getAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const GetAgentIMChannelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentIMChannel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/im-channels/" , Darabonba::Encode::Encoder::percentEncode(imChannelId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentIMChannelResponse>();
}

/**
 * @summary Queries the details of a specified agent IM channel.
 *
 * @description Queries the details of a specified agent IM channel.
 *
 * @param request GetAgentIMChannelRequest
 * @return GetAgentIMChannelResponse
 */
GetAgentIMChannelResponse Client::getAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const GetAgentIMChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentIMChannelWithOptions(workspaceId, agentId, imChannelId, request, headers, runtime);
}

/**
 * @summary Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
 *
 * @description ## Request description
 * Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
 *
 * @param request GetAgentSpecRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSpecResponse
 */
GetAgentSpecResponse Client::getAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const GetAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSpec"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSpecResponse>();
}

/**
 * @summary Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
 *
 * @description ## Request description
 * Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
 *
 * @param request GetAgentSpecRequest
 * @return GetAgentSpecResponse
 */
GetAgentSpecResponse Client::getAgentSpec(const string &workspaceId, const string &agentSpecName, const GetAgentSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentSpecWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
 *
 * @description ## Request description
 * Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
 *
 * @param request GetAgentSpecImportFileUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSpecImportFileUrlResponse
 */
GetAgentSpecImportFileUrlResponse Client::getAgentSpecImportFileUrlWithOptions(const string &workspaceId, const GetAgentSpecImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContentType()) {
    query["contentType"] = request.getContentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSpecImportFileUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-spec-actions/get-import-file-url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSpecImportFileUrlResponse>();
}

/**
 * @summary Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
 *
 * @description ## Request description
 * Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
 *
 * @param request GetAgentSpecImportFileUrlRequest
 * @return GetAgentSpecImportFileUrlResponse
 */
GetAgentSpecImportFileUrlResponse Client::getAgentSpecImportFileUrl(const string &workspaceId, const GetAgentSpecImportFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentSpecImportFileUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
 *
 * @description ## Operation description
 * Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
 *
 * @param request GetAgentSpecLatestRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSpecLatestResponse
 */
GetAgentSpecLatestResponse Client::getAgentSpecLatestWithOptions(const string &workspaceId, const string &agentSpecName, const GetAgentSpecLatestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSpecLatest"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName) , "/latest")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSpecLatestResponse>();
}

/**
 * @summary Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
 *
 * @description ## Operation description
 * Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
 *
 * @param request GetAgentSpecLatestRequest
 * @return GetAgentSpecLatestResponse
 */
GetAgentSpecLatestResponse Client::getAgentSpecLatest(const string &workspaceId, const string &agentSpecName, const GetAgentSpecLatestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentSpecLatestWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
 *
 * @description ## Request description
 * Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
 *
 * @param request GetAgentSpecVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSpecVersionResponse
 */
GetAgentSpecVersionResponse Client::getAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const GetAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentSpecVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(agentSpecVersion))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSpecVersionResponse>();
}

/**
 * @summary Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
 *
 * @description ## Request description
 * Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
 *
 * @param request GetAgentSpecVersionRequest
 * @return GetAgentSpecVersionResponse
 */
GetAgentSpecVersionResponse Client::getAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const GetAgentSpecVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentSpecVersionWithOptions(workspaceId, agentSpecName, agentSpecVersion, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified credential and returns the list of agents bound to the credential. The credential content is returned in a masked format.
 *
 * @description Queries the details of a single credential. Sensitive fields are not returned.
 *
 * @param request GetCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredentialWithOptions(const string &workspaceId, const string &credentialId, const GetCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialResponse>();
}

/**
 * @summary Queries the details of a specified credential and returns the list of agents bound to the credential. The credential content is returned in a masked format.
 *
 * @description Queries the details of a single credential. Sensitive fields are not returned.
 *
 * @param request GetCredentialRequest
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredential(const string &workspaceId, const string &credentialId, const GetCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCredentialWithOptions(workspaceId, credentialId, request, headers, runtime);
}

/**
 * @summary Queries the details of a custom agent in a specified workspace, including the deployment configuration, the execute status of the latest configuration version, and the instance status statistics of running instances.
 *
 * @description After creating or updating a custom agent, you can poll this operation to query the execution result of the latest configuration version. latestVersionStatus corresponds to latestSpecVersion. latestExecutionError indicates the cause of the pending or failed state for the version. If retryable is true, you can query again later.
 * The returned configuration is the most recently submitted one and may not have taken effect yet. Verify the deployment and running status by combining latestVersionStatus, the overall agent status, and the sandboxPhaseCounts running instance statistics.
 * If the queried custom agent does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
 *
 * @param request GetCustomAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgentWithOptions(const string &workspaceId, const string &agentId, const GetCustomAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomAgentResponse>();
}

/**
 * @summary Queries the details of a custom agent in a specified workspace, including the deployment configuration, the execute status of the latest configuration version, and the instance status statistics of running instances.
 *
 * @description After creating or updating a custom agent, you can poll this operation to query the execution result of the latest configuration version. latestVersionStatus corresponds to latestSpecVersion. latestExecutionError indicates the cause of the pending or failed state for the version. If retryable is true, you can query again later.
 * The returned configuration is the most recently submitted one and may not have taken effect yet. Verify the deployment and running status by combining latestVersionStatus, the overall agent status, and the sandboxPhaseCounts running instance statistics.
 * If the queried custom agent does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
 *
 * @param request GetCustomAgentRequest
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgent(const string &workspaceId, const string &agentId, const GetCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Queries the image preparation and deployment phases by using the preparation ID. Regular polling does not create a dump task. Only phase=SUCCEEDED indicates that the deployment of the target version is successful. The health of the previous instance does not indicate the success of the current deployment.
 *
 * @description Queries the preparation and deployment phases of the current submission. The health of the previous instance does not indicate the success of the current deployment. Only phase=SUCCEEDED indicates completion. Regular polling does not create a dump task. A network interruption does not indicate task failure.
 *
 * @param request GetCustomAgentImagePreparationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomAgentImagePreparationResponse
 */
GetCustomAgentImagePreparationResponse Client::getCustomAgentImagePreparationWithOptions(const string &workspaceId, const string &preparationId, const GetCustomAgentImagePreparationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomAgentImagePreparation"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-image-preparations/" , Darabonba::Encode::Encoder::percentEncode(preparationId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomAgentImagePreparationResponse>();
}

/**
 * @summary Queries the image preparation and deployment phases by using the preparation ID. Regular polling does not create a dump task. Only phase=SUCCEEDED indicates that the deployment of the target version is successful. The health of the previous instance does not indicate the success of the current deployment.
 *
 * @description Queries the preparation and deployment phases of the current submission. The health of the previous instance does not indicate the success of the current deployment. Only phase=SUCCEEDED indicates completion. Regular polling does not create a dump task. A network interruption does not indicate task failure.
 *
 * @param request GetCustomAgentImagePreparationRequest
 * @return GetCustomAgentImagePreparationResponse
 */
GetCustomAgentImagePreparationResponse Client::getCustomAgentImagePreparation(const string &workspaceId, const string &preparationId, const GetCustomAgentImagePreparationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomAgentImagePreparationWithOptions(workspaceId, preparationId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified external agent.
 *
 * @description Queries the details of a specified external agent.
 *
 * @param request GetExternalAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExternalAgentResponse
 */
GetExternalAgentResponse Client::getExternalAgentWithOptions(const string &workspaceId, const string &agentId, const GetExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExternalAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExternalAgentResponse>();
}

/**
 * @summary Queries the details of a specified external agent.
 *
 * @description Queries the details of a specified external agent.
 *
 * @param request GetExternalAgentRequest
 * @return GetExternalAgentResponse
 */
GetExternalAgentResponse Client::getExternalAgent(const string &workspaceId, const string &agentId, const GetExternalAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExternalAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Queries the available access network types for a specified external agent.
 *
 * @description Queries the available access network types for a specified external agent.
 *
 * @param request GetExternalAgentBootstrapOptionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExternalAgentBootstrapOptionsResponse
 */
GetExternalAgentBootstrapOptionsResponse Client::getExternalAgentBootstrapOptionsWithOptions(const string &workspaceId, const string &agentId, const GetExternalAgentBootstrapOptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExternalAgentBootstrapOptions"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/bootstrap/options")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExternalAgentBootstrapOptionsResponse>();
}

/**
 * @summary Queries the available access network types for a specified external agent.
 *
 * @description Queries the available access network types for a specified external agent.
 *
 * @param request GetExternalAgentBootstrapOptionsRequest
 * @return GetExternalAgentBootstrapOptionsResponse
 */
GetExternalAgentBootstrapOptionsResponse Client::getExternalAgentBootstrapOptions(const string &workspaceId, const string &agentId, const GetExternalAgentBootstrapOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExternalAgentBootstrapOptionsWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Queries the binding and expected configuration of a specified identity provider. If CustomSSO is configured with SAML, this operation reads back the actual upstream SSO configuration. The SCIM status is queried through a separate API operation.
 *
 * @description ## Features and prerequisites
 * Reads existing bindings by type. CustomSSO returns the saved protocol, normalized saml, expected loginEnabled, syncEnabled, and shared binding status. If SAML is not configured, saml and configuration may not be returned. If saml is configured, the system additionally queries AgentIdentity, and configuration represents the actual SSO configuration. The saml field is the data source for the edit form. The status switch for configuration is Enabled or Disabled. If the upstream query fails, an error is returned. The failure cannot be treated as an unconfigured state.
 * Only this operation reads back the actual SAML configuration. List and write operations do not guarantee that configuration is returned. WAITING_CONFIGURATION indicates that user pool initialization is complete but the SAML metadata has not been saved. In this case, you can read the service provider (SP) information, fill in the configuration, or disconnect the integration. Do not lock the form and wait for the READY state. UPDATING and UPDATE_FAILED describe logon configuration tasks, not SCIM tasks. The vendor callback URL for CustomSSO is empty. Use GetIdentityProviderSCIM.operationStatus to query SCIM operation results.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/identity-providers/{identityProviderType}
 * Call conventions: Call the operation in the region of the target workspace by using an AccessKey pair or STS credential that has permissions on the identity provider resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API operation, not the extra body wrapper of the backend direct-connection API operation. The response example shows only the business data. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a persistent connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/identity-providers/CustomSSO
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "status": "WAITING_CONFIGURATION",
 *     "loginEnabled": false,
 *     "syncEnabled": false
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. A synchronous call to the upstream service may fail and return 503 IdentityProviderProvisioningUnavailable. Keep the request ID for troubleshooting and do not interpret a read failure as an unconfigured state. Actual authentication and workspace non-existence errors follow common error handling procedures.
 * 404 IdentityProviderNotFound: No binding exists, or the input type is inconsistent with the current binding. If SAML is already configured, an upstream readback failure does not degrade to a successful empty configuration.
 * ## Call relationships and usage boundaries
 * SAML configuration completion and logon enabling are independent operations. protocol=SAML and the presence of the saml field indicate that the logon configuration has been submitted, and loginEnabled indicates the expected logon switch. Check the effective status based on the actual SSO status in configuration. SCIM uses an independent query operation. Do not use status=READY of this operation as the basis for successful SCIM synchronization. Currently, OIDC and JIT configurations or JIT status fields are not provided.
 *
 * @param request GetIdentityProviderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const GetIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProvider"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderResponse>();
}

/**
 * @summary Queries the binding and expected configuration of a specified identity provider. If CustomSSO is configured with SAML, this operation reads back the actual upstream SSO configuration. The SCIM status is queried through a separate API operation.
 *
 * @description ## Features and prerequisites
 * Reads existing bindings by type. CustomSSO returns the saved protocol, normalized saml, expected loginEnabled, syncEnabled, and shared binding status. If SAML is not configured, saml and configuration may not be returned. If saml is configured, the system additionally queries AgentIdentity, and configuration represents the actual SSO configuration. The saml field is the data source for the edit form. The status switch for configuration is Enabled or Disabled. If the upstream query fails, an error is returned. The failure cannot be treated as an unconfigured state.
 * Only this operation reads back the actual SAML configuration. List and write operations do not guarantee that configuration is returned. WAITING_CONFIGURATION indicates that user pool initialization is complete but the SAML metadata has not been saved. In this case, you can read the service provider (SP) information, fill in the configuration, or disconnect the integration. Do not lock the form and wait for the READY state. UPDATING and UPDATE_FAILED describe logon configuration tasks, not SCIM tasks. The vendor callback URL for CustomSSO is empty. Use GetIdentityProviderSCIM.operationStatus to query SCIM operation results.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/identity-providers/{identityProviderType}
 * Call conventions: Call the operation in the region of the target workspace by using an AccessKey pair or STS credential that has permissions on the identity provider resources of the workspace. In the following examples, ws-example, URLs, certificates, and tokens are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API operation, not the extra body wrapper of the backend direct-connection API operation. The response example shows only the business data. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a persistent connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/identity-providers/CustomSSO
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "status": "WAITING_CONFIGURATION",
 *     "loginEnabled": false,
 *     "syncEnabled": false
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. A synchronous call to the upstream service may fail and return 503 IdentityProviderProvisioningUnavailable. Keep the request ID for troubleshooting and do not interpret a read failure as an unconfigured state. Actual authentication and workspace non-existence errors follow common error handling procedures.
 * 404 IdentityProviderNotFound: No binding exists, or the input type is inconsistent with the current binding. If SAML is already configured, an upstream readback failure does not degrade to a successful empty configuration.
 * ## Call relationships and usage boundaries
 * SAML configuration completion and logon enabling are independent operations. protocol=SAML and the presence of the saml field indicate that the logon configuration has been submitted, and loginEnabled indicates the expected logon switch. Check the effective status based on the actual SSO status in configuration. SCIM uses an independent query operation. Do not use status=READY of this operation as the basis for successful SCIM synchronization. Currently, OIDC and JIT configurations or JIT status fields are not provided.
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const string &workspaceId, const string &identityProviderType, const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIdentityProviderWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Queries the actual SCIM receiving configuration, the expected AC synchronization switch, and the status of the most recent independent SCIM task. Prior SAML configuration is not required.
 *
 * @description ## Features and prerequisites
 * The shared CustomSSO user pool must be created and not in the process of overall unbinding or unbinding failure. Prior SAML configuration is not required. SAML updates or update failures do not block the query. configuration.status and baseUrl are retrieved from AgentIdentity. syncEnabled is the expected synchronization switch for AC. operationStatus represents the most recent independent SCIM switch and the initial full import task when enabled. The presence of a URL does not indicate that external provisioning is complete or that AC synchronization is enabled.
 * operationStatus valid values:
 * - PENDING: Waiting.
 * - RUNNING: Executing.
 * - PAUSED: Paused.
 * - SUCCESS: Succeeded.
 * - FAILED: Failed.
 * - CANCELED: Canceled.
 * If there are no historical tasks, it returns null or is not returned. You can poll when the status is PENDING or RUNNING. Stop polling when a terminal state is reached. You can manually refresh when the status is PAUSED. This operation does not provide the taskId or failure details, and does not indicate credential issuance, external provisioning connection tests, or continuous incremental synchronization health. The URL, credentials, and historical task records may be retained after the feature is disabled.
 * status represents the independent SCIM configuration status:
 * - UNCONFIGURED: Preparation is not complete.
 * - WAITING_CONFIGURATION: The receiving end is enabled, the HTTPS URL is valid, and a valid token exists, waiting for external configuration and enablement confirmation.
 * - UPDATING: The enablement or disablement task is executing.
 * - READY: Synchronization is enabled and the current enablement task succeeded, and the receiving end, URL, and credentials are still available.
 * - DISABLED: Disabled and configuration is retained.
 * - UPDATE_FAILED: The operation failed, was paused, was canceled, or the configuration and credentials are unavailable after enablement.
 * The original facts of configuration, syncEnabled, and operationStatus are retained. The SAML or OIDC binding status is not used to determine the SCIM status. READY does not prove that Matrix execution is complete, the external connection test passed, or continuous incremental synchronization is healthy.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/scim-provisioning
 * Call conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has the permissions on the identity source resources of the workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example only shows the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/scim-provisioning
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "status": "READY",
 *     "configuration": {
 *       "status": "Enabled",
 *       "baseUrl": "https://example.com/scim/v2"
 *     },
 *     "syncEnabled": true,
 *     "operationStatus": "SUCCESS"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that there is no binding of the matching type. Synchronous calls to upstream services that fail may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 400 InvalidParameter: The shared user pool is unavailable, being unbound, or failed to unbind. If there is no binding, 404 IdentityProviderNotFound is returned. Upstream read failures must retain the error and cannot be mapped to Disabled, unconfigured, or synchronization succeeded.
 * ## Call relationships and usage boundaries
 * SCIM configuration sequence: After preparing the shared pool, call PrepareIdentityProviderSCIM and configure the returned baseUrl and newly issued token to the provisioning system of the external IdP. After completing the external connection test, call UpdateIdentityProviderSCIM to enable synchronization, and then call this operation to query operationStatus. SUCCESS only indicates that the most recent SCIM task is complete, and does not represent continuous incremental synchronization health or the success of the external provisioning connection test.
 *
 * @param request GetIdentityProviderSCIMRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderSCIMResponse
 */
GetIdentityProviderSCIMResponse Client::getIdentityProviderSCIMWithOptions(const string &workspaceId, const GetIdentityProviderSCIMRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderSCIM"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/scim-provisioning")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderSCIMResponse>();
}

/**
 * @summary Queries the actual SCIM receiving configuration, the expected AC synchronization switch, and the status of the most recent independent SCIM task. Prior SAML configuration is not required.
 *
 * @description ## Features and prerequisites
 * The shared CustomSSO user pool must be created and not in the process of overall unbinding or unbinding failure. Prior SAML configuration is not required. SAML updates or update failures do not block the query. configuration.status and baseUrl are retrieved from AgentIdentity. syncEnabled is the expected synchronization switch for AC. operationStatus represents the most recent independent SCIM switch and the initial full import task when enabled. The presence of a URL does not indicate that external provisioning is complete or that AC synchronization is enabled.
 * operationStatus valid values:
 * - PENDING: Waiting.
 * - RUNNING: Executing.
 * - PAUSED: Paused.
 * - SUCCESS: Succeeded.
 * - FAILED: Failed.
 * - CANCELED: Canceled.
 * If there are no historical tasks, it returns null or is not returned. You can poll when the status is PENDING or RUNNING. Stop polling when a terminal state is reached. You can manually refresh when the status is PAUSED. This operation does not provide the taskId or failure details, and does not indicate credential issuance, external provisioning connection tests, or continuous incremental synchronization health. The URL, credentials, and historical task records may be retained after the feature is disabled.
 * status represents the independent SCIM configuration status:
 * - UNCONFIGURED: Preparation is not complete.
 * - WAITING_CONFIGURATION: The receiving end is enabled, the HTTPS URL is valid, and a valid token exists, waiting for external configuration and enablement confirmation.
 * - UPDATING: The enablement or disablement task is executing.
 * - READY: Synchronization is enabled and the current enablement task succeeded, and the receiving end, URL, and credentials are still available.
 * - DISABLED: Disabled and configuration is retained.
 * - UPDATE_FAILED: The operation failed, was paused, was canceled, or the configuration and credentials are unavailable after enablement.
 * The original facts of configuration, syncEnabled, and operationStatus are retained. The SAML or OIDC binding status is not used to determine the SCIM status. READY does not prove that Matrix execution is complete, the external connection test passed, or continuous incremental synchronization is healthy.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/scim-provisioning
 * Call conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has the permissions on the identity source resources of the workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example only shows the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/scim-provisioning
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "status": "READY",
 *     "configuration": {
 *       "status": "Enabled",
 *       "baseUrl": "https://example.com/scim/v2"
 *     },
 *     "syncEnabled": true,
 *     "operationStatus": "SUCCESS"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that there is no binding of the matching type. Synchronous calls to upstream services that fail may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 400 InvalidParameter: The shared user pool is unavailable, being unbound, or failed to unbind. If there is no binding, 404 IdentityProviderNotFound is returned. Upstream read failures must retain the error and cannot be mapped to Disabled, unconfigured, or synchronization succeeded.
 * ## Call relationships and usage boundaries
 * SCIM configuration sequence: After preparing the shared pool, call PrepareIdentityProviderSCIM and configure the returned baseUrl and newly issued token to the provisioning system of the external IdP. After completing the external connection test, call UpdateIdentityProviderSCIM to enable synchronization, and then call this operation to query operationStatus. SUCCESS only indicates that the most recent SCIM task is complete, and does not represent continuous incremental synchronization health or the success of the external provisioning connection test.
 *
 * @param request GetIdentityProviderSCIMRequest
 * @return GetIdentityProviderSCIMResponse
 */
GetIdentityProviderSCIMResponse Client::getIdentityProviderSCIM(const string &workspaceId, const GetIdentityProviderSCIMRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIdentityProviderSCIMWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the SAML service provider (SP) information for CustomSSO, including the entity ID, ACS URL, and SP metadata XML, for configuring an external IdP.
 *
 * @description ## Features and prerequisites
 * An available CustomSSO shared user pool is required. The identityProviderType must be CustomSSO. The protocol parameter is required and only supports the exact value SAML. Uploading the IdP metadata in advance is not required. This operation returns the entityId, acsUrl, and metadataXml of the SP for configuring an external IdP. These values are not the logon URL or IdP entity ID of the external IdP. You cannot submit the SP XML as the IdP XML to UpdateIdentityProvider.
 * This operation is read-only. It does not enable logon, enable SCIM, create credentials, or perform logon connection tests. You cannot read the information when the shared pool is being initialized, being unbound, or has failed to unbind.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/identity-providers/{identityProviderType}/service-provider
 * Call conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. The ws-example, URLs, certificates, and tokens in the following examples are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a persistent connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/identity-providers/CustomSSO/service-provider?protocol=SAML
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "protocol": "SAML",
 *     "entityId": "<SP entity ID>",
 *     "acsUrl": "https://example.com/saml/acs",
 *     "metadataXml": "<SP metadata XML>"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to upstream services that fail may return 503 IdentityProviderProvisioningUnavailable. Keep the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow common error handling.
 * 400 InvalidParameter: identityProviderType or protocol is not supported. 404 IdentityProviderNotFound: No CustomSSO binding exists. 409 IdentityProviderOperationConflict: The user pool is not ready, is being unbound, or has failed to unbind.
 * ## Call relationships and usage boundaries
 * SAML configuration sequence: Call CreateIdentityProvider to initialize the CustomSSO shared pool and wait for GetIdentityProvider to return READY. Call this operation to obtain the SP information and configure it in the external IdP. Then, submit the external IdP metadata XML or complete manual configuration to UpdateIdentityProvider. After saving, enable loginEnabled separately as needed. Querying the SP information does not complete the external IdP configuration or verify logon.
 *
 * @param request GetIdentityProviderServiceProviderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderServiceProviderResponse
 */
GetIdentityProviderServiceProviderResponse Client::getIdentityProviderServiceProviderWithOptions(const string &workspaceId, const string &identityProviderType, const GetIdentityProviderServiceProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProtocol()) {
    query["protocol"] = request.getProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderServiceProvider"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType) , "/service-provider")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderServiceProviderResponse>();
}

/**
 * @summary Queries the SAML service provider (SP) information for CustomSSO, including the entity ID, ACS URL, and SP metadata XML, for configuring an external IdP.
 *
 * @description ## Features and prerequisites
 * An available CustomSSO shared user pool is required. The identityProviderType must be CustomSSO. The protocol parameter is required and only supports the exact value SAML. Uploading the IdP metadata in advance is not required. This operation returns the entityId, acsUrl, and metadataXml of the SP for configuring an external IdP. These values are not the logon URL or IdP entity ID of the external IdP. You cannot submit the SP XML as the IdP XML to UpdateIdentityProvider.
 * This operation is read-only. It does not enable logon, enable SCIM, create credentials, or perform logon connection tests. You cannot read the information when the shared pool is being initialized, being unbound, or has failed to unbind.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/identity-providers/{identityProviderType}/service-provider
 * Call conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. The ws-example, URLs, certificates, and tokens in the following examples are placeholder values and must be replaced with actual values. The request body example shows the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Keep the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a persistent connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/identity-providers/CustomSSO/service-provider?protocol=SAML
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": {
 *     "protocol": "SAML",
 *     "entityId": "<SP entity ID>",
 *     "acsUrl": "https://example.com/saml/acs",
 *     "metadataXml": "<SP metadata XML>"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to upstream services that fail may return 503 IdentityProviderProvisioningUnavailable. Keep the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow common error handling.
 * 400 InvalidParameter: identityProviderType or protocol is not supported. 404 IdentityProviderNotFound: No CustomSSO binding exists. 409 IdentityProviderOperationConflict: The user pool is not ready, is being unbound, or has failed to unbind.
 * ## Call relationships and usage boundaries
 * SAML configuration sequence: Call CreateIdentityProvider to initialize the CustomSSO shared pool and wait for GetIdentityProvider to return READY. Call this operation to obtain the SP information and configure it in the external IdP. Then, submit the external IdP metadata XML or complete manual configuration to UpdateIdentityProvider. After saving, enable loginEnabled separately as needed. Querying the SP information does not complete the external IdP configuration or verify logon.
 *
 * @param request GetIdentityProviderServiceProviderRequest
 * @return GetIdentityProviderServiceProviderResponse
 */
GetIdentityProviderServiceProviderResponse Client::getIdentityProviderServiceProvider(const string &workspaceId, const string &identityProviderType, const GetIdentityProviderServiceProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIdentityProviderServiceProviderWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Queries an identity provider synchronization task.
 *
 * @description Queries the status, current step, number of processed users, and failure cause of a manual synchronization task by using the local taskId of AgentCore. The taskId must be obtained from CreateIdentityProviderSyncJob in the same workspace and identity provider. It is not the synchronizationJobId of AgentIdentity. Poll the task until the status is SUCCESS, FAILED, or CANCELED. The PENDING, RUNNING, and PAUSED statuses do not indicate completion. The syncedUserCount includes updated existing users and does not equal the number of newly added users or the progress percentage.
 * Authorization information: The RAM operation is agentcore:GetIdentityProviderSyncJob, the access level is Read, and the resource ARN is acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource is a required authorization resource.
 * Idempotence and retry: This operation is read-only and can be repeatedly queried.
 * Calling this API operation is free of charge, and operation records support ActionTrail auditing.
 * Response example:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "data": {
 *     "taskId": "12345678-1234-4234-8234-123456789abc",
 *     "status": "SUCCESS",
 *     "currentStep": "SYNC",
 *     "synchronizationJobId": "syncjob_0123456789abcdef0123456789abcdef",
 *     "syncedUserCount": 12
 *   }
 * }
 * ```
 *
 * @param request GetIdentityProviderSyncJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderSyncJobResponse
 */
GetIdentityProviderSyncJobResponse Client::getIdentityProviderSyncJobWithOptions(const string &workspaceId, const string &identityProviderType, const string &taskId, const GetIdentityProviderSyncJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderSyncJob"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType) , "/sync-jobs/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderSyncJobResponse>();
}

/**
 * @summary Queries an identity provider synchronization task.
 *
 * @description Queries the status, current step, number of processed users, and failure cause of a manual synchronization task by using the local taskId of AgentCore. The taskId must be obtained from CreateIdentityProviderSyncJob in the same workspace and identity provider. It is not the synchronizationJobId of AgentIdentity. Poll the task until the status is SUCCESS, FAILED, or CANCELED. The PENDING, RUNNING, and PAUSED statuses do not indicate completion. The syncedUserCount includes updated existing users and does not equal the number of newly added users or the progress percentage.
 * Authorization information: The RAM operation is agentcore:GetIdentityProviderSyncJob, the access level is Read, and the resource ARN is acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource is a required authorization resource.
 * Idempotence and retry: This operation is read-only and can be repeatedly queried.
 * Calling this API operation is free of charge, and operation records support ActionTrail auditing.
 * Response example:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "data": {
 *     "taskId": "12345678-1234-4234-8234-123456789abc",
 *     "status": "SUCCESS",
 *     "currentStep": "SYNC",
 *     "synchronizationJobId": "syncjob_0123456789abcdef0123456789abcdef",
 *     "syncedUserCount": 12
 *   }
 * }
 * ```
 *
 * @param request GetIdentityProviderSyncJobRequest
 * @return GetIdentityProviderSyncJobResponse
 */
GetIdentityProviderSyncJobResponse Client::getIdentityProviderSyncJob(const string &workspaceId, const string &identityProviderType, const string &taskId, const GetIdentityProviderSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIdentityProviderSyncJobWithOptions(workspaceId, identityProviderType, taskId, request, headers, runtime);
}

/**
 * @summary Queries the synchronization scope of an identity provider.
 *
 * @description Queries the saved synchronization scope, the validity of selected departments, and the estimated user count downstream of the identity provider. This operation is not used for real-time estimation of unsaved selections. AllAuthorized indicates the address book scope authorized for the application, which is not equivalent to the entire enterprise organization. An empty selectedDepartments array does not prove that the organization has no sub-departments. The estimation can be used only when estimateStatus is Ready and a count is returned. A missing count does not indicate 0.
 * Authorization information: RAM operation agentcore:GetIdentityProviderSyncScope, access level Read, resource ARN: acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource is a required authorization resource.
 * Idempotence and retry: This operation is read-only and can be queried repeatedly.
 * Calling this API operation is free of charge. Operation records support ActionTrail auditing.
 * Sample response:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "data": {
 *     "syncScope": {
 *       "mode": "SelectedDepartments",
 *       "departmentIds": [
 *         "10001"
 *       ]
 *     },
 *     "selectedDepartments": [
 *       {
 *         "id": "10001",
 *         "name": "R&D Department",
 *         "exists": true
 *       }
 *     ],
 *     "estimateStatus": "Ready",
 *     "expandedDepartmentCount": 2,
 *     "estimatedUserCount": 12
 *   }
 * }
 * ```
 *
 * @param request GetIdentityProviderSyncScopeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderSyncScopeResponse
 */
GetIdentityProviderSyncScopeResponse Client::getIdentityProviderSyncScopeWithOptions(const string &workspaceId, const string &identityProviderType, const GetIdentityProviderSyncScopeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProviderSyncScope"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType) , "/sync-scope")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderSyncScopeResponse>();
}

/**
 * @summary Queries the synchronization scope of an identity provider.
 *
 * @description Queries the saved synchronization scope, the validity of selected departments, and the estimated user count downstream of the identity provider. This operation is not used for real-time estimation of unsaved selections. AllAuthorized indicates the address book scope authorized for the application, which is not equivalent to the entire enterprise organization. An empty selectedDepartments array does not prove that the organization has no sub-departments. The estimation can be used only when estimateStatus is Ready and a count is returned. A missing count does not indicate 0.
 * Authorization information: RAM operation agentcore:GetIdentityProviderSyncScope, access level Read, resource ARN: acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource is a required authorization resource.
 * Idempotence and retry: This operation is read-only and can be queried repeatedly.
 * Calling this API operation is free of charge. Operation records support ActionTrail auditing.
 * Sample response:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "data": {
 *     "syncScope": {
 *       "mode": "SelectedDepartments",
 *       "departmentIds": [
 *         "10001"
 *       ]
 *     },
 *     "selectedDepartments": [
 *       {
 *         "id": "10001",
 *         "name": "R&D Department",
 *         "exists": true
 *       }
 *     ],
 *     "estimateStatus": "Ready",
 *     "expandedDepartmentCount": 2,
 *     "estimatedUserCount": 12
 *   }
 * }
 * ```
 *
 * @param request GetIdentityProviderSyncScopeRequest
 * @return GetIdentityProviderSyncScopeResponse
 */
GetIdentityProviderSyncScopeResponse Client::getIdentityProviderSyncScope(const string &workspaceId, const string &identityProviderType, const GetIdentityProviderSyncScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIdentityProviderSyncScopeWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Queries the details of an image cache.
 *
 * @description Queries the details of the logical image cache in the current workspace. Returns the complete source, current digest, actual size, creation time, status, and secure error messages. AgentCount counts configuration references with the switch enabled. CanDelete verifies both configuration references and instance usage. If the switch is disabled, the count is 0, but deletion is still prohibited if old instances are not released. If the resource does not belong to the current workspace, resources with the same content from other workspaces are not returned.
 *
 * @param request GetImageCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageCacheResponse
 */
GetImageCacheResponse Client::getImageCacheWithOptions(const string &imageId, const GetImageCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageCache"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/image-caches/" , Darabonba::Encode::Encoder::percentEncode(imageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageCacheResponse>();
}

/**
 * @summary Queries the details of an image cache.
 *
 * @description Queries the details of the logical image cache in the current workspace. Returns the complete source, current digest, actual size, creation time, status, and secure error messages. AgentCount counts configuration references with the switch enabled. CanDelete verifies both configuration references and instance usage. If the switch is disabled, the count is 0, but deletion is still prohibited if old instances are not released. If the resource does not belong to the current workspace, resources with the same content from other workspaces are not returned.
 *
 * @param request GetImageCacheRequest
 * @return GetImageCacheResponse
 */
GetImageCacheResponse Client::getImageCache(const string &imageId, const GetImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getImageCacheWithOptions(imageId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified managed agent.
 *
 * @param request GetManagedAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagedAgentResponse
 */
GetManagedAgentResponse Client::getManagedAgentWithOptions(const string &workspaceId, const string &agentId, const GetManagedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetManagedAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManagedAgentResponse>();
}

/**
 * @summary Queries the details of a specified managed agent.
 *
 * @param request GetManagedAgentRequest
 * @return GetManagedAgentResponse
 */
GetManagedAgentResponse Client::getManagedAgent(const string &workspaceId, const string &agentId, const GetManagedAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getManagedAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
 *
 * @description ## Operation description
 * Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
 *
 * @param request GetMcpRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcpResponse
 */
GetMcpResponse Client::getMcpWithOptions(const string &workspaceId, const string &mcpServerId, const GetMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMcp"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcpResponse>();
}

/**
 * @summary Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
 *
 * @description ## Operation description
 * Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
 *
 * @param request GetMcpRequest
 * @return GetMcpResponse
 */
GetMcpResponse Client::getMcp(const string &workspaceId, const string &mcpServerId, const GetMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMcpWithOptions(workspaceId, mcpServerId, request, headers, runtime);
}

/**
 * @summary Queries the details of an MCP marketplace template.
 *
 * @description Returns the current template version and installation form schema.
 *
 * @param request GetMcpMarketItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcpMarketItemResponse
 */
GetMcpMarketItemResponse Client::getMcpMarketItemWithOptions(const string &workspaceId, const string &marketItemId, const GetMcpMarketItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMcpMarketItem"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-market/items/" , Darabonba::Encode::Encoder::percentEncode(marketItemId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcpMarketItemResponse>();
}

/**
 * @summary Queries the details of an MCP marketplace template.
 *
 * @description Returns the current template version and installation form schema.
 *
 * @param request GetMcpMarketItemRequest
 * @return GetMcpMarketItemResponse
 */
GetMcpMarketItemResponse Client::getMcpMarketItem(const string &workspaceId, const string &marketItemId, const GetMcpMarketItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMcpMarketItemWithOptions(workspaceId, marketItemId, request, headers, runtime);
}

/**
 * @summary Queries a long-term memory by memory ID.
 *
 * @description Queries a long-term memory by memory ID.
 *
 * @param request GetMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemory"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryResponse>();
}

/**
 * @summary Queries a long-term memory by memory ID.
 *
 * @description Queries a long-term memory by memory ID.
 *
 * @param request GetMemoryRequest
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const GetMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryWithOptions(workspaceId, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Queries the public information and current status of a MemoryStore in a specified workspace.
 *
 * @description Queries the public information and current status of a MemoryStore in a specified workspace.
 *
 * @param request GetMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryStoreResponse
 */
GetMemoryStoreResponse Client::getMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const GetMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemoryStore"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryStoreResponse>();
}

/**
 * @summary Queries the public information and current status of a MemoryStore in a specified workspace.
 *
 * @description Queries the public information and current status of a MemoryStore in a specified workspace.
 *
 * @param request GetMemoryStoreRequest
 * @return GetMemoryStoreResponse
 */
GetMemoryStoreResponse Client::getMemoryStore(const string &workspaceId, const string &memoryStoreName, const GetMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryStoreWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Queries the task ID returned by the asynchronous AddMemories operation.
 *
 * @description Queries the task ID returned by the asynchronous AddMemories operation.
 *
 * @param request GetMemoryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryTaskResponse
 */
GetMemoryTaskResponse Client::getMemoryTaskWithOptions(const string &workspaceId, const string &memoryStoreName, const string &taskId, const GetMemoryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemoryTask"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory-tasks/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryTaskResponse>();
}

/**
 * @summary Queries the task ID returned by the asynchronous AddMemories operation.
 *
 * @description Queries the task ID returned by the asynchronous AddMemories operation.
 *
 * @param request GetMemoryTaskRequest
 * @return GetMemoryTaskResponse
 */
GetMemoryTaskResponse Client::getMemoryTask(const string &workspaceId, const string &memoryStoreName, const string &taskId, const GetMemoryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryTaskWithOptions(workspaceId, memoryStoreName, taskId, request, headers, runtime);
}

/**
 * @summary Queries the detailed configuration and region of a model in a specified workspace.
 *
 * @param request GetModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelResponse
 */
GetModelResponse Client::getModelWithOptions(const string &workspaceId, const string &modelId, const GetModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models/" , Darabonba::Encode::Encoder::percentEncode(modelId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelResponse>();
}

/**
 * @summary Queries the detailed configuration and region of a model in a specified workspace.
 *
 * @param request GetModelRequest
 * @return GetModelResponse
 */
GetModelResponse Client::getModel(const string &workspaceId, const string &modelId, const GetModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelWithOptions(workspaceId, modelId, request, headers, runtime);
}

/**
 * @summary Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
 *
 * @param request GetModelConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelConnectionResponse
 */
GetModelConnectionResponse Client::getModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const GetModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelConnection"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/model-connections/" , Darabonba::Encode::Encoder::percentEncode(connectionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelConnectionResponse>();
}

/**
 * @summary Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
 *
 * @param request GetModelConnectionRequest
 * @return GetModelConnectionResponse
 */
GetModelConnectionResponse Client::getModelConnection(const string &workspaceId, const string &connectionId, const GetModelConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelConnectionWithOptions(workspaceId, connectionId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified service endpoint, including target routing, access URLs, authentication configuration, and current status.
 *
 * @description ## Operation description\\nQueries the details of a specified service endpoint. A service endpoint (ServiceEndpoint) provides a stable access URL for a specific agent version (AgentVersion) or workspace collaboration component. The response includes target routing, access URL list, authentication configuration, and current lifecycle status.\\n.
 *
 * @param request GetServiceEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceEndpointResponse
 */
GetServiceEndpointResponse Client::getServiceEndpointWithOptions(const string &workspaceId, const string &serviceEndpointId, const GetServiceEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceEndpoint"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/service-endpoints/" , Darabonba::Encode::Encoder::percentEncode(serviceEndpointId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceEndpointResponse>();
}

/**
 * @summary Queries the details of a specified service endpoint, including target routing, access URLs, authentication configuration, and current status.
 *
 * @description ## Operation description\\nQueries the details of a specified service endpoint. A service endpoint (ServiceEndpoint) provides a stable access URL for a specific agent version (AgentVersion) or workspace collaboration component. The response includes target routing, access URL list, authentication configuration, and current lifecycle status.\\n.
 *
 * @param request GetServiceEndpointRequest
 * @return GetServiceEndpointResponse
 */
GetServiceEndpointResponse Client::getServiceEndpoint(const string &workspaceId, const string &serviceEndpointId, const GetServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceEndpointWithOptions(workspaceId, serviceEndpointId, request, headers, runtime);
}

/**
 * @summary Queries the currently active API key and its invocation method for a service endpoint in a specified workspace.
 *
 * @description Queries the currently active API key for a specified service endpoint. The call succeeds only when API key authentication is enabled for the service endpoint and the gateway consumer and credentials are ready. The service reads the API key from the gateway in real time, and AgentCore does not persist the plaintext. Keep the returned API key secure and avoid logging it or exposing it in public configurations.
 *
 * @param request GetServiceEndpointApiKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceEndpointApiKeyResponse
 */
GetServiceEndpointApiKeyResponse Client::getServiceEndpointApiKeyWithOptions(const string &workspaceId, const string &serviceEndpointId, const GetServiceEndpointApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceEndpointApiKey"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/service-endpoints/" , Darabonba::Encode::Encoder::percentEncode(serviceEndpointId) , "/api-key/get")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceEndpointApiKeyResponse>();
}

/**
 * @summary Queries the currently active API key and its invocation method for a service endpoint in a specified workspace.
 *
 * @description Queries the currently active API key for a specified service endpoint. The call succeeds only when API key authentication is enabled for the service endpoint and the gateway consumer and credentials are ready. The service reads the API key from the gateway in real time, and AgentCore does not persist the plaintext. Keep the returned API key secure and avoid logging it or exposing it in public configurations.
 *
 * @param request GetServiceEndpointApiKeyRequest
 * @return GetServiceEndpointApiKeyResponse
 */
GetServiceEndpointApiKeyResponse Client::getServiceEndpointApiKey(const string &workspaceId, const string &serviceEndpointId, const GetServiceEndpointApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceEndpointApiKeyWithOptions(workspaceId, serviceEndpointId, request, headers, runtime);
}

/**
 * @summary Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
 *
 * @description ## Operation description
 * Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
 *
 * @param request GetSkillDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillDetailResponse
 */
GetSkillDetailResponse Client::getSkillDetailWithOptions(const string &workspaceId, const string &skillName, const GetSkillDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillDetail"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillDetailResponse>();
}

/**
 * @summary Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
 *
 * @description ## Operation description
 * Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
 *
 * @param request GetSkillDetailRequest
 * @return GetSkillDetailResponse
 */
GetSkillDetailResponse Client::getSkillDetail(const string &workspaceId, const string &skillName, const GetSkillDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillDetailWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
 *
 * @description ## Request description
 * Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
 *
 * @param request GetSkillImportFileUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillImportFileUrlResponse
 */
GetSkillImportFileUrlResponse Client::getSkillImportFileUrlWithOptions(const string &workspaceId, const GetSkillImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContentType()) {
    query["contentType"] = request.getContentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillImportFileUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skill-actions/get-import-file-url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillImportFileUrlResponse>();
}

/**
 * @summary Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
 *
 * @description ## Request description
 * Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
 *
 * @param request GetSkillImportFileUrlRequest
 * @return GetSkillImportFileUrlResponse
 */
GetSkillImportFileUrlResponse Client::getSkillImportFileUrl(const string &workspaceId, const GetSkillImportFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillImportFileUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
 *
 * @description ## Operation description
 * Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
 *
 * @param request GetSkillVersionDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillVersionDetailResponse
 */
GetSkillVersionDetailResponse Client::getSkillVersionDetailWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const GetSkillVersionDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillVersionDetail"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(skillVersion))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillVersionDetailResponse>();
}

/**
 * @summary Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
 *
 * @description ## Operation description
 * Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
 *
 * @param request GetSkillVersionDetailRequest
 * @return GetSkillVersionDetailResponse
 */
GetSkillVersionDetailResponse Client::getSkillVersionDetail(const string &workspaceId, const string &skillName, const string &skillVersion, const GetSkillVersionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSkillVersionDetailWithOptions(workspaceId, skillName, skillVersion, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified team. The response includes the complete attributes and team roles of each user member and agent member in the team.
 *
 * @param request GetTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeamWithOptions(const string &workspaceId, const string &teamId, const GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTeam"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/teams/" , Darabonba::Encode::Encoder::percentEncode(teamId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTeamResponse>();
}

/**
 * @summary Queries the details of a specified team. The response includes the complete attributes and team roles of each user member and agent member in the team.
 *
 * @param request GetTeamRequest
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeam(const string &workspaceId, const string &teamId, const GetTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTeamWithOptions(workspaceId, teamId, request, headers, runtime);
}

/**
 * @summary Queries the details of a specific user in a specified workspace. Returns an error if the user does not exist.
 *
 * @param request GetUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(agentCoreUserId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary Queries the details of a specific user in a specified workspace. Returns an error if the user does not exist.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const string &workspaceId, const string &agentCoreUserId, const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserWithOptions(workspaceId, agentCoreUserId, request, headers, runtime);
}

/**
 * @summary Queries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.
 *
 * @description ## Request description\\nQueries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.\\n.
 *
 * @param request GetWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &workspaceId, const GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary Queries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.
 *
 * @description ## Request description\\nQueries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.\\n.
 *
 * @param request GetWorkspaceRequest
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &workspaceId, const GetWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the RAM authorization URL for ACR in a workspace.
 *
 * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is retained and only new permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. The acrInstanceId, namespace, and repository parameters are required. The region and account are derived from the workspace context. Returns the role resolved by the backend and the authorization URL for the target repository. It does not create ACR or agent execution versions, nor does it deliver runtime configurations. After authorization is complete, you can verify it and then create or update the agent without calling a separate Ensure operation.
 *
 * @param request GetWorkspaceAcrRamAuthorizeUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceAcrRamAuthorizeUrlResponse
 */
GetWorkspaceAcrRamAuthorizeUrlResponse Client::getWorkspaceAcrRamAuthorizeUrlWithOptions(const string &workspaceId, const GetWorkspaceAcrRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrInstanceId()) {
    query["acrInstanceId"] = request.getAcrInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasRepository()) {
    query["repository"] = request.getRepository();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspaceAcrRamAuthorizeUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/acr/authorize")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceAcrRamAuthorizeUrlResponse>();
}

/**
 * @summary Queries the RAM authorization URL for ACR in a workspace.
 *
 * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is retained and only new permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. The acrInstanceId, namespace, and repository parameters are required. The region and account are derived from the workspace context. Returns the role resolved by the backend and the authorization URL for the target repository. It does not create ACR or agent execution versions, nor does it deliver runtime configurations. After authorization is complete, you can verify it and then create or update the agent without calling a separate Ensure operation.
 *
 * @param request GetWorkspaceAcrRamAuthorizeUrlRequest
 * @return GetWorkspaceAcrRamAuthorizeUrlResponse
 */
GetWorkspaceAcrRamAuthorizeUrlResponse Client::getWorkspaceAcrRamAuthorizeUrl(const string &workspaceId, const GetWorkspaceAcrRamAuthorizeUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceAcrRamAuthorizeUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the RAM authorization URL for mounting AgenticFS in a workspace.
 *
 * @description Determines the account, region, and shared role based on the workspace, and concatenates the resource ARN based on the provided fileSystemId and accessPointId. The server parameter is used to generate the policy name. This operation does not query NAS or check the resource status, and returns an authorization URL that contains only the target NAS policy. After completing RAM authorization, you must call the verification API.
 *
 * @param request GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse
 */
GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse Client::getWorkspaceAgenticFsMountRamAuthorizeUrlWithOptions(const string &workspaceId, const GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["accessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasFileSystemId()) {
    query["fileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasServer()) {
    query["server"] = request.getServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspaceAgenticFsMountRamAuthorizeUrl"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agentic-fs/authorize")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse>();
}

/**
 * @summary Queries the RAM authorization URL for mounting AgenticFS in a workspace.
 *
 * @description Determines the account, region, and shared role based on the workspace, and concatenates the resource ARN based on the provided fileSystemId and accessPointId. The server parameter is used to generate the policy name. This operation does not query NAS or check the resource status, and returns an authorization URL that contains only the target NAS policy. After completing RAM authorization, you must call the verification API.
 *
 * @param request GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest
 * @return GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse
 */
GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse Client::getWorkspaceAgenticFsMountRamAuthorizeUrl(const string &workspaceId, const GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceAgenticFsMountRamAuthorizeUrlWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the plug-in status of a specified workspace.
 *
 * @description ## Operation description\\nQueries the plug-in status of a specified workspace. Returns whether the plug-in is enabled, its lifecycle status, and the currently effective configuration. Currently, two types of plug-ins are supported: collaboration and agentloop. If a plug-in is not installed, its status is DISABLED.\\n.
 *
 * @param request GetWorkspacePluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspacePluginResponse
 */
GetWorkspacePluginResponse Client::getWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const GetWorkspacePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspacePlugin"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/plugins/" , Darabonba::Encode::Encoder::percentEncode(pluginName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspacePluginResponse>();
}

/**
 * @summary Queries the plug-in status of a specified workspace.
 *
 * @description ## Operation description\\nQueries the plug-in status of a specified workspace. Returns whether the plug-in is enabled, its lifecycle status, and the currently effective configuration. Currently, two types of plug-ins are supported: collaboration and agentloop. If a plug-in is not installed, its status is DISABLED.\\n.
 *
 * @param request GetWorkspacePluginRequest
 * @return GetWorkspacePluginResponse
 */
GetWorkspacePluginResponse Client::getWorkspacePlugin(const string &workspaceId, const string &pluginName, const GetWorkspacePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspacePluginWithOptions(workspaceId, pluginName, request, headers, runtime);
}

/**
 * @summary Installs an MCP marketplace template.
 *
 * @description Validates the input based on the specified template version and creates an MCP in the workspace.
 *
 * @param tmpReq InstallMcpMarketItemRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallMcpMarketItemResponse
 */
InstallMcpMarketItemResponse Client::installMcpMarketItemWithOptions(const string &workspaceId, const string &marketItemId, const InstallMcpMarketItemRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallMcpMarketItemShrinkRequest request = InstallMcpMarketItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasTemplateVersion()) {
    query["templateVersion"] = request.getTemplateVersion();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InstallMcpMarketItem"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-market/items/" , Darabonba::Encode::Encoder::percentEncode(marketItemId) , "/install")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallMcpMarketItemResponse>();
}

/**
 * @summary Installs an MCP marketplace template.
 *
 * @description Validates the input based on the specified template version and creates an MCP in the workspace.
 *
 * @param request InstallMcpMarketItemRequest
 * @return InstallMcpMarketItemResponse
 */
InstallMcpMarketItemResponse Client::installMcpMarketItem(const string &workspaceId, const string &marketItemId, const InstallMcpMarketItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installMcpMarketItemWithOptions(workspaceId, marketItemId, request, headers, runtime);
}

/**
 * @summary Installs a plugin for a specified AgentCore workspace. Currently, only the collaboration plugin is supported. The installation process runs asynchronously.
 *
 * @description ## Request description\\nInstalls a plugin for a specified AgentCore workspace. Currently, only the `collaboration` plugin is supported. Plugin configurations are passed through the `Config` parameter, and different plugins can define their own configuration structures. The `collaboration` plugin uses `Config.NetworkConfiguration` to specify the VPC and public network access policy. The installation procedure executes asynchronously. If you repeatedly invoke this operation for a plugin with the same name that is being installed or already installed, the operation returns the current status based on idempotent semantics if the configurations are identical. If the configurations are different, the operation returns an operation conflict.\\n
 *
 * @param tmpReq InstallWorkspacePluginRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InstallWorkspacePluginResponse
 */
InstallWorkspacePluginResponse Client::installWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const InstallWorkspacePluginRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InstallWorkspacePluginShrinkRequest request = InstallWorkspacePluginShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InstallWorkspacePlugin"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/plugins/" , Darabonba::Encode::Encoder::percentEncode(pluginName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InstallWorkspacePluginResponse>();
}

/**
 * @summary Installs a plugin for a specified AgentCore workspace. Currently, only the collaboration plugin is supported. The installation process runs asynchronously.
 *
 * @description ## Request description\\nInstalls a plugin for a specified AgentCore workspace. Currently, only the `collaboration` plugin is supported. Plugin configurations are passed through the `Config` parameter, and different plugins can define their own configuration structures. The `collaboration` plugin uses `Config.NetworkConfiguration` to specify the VPC and public network access policy. The installation procedure executes asynchronously. If you repeatedly invoke this operation for a plugin with the same name that is being installed or already installed, the operation returns the current status based on idempotent semantics if the configurations are identical. If the configurations are different, the operation returns an operation conflict.\\n
 *
 * @param request InstallWorkspacePluginRequest
 * @return InstallWorkspacePluginResponse
 */
InstallWorkspacePluginResponse Client::installWorkspacePlugin(const string &workspaceId, const string &pluginName, const InstallWorkspacePluginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return installWorkspacePluginWithOptions(workspaceId, pluginName, request, headers, runtime);
}

/**
 * @summary Queries the runtime environments supported for code deployment.
 *
 * @description Queries the directories in the current workspace that can be used to create code package agents or switch runtime environments. Runtime environments are dynamically provided based on the current version configuration, and internal image addresses are not returned.
 * If maxResults is omitted or set to 0, the default value is 10. If the value is greater than 100, it is processed as 100. Omit nextToken in the first request. For subsequent requests, use the token returned in the previous response as is, and keep the workspace unchanged. If a directory change invalidates the token, query from the first page again. An empty nextToken indicates that there are no more pages. Existing agents continue to use the saved images for restarts, scaling, and regular updates.
 *
 * @param request ListAgentCodeRuntimesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentCodeRuntimesResponse
 */
ListAgentCodeRuntimesResponse Client::listAgentCodeRuntimesWithOptions(const string &workspaceId, const ListAgentCodeRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListAgentCodeRuntimes"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-code-runtimes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentCodeRuntimesResponse>();
}

/**
 * @summary Queries the runtime environments supported for code deployment.
 *
 * @description Queries the directories in the current workspace that can be used to create code package agents or switch runtime environments. Runtime environments are dynamically provided based on the current version configuration, and internal image addresses are not returned.
 * If maxResults is omitted or set to 0, the default value is 10. If the value is greater than 100, it is processed as 100. Omit nextToken in the first request. For subsequent requests, use the token returned in the previous response as is, and keep the workspace unchanged. If a directory change invalidates the token, query from the first page again. An empty nextToken indicates that there are no more pages. Existing agents continue to use the saved images for restarts, scaling, and regular updates.
 *
 * @param request ListAgentCodeRuntimesRequest
 * @return ListAgentCodeRuntimesResponse
 */
ListAgentCodeRuntimesResponse Client::listAgentCodeRuntimes(const string &workspaceId, const ListAgentCodeRuntimesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentCodeRuntimesWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the list of IM channels for a specified agent.
 *
 * @description Queries the list of IM channels for a specified agent.
 *
 * @param request ListAgentIMChannelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentIMChannelsResponse
 */
ListAgentIMChannelsResponse Client::listAgentIMChannelsWithOptions(const string &workspaceId, const string &agentId, const ListAgentIMChannelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelType()) {
    query["channelType"] = request.getChannelType();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentIMChannels"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/im-channels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentIMChannelsResponse>();
}

/**
 * @summary Queries the list of IM channels for a specified agent.
 *
 * @description Queries the list of IM channels for a specified agent.
 *
 * @param request ListAgentIMChannelsRequest
 * @return ListAgentIMChannelsResponse
 */
ListAgentIMChannelsResponse Client::listAgentIMChannels(const string &workspaceId, const string &agentId, const ListAgentIMChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentIMChannelsWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
 *
 * @description ## Operation description
 * Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
 *
 * @param request ListAgentSpecsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentSpecsResponse
 */
ListAgentSpecsResponse Client::listAgentSpecsWithOptions(const string &workspaceId, const ListAgentSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentSpecName()) {
    query["agentSpecName"] = request.getAgentSpecName();
  }

  if (!!request.hasBizTag()) {
    query["bizTag"] = request.getBizTag();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOwner()) {
    query["owner"] = request.getOwner();
  }

  if (!!request.hasPageNo()) {
    query["pageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.getScope();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.getSearch();
  }

  if (!!request.hasWithCapabilities()) {
    query["withCapabilities"] = request.getWithCapabilities();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentSpecs"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentSpecsResponse>();
}

/**
 * @summary Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
 *
 * @description ## Operation description
 * Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
 *
 * @param request ListAgentSpecsRequest
 * @return ListAgentSpecsResponse
 */
ListAgentSpecsResponse Client::listAgentSpecs(const string &workspaceId, const ListAgentSpecsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentSpecsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the teams to which specified agents belong. Specify the agent IDs by using agentIds to retrieve the membership information of each agent in the teams, including the team ID, team name, and the role of the agent in the team.
 *
 * @param tmpReq ListAgentTeamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentTeamsResponse
 */
ListAgentTeamsResponse Client::listAgentTeamsWithOptions(const string &workspaceId, const ListAgentTeamsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAgentTeamsShrinkRequest request = ListAgentTeamsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAgentTeams"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-team-memberships")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentTeamsResponse>();
}

/**
 * @summary Queries the teams to which specified agents belong. Specify the agent IDs by using agentIds to retrieve the membership information of each agent in the teams, including the team ID, team name, and the role of the agent in the team.
 *
 * @param request ListAgentTeamsRequest
 * @return ListAgentTeamsResponse
 */
ListAgentTeamsResponse Client::listAgentTeams(const string &workspaceId, const ListAgentTeamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentTeamsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the available official models and enterprise models for an enabled QoderCLI Connector. The service retrieves models in real time by using the saved API key and organization ID, and deduplicates the results by model ID.
 *
 * @description Queries the list of available models for a specified Connector. Pagination is supported.
 *
 * @param request ListConnectorModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectorModelsResponse
 */
ListConnectorModelsResponse Client::listConnectorModelsWithOptions(const string &workspaceId, const string &connectorName, const ListConnectorModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectorKeyId()) {
    query["connectorKeyId"] = request.getConnectorKeyId();
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
    {"action" , "ListConnectorModels"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/connectors/" , Darabonba::Encode::Encoder::percentEncode(connectorName) , "/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectorModelsResponse>();
}

/**
 * @summary Queries the available official models and enterprise models for an enabled QoderCLI Connector. The service retrieves models in real time by using the saved API key and organization ID, and deduplicates the results by model ID.
 *
 * @description Queries the list of available models for a specified Connector. Pagination is supported.
 *
 * @param request ListConnectorModelsRequest
 * @return ListConnectorModelsResponse
 */
ListConnectorModelsResponse Client::listConnectorModels(const string &workspaceId, const string &connectorName, const ListConnectorModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConnectorModelsWithOptions(workspaceId, connectorName, request, headers, runtime);
}

/**
 * @summary Queries the list of connectors supported by a specified workspace, including their status, number of bound agents, and configurations. The current version returns the QoderCLI connector.
 *
 * @description Queries the list of connectors in a specified workspace.
 *
 * @param request ListConnectorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectorsWithOptions(const string &workspaceId, const ListConnectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListConnectors"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/connectors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectorsResponse>();
}

/**
 * @summary Queries the list of connectors supported by a specified workspace, including their status, number of bound agents, and configurations. The current version returns the QoderCLI connector.
 *
 * @description Queries the list of connectors in a specified workspace.
 *
 * @param request ListConnectorsRequest
 * @return ListConnectorsResponse
 */
ListConnectorsResponse Client::listConnectors(const string &workspaceId, const ListConnectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConnectorsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Performs a paged query for credentials in a specified workspace. Filters by type using credentialType, performs fuzzy filtering by credential name using nameLike, configures paging by specifying the maximum number of records per page using maxResults, and retrieves the next page using nextToken. If maxResults is not specified, the server returns 10 records by default.
 *
 * @description Performs a paged query for the credential list in a workspace, and supports filtering by type and name during paging.
 *
 * @param request ListCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentialsWithOptions(const string &workspaceId, const ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialType()) {
    query["credentialType"] = request.getCredentialType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCredentials"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/credentials")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCredentialsResponse>();
}

/**
 * @summary Performs a paged query for credentials in a specified workspace. Filters by type using credentialType, performs fuzzy filtering by credential name using nameLike, configures paging by specifying the maximum number of records per page using maxResults, and retrieves the next page using nextToken. If maxResults is not specified, the server returns 10 records by default.
 *
 * @description Performs a paged query for the credential list in a workspace, and supports filtering by type and name during paging.
 *
 * @param request ListCredentialsRequest
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentials(const string &workspaceId, const ListCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCredentialsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Performs a paged query to retrieve the custom agent summary in a specified workspace. Use paging to navigate through the results. To obtain the complete configuration and execute the latest version to get the results, call GetCustomAgent.
 *
 * @description The default value of maxResults is 20, and the maximum value is 100. If this parameter is omitted or set to 0, the default value is used.
 * Omit nextToken in the first request. For subsequent requests, pass the nextToken returned in the previous response as is, and keep the same workspace. The nextToken is an opaque token. Do not parse or construct it. An empty token in the response indicates that there are no more pages.
 * This operation returns the summaries for the current page and does not return the complete deployment configurations or the execution errors of the latest version. To obtain this information, call GetCustomAgent by using the agentId from items.
 *
 * @param request ListCustomAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAgentsResponse
 */
ListCustomAgentsResponse Client::listCustomAgentsWithOptions(const string &workspaceId, const ListCustomAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListCustomAgents"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-agents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAgentsResponse>();
}

/**
 * @summary Performs a paged query to retrieve the custom agent summary in a specified workspace. Use paging to navigate through the results. To obtain the complete configuration and execute the latest version to get the results, call GetCustomAgent.
 *
 * @description The default value of maxResults is 20, and the maximum value is 100. If this parameter is omitted or set to 0, the default value is used.
 * Omit nextToken in the first request. For subsequent requests, pass the nextToken returned in the previous response as is, and keep the same workspace. The nextToken is an opaque token. Do not parse or construct it. An empty token in the response indicates that there are no more pages.
 * This operation returns the summaries for the current page and does not return the complete deployment configurations or the execution errors of the latest version. To obtain this information, call GetCustomAgent by using the agentId from items.
 *
 * @param request ListCustomAgentsRequest
 * @return ListCustomAgentsResponse
 */
ListCustomAgentsResponse Client::listCustomAgents(const string &workspaceId, const ListCustomAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCustomAgentsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the list of external agents in a specified workspace.
 *
 * @description Queries the list of external agents in a specified workspace.
 *
 * @param request ListExternalAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExternalAgentsResponse
 */
ListExternalAgentsResponse Client::listExternalAgentsWithOptions(const string &workspaceId, const ListExternalAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListExternalAgents"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExternalAgentsResponse>();
}

/**
 * @summary Queries the list of external agents in a specified workspace.
 *
 * @description Queries the list of external agents in a specified workspace.
 *
 * @param request ListExternalAgentsRequest
 * @return ListExternalAgentsResponse
 */
ListExternalAgentsResponse Client::listExternalAgents(const string &workspaceId, const ListExternalAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExternalAgentsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the departments of an identity provider by page.
 *
 * @description Queries DingTalk or Lark departments by hierarchy and page. Prerequisites include an existing identity provider binding, a user pool, valid application credentials, and address book read authorization. If parentDepartmentId is not specified, the root hierarchy is queried. When expanding a node, use the ID of the node to query its direct child departments. The hasChildren field is used to determine expandability and does not indicate that child nodes have been returned. The nextToken field is only used to continue querying the next page under the current parent department. The query only reads the directory, does not save the synchronization scope, and does not import users. After a new department is added to a DingTalk or Lark organization, re-query the corresponding parent department because the old list does not represent the latest directory.
 * Authorization information: The RAM operation is agentcore:ListIdentityProviderDepartments, the access level is List, and the resource ARN is acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource requires authorization.
 * Idempotence and retry: This operation is read-only and can be invoked repeatedly.
 * It is free of charge to invoke this API operation, and operation records support ActionTrail auditing.
 * Sample response:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "maxResults": 50,
 *   "nextToken": "",
 *   "items": [
 *     {
 *       "id": "10001",
 *       "name": "R&D Department",
 *       "parentId": "1",
 *       "memberCount": 12,
 *       "hasChildren": true
 *     }
 *   ]
 * }
 * ```
 *
 * @param request ListIdentityProviderDepartmentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProviderDepartmentsResponse
 */
ListIdentityProviderDepartmentsResponse Client::listIdentityProviderDepartmentsWithOptions(const string &workspaceId, const string &identityProviderType, const ListIdentityProviderDepartmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasParentDepartmentId()) {
    query["parentDepartmentId"] = request.getParentDepartmentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviderDepartments"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType) , "/departments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProviderDepartmentsResponse>();
}

/**
 * @summary Queries the departments of an identity provider by page.
 *
 * @description Queries DingTalk or Lark departments by hierarchy and page. Prerequisites include an existing identity provider binding, a user pool, valid application credentials, and address book read authorization. If parentDepartmentId is not specified, the root hierarchy is queried. When expanding a node, use the ID of the node to query its direct child departments. The hasChildren field is used to determine expandability and does not indicate that child nodes have been returned. The nextToken field is only used to continue querying the next page under the current parent department. The query only reads the directory, does not save the synchronization scope, and does not import users. After a new department is added to a DingTalk or Lark organization, re-query the corresponding parent department because the old list does not represent the latest directory.
 * Authorization information: The RAM operation is agentcore:ListIdentityProviderDepartments, the access level is List, and the resource ARN is acs:agentcore:{regionId}:{accountId}:workspace/{workspaceId}/identityProvider/{identityProviderType}. This resource requires authorization.
 * Idempotence and retry: This operation is read-only and can be invoked repeatedly.
 * It is free of charge to invoke this API operation, and operation records support ActionTrail auditing.
 * Sample response:
 * ```json
 * {
 *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
 *   "message": "success",
 *   "httpStatusCode": 200,
 *   "code": "SUCCESS",
 *   "success": true,
 *   "maxResults": 50,
 *   "nextToken": "",
 *   "items": [
 *     {
 *       "id": "10001",
 *       "name": "R&D Department",
 *       "parentId": "1",
 *       "memberCount": 12,
 *       "hasChildren": true
 *     }
 *   ]
 * }
 * ```
 *
 * @param request ListIdentityProviderDepartmentsRequest
 * @return ListIdentityProviderDepartmentsResponse
 */
ListIdentityProviderDepartmentsResponse Client::listIdentityProviderDepartments(const string &workspaceId, const string &identityProviderType, const ListIdentityProviderDepartmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIdentityProviderDepartmentsWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Queries the complete summary list of up to two SCIM credentials in the shared user pool, without returning plaintext tokens or supporting pagination.
 *
 * @description ## Features and prerequisites
 * Retrieves the current credential summary list from AgentIdentity and returns a data array. Each item contains credentialId, status, createTime, and expireTime. If no credentials exist, an empty array is returned. This operation does not support maxResults, nextToken, or pagination. Do not call this operation with fake pagination fields. The list never returns plaintext tokens, nor does it enable the receiving or issuing of new credentials.
 * Receiving is not required to be enabled, but the shared pool must be available. A credential is considered available if its status is Enabled and its expireTime is later than the current time. The maximum limit of two credentials is determined by AgentIdentity. Client-side counting is for reference only. The list may contain unavailable or expired credentials. Do not use this list to claim that available tokens exist.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/scim-provisioning/credentials
 * Call conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API operation, not the extra body wrapper of the backend direct connection API operation. The response example shows only the business data. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a persistent connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/scim-provisioning/credentials
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": [
 *     {
 *       "credentialId": "credential-example",
 *       "status": "Enabled",
 *       "createTime": "<Upstream creation time>",
 *       "expireTime": "<Upstream expiration time>"
 *     }
 *   ]
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to the upstream service that fail may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 400 InvalidParameter: The shared user pool is unavailable. 404 IdentityProviderNotFound: No corresponding binding exists. Upstream query failures cannot be replaced with an empty list, which may mislead users into repeatedly creating credentials.
 * ## Call relationships and usage boundaries
 * Used for configuration recovery and credential management: Existing plaintext tokens cannot be queried and retrieved again. The list provides only credential summaries. To obtain a new token, call CreateIdentityProviderSCIMCredential. To revoke a credential, submit the credentialId from the list to DeleteIdentityProviderSCIMCredential. A maximum of two credentials are allowed in the same pool. This operation returns the complete array and does not support or fabricate pagination parameters.
 *
 * @param request ListIdentityProviderSCIMCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProviderSCIMCredentialsResponse
 */
ListIdentityProviderSCIMCredentialsResponse Client::listIdentityProviderSCIMCredentialsWithOptions(const string &workspaceId, const ListIdentityProviderSCIMCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviderSCIMCredentials"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/scim-provisioning/credentials")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProviderSCIMCredentialsResponse>();
}

/**
 * @summary Queries the complete summary list of up to two SCIM credentials in the shared user pool, without returning plaintext tokens or supporting pagination.
 *
 * @description ## Features and prerequisites
 * Retrieves the current credential summary list from AgentIdentity and returns a data array. Each item contains credentialId, status, createTime, and expireTime. If no credentials exist, an empty array is returned. This operation does not support maxResults, nextToken, or pagination. Do not call this operation with fake pagination fields. The list never returns plaintext tokens, nor does it enable the receiving or issuing of new credentials.
 * Receiving is not required to be enabled, but the shared pool must be available. A credential is considered available if its status is Enabled and its expireTime is later than the current time. The maximum limit of two credentials is determined by AgentIdentity. Client-side counting is for reference only. The list may contain unavailable or expired credentials. Do not use this list to claim that available tokens exist.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/scim-provisioning/credentials
 * Call conventions: Call this operation in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API operation, not the extra body wrapper of the backend direct connection API operation. The response example shows only the business data. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a persistent connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/scim-provisioning/credentials
 * ```
 * ## Response examples
 * ```json
 * {
 *   "data": [
 *     {
 *       "credentialId": "credential-example",
 *       "status": "Enabled",
 *       "createTime": "<Upstream creation time>",
 *       "expireTime": "<Upstream expiration time>"
 *     }
 *   ]
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to the upstream service that fail may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 400 InvalidParameter: The shared user pool is unavailable. 404 IdentityProviderNotFound: No corresponding binding exists. Upstream query failures cannot be replaced with an empty list, which may mislead users into repeatedly creating credentials.
 * ## Call relationships and usage boundaries
 * Used for configuration recovery and credential management: Existing plaintext tokens cannot be queried and retrieved again. The list provides only credential summaries. To obtain a new token, call CreateIdentityProviderSCIMCredential. To revoke a credential, submit the credentialId from the list to DeleteIdentityProviderSCIMCredential. A maximum of two credentials are allowed in the same pool. This operation returns the complete array and does not support or fabricate pagination parameters.
 *
 * @param request ListIdentityProviderSCIMCredentialsRequest
 * @return ListIdentityProviderSCIMCredentialsResponse
 */
ListIdentityProviderSCIMCredentialsResponse Client::listIdentityProviderSCIMCredentials(const string &workspaceId, const ListIdentityProviderSCIMCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIdentityProviderSCIMCredentialsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the summary of existing identity provider bindings for a workspace, including CustomSSO. Returns local binding information without querying the actual upstream SAML or SCIM configurations.
 *
 * @description ## Features and prerequisites
 * WAITING_CONFIGURATION also occupies the unique external identity provider quota for the workspace. CustomSSO (SAML/OIDC and SCIM) is mutually exclusive with DingTalk and Lark. SCIM reuses the CustomSSO binding and does not create a second identity provider. Creating other types returns 409 IdentityProviderAlreadyBound. You can change the binding only after unbinding and removing the existing binding.
 * Returns the local binding summary without querying the actual SAML and SCIM configurations of AgentIdentity. If no binding exists, items is an empty array. Currently, a workspace supports only one external binding. The default value of maxResults is 10, and the valid values are 1 to 100. Currently, nextToken can only be omitted or left empty. A non-empty value returns InvalidParameter, and multi-page results cannot be fabricated.
 * When CustomSSO initialization is complete but SAML metadata is not saved, the status is WAITING_CONFIGURATION. You can upload the configuration, which does not indicate that a background task is still running. After the configuration is saved, the status changes to UPDATING, and changes to READY after the task succeeds. To query SCIM independently, use GetIdentityProviderSCIM. The list does not issue tokens and does not return the vendor appSecret, encryptKey, or verificationToken.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/identity-providers
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity provider resources of the workspace. The ws-example, URLs, certificates, and tokens in the following examples are placeholder values and must be replaced with actual values. The request example shows the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/identity-providers?maxResults=10
 * ```
 * ## Response examples
 * ```json
 * {
 *   "items": [
 *     {
 *       "workspaceId": "ws-example",
 *       "identityProviderType": "CustomSSO",
 *       "status": "WAITING_CONFIGURATION",
 *       "loginEnabled": false,
 *       "syncEnabled": false
 *     }
 *   ],
 *   "maxResults": 10,
 *   "totalCount": 1
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. A synchronous call failure to the upstream may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling.
 * 400 InvalidParameter: maxResults is out of bounds or nextToken is non-empty, which is currently not supported. When a query fails, an error is displayed, and the status is not cleared to unconfigured.
 * ## Call relationships and usage boundaries
 * This API is used to discover the current binding. To query the specific SAML configuration of CustomSSO, use GetIdentityProvider. To query the SP address, use GetIdentityProviderServiceProvider. To query the actual SCIM configuration and independent operation results, use GetIdentityProviderSCIM.
 *
 * @param request ListIdentityProvidersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProvidersWithOptions(const string &workspaceId, const ListIdentityProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListIdentityProviders"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProvidersResponse>();
}

/**
 * @summary Queries the summary of existing identity provider bindings for a workspace, including CustomSSO. Returns local binding information without querying the actual upstream SAML or SCIM configurations.
 *
 * @description ## Features and prerequisites
 * WAITING_CONFIGURATION also occupies the unique external identity provider quota for the workspace. CustomSSO (SAML/OIDC and SCIM) is mutually exclusive with DingTalk and Lark. SCIM reuses the CustomSSO binding and does not create a second identity provider. Creating other types returns 409 IdentityProviderAlreadyBound. You can change the binding only after unbinding and removing the existing binding.
 * Returns the local binding summary without querying the actual SAML and SCIM configurations of AgentIdentity. If no binding exists, items is an empty array. Currently, a workspace supports only one external binding. The default value of maxResults is 10, and the valid values are 1 to 100. Currently, nextToken can only be omitted or left empty. A non-empty value returns InvalidParameter, and multi-page results cannot be fabricated.
 * When CustomSSO initialization is complete but SAML metadata is not saved, the status is WAITING_CONFIGURATION. You can upload the configuration, which does not indicate that a background task is still running. After the configuration is saved, the status changes to UPDATING, and changes to READY after the task succeeds. To query SCIM independently, use GetIdentityProviderSCIM. The list does not issue tokens and does not return the vendor appSecret, encryptKey, or verificationToken.
 * ## Requests and examples
 * GET /workspaces/{workspaceId}/identity-providers
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity provider resources of the workspace. The ws-example, URLs, certificates, and tokens in the following examples are placeholder values and must be replaced with actual values. The request example shows the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * GET /workspaces/ws-example/identity-providers?maxResults=10
 * ```
 * ## Response examples
 * ```json
 * {
 *   "items": [
 *     {
 *       "workspaceId": "ws-example",
 *       "identityProviderType": "CustomSSO",
 *       "status": "WAITING_CONFIGURATION",
 *       "loginEnabled": false,
 *       "syncEnabled": false
 *     }
 *   ],
 *   "maxResults": 10,
 *   "totalCount": 1
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. A synchronous call failure to the upstream may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling.
 * 400 InvalidParameter: maxResults is out of bounds or nextToken is non-empty, which is currently not supported. When a query fails, an error is displayed, and the status is not cleared to unconfigured.
 * ## Call relationships and usage boundaries
 * This API is used to discover the current binding. To query the specific SAML configuration of CustomSSO, use GetIdentityProvider. To query the SP address, use GetIdentityProviderServiceProvider. To query the actual SCIM configuration and independent operation results, use GetIdentityProviderSCIM.
 *
 * @param request ListIdentityProvidersRequest
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProviders(const string &workspaceId, const ListIdentityProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIdentityProvidersWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries image caches.
 *
 * @description Queries the logical image caches within the current account, region, and workspace. WorkspaceId is required, and caches are not visible across workspaces. All conditions filter the full set using the AND operator before pagination is calculated. Results are sorted in descending order of logical resource creation time and ascending order of ImageId. The cursor is bound to the account, region, workspace, all filters, and the sort order. Returns the complete cache objects, the AgentCount based on the configuration switch, and the actual deletion eligibility. Query failures do not return a disguised empty list, and the nextToken on the last page is an empty string.
 *
 * @param request ListImageCachesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageCachesResponse
 */
ListImageCachesResponse Client::listImageCachesWithOptions(const ListImageCachesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrInstanceId()) {
    query["acrInstanceId"] = request.getAcrInstanceId();
  }

  if (!!request.hasDigest()) {
    query["digest"] = request.getDigest();
  }

  if (!!request.hasImageRefContains()) {
    query["imageRefContains"] = request.getImageRefContains();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasRegistry()) {
    query["registry"] = request.getRegistry();
  }

  if (!!request.hasRepository()) {
    query["repository"] = request.getRepository();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["tag"] = request.getTag();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageCaches"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/image-caches")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageCachesResponse>();
}

/**
 * @summary Queries image caches.
 *
 * @description Queries the logical image caches within the current account, region, and workspace. WorkspaceId is required, and caches are not visible across workspaces. All conditions filter the full set using the AND operator before pagination is calculated. Results are sorted in descending order of logical resource creation time and ascending order of ImageId. The cursor is bound to the account, region, workspace, all filters, and the sort order. Returns the complete cache objects, the AgentCount based on the configuration switch, and the actual deletion eligibility. Query failures do not return a disguised empty list, and the nextToken on the last page is an empty string.
 *
 * @param request ListImageCachesRequest
 * @return ListImageCachesResponse
 */
ListImageCachesResponse Client::listImageCaches(const ListImageCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listImageCachesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of managed agents in a specified workspace.
 *
 * @description Queries the list of managed agents in a specified workspace by using paging. Returns summary information for each agent, including the identity, name, status, template, and specifications.
 *
 * @param request ListManagedAgentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListManagedAgentsResponse
 */
ListManagedAgentsResponse Client::listManagedAgentsWithOptions(const string &workspaceId, const ListManagedAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListManagedAgents"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListManagedAgentsResponse>();
}

/**
 * @summary Queries the list of managed agents in a specified workspace.
 *
 * @description Queries the list of managed agents in a specified workspace by using paging. Returns summary information for each agent, including the identity, name, status, template, and specifications.
 *
 * @param request ListManagedAgentsRequest
 * @return ListManagedAgentsResponse
 */
ListManagedAgentsResponse Client::listManagedAgents(const string &workspaceId, const ListManagedAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listManagedAgentsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries MCP marketplace templates.
 *
 * @description Queries all online official MCP templates. You can filter results by keyword, usage tag, and MCP type.
 *
 * @param request ListMcpMarketItemsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpMarketItemsResponse
 */
ListMcpMarketItemsResponse Client::listMcpMarketItemsWithOptions(const string &workspaceId, const ListMcpMarketItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasMcpType()) {
    query["mcpType"] = request.getMcpType();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOfficialTag()) {
    query["officialTag"] = request.getOfficialTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMcpMarketItems"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-market/items")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpMarketItemsResponse>();
}

/**
 * @summary Queries MCP marketplace templates.
 *
 * @description Queries all online official MCP templates. You can filter results by keyword, usage tag, and MCP type.
 *
 * @param request ListMcpMarketItemsRequest
 * @return ListMcpMarketItemsResponse
 */
ListMcpMarketItemsResponse Client::listMcpMarketItems(const string &workspaceId, const ListMcpMarketItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMcpMarketItemsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the list of tools exposed by a specified MCP service and their input/output schemas.
 *
 * @description ## Operation description
 * Queries the list of tools exposed by a specified MCP service and their input/output schemas.
 *
 * @param request ListMcpToolsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpToolsResponse
 */
ListMcpToolsResponse Client::listMcpToolsWithOptions(const string &workspaceId, const string &mcpServerId, const ListMcpToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListMcpTools"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId) , "/tools")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpToolsResponse>();
}

/**
 * @summary Queries the list of tools exposed by a specified MCP service and their input/output schemas.
 *
 * @description ## Operation description
 * Queries the list of tools exposed by a specified MCP service and their input/output schemas.
 *
 * @param request ListMcpToolsRequest
 * @return ListMcpToolsResponse
 */
ListMcpToolsResponse Client::listMcpTools(const string &workspaceId, const string &mcpServerId, const ListMcpToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMcpToolsWithOptions(workspaceId, mcpServerId, request, headers, runtime);
}

/**
 * @summary Queries MCP services and their configurations and statuses in a specified workspace by using paging.
 *
 * @description ## Operation description
 * Queries MCP services and their configurations and statuses in a specified workspace by using paging.
 *
 * @param request ListMcpsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpsResponse
 */
ListMcpsResponse Client::listMcpsWithOptions(const string &workspaceId, const ListMcpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomTag()) {
    query["customTag"] = request.getCustomTag();
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

  if (!!request.hasOfficialTag()) {
    query["officialTag"] = request.getOfficialTag();
  }

  if (!!request.hasSearchType()) {
    query["searchType"] = request.getSearchType();
  }

  if (!!request.hasUsageActive()) {
    query["usageActive"] = request.getUsageActive();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMcps"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpsResponse>();
}

/**
 * @summary Queries MCP services and their configurations and statuses in a specified workspace by using paging.
 *
 * @description ## Operation description
 * Queries MCP services and their configurations and statuses in a specified workspace by using paging.
 *
 * @param request ListMcpsRequest
 * @return ListMcpsResponse
 */
ListMcpsResponse Client::listMcps(const string &workspaceId, const ListMcpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMcpsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Performs a paged query on long-term memory records. The results can be filtered independently by user ID, agent ID, and session ID. Paging is supported.
 *
 * @description Performs a paged query on long-term memory records. The results can be filtered independently by user ID, agent ID, and session ID. Paging is supported.
 *
 * @param request ListMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemoriesResponse
 */
ListMemoriesResponse Client::listMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const ListMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agentId"] = request.getAgentId();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUserId()) {
    query["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemories"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memories")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemoriesResponse>();
}

/**
 * @summary Performs a paged query on long-term memory records. The results can be filtered independently by user ID, agent ID, and session ID. Paging is supported.
 *
 * @description Performs a paged query on long-term memory records. The results can be filtered independently by user ID, agent ID, and session ID. Paging is supported.
 *
 * @param request ListMemoriesRequest
 * @return ListMemoriesResponse
 */
ListMemoriesResponse Client::listMemories(const string &workspaceId, const string &memoryStoreName, const ListMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemoriesWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Performs a paging query for raw messages by exact scope. SessionId is required, and at least one of UserId and AgentId must be provided.
 *
 * @description Performs a paging query for raw messages by exact scope. SessionId is required, and at least one of UserId and AgentId must be provided.
 *
 * @param request ListMemorySessionMessagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemorySessionMessagesResponse
 */
ListMemorySessionMessagesResponse Client::listMemorySessionMessagesWithOptions(const string &workspaceId, const string &memoryStoreName, const ListMemorySessionMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agentId"] = request.getAgentId();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  if (!!request.hasUserId()) {
    query["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemorySessionMessages"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/messages")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemorySessionMessagesResponse>();
}

/**
 * @summary Performs a paging query for raw messages by exact scope. SessionId is required, and at least one of UserId and AgentId must be provided.
 *
 * @description Performs a paging query for raw messages by exact scope. SessionId is required, and at least one of UserId and AgentId must be provided.
 *
 * @param request ListMemorySessionMessagesRequest
 * @return ListMemorySessionMessagesResponse
 */
ListMemorySessionMessagesResponse Client::listMemorySessionMessages(const string &workspaceId, const string &memoryStoreName, const ListMemorySessionMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemorySessionMessagesWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Performs a paging query for sessions in a MemoryStore. You can filter the sessions independently by user ID and agent ID.
 *
 * @description Performs a paging query for sessions in a MemoryStore. You can filter the sessions independently by user ID and agent ID.
 *
 * @param request ListMemorySessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemorySessionsResponse
 */
ListMemorySessionsResponse Client::listMemorySessionsWithOptions(const string &workspaceId, const string &memoryStoreName, const ListMemorySessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agentId"] = request.getAgentId();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasUserId()) {
    query["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemorySessions"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemorySessionsResponse>();
}

/**
 * @summary Performs a paging query for sessions in a MemoryStore. You can filter the sessions independently by user ID and agent ID.
 *
 * @description Performs a paging query for sessions in a MemoryStore. You can filter the sessions independently by user ID and agent ID.
 *
 * @param request ListMemorySessionsRequest
 * @return ListMemorySessionsResponse
 */
ListMemorySessionsResponse Client::listMemorySessions(const string &workspaceId, const string &memoryStoreName, const ListMemorySessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemorySessionsWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Performs a paged query for MemoryStores in a specified workspace with paging.
 *
 * @description Performs a paged query for MemoryStores in a specified workspace with paging.
 *
 * @param request ListMemoryStoresRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemoryStoresResponse
 */
ListMemoryStoresResponse Client::listMemoryStoresWithOptions(const string &workspaceId, const ListMemoryStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListMemoryStores"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemoryStoresResponse>();
}

/**
 * @summary Performs a paged query for MemoryStores in a specified workspace with paging.
 *
 * @description Performs a paged query for MemoryStores in a specified workspace with paging.
 *
 * @param request ListMemoryStoresRequest
 * @return ListMemoryStoresResponse
 */
ListMemoryStoresResponse Client::listMemoryStores(const string &workspaceId, const ListMemoryStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemoryStoresWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries model connections in a specified workspace with paging. Supports filtering by name, provider type, and invoke protocol.
 *
 * @description Queries model connections in a specified AgentCore workspace. Supports filtering by name through `Name` and selecting exact match or fuzzy match through `SearchType`. Also supports filtering by model provider type and invoke protocol, and supports paging.
 *
 * @param request ListModelConnectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelConnectionsResponse
 */
ListModelConnectionsResponse Client::listModelConnectionsWithOptions(const string &workspaceId, const ListModelConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeModels()) {
    query["includeModels"] = request.getIncludeModels();
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

  if (!!request.hasProtocol()) {
    query["protocol"] = request.getProtocol();
  }

  if (!!request.hasProviderType()) {
    query["providerType"] = request.getProviderType();
  }

  if (!!request.hasSearchType()) {
    query["searchType"] = request.getSearchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelConnections"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/model-connections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelConnectionsResponse>();
}

/**
 * @summary Queries model connections in a specified workspace with paging. Supports filtering by name, provider type, and invoke protocol.
 *
 * @description Queries model connections in a specified AgentCore workspace. Supports filtering by name through `Name` and selecting exact match or fuzzy match through `SearchType`. Also supports filtering by model provider type and invoke protocol, and supports paging.
 *
 * @param request ListModelConnectionsRequest
 * @return ListModelConnectionsResponse
 */
ListModelConnectionsResponse Client::listModelConnections(const string &workspaceId, const ListModelConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelConnectionsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries models in a specified workspace by using paging. Supports filtering by model connection and model name.
 *
 * @param request ListModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModelsWithOptions(const string &workspaceId, const ListModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionId()) {
    query["connectionId"] = request.getConnectionId();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasModelName()) {
    query["modelName"] = request.getModelName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModels"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelsResponse>();
}

/**
 * @summary Queries models in a specified workspace by using paging. Supports filtering by model connection and model name.
 *
 * @param request ListModelsRequest
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModels(const string &workspaceId, const ListModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
 *
 * @param request ListPredefinedModelProvidersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPredefinedModelProvidersResponse
 */
ListPredefinedModelProvidersResponse Client::listPredefinedModelProvidersWithOptions(const ListPredefinedModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPredefinedModelProviders"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/model-catalog/providers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPredefinedModelProvidersResponse>();
}

/**
 * @summary Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
 *
 * @param request ListPredefinedModelProvidersRequest
 * @return ListPredefinedModelProvidersResponse
 */
ListPredefinedModelProvidersResponse Client::listPredefinedModelProviders(const ListPredefinedModelProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPredefinedModelProvidersWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the models and their capabilities in the built-in model catalog of AgentCore for a specified provider.
 *
 * @param request ListPredefinedModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPredefinedModelsResponse
 */
ListPredefinedModelsResponse Client::listPredefinedModelsWithOptions(const string &providerType, const ListPredefinedModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPredefinedModels"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/model-catalog/providers/" , Darabonba::Encode::Encoder::percentEncode(providerType) , "/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPredefinedModelsResponse>();
}

/**
 * @summary Queries the models and their capabilities in the built-in model catalog of AgentCore for a specified provider.
 *
 * @param request ListPredefinedModelsRequest
 * @return ListPredefinedModelsResponse
 */
ListPredefinedModelsResponse Client::listPredefinedModels(const string &providerType, const ListPredefinedModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPredefinedModelsWithOptions(providerType, request, headers, runtime);
}

/**
 * @summary Queries the list of active sessions in the sandbox of a specified managed agent by paging, and returns the session source and external channel type.
 *
 * @description Queries the list of active sessions in the sandbox of a specified managed agent.
 *
 * @param request ListSandboxSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSandboxSessionsResponse
 */
ListSandboxSessionsResponse Client::listSandboxSessionsWithOptions(const string &workspaceId, const string &agentId, const string &sandboxId, const ListSandboxSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListSandboxSessions"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/sandboxes/" , Darabonba::Encode::Encoder::percentEncode(sandboxId) , "/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSandboxSessionsResponse>();
}

/**
 * @summary Queries the list of active sessions in the sandbox of a specified managed agent by paging, and returns the session source and external channel type.
 *
 * @description Queries the list of active sessions in the sandbox of a specified managed agent.
 *
 * @param request ListSandboxSessionsRequest
 * @return ListSandboxSessionsResponse
 */
ListSandboxSessionsResponse Client::listSandboxSessions(const string &workspaceId, const string &agentId, const string &sandboxId, const ListSandboxSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSandboxSessionsWithOptions(workspaceId, agentId, sandboxId, request, headers, runtime);
}

/**
 * @summary Queries the list of sandboxes for a managed agent in a specified workspace. You can filter results by sandbox ID and active session ID fragments.
 *
 * @description Queries the list of sandboxes for a specified managed agent. The searchText parameter performs a fuzzy match on sandbox ID fragments, and the sessionId parameter performs a fuzzy match on active session ID fragments. Both parameters are case-insensitive and can be used together with AND logic.
 *
 * @param request ListSandboxesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSandboxesResponse
 */
ListSandboxesResponse Client::listSandboxesWithOptions(const string &workspaceId, const string &agentId, const ListSandboxesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSearchText()) {
    query["searchText"] = request.getSearchText();
  }

  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSandboxes"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/sandboxes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSandboxesResponse>();
}

/**
 * @summary Queries the list of sandboxes for a managed agent in a specified workspace. You can filter results by sandbox ID and active session ID fragments.
 *
 * @description Queries the list of sandboxes for a specified managed agent. The searchText parameter performs a fuzzy match on sandbox ID fragments, and the sessionId parameter performs a fuzzy match on active session ID fragments. Both parameters are case-insensitive and can be used together with AND logic.
 *
 * @param request ListSandboxesRequest
 * @return ListSandboxesResponse
 */
ListSandboxesResponse Client::listSandboxes(const string &workspaceId, const string &agentId, const ListSandboxesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSandboxesWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Queries service endpoints in a specified workspace with paging and supports filtering by target type, agent, collaboration component, and status.
 *
 * @description ## Request description\\nQueries service endpoints in a specified workspace with paging. You can filter the results by targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status. Use maxResults to specify the maximum number of records per page, and use nextToken to retrieve the next page. If maxResults is not specified, the server returns 20 records by default.\\n
 *
 * @param request ListServiceEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceEndpointsResponse
 */
ListServiceEndpointsResponse Client::listServiceEndpointsWithOptions(const string &workspaceId, const ListServiceEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agentId"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    query["agentVersion"] = request.getAgentVersion();
  }

  if (!!request.hasCollaborationComponent()) {
    query["collaborationComponent"] = request.getCollaborationComponent();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceBindingId()) {
    query["resourceBindingId"] = request.getResourceBindingId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTargetType()) {
    query["targetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceEndpoints"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/service-endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceEndpointsResponse>();
}

/**
 * @summary Queries service endpoints in a specified workspace with paging and supports filtering by target type, agent, collaboration component, and status.
 *
 * @description ## Request description\\nQueries service endpoints in a specified workspace with paging. You can filter the results by targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status. Use maxResults to specify the maximum number of records per page, and use nextToken to retrieve the next page. If maxResults is not specified, the server returns 20 records by default.\\n
 *
 * @param request ListServiceEndpointsRequest
 * @return ListServiceEndpointsResponse
 */
ListServiceEndpointsResponse Client::listServiceEndpoints(const string &workspaceId, const ListServiceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceEndpointsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries skill reference relationships.
 *
 * @param request ListSkillReferencesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillReferencesResponse
 */
ListSkillReferencesResponse Client::listSkillReferencesWithOptions(const string &workspaceId, const string &skillName, const ListSkillReferencesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["pageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSelectorType()) {
    query["selectorType"] = request.getSelectorType();
  }

  if (!!request.hasSelectorValue()) {
    query["selectorValue"] = request.getSelectorValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillReferences"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/references")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillReferencesResponse>();
}

/**
 * @summary Queries skill reference relationships.
 *
 * @param request ListSkillReferencesRequest
 * @return ListSkillReferencesResponse
 */
ListSkillReferencesResponse Client::listSkillReferences(const string &workspaceId, const string &skillName, const ListSkillReferencesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSkillReferencesWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
 *
 * @description ## Operation description
 * Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
 *
 * @param request ListSkillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const string &workspaceId, const ListSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOwner()) {
    query["owner"] = request.getOwner();
  }

  if (!!request.hasPageNo()) {
    query["pageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.getScope();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.getSearch();
  }

  if (!!request.hasSkillName()) {
    query["skillName"] = request.getSkillName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
 *
 * @description ## Operation description
 * Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const string &workspaceId, const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSkillsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries teams in a specified workspace by using paging. You can use nameLike to filter teams by fuzzy matching the team name, maxResults to specify the maximum number of records per page, and nextToken to retrieve the next page. If maxResults is not specified, the server returns 10 records by default. The member information in the list includes only the member identifier, name, and team role.
 *
 * @param request ListTeamsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeamsWithOptions(const string &workspaceId, const ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTeams"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/teams")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamsResponse>();
}

/**
 * @summary Queries teams in a specified workspace by using paging. You can use nameLike to filter teams by fuzzy matching the team name, maxResults to specify the maximum number of records per page, and nextToken to retrieve the next page. If maxResults is not specified, the server returns 10 records by default. The member information in the list includes only the member identifier, name, and team role.
 *
 * @param request ListTeamsRequest
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeams(const string &workspaceId, const ListTeamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTeamsWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Performs a paged query for users in a specified workspace. You can use nameLike to filter users by fuzzy match on the username, maxResults to specify the maximum number of records per page for paging, and nextToken to retrieve the next page. If maxResults is not specified, 10 records are returned by default.
 *
 * @param request ListUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const string &workspaceId, const ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["email"] = request.getEmail();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNameLike()) {
    query["nameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Performs a paged query for users in a specified workspace. You can use nameLike to filter users by fuzzy match on the username, maxResults to specify the maximum number of records per page for paging, and nextToken to retrieve the next page. If maxResults is not specified, 10 records are returned by default.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const string &workspaceId, const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUsersWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Performs a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging.
 *
 * @description ## Request description\\nPerforms a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging. You can use nextToken to obtain the next page, skip to skip a specified number of workspaces, maxResults to specify the maximum number of records per page, and nameLike to perform fuzzy filtering by workspace name. If maxResults is not specified or is set to 0, the server returns 20 records by default.\\n
 *
 * @param request ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    query["skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Performs a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging.
 *
 * @description ## Request description\\nPerforms a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging. You can use nextToken to obtain the next page, skip to skip a specified number of workspaces, maxResults to specify the maximum number of records per page, and nameLike to perform fuzzy filtering by workspace name. If maxResults is not specified or is set to 0, the server returns 20 records by default.\\n
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary Takes the online version of a specified Skill offline so that it is no longer used as the online version.
 *
 * @description ## Operation description
 * Takes the online version of a specified Skill offline so that it is no longer used as the online version.
 *
 * @param tmpReq OfflineSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineSkillResponse
 */
OfflineSkillResponse Client::offlineSkillWithOptions(const string &workspaceId, const string &skillName, const OfflineSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OfflineSkillShrinkRequest request = OfflineSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineSkill"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/actions/offline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineSkillResponse>();
}

/**
 * @summary Takes the online version of a specified Skill offline so that it is no longer used as the online version.
 *
 * @description ## Operation description
 * Takes the online version of a specified Skill offline so that it is no longer used as the online version.
 *
 * @param request OfflineSkillRequest
 * @return OfflineSkillResponse
 */
OfflineSkillResponse Client::offlineSkill(const string &workspaceId, const string &skillName, const OfflineSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return offlineSkillWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Sets a specified Skill version as the online version.
 *
 * @description ## Operation description
 * Sets a specified Skill version as the online version.
 *
 * @param tmpReq OnlineSkillRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineSkillResponse
 */
OnlineSkillResponse Client::onlineSkillWithOptions(const string &workspaceId, const string &skillName, const OnlineSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OnlineSkillShrinkRequest request = OnlineSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineSkill"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/actions/online")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineSkillResponse>();
}

/**
 * @summary Sets a specified Skill version as the online version.
 *
 * @description ## Operation description
 * Sets a specified Skill version as the online version.
 *
 * @param request OnlineSkillRequest
 * @return OnlineSkillResponse
 */
OnlineSkillResponse Client::onlineSkill(const string &workspaceId, const string &skillName, const OnlineSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return onlineSkillWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
 *
 * @description ## Operation description
 * Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
 *
 * @param tmpReq PrecheckSkillUploadViaOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrecheckSkillUploadViaOssResponse
 */
PrecheckSkillUploadViaOssResponse Client::precheckSkillUploadViaOssWithOptions(const string &workspaceId, const PrecheckSkillUploadViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PrecheckSkillUploadViaOssShrinkRequest request = PrecheckSkillUploadViaOssShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PrecheckSkillUploadViaOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skill-actions/precheck-upload-via-oss")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrecheckSkillUploadViaOssResponse>();
}

/**
 * @summary Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
 *
 * @description ## Operation description
 * Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
 *
 * @param request PrecheckSkillUploadViaOssRequest
 * @return PrecheckSkillUploadViaOssResponse
 */
PrecheckSkillUploadViaOssResponse Client::precheckSkillUploadViaOss(const string &workspaceId, const PrecheckSkillUploadViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return precheckSkillUploadViaOssWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Prepares the SCIM receiving configuration and returns the provisioning URL and credential summary. Issues a token if no available credentials exist and returns the plaintext only for the current request. This operation does not automatically enable user synchronization.
 *
 * @description ## Features and prerequisites
 * Requires an available CustomSSO shared user pool. Does not depend on SAML metadata and is not blocked by SAML updates or update failures. Synchronously calls AgentIdentity to enable SCIM receiving and reads the configuration and credential list. Reuses the existing configuration if receiving is already enabled. Repeated initialization does not create duplicate valid credentials or automatically enable user synchronization. If an enabled and unexpired credential exists, returns its summary and sets the token to null. If no available credentials exist, creates one and returns the token only for the current request. Existing invalid or expired credentials are not automatically deleted and may still count towards the upstream limit of two credentials.
 * The prepare operation enables receiving and may issue credentials, but does not set the AC syncEnabled parameter, initiate the first import, or indicate that the external provisioning connection test has passed. After configuring the baseUrl and the current token in the external provisioning system, call UpdateIdentityProviderSCIM to confirm and enable synchronization. Existing tokens cannot be retrieved. If the response is lost, query the credential list first instead of automatically reissuing a token. Do not log tokens or persist them in frontend caches.
 * ## Requests and examples
 * POST /workspaces/{workspaceId}/scim-provisioning/prepare
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business data. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not log the keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * POST /workspaces/ws-example/scim-provisioning/prepare
 * No business request body.
 * ```
 * ## Response example
 * ```json
 * {
 *   "data": {
 *     "configuration": {
 *       "status": "Enabled",
 *       "baseUrl": "https://example.com/scim/v2"
 *     },
 *     "credential": {
 *       "credentialId": "credential-example",
 *       "status": "Enabled",
 *       "expireTime": "<Expiration time returned by the upstream>"
 *     },
 *     "token": "<Token newly issued only for this request; null if an available credential already exists>"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to the upstream may return 503 IdentityProviderProvisioningUnavailable if they fail. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace not found errors follow the common error handling.
 * 400 LimitExceeded.ScimCredential: The maximum of two credentials has been reached. You must explicitly delete one credential and try again. Credentials are not automatically deleted, rotated, or expanded. 400 InvalidParameter: The shared pool is unavailable. This call may have enabled upstream receiving and then reported an error due to issuance failure. The error does not mean that the operation has been automatically rolled back.
 * ## Call relationships and usage boundaries
 * The shared pool is created by using CreateIdentityProvider with identityProviderType set to CustomSSO. SAML configuration is not required. If an existing credential is reused and the token is null, use the token already saved by the user. Do not configure a null value in the external system. If the token is lost, call ListIdentityProviderSCIMCredentials to check first, and then explicitly call CreateIdentityProviderSCIMCredential to issue a new one. When the limit of two credentials is reached, the user must confirm and delete the unused one.
 *
 * @param request PrepareIdentityProviderSCIMRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PrepareIdentityProviderSCIMResponse
 */
PrepareIdentityProviderSCIMResponse Client::prepareIdentityProviderSCIMWithOptions(const string &workspaceId, const PrepareIdentityProviderSCIMRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PrepareIdentityProviderSCIM"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/scim-provisioning/prepare")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PrepareIdentityProviderSCIMResponse>();
}

/**
 * @summary Prepares the SCIM receiving configuration and returns the provisioning URL and credential summary. Issues a token if no available credentials exist and returns the plaintext only for the current request. This operation does not automatically enable user synchronization.
 *
 * @description ## Features and prerequisites
 * Requires an available CustomSSO shared user pool. Does not depend on SAML metadata and is not blocked by SAML updates or update failures. Synchronously calls AgentIdentity to enable SCIM receiving and reads the configuration and credential list. Reuses the existing configuration if receiving is already enabled. Repeated initialization does not create duplicate valid credentials or automatically enable user synchronization. If an enabled and unexpired credential exists, returns its summary and sets the token to null. If no available credentials exist, creates one and returns the token only for the current request. Existing invalid or expired credentials are not automatically deleted and may still count towards the upstream limit of two credentials.
 * The prepare operation enables receiving and may issue credentials, but does not set the AC syncEnabled parameter, initiate the first import, or indicate that the external provisioning connection test has passed. After configuring the baseUrl and the current token in the external provisioning system, call UpdateIdentityProviderSCIM to confirm and enable synchronization. Existing tokens cannot be retrieved. If the response is lost, query the credential list first instead of automatically reissuing a token. Do not log tokens or persist them in frontend caches.
 * ## Requests and examples
 * POST /workspaces/{workspaceId}/scim-provisioning/prepare
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey pair or STS token that has permissions on the identity source resources of the workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API, not the extra body wrapper of the backend direct connection API. The response example shows only the business data. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not log the keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * POST /workspaces/ws-example/scim-provisioning/prepare
 * No business request body.
 * ```
 * ## Response example
 * ```json
 * {
 *   "data": {
 *     "configuration": {
 *       "status": "Enabled",
 *       "baseUrl": "https://example.com/scim/v2"
 *     },
 *     "credential": {
 *       "credentialId": "credential-example",
 *       "status": "Enabled",
 *       "expireTime": "<Expiration time returned by the upstream>"
 *     },
 *     "token": "<Token newly issued only for this request; null if an available credential already exists>"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. Synchronous calls to the upstream may return 503 IdentityProviderProvisioningUnavailable if they fail. Retain the request ID for troubleshooting and do not interpret read failures as unconfigured. Actual authentication and workspace not found errors follow the common error handling.
 * 400 LimitExceeded.ScimCredential: The maximum of two credentials has been reached. You must explicitly delete one credential and try again. Credentials are not automatically deleted, rotated, or expanded. 400 InvalidParameter: The shared pool is unavailable. This call may have enabled upstream receiving and then reported an error due to issuance failure. The error does not mean that the operation has been automatically rolled back.
 * ## Call relationships and usage boundaries
 * The shared pool is created by using CreateIdentityProvider with identityProviderType set to CustomSSO. SAML configuration is not required. If an existing credential is reused and the token is null, use the token already saved by the user. Do not configure a null value in the external system. If the token is lost, call ListIdentityProviderSCIMCredentials to check first, and then explicitly call CreateIdentityProviderSCIMCredential to issue a new one. When the limit of two credentials is reached, the user must confirm and delete the unused one.
 *
 * @param request PrepareIdentityProviderSCIMRequest
 * @return PrepareIdentityProviderSCIMResponse
 */
PrepareIdentityProviderSCIMResponse Client::prepareIdentityProviderSCIM(const string &workspaceId, const PrepareIdentityProviderSCIMRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return prepareIdentityProviderSCIMWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Publishes a specified Skill version to transition it to the published state.
 *
 * @description ## Operation description
 * Publishes a specified Skill version to transition it to the published state.
 *
 * @param tmpReq PublishSkillVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishSkillVersionResponse
 */
PublishSkillVersionResponse Client::publishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const PublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PublishSkillVersionShrinkRequest request = PublishSkillVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishSkillVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(skillVersion) , "/actions/publish")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishSkillVersionResponse>();
}

/**
 * @summary Publishes a specified Skill version to transition it to the published state.
 *
 * @description ## Operation description
 * Publishes a specified Skill version to transition it to the published state.
 *
 * @param request PublishSkillVersionRequest
 * @return PublishSkillVersionResponse
 */
PublishSkillVersionResponse Client::publishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const PublishSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishSkillVersionWithOptions(workspaceId, skillName, skillVersion, request, headers, runtime);
}

/**
 * @summary Converts a specified Skill version back to an editable draft so that you can continue to modify it.
 *
 * @description ## Request description
 * Converts a specified Skill version back to an editable draft so that you can continue to modify it.
 *
 * @param tmpReq RedraftSkillVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedraftSkillVersionResponse
 */
RedraftSkillVersionResponse Client::redraftSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const RedraftSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RedraftSkillVersionShrinkRequest request = RedraftSkillVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RedraftSkillVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(skillVersion) , "/actions/redraft")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RedraftSkillVersionResponse>();
}

/**
 * @summary Converts a specified Skill version back to an editable draft so that you can continue to modify it.
 *
 * @description ## Request description
 * Converts a specified Skill version back to an editable draft so that you can continue to modify it.
 *
 * @param request RedraftSkillVersionRequest
 * @return RedraftSkillVersionResponse
 */
RedraftSkillVersionResponse Client::redraftSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const RedraftSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return redraftSkillVersionWithOptions(workspaceId, skillName, skillVersion, request, headers, runtime);
}

/**
 * @summary Resets the logon password of a specified user. You can specify the user by using agentCoreUserId or username, and you must specify at least one of them. This operation only supports resetting passwords for users who use local password authentication in the workspace. If you do not specify the password parameter, the server generates a random password and returns it in the response.
 *
 * @param tmpReq ResetUserPasswordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const string &workspaceId, const ResetUserPasswordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ResetUserPasswordShrinkRequest request = ResetUserPasswordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetUserPassword"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/users/actions/reset-password")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetUserPasswordResponse>();
}

/**
 * @summary Resets the logon password of a specified user. You can specify the user by using agentCoreUserId or username, and you must specify at least one of them. This operation only supports resetting passwords for users who use local password authentication in the workspace. If you do not specify the password parameter, the server generates a random password and returns it in the response.
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const string &workspaceId, const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resetUserPasswordWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retries the image cache.
 *
 * @description Retries the image cache for the original ImageId in the current workspace. WorkspaceId is required. The business request body is not required and can be omitted or provided as an empty object. The source authorization and transfer network reuse the trusted context of the original registration. If a digest exists, the retry uses the original digest. If no digest exists, the original tag is resolved again. A new request for a FAILED status can start a new production round. PENDING and READY statuses are reused. DELETING status is rejected, and deleted resources are not recreated. PUBLIC and PRIVATE statuses reuse the pull authorization of the original workspace. Returns a complete acceptance snapshot and retains the original ImageId and CreatedAt. ClientToken does not guarantee request deduplication. If the result is not confirmed, query the real-time status first before deciding whether to resubmit.
 *
 * @param tmpReq RetryImageCacheRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryImageCacheResponse
 */
RetryImageCacheResponse Client::retryImageCacheWithOptions(const string &imageId, const RetryImageCacheRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RetryImageCacheShrinkRequest request = RetryImageCacheShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["regionId"] = request.getRegionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetryImageCache"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/image-caches/" , Darabonba::Encode::Encoder::percentEncode(imageId) , "/retry")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryImageCacheResponse>();
}

/**
 * @summary Retries the image cache.
 *
 * @description Retries the image cache for the original ImageId in the current workspace. WorkspaceId is required. The business request body is not required and can be omitted or provided as an empty object. The source authorization and transfer network reuse the trusted context of the original registration. If a digest exists, the retry uses the original digest. If no digest exists, the original tag is resolved again. A new request for a FAILED status can start a new production round. PENDING and READY statuses are reused. DELETING status is rejected, and deleted resources are not recreated. PUBLIC and PRIVATE statuses reuse the pull authorization of the original workspace. Returns a complete acceptance snapshot and retains the original ImageId and CreatedAt. ClientToken does not guarantee request deduplication. If the result is not confirmed, query the real-time status first before deciding whether to resubmit.
 *
 * @param request RetryImageCacheRequest
 * @return RetryImageCacheResponse
 */
RetryImageCacheResponse Client::retryImageCache(const string &imageId, const RetryImageCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return retryImageCacheWithOptions(imageId, request, headers, runtime);
}

/**
 * @summary Retrieves long-term memory from a MemoryStore based on semantics.
 *
 * @description Retrieves long-term memory from a MemoryStore based on semantics.
 *
 * @param tmpReq SearchMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMemoriesResponse
 */
SearchMemoriesResponse Client::searchMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const SearchMemoriesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchMemoriesShrinkRequest request = SearchMemoriesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchMemories"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memories/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMemoriesResponse>();
}

/**
 * @summary Retrieves long-term memory from a MemoryStore based on semantics.
 *
 * @description Retrieves long-term memory from a MemoryStore based on semantics.
 *
 * @param request SearchMemoriesRequest
 * @return SearchMemoriesResponse
 */
SearchMemoriesResponse Client::searchMemories(const string &workspaceId, const string &memoryStoreName, const SearchMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchMemoriesWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
 *
 * @description ## Request description
 * Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
 *
 * @param tmpReq SubmitAgentSpecVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAgentSpecVersionResponse
 */
SubmitAgentSpecVersionResponse Client::submitAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const SubmitAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAgentSpecVersionShrinkRequest request = SubmitAgentSpecVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitAgentSpecVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(agentSpecVersion) , "/actions/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAgentSpecVersionResponse>();
}

/**
 * @summary Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
 *
 * @description ## Request description
 * Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
 *
 * @param request SubmitAgentSpecVersionRequest
 * @return SubmitAgentSpecVersionResponse
 */
SubmitAgentSpecVersionResponse Client::submitAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const SubmitAgentSpecVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitAgentSpecVersionWithOptions(workspaceId, agentSpecName, agentSpecVersion, request, headers, runtime);
}

/**
 * @summary Submits a specified draft version of a skill for review.
 *
 * @description ## Operation description
 * Submits a specified draft version of a skill for review.
 *
 * @param tmpReq SubmitSkillVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSkillVersionResponse
 */
SubmitSkillVersionResponse Client::submitSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const SubmitSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSkillVersionShrinkRequest request = SubmitSkillVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitSkillVersion"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(skillVersion) , "/actions/submit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSkillVersionResponse>();
}

/**
 * @summary Submits a specified draft version of a skill for review.
 *
 * @description ## Operation description
 * Submits a specified draft version of a skill for review.
 *
 * @param request SubmitSkillVersionRequest
 * @return SubmitSkillVersionResponse
 */
SubmitSkillVersionResponse Client::submitSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const SubmitSkillVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return submitSkillVersionWithOptions(workspaceId, skillName, skillVersion, request, headers, runtime);
}

/**
 * @summary Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
 *
 * @description Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
 *
 * @param tmpReq UpdateAgentIMChannelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentIMChannelResponse
 */
UpdateAgentIMChannelResponse Client::updateAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const UpdateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAgentIMChannelShrinkRequest request = UpdateAgentIMChannelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentIMChannel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/im-channels/" , Darabonba::Encode::Encoder::percentEncode(imChannelId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentIMChannelResponse>();
}

/**
 * @summary Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
 *
 * @description Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
 *
 * @param request UpdateAgentIMChannelRequest
 * @return UpdateAgentIMChannelResponse
 */
UpdateAgentIMChannelResponse Client::updateAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const UpdateAgentIMChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentIMChannelWithOptions(workspaceId, agentId, imChannelId, request, headers, runtime);
}

/**
 * @summary Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
 *
 * @description Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
 *
 * @param tmpReq UpdateAgentIMChannelCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentIMChannelCredentialResponse
 */
UpdateAgentIMChannelCredentialResponse Client::updateAgentIMChannelCredentialWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const UpdateAgentIMChannelCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAgentIMChannelCredentialShrinkRequest request = UpdateAgentIMChannelCredentialShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentIMChannelCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agents/" , Darabonba::Encode::Encoder::percentEncode(agentId) , "/im-channels/" , Darabonba::Encode::Encoder::percentEncode(imChannelId) , "/actions/update-credential")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentIMChannelCredentialResponse>();
}

/**
 * @summary Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
 *
 * @description Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
 *
 * @param request UpdateAgentIMChannelCredentialRequest
 * @return UpdateAgentIMChannelCredentialResponse
 */
UpdateAgentIMChannelCredentialResponse Client::updateAgentIMChannelCredential(const string &workspaceId, const string &agentId, const string &imChannelId, const UpdateAgentIMChannelCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentIMChannelCredentialWithOptions(workspaceId, agentId, imChannelId, request, headers, runtime);
}

/**
 * @summary Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
 *
 * @description ## Operation description
 * Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
 *
 * @param tmpReq UpdateAgentSpecRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentSpecResponse
 */
UpdateAgentSpecResponse Client::updateAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const UpdateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAgentSpecShrinkRequest request = UpdateAgentSpecShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentSpec"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-specs/" , Darabonba::Encode::Encoder::percentEncode(agentSpecName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentSpecResponse>();
}

/**
 * @summary Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
 *
 * @description ## Operation description
 * Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
 *
 * @param request UpdateAgentSpecRequest
 * @return UpdateAgentSpecResponse
 */
UpdateAgentSpecResponse Client::updateAgentSpec(const string &workspaceId, const string &agentSpecName, const UpdateAgentSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentSpecWithOptions(workspaceId, agentSpecName, request, headers, runtime);
}

/**
 * @summary Updates the API Key or Service Account Key collection for an enabled QoderCLI Connector. When serviceAccountKeys is submitted, the service treats it as the complete updated key collection and performs additions, renames, rotations, and deletions accordingly.
 *
 * @description Updates the sensitive configuration of a specified Connector and aligns Service Account Keys by ID.
 *
 * @param tmpReq UpdateConnectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnectorResponse
 */
UpdateConnectorResponse Client::updateConnectorWithOptions(const string &workspaceId, const string &connectorName, const UpdateConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConnectorShrinkRequest request = UpdateConnectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConnector"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/connectors/" , Darabonba::Encode::Encoder::percentEncode(connectorName) , "/actions/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConnectorResponse>();
}

/**
 * @summary Updates the API Key or Service Account Key collection for an enabled QoderCLI Connector. When serviceAccountKeys is submitted, the service treats it as the complete updated key collection and performs additions, renames, rotations, and deletions accordingly.
 *
 * @description Updates the sensitive configuration of a specified Connector and aligns Service Account Keys by ID.
 *
 * @param request UpdateConnectorRequest
 * @return UpdateConnectorResponse
 */
UpdateConnectorResponse Client::updateConnector(const string &workspaceId, const string &connectorName, const UpdateConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConnectorWithOptions(workspaceId, connectorName, request, headers, runtime);
}

/**
 * @summary Updates the content or description of a specified credential. You must specify at least one of credentialMetadata and description. Unspecified attributes remain unchanged. The credential name and credential type cannot be modified after creation.
 *
 * @description Updates the metadata or application scope of a specified credential.
 *
 * @param tmpReq UpdateCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredentialWithOptions(const string &workspaceId, const string &credentialId, const UpdateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCredentialShrinkRequest request = UpdateCredentialShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCredential"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialResponse>();
}

/**
 * @summary Updates the content or description of a specified credential. You must specify at least one of credentialMetadata and description. Unspecified attributes remain unchanged. The credential name and credential type cannot be modified after creation.
 *
 * @description Updates the metadata or application scope of a specified credential.
 *
 * @param request UpdateCredentialRequest
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredential(const string &workspaceId, const string &credentialId, const UpdateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCredentialWithOptions(workspaceId, credentialId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a custom agent in a specified workspace and executes the update asynchronously. Omitted top-level fields retain their original configurations. You can call GetCustomAgent to query the update result.
 *
 * @description Specify at least one top-level field to update. Omitted top-level fields retain their original configurations. When you provide a configuration object, you must also specify its required subfields and include any optional configurations that you want to retain. Arrays are replaced as a whole. Pass an empty array [] to clear a list. The agenticFsMounts field does not accept null. Pass null for the description field to clear the description, and pass null for the healthCheck field to remove the health check.
 * When you update an image, you must specify artifact.port and the type, instanceId, namespace, repo, and tag fields of artifact.container. To retain a custom startup command, you must also provide the entrypoint field.
 * In code package pattern, specify artifact.port and the sourceUri, languageRuntime, and entrypoint fields of artifact.code. Do not specify the container field at the same time. Dependencies must be packaged by the user. ZIP and TAR.GZ formats are supported. The compressed package size cannot exceed 500,000,000 bytes. You can call ListAgentCodeRuntimes to query the runtime environment identity. The sourceUri field supports oss:// addresses or HTTPS object addresses of standard OSS public domain names, including signed URLs. For local files, call GetAgentCodePackageUploadUrl to obtain an upload URL, upload the file directly, and then commit the returned sourceUri.
 * When you submit a new code package source, the backend rechecks the read permissions, object, and size. The configuration is saved only after the transfer succeeds. If the transfer fails, the current configuration is not saved. Saved fixed packages can be reused. Set the client timeout to 210 seconds for code package requests. Archive integrity and secure decompression are checked at startup. A successful acceptance does not indicate that the agent is ready to run.
 * When you provide the runtime field, the compute and sessionPolicy fields must also be provided. If you omit the hpa field or its subfields, unspecified elastic configurations use default values. To retain the original elastic configurations, you must provide them together. When you provide the network field, omitted access items are treated as allowed, but actual access is still restricted by the workspace network. To retain the original restrictions, provide both accessInternet and accessVpc. When you provide the healthCheck field, you must specify the port field. Other unspecified items use default values. When you provide the logging.sls field, you must specify both the project and logstore fields.
 * The update is an asynchronous process. A successful response indicates that the request is accepted. You can call GetCustomAgent to query latestSpecVersion, latestVersionStatus, and latestExecutionError, and check the status field to confirm the update result.
 * The clientToken field does not currently provide idempotency guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold field for health checks does not currently take effect. Omit this field.
 *
 * @param tmpReq UpdateCustomAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomAgentResponse
 */
UpdateCustomAgentResponse Client::updateCustomAgentWithOptions(const string &workspaceId, const string &agentId, const UpdateCustomAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCustomAgentShrinkRequest request = UpdateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCustomAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/custom-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomAgentResponse>();
}

/**
 * @summary Updates the configuration of a custom agent in a specified workspace and executes the update asynchronously. Omitted top-level fields retain their original configurations. You can call GetCustomAgent to query the update result.
 *
 * @description Specify at least one top-level field to update. Omitted top-level fields retain their original configurations. When you provide a configuration object, you must also specify its required subfields and include any optional configurations that you want to retain. Arrays are replaced as a whole. Pass an empty array [] to clear a list. The agenticFsMounts field does not accept null. Pass null for the description field to clear the description, and pass null for the healthCheck field to remove the health check.
 * When you update an image, you must specify artifact.port and the type, instanceId, namespace, repo, and tag fields of artifact.container. To retain a custom startup command, you must also provide the entrypoint field.
 * In code package pattern, specify artifact.port and the sourceUri, languageRuntime, and entrypoint fields of artifact.code. Do not specify the container field at the same time. Dependencies must be packaged by the user. ZIP and TAR.GZ formats are supported. The compressed package size cannot exceed 500,000,000 bytes. You can call ListAgentCodeRuntimes to query the runtime environment identity. The sourceUri field supports oss:// addresses or HTTPS object addresses of standard OSS public domain names, including signed URLs. For local files, call GetAgentCodePackageUploadUrl to obtain an upload URL, upload the file directly, and then commit the returned sourceUri.
 * When you submit a new code package source, the backend rechecks the read permissions, object, and size. The configuration is saved only after the transfer succeeds. If the transfer fails, the current configuration is not saved. Saved fixed packages can be reused. Set the client timeout to 210 seconds for code package requests. Archive integrity and secure decompression are checked at startup. A successful acceptance does not indicate that the agent is ready to run.
 * When you provide the runtime field, the compute and sessionPolicy fields must also be provided. If you omit the hpa field or its subfields, unspecified elastic configurations use default values. To retain the original elastic configurations, you must provide them together. When you provide the network field, omitted access items are treated as allowed, but actual access is still restricted by the workspace network. To retain the original restrictions, provide both accessInternet and accessVpc. When you provide the healthCheck field, you must specify the port field. Other unspecified items use default values. When you provide the logging.sls field, you must specify both the project and logstore fields.
 * The update is an asynchronous process. A successful response indicates that the request is accepted. You can call GetCustomAgent to query latestSpecVersion, latestVersionStatus, and latestExecutionError, and check the status field to confirm the update result.
 * The clientToken field does not currently provide idempotency guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold field for health checks does not currently take effect. Omit this field.
 *
 * @param request UpdateCustomAgentRequest
 * @return UpdateCustomAgentResponse
 */
UpdateCustomAgentResponse Client::updateCustomAgent(const string &workspaceId, const string &agentId, const UpdateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCustomAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specified external agent.
 *
 * @description Updates the configuration of a specified external agent.
 *
 * @param tmpReq UpdateExternalAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExternalAgentResponse
 */
UpdateExternalAgentResponse Client::updateExternalAgentWithOptions(const string &workspaceId, const string &agentId, const UpdateExternalAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateExternalAgentShrinkRequest request = UpdateExternalAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExternalAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/external-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExternalAgentResponse>();
}

/**
 * @summary Updates the configuration of a specified external agent.
 *
 * @description Updates the configuration of a specified external agent.
 *
 * @param request UpdateExternalAgentRequest
 * @return UpdateExternalAgentResponse
 */
UpdateExternalAgentResponse Client::updateExternalAgent(const string &workspaceId, const string &agentId, const UpdateExternalAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExternalAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Modifies the logon configuration of a bound identity provider in a specified workspace. DingTalk and Feishu support the logon switch, incremental synchronization switch, application configuration, and synchronization scope. CustomSSO supports SAML configuration and the logon switch. Actual updates take effect asynchronously. Call GetIdentityProvider to query the status.
 *
 * @description ### Prerequisites and update methods
 * The workspace must be bound to an identity provider of the corresponding type. For DingTalk and Feishu, you must submit at least one of the following fields: loginEnabled, syncEnabled, metadata, and syncScope. The protocol and saml fields are not accepted. For CustomSSO, use the protocol, saml, and loginEnabled fields. The metadata, syncEnabled, and syncScope fields are not accepted. The SCIM synchronization switch is managed separately by using UpdateIdentityProviderSCIM.
 * ### DingTalk and Feishu
 * The metadata field is merged by field. Submit only the fields that need to be updated. Omitted fields and existing keys remain unchanged. Explicitly submitting null, empty strings, or blank strings is rejected. The server validates the complete configuration after merging. When incremental synchronization is enabled, the merged configuration must include the encryptKey and verificationToken fields.
 * The syncEnabled field controls subsequent address book change events and does not control the initial synchronization or manual synchronization. The syncScope field applies only to DingTalk and Feishu. If this field is omitted or set to null, the current scope is retained. Saving the scope does not automatically trigger a full synchronization. To perform a manual synchronization, call CreateIdentityProviderSyncJob after the save operation is complete and the identity provider is ready, and then call GetIdentityProviderSyncJob to query the task result.
 * ### Custom SAML identity provider
 * CustomSSO currently supports only SAML. The saml field supports two mutually exclusive methods: providing metadataXml, or providing the four manually entered configuration fields: entityId, loginUrl, bindingType, and x509Certificates.
 * The metadataXml field is a single IdP EntityDescriptor XML text of up to 1 MiB, not a URL or file path. DTD and external entities are prohibited. When manually entering the configuration, the entityId field must be non-empty and contain up to 2,048 characters, and cannot be changed after saving. The loginUrl field must be an absolute HTTPS URL without user credentials and fragments. The bindingType field must be HTTP-Redirect or HTTP-POST. The certificates must be valid X.509 signing certificates, with a maximum of 10 certificates.
 * The jitProvisionEnabled field controls the automatic creation of users during the initial logon. The jitUpdateEnabled field controls whether user information is updated during logon. Omitting these switches during an update retains the existing values. Modifying only the JIT switches also requires an existing valid SAML configuration. Saving the SAML configuration does not automatically enable logon. A valid configuration must exist before enabling logon. Setting loginEnabled to false only triggers a shutdown of logon and does not delete the saved SAML or SCIM configuration.
 * ### Asynchronous results and retries
 * When actual changes exist, the expected configuration and the UPDATING status of the identity provider are returned. The CONFIGURED status may also be returned when resource configuration is restored. Call GetIdentityProvider to wait for the READY status. If the operation fails, check for statuses such as UPDATE_FAILED. If the configuration is identical and no restoration is required, the current binding may be returned directly without generating a new task. A successful HTTP request does not indicate that the background task or upstream configuration has taken effect.
 * Operation conflicts occur when in-flight operations exist. If a submission times out, query the configuration and status before deciding whether to retry. The status field describes the status of the identity provider resource and logon configuration. The SCIM operation results for CustomSSO must be queried by using GetIdentityProviderSCIM and cannot be inferred from this status.
 *
 * @param tmpReq UpdateIdentityProviderRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const UpdateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateIdentityProviderShrinkRequest request = UpdateIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIdentityProvider"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/identity-providers/" , Darabonba::Encode::Encoder::percentEncode(identityProviderType))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIdentityProviderResponse>();
}

/**
 * @summary Modifies the logon configuration of a bound identity provider in a specified workspace. DingTalk and Feishu support the logon switch, incremental synchronization switch, application configuration, and synchronization scope. CustomSSO supports SAML configuration and the logon switch. Actual updates take effect asynchronously. Call GetIdentityProvider to query the status.
 *
 * @description ### Prerequisites and update methods
 * The workspace must be bound to an identity provider of the corresponding type. For DingTalk and Feishu, you must submit at least one of the following fields: loginEnabled, syncEnabled, metadata, and syncScope. The protocol and saml fields are not accepted. For CustomSSO, use the protocol, saml, and loginEnabled fields. The metadata, syncEnabled, and syncScope fields are not accepted. The SCIM synchronization switch is managed separately by using UpdateIdentityProviderSCIM.
 * ### DingTalk and Feishu
 * The metadata field is merged by field. Submit only the fields that need to be updated. Omitted fields and existing keys remain unchanged. Explicitly submitting null, empty strings, or blank strings is rejected. The server validates the complete configuration after merging. When incremental synchronization is enabled, the merged configuration must include the encryptKey and verificationToken fields.
 * The syncEnabled field controls subsequent address book change events and does not control the initial synchronization or manual synchronization. The syncScope field applies only to DingTalk and Feishu. If this field is omitted or set to null, the current scope is retained. Saving the scope does not automatically trigger a full synchronization. To perform a manual synchronization, call CreateIdentityProviderSyncJob after the save operation is complete and the identity provider is ready, and then call GetIdentityProviderSyncJob to query the task result.
 * ### Custom SAML identity provider
 * CustomSSO currently supports only SAML. The saml field supports two mutually exclusive methods: providing metadataXml, or providing the four manually entered configuration fields: entityId, loginUrl, bindingType, and x509Certificates.
 * The metadataXml field is a single IdP EntityDescriptor XML text of up to 1 MiB, not a URL or file path. DTD and external entities are prohibited. When manually entering the configuration, the entityId field must be non-empty and contain up to 2,048 characters, and cannot be changed after saving. The loginUrl field must be an absolute HTTPS URL without user credentials and fragments. The bindingType field must be HTTP-Redirect or HTTP-POST. The certificates must be valid X.509 signing certificates, with a maximum of 10 certificates.
 * The jitProvisionEnabled field controls the automatic creation of users during the initial logon. The jitUpdateEnabled field controls whether user information is updated during logon. Omitting these switches during an update retains the existing values. Modifying only the JIT switches also requires an existing valid SAML configuration. Saving the SAML configuration does not automatically enable logon. A valid configuration must exist before enabling logon. Setting loginEnabled to false only triggers a shutdown of logon and does not delete the saved SAML or SCIM configuration.
 * ### Asynchronous results and retries
 * When actual changes exist, the expected configuration and the UPDATING status of the identity provider are returned. The CONFIGURED status may also be returned when resource configuration is restored. Call GetIdentityProvider to wait for the READY status. If the operation fails, check for statuses such as UPDATE_FAILED. If the configuration is identical and no restoration is required, the current binding may be returned directly without generating a new task. A successful HTTP request does not indicate that the background task or upstream configuration has taken effect.
 * Operation conflicts occur when in-flight operations exist. If a submission times out, query the configuration and status before deciding whether to retry. The status field describes the status of the identity provider resource and logon configuration. The SCIM operation results for CustomSSO must be queried by using GetIdentityProviderSCIM and cannot be inferred from this status.
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const string &workspaceId, const string &identityProviderType, const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIdentityProviderWithOptions(workspaceId, identityProviderType, request, headers, runtime);
}

/**
 * @summary Enables or disables SCIM-based user synchronization independently. When enabled, the initial full import is executed asynchronously. You can query the result by calling GetIdentityProviderSCIM. The SAML logon configuration is retained.
 *
 * @description ## Features and prerequisites
 * The syncEnabled parameter is required. If you set this parameter to true, a task is submitted to independently enable SCIM and perform the initial full user import. During execution, the AgentIdentity receiving status must be Enabled, and an Enabled and unexpired credential must exist. Therefore, you must first call the prepare operation and complete the URL and token configuration in the external system. If you set this parameter to false, a task is submitted to disable synchronization and upstream receiving. Existing users, credentials, and SAML logon configurations are retained. If you re-enable the feature later and receiving is disabled, you must call the prepare operation again.
 * After the request is accepted, the expected switch status in AC is saved and an independent SCIM task is submitted. The original shared binding fields are returned, and the status field still indicates the status of shared resources and logon configurations. The new scimStatus field indicates the independent SCIM status, and the operationStatus field indicates task result of the original SCIM task. The SCIM taskId is not returned. You can call GetIdentityProviderSCIM to query task result. The prerequisite checks for enabling the feature are executed within the task. If the prerequisites are not met, you may receive a successful request response first, and then the operationStatus becomes FAILED. A failure does not automatically roll back the expected switch status.
 * SCIM does not depend on SAML configurations and does not affect the SAML status or switch. A successful task or a successful full import of empty users does not prove that continuous incremental synchronization is healthy. Whether users exist depends on whether the external system actually pre-provisions them.
 * The scimStatus field indicates the independent SCIM configuration status. UNCONFIGURED: The preparation is not completed. WAITING_CONFIGURATION: The receiving end is enabled, the HTTPS URL is valid, and a valid token exists. The system is waiting for external configuration and enablement confirmation. UPDATING: The enablement or disablement is being executed. READY: Synchronization is enabled and the current enablement task is successful. The receiving end, URL, and credentials are still available. DISABLED: The feature is disabled and the configuration is retained. UPDATE_FAILED: The operation failed, was paused, was canceled, or the configuration and credentials became unavailable after enablement. The original facts of configuration, syncEnabled, and operationStatus are retained. The SAML or OIDC binding status is not used to determine the SCIM status. The READY status does not prove that Matrix execution is completed, the external connection test is passed, or continuous incremental synchronization is healthy.
 * ## Requests and examples
 * PUT /workspaces/{workspaceId}/scim-provisioning
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey pair or STS credential that has permissions on the identity provider resources of the corresponding workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API, not the additional body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * PUT /workspaces/ws-example/scim-provisioning
 * {"syncEnabled": true}
 * To disable the feature: {"syncEnabled": false}
 * ```
 * ## Response example
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "status": "READY",
 *     "loginEnabled": false,
 *     "scimStatus": "UPDATING",
 *     "syncEnabled": true,
 *     "operationStatus": "PENDING"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. A synchronous call failure to the upstream system may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 400 InvalidParameter: The syncEnabled parameter is missing. 404 IdentityProviderNotFound: No CustomSSO binding exists. 409 IdentityProviderOperationConflict: The user pool is not ready, is being unbound, failed to unbind, or has a concurrent status conflict. If the upstream system is not enabled or has no valid credentials, it may manifest as an asynchronous FAILED status after acceptance. You cannot only handle HTTP errors.
 * ## Call relationships and usage boundaries
 * The call example for enabling the feature is body={"syncEnabled":true}, and for disabling the feature is body={"syncEnabled":false}. This API retains the original binding details and the meaning of the status field, and adds the scimStatus and operationStatus fields. After acceptance, call GetIdentityProviderSCIM to query the independent status and operationStatus. Pre-provisioning tests or user assignments for external IdPs must still be completed in the external system. AC does not configure external IdPs for users.
 *
 * @param tmpReq UpdateIdentityProviderSCIMRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderSCIMResponse
 */
UpdateIdentityProviderSCIMResponse Client::updateIdentityProviderSCIMWithOptions(const string &workspaceId, const UpdateIdentityProviderSCIMRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateIdentityProviderSCIMShrinkRequest request = UpdateIdentityProviderSCIMShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIdentityProviderSCIM"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/scim-provisioning")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIdentityProviderSCIMResponse>();
}

/**
 * @summary Enables or disables SCIM-based user synchronization independently. When enabled, the initial full import is executed asynchronously. You can query the result by calling GetIdentityProviderSCIM. The SAML logon configuration is retained.
 *
 * @description ## Features and prerequisites
 * The syncEnabled parameter is required. If you set this parameter to true, a task is submitted to independently enable SCIM and perform the initial full user import. During execution, the AgentIdentity receiving status must be Enabled, and an Enabled and unexpired credential must exist. Therefore, you must first call the prepare operation and complete the URL and token configuration in the external system. If you set this parameter to false, a task is submitted to disable synchronization and upstream receiving. Existing users, credentials, and SAML logon configurations are retained. If you re-enable the feature later and receiving is disabled, you must call the prepare operation again.
 * After the request is accepted, the expected switch status in AC is saved and an independent SCIM task is submitted. The original shared binding fields are returned, and the status field still indicates the status of shared resources and logon configurations. The new scimStatus field indicates the independent SCIM status, and the operationStatus field indicates task result of the original SCIM task. The SCIM taskId is not returned. You can call GetIdentityProviderSCIM to query task result. The prerequisite checks for enabling the feature are executed within the task. If the prerequisites are not met, you may receive a successful request response first, and then the operationStatus becomes FAILED. A failure does not automatically roll back the expected switch status.
 * SCIM does not depend on SAML configurations and does not affect the SAML status or switch. A successful task or a successful full import of empty users does not prove that continuous incremental synchronization is healthy. Whether users exist depends on whether the external system actually pre-provisions them.
 * The scimStatus field indicates the independent SCIM configuration status. UNCONFIGURED: The preparation is not completed. WAITING_CONFIGURATION: The receiving end is enabled, the HTTPS URL is valid, and a valid token exists. The system is waiting for external configuration and enablement confirmation. UPDATING: The enablement or disablement is being executed. READY: Synchronization is enabled and the current enablement task is successful. The receiving end, URL, and credentials are still available. DISABLED: The feature is disabled and the configuration is retained. UPDATE_FAILED: The operation failed, was paused, was canceled, or the configuration and credentials became unavailable after enablement. The original facts of configuration, syncEnabled, and operationStatus are retained. The SAML or OIDC binding status is not used to determine the SCIM status. The READY status does not prove that Matrix execution is completed, the external connection test is passed, or continuous incremental synchronization is healthy.
 * ## Requests and examples
 * PUT /workspaces/{workspaceId}/scim-provisioning
 * Call conventions: Call the API in the region of the target workspace by using an AccessKey pair or STS credential that has permissions on the identity provider resources of the corresponding workspace. The ws-example, URL, certificate, and token in the following examples are placeholder values and must be replaced with actual values. The request body example represents the body parameters of the public API, not the additional body wrapper of the backend direct connection API. The response example shows only the business part. The outer layer also includes requestId, success, code, message, and httpStatusCode. Retain the requestId for troubleshooting and do not record keys. Asynchronous business tasks do not mean that the HTTP request uses a long connection to wait for completion.
 * ```text
 * PUT /workspaces/ws-example/scim-provisioning
 * {"syncEnabled": true}
 * To disable the feature: {"syncEnabled": false}
 * ```
 * ## Response example
 * ```json
 * {
 *   "data": {
 *     "workspaceId": "ws-example",
 *     "identityProviderType": "CustomSSO",
 *     "status": "READY",
 *     "loginEnabled": false,
 *     "scimStatus": "UPDATING",
 *     "syncEnabled": true,
 *     "operationStatus": "PENDING"
 *   }
 * }
 * ```
 * ## Errors and handling
 * Error handling: 400 InvalidParameter indicates that the parameters or current configuration prerequisites are not met. 404 IdentityProviderNotFound indicates that no binding of the matching type exists. A synchronous call failure to the upstream system may return 503 IdentityProviderProvisioningUnavailable. Retain the request ID for troubleshooting and do not interpret a read failure as unconfigured. Actual authentication and workspace non-existence errors follow the common error handling process.
 * 400 InvalidParameter: The syncEnabled parameter is missing. 404 IdentityProviderNotFound: No CustomSSO binding exists. 409 IdentityProviderOperationConflict: The user pool is not ready, is being unbound, failed to unbind, or has a concurrent status conflict. If the upstream system is not enabled or has no valid credentials, it may manifest as an asynchronous FAILED status after acceptance. You cannot only handle HTTP errors.
 * ## Call relationships and usage boundaries
 * The call example for enabling the feature is body={"syncEnabled":true}, and for disabling the feature is body={"syncEnabled":false}. This API retains the original binding details and the meaning of the status field, and adds the scimStatus and operationStatus fields. After acceptance, call GetIdentityProviderSCIM to query the independent status and operationStatus. Pre-provisioning tests or user assignments for external IdPs must still be completed in the external system. AC does not configure external IdPs for users.
 *
 * @param request UpdateIdentityProviderSCIMRequest
 * @return UpdateIdentityProviderSCIMResponse
 */
UpdateIdentityProviderSCIMResponse Client::updateIdentityProviderSCIM(const string &workspaceId, const UpdateIdentityProviderSCIMRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIdentityProviderSCIMWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a specified managed agent.
 *
 * @param tmpReq UpdateManagedAgentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateManagedAgentResponse
 */
UpdateManagedAgentResponse Client::updateManagedAgentWithOptions(const string &workspaceId, const string &agentId, const UpdateManagedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateManagedAgentShrinkRequest request = UpdateManagedAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateManagedAgent"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/managed-agents/" , Darabonba::Encode::Encoder::percentEncode(agentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateManagedAgentResponse>();
}

/**
 * @summary Updates the configuration of a specified managed agent.
 *
 * @param request UpdateManagedAgentRequest
 * @return UpdateManagedAgentResponse
 */
UpdateManagedAgentResponse Client::updateManagedAgent(const string &workspaceId, const string &agentId, const UpdateManagedAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateManagedAgentWithOptions(workspaceId, agentId, request, headers, runtime);
}

/**
 * @summary Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
 *
 * @description ## Operation description
 * Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
 *
 * @param tmpReq UpdateMcpRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcpResponse
 */
UpdateMcpResponse Client::updateMcpWithOptions(const string &workspaceId, const string &mcpServerId, const UpdateMcpRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMcpShrinkRequest request = UpdateMcpShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMcp"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcpResponse>();
}

/**
 * @summary Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
 *
 * @description ## Operation description
 * Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
 *
 * @param request UpdateMcpRequest
 * @return UpdateMcpResponse
 */
UpdateMcpResponse Client::updateMcp(const string &workspaceId, const string &mcpServerId, const UpdateMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMcpWithOptions(workspaceId, mcpServerId, request, headers, runtime);
}

/**
 * @summary Updates MCP parameters by template.
 *
 * @description Updates the schema-exposed parameters by using the same template version that was bound when the MCP was created, without upgrading the template version.
 *
 * @param tmpReq UpdateMcpTemplateConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcpTemplateConfigResponse
 */
UpdateMcpTemplateConfigResponse Client::updateMcpTemplateConfigWithOptions(const string &workspaceId, const string &mcpServerId, const UpdateMcpTemplateConfigRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMcpTemplateConfigShrinkRequest request = UpdateMcpTemplateConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasTemplateVersion()) {
    query["templateVersion"] = request.getTemplateVersion();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMcpTemplateConfig"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/mcp-servers/" , Darabonba::Encode::Encoder::percentEncode(mcpServerId) , "/template-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcpTemplateConfigResponse>();
}

/**
 * @summary Updates MCP parameters by template.
 *
 * @description Updates the schema-exposed parameters by using the same template version that was bound when the MCP was created, without upgrading the template version.
 *
 * @param request UpdateMcpTemplateConfigRequest
 * @return UpdateMcpTemplateConfigResponse
 */
UpdateMcpTemplateConfigResponse Client::updateMcpTemplateConfig(const string &workspaceId, const string &mcpServerId, const UpdateMcpTemplateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMcpTemplateConfigWithOptions(workspaceId, mcpServerId, request, headers, runtime);
}

/**
 * @summary Updates the text or metadata of a long-term memory based on the memory ID.
 *
 * @description Updates the text or metadata of a long-term memory based on the memory ID.
 *
 * @param tmpReq UpdateMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const UpdateMemoryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMemoryShrinkRequest request = UpdateMemoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMemory"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memories/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryResponse>();
}

/**
 * @summary Updates the text or metadata of a long-term memory based on the memory ID.
 *
 * @description Updates the text or metadata of a long-term memory based on the memory ID.
 *
 * @param request UpdateMemoryRequest
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const UpdateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryWithOptions(workspaceId, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Updates a memory store.
 *
 * @description Updates a memory store.
 *
 * @param tmpReq UpdateMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryStoreResponse
 */
UpdateMemoryStoreResponse Client::updateMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const UpdateMemoryStoreRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMemoryStoreShrinkRequest request = UpdateMemoryStoreShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMemoryStore"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/memorystores/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryStoreResponse>();
}

/**
 * @summary Updates a memory store.
 *
 * @description Updates a memory store.
 *
 * @param request UpdateMemoryStoreRequest
 * @return UpdateMemoryStoreResponse
 */
UpdateMemoryStoreResponse Client::updateMemoryStore(const string &workspaceId, const string &memoryStoreName, const UpdateMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryStoreWithOptions(workspaceId, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Updates the description, context token limit, maximum output token count, or capability configurations of a specified model.
 *
 * @description This operation supports updating description, contextSize, maxTokens, and capabilities. You must specify at least one non-null parameter. Parameters that are not specified or are set to null retain their original values. The capabilities parameter is replaced as a whole object. Capability fields that are not specified in the object are treated as false.
 * Modifying only the description does not refresh the model configurations of associated agents. When contextSize, maxTokens, or capabilities actually change, the system asynchronously refreshes managed agents that reference the model within the same workspace, as well as external agents whose model source is PLATFORM. External agents whose model source is RUNTIME are not affected. Repeatedly submitting the same configuration does not trigger a new model configuration refresh.
 * A successful response indicates that the model configuration has been saved, but does not indicate that associated agents have completed the configuration refresh or that the runtime has loaded the new configuration. You can call GetModel to query the saved model configuration.
 *
 * @param tmpReq UpdateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModelWithOptions(const string &workspaceId, const string &modelId, const UpdateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateModelShrinkRequest request = UpdateModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModel"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/models/" , Darabonba::Encode::Encoder::percentEncode(modelId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelResponse>();
}

/**
 * @summary Updates the description, context token limit, maximum output token count, or capability configurations of a specified model.
 *
 * @description This operation supports updating description, contextSize, maxTokens, and capabilities. You must specify at least one non-null parameter. Parameters that are not specified or are set to null retain their original values. The capabilities parameter is replaced as a whole object. Capability fields that are not specified in the object are treated as false.
 * Modifying only the description does not refresh the model configurations of associated agents. When contextSize, maxTokens, or capabilities actually change, the system asynchronously refreshes managed agents that reference the model within the same workspace, as well as external agents whose model source is PLATFORM. External agents whose model source is RUNTIME are not affected. Repeatedly submitting the same configuration does not trigger a new model configuration refresh.
 * A successful response indicates that the model configuration has been saved, but does not indicate that associated agents have completed the configuration refresh or that the runtime has loaded the new configuration. You can call GetModel to query the saved model configuration.
 *
 * @param request UpdateModelRequest
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModel(const string &workspaceId, const string &modelId, const UpdateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelWithOptions(workspaceId, modelId, request, headers, runtime);
}

/**
 * @summary Updates the mutable configurations of a specified model connection and resubmits the publish task. The invocation protocol cannot be modified after creation.
 *
 * @param tmpReq UpdateModelConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelConnectionResponse
 */
UpdateModelConnectionResponse Client::updateModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const UpdateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateModelConnectionShrinkRequest request = UpdateModelConnectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelConnection"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/model-connections/" , Darabonba::Encode::Encoder::percentEncode(connectionId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelConnectionResponse>();
}

/**
 * @summary Updates the mutable configurations of a specified model connection and resubmits the publish task. The invocation protocol cannot be modified after creation.
 *
 * @param request UpdateModelConnectionRequest
 * @return UpdateModelConnectionResponse
 */
UpdateModelConnectionResponse Client::updateModelConnection(const string &workspaceId, const string &connectionId, const UpdateModelConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelConnectionWithOptions(workspaceId, connectionId, request, headers, runtime);
}

/**
 * @summary Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
 *
 * @description ## Request description
 * Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
 *
 * @param tmpReq UpdateSkillBizTagsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillBizTagsResponse
 */
UpdateSkillBizTagsResponse Client::updateSkillBizTagsWithOptions(const string &workspaceId, const string &skillName, const UpdateSkillBizTagsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSkillBizTagsShrinkRequest request = UpdateSkillBizTagsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSkillBizTags"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/biz-tags")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillBizTagsResponse>();
}

/**
 * @summary Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
 *
 * @description ## Request description
 * Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
 *
 * @param request UpdateSkillBizTagsRequest
 * @return UpdateSkillBizTagsResponse
 */
UpdateSkillBizTagsResponse Client::updateSkillBizTags(const string &workspaceId, const string &skillName, const UpdateSkillBizTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSkillBizTagsWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Updates the version labels and their mappings for a specified Skill.
 *
 * @description ## Operation description
 * Updates the version labels and their mappings for a specified Skill.
 *
 * @param tmpReq UpdateSkillLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillLabelsResponse
 */
UpdateSkillLabelsResponse Client::updateSkillLabelsWithOptions(const string &workspaceId, const string &skillName, const UpdateSkillLabelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSkillLabelsShrinkRequest request = UpdateSkillLabelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSkillLabels"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/labels")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillLabelsResponse>();
}

/**
 * @summary Updates the version labels and their mappings for a specified Skill.
 *
 * @description ## Operation description
 * Updates the version labels and their mappings for a specified Skill.
 *
 * @param request UpdateSkillLabelsRequest
 * @return UpdateSkillLabelsResponse
 */
UpdateSkillLabelsResponse Client::updateSkillLabels(const string &workspaceId, const string &skillName, const UpdateSkillLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSkillLabelsWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Updates the visibility scope of a specified skill.
 *
 * @description ## Request description
 * Updates the visibility scope of a specified skill.
 *
 * @param tmpReq UpdateSkillScopeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillScopeResponse
 */
UpdateSkillScopeResponse Client::updateSkillScopeWithOptions(const string &workspaceId, const string &skillName, const UpdateSkillScopeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSkillScopeShrinkRequest request = UpdateSkillScopeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSkillScope"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skills/" , Darabonba::Encode::Encoder::percentEncode(skillName) , "/scope")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillScopeResponse>();
}

/**
 * @summary Updates the visibility scope of a specified skill.
 *
 * @description ## Request description
 * Updates the visibility scope of a specified skill.
 *
 * @param request UpdateSkillScopeRequest
 * @return UpdateSkillScopeResponse
 */
UpdateSkillScopeResponse Client::updateSkillScope(const string &workspaceId, const string &skillName, const UpdateSkillScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSkillScopeWithOptions(workspaceId, skillName, request, headers, runtime);
}

/**
 * @summary Updates the description and members of a specified team. When users or agents are passed, the corresponding member list is replaced based on full overwrite semantics. Member lists that are not passed remain unchanged. The team name cannot be modified after creation.
 *
 * @param tmpReq UpdateTeamRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeamWithOptions(const string &workspaceId, const string &teamId, const UpdateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTeamShrinkRequest request = UpdateTeamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTeam"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/teams/" , Darabonba::Encode::Encoder::percentEncode(teamId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTeamResponse>();
}

/**
 * @summary Updates the description and members of a specified team. When users or agents are passed, the corresponding member list is replaced based on full overwrite semantics. Member lists that are not passed remain unchanged. The team name cannot be modified after creation.
 *
 * @param request UpdateTeamRequest
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeam(const string &workspaceId, const string &teamId, const UpdateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTeamWithOptions(workspaceId, teamId, request, headers, runtime);
}

/**
 * @summary Updates the display name, email address, or note of a specified user. You must specify at least one of the displayName, email, and note parameters. Unspecified attributes remain unchanged. The username cannot be modified after creation.
 *
 * @param tmpReq UpdateUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserShrinkRequest request = UpdateUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/users/" , Darabonba::Encode::Encoder::percentEncode(agentCoreUserId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary Updates the display name, email address, or note of a specified user. You must specify at least one of the displayName, email, and note parameters. Unspecified attributes remain unchanged. The username cannot be modified after creation.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const string &workspaceId, const string &agentCoreUserId, const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUserWithOptions(workspaceId, agentCoreUserId, request, headers, runtime);
}

/**
 * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized state can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this API operation.
 *
 * @description ## Request description\\nUpdates the name or network configuration of a workspace. Only workspaces in the `Initialized` state can be updated. `Status`, `TenantId`, and `RegionId` are maintained by the server and cannot be modified through this API operation. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
 *
 * @param tmpReq UpdateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspaceWithOptions(const string &workspaceId, const UpdateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkspaceShrinkRequest request = UpdateWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspace"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceResponse>();
}

/**
 * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized state can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this API operation.
 *
 * @description ## Request description\\nUpdates the name or network configuration of a workspace. Only workspaces in the `Initialized` state can be updated. `Status`, `TenantId`, and `RegionId` are maintained by the server and cannot be modified through this API operation. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
 *
 * @param request UpdateWorkspaceRequest
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspace(const string &workspaceId, const UpdateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkspaceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Imports an AgentSpec into the current workspace by retrieving and parsing an uploaded AgentSpec ZIP package from OSS.
 *
 * @description ## Request description
 * Retrieves an uploaded AgentSpec ZIP package from OSS, parses the package, and imports the AgentSpec into the current workspace.
 *
 * @param tmpReq UploadAgentSpecViaOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadAgentSpecViaOssResponse
 */
UploadAgentSpecViaOssResponse Client::uploadAgentSpecViaOssWithOptions(const string &workspaceId, const UploadAgentSpecViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadAgentSpecViaOssShrinkRequest request = UploadAgentSpecViaOssShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadAgentSpecViaOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-spec-actions/upload-via-oss")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadAgentSpecViaOssResponse>();
}

/**
 * @summary Imports an AgentSpec into the current workspace by retrieving and parsing an uploaded AgentSpec ZIP package from OSS.
 *
 * @description ## Request description
 * Retrieves an uploaded AgentSpec ZIP package from OSS, parses the package, and imports the AgentSpec into the current workspace.
 *
 * @param request UploadAgentSpecViaOssRequest
 * @return UploadAgentSpecViaOssResponse
 */
UploadAgentSpecViaOssResponse Client::uploadAgentSpecViaOss(const string &workspaceId, const UploadAgentSpecViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadAgentSpecViaOssWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
 *
 * @description ## Operation description
 * Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
 *
 * @param tmpReq UploadSkillViaOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadSkillViaOssResponse
 */
UploadSkillViaOssResponse Client::uploadSkillViaOssWithOptions(const string &workspaceId, const UploadSkillViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadSkillViaOssShrinkRequest request = UploadSkillViaOssShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadSkillViaOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/skill-actions/upload-via-oss")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadSkillViaOssResponse>();
}

/**
 * @summary Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
 *
 * @description ## Operation description
 * Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
 *
 * @param request UploadSkillViaOssRequest
 * @return UploadSkillViaOssResponse
 */
UploadSkillViaOssResponse Client::uploadSkillViaOss(const string &workspaceId, const UploadSkillViaOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return uploadSkillViaOssWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Validates the OSS code package source for an agent.
 *
 * @description Uses the current workspace role to check whether the customer\\"s OSS object exists and is readable, and checks the file name extension and compressed size. Returns the sourceUri, file name, size, and format read in this request. The bucket and object key are passed separately, and HTTPS download URLs are not accepted.
 * The validation uses object metadata and read probing. It does not perform full downloads, transfers, or decompression, nor does it generate a SHA-256 hash. Passing the validation does not mean that the archive content is complete or can be started. When you submit a CreateCustomAgent or UpdateCustomAgent request, the system re-validates and transfers the package. You do not need to invoke this operation in advance as a prerequisite for submission.
 *
 * @param tmpReq ValidateAgentCodePackageFromOssRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateAgentCodePackageFromOssResponse
 */
ValidateAgentCodePackageFromOssResponse Client::validateAgentCodePackageFromOssWithOptions(const string &workspaceId, const ValidateAgentCodePackageFromOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ValidateAgentCodePackageFromOssShrinkRequest request = ValidateAgentCodePackageFromOssShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ValidateAgentCodePackageFromOss"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-code-packages/validate-from-oss")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateAgentCodePackageFromOssResponse>();
}

/**
 * @summary Validates the OSS code package source for an agent.
 *
 * @description Uses the current workspace role to check whether the customer\\"s OSS object exists and is readable, and checks the file name extension and compressed size. Returns the sourceUri, file name, size, and format read in this request. The bucket and object key are passed separately, and HTTPS download URLs are not accepted.
 * The validation uses object metadata and read probing. It does not perform full downloads, transfers, or decompression, nor does it generate a SHA-256 hash. Passing the validation does not mean that the archive content is complete or can be started. When you submit a CreateCustomAgent or UpdateCustomAgent request, the system re-validates and transfers the package. You do not need to invoke this operation in advance as a prerequisite for submission.
 *
 * @param request ValidateAgentCodePackageFromOssRequest
 * @return ValidateAgentCodePackageFromOssResponse
 */
ValidateAgentCodePackageFromOssResponse Client::validateAgentCodePackageFromOss(const string &workspaceId, const ValidateAgentCodePackageFromOssRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return validateAgentCodePackageFromOssWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Checks the OSS RAM authorization status of the agent code package.
 *
 * @description Queries the binding status of the authorization policy for a specified source bucket to the current workspace role. AUTHORIZED indicates that the policy is bound. UNAUTHORIZED indicates that the policy is not bound. A bound policy does not indicate that a specific code package object exists or is readable.
 * To check a specific object, call ValidateAgentCodePackageFromOss. This operation does not copy code packages or modify the default OSS binding of the workspace.
 *
 * @param request VerifyAgentCodePackageOssRamAuthorizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyAgentCodePackageOssRamAuthorizationResponse
 */
VerifyAgentCodePackageOssRamAuthorizationResponse Client::verifyAgentCodePackageOssRamAuthorizationWithOptions(const string &workspaceId, const VerifyAgentCodePackageOssRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOssBucketName()) {
    query["ossBucketName"] = request.getOssBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyAgentCodePackageOssRamAuthorization"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agent-code-packages/oss/authorize/verify")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyAgentCodePackageOssRamAuthorizationResponse>();
}

/**
 * @summary Checks the OSS RAM authorization status of the agent code package.
 *
 * @description Queries the binding status of the authorization policy for a specified source bucket to the current workspace role. AUTHORIZED indicates that the policy is bound. UNAUTHORIZED indicates that the policy is not bound. A bound policy does not indicate that a specific code package object exists or is readable.
 * To check a specific object, call ValidateAgentCodePackageFromOss. This operation does not copy code packages or modify the default OSS binding of the workspace.
 *
 * @param request VerifyAgentCodePackageOssRamAuthorizationRequest
 * @return VerifyAgentCodePackageOssRamAuthorizationResponse
 */
VerifyAgentCodePackageOssRamAuthorizationResponse Client::verifyAgentCodePackageOssRamAuthorization(const string &workspaceId, const VerifyAgentCodePackageOssRamAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifyAgentCodePackageOssRamAuthorizationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Validates whether one or more Qoder Service Account Keys are available at a specified site. This operation does not save keys or modify the Connector status.
 *
 * @description Validates whether the credentials of a specified Connector are valid and returns a list of invalid Service Account Keys.
 *
 * @param tmpReq VerifyConnectorRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyConnectorResponse
 */
VerifyConnectorResponse Client::verifyConnectorWithOptions(const string &workspaceId, const string &connectorName, const VerifyConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  VerifyConnectorShrinkRequest request = VerifyConnectorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "VerifyConnector"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/connectors/" , Darabonba::Encode::Encoder::percentEncode(connectorName) , "/actions/verify")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyConnectorResponse>();
}

/**
 * @summary Validates whether one or more Qoder Service Account Keys are available at a specified site. This operation does not save keys or modify the Connector status.
 *
 * @description Validates whether the credentials of a specified Connector are valid and returns a list of invalid Service Account Keys.
 *
 * @param request VerifyConnectorRequest
 * @return VerifyConnectorResponse
 */
VerifyConnectorResponse Client::verifyConnector(const string &workspaceId, const string &connectorName, const VerifyConnectorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifyConnectorWithOptions(workspaceId, connectorName, request, headers, runtime);
}

/**
 * @summary Verifies the ACR RAM authorization for a workspace.
 *
 * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is retained and only new permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. This operation performs a read-only check to verify whether the custom policies corresponding to the target instance, namespace, and repository are attached to the shared role, and checks the workspace prerequisites. It does not create execution versions or trigger configuration delivery. AUTHORIZED only indicates that the custom policy for the target name is attached, without parsing the policy content or simulating the final permissions. ELIGIBLE does not mean that RuntimeManager capacity or template admission is complete, nor does it require ACR configuration to be delivered. Creating or updating an agent re-verifies permissions and processes ACR dependencies on the backend. Configuration waiting, failures, and retries are reported through agent details.
 *
 * @param request VerifyWorkspaceAcrRamAuthorizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyWorkspaceAcrRamAuthorizationResponse
 */
VerifyWorkspaceAcrRamAuthorizationResponse Client::verifyWorkspaceAcrRamAuthorizationWithOptions(const string &workspaceId, const VerifyWorkspaceAcrRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcrInstanceId()) {
    query["acrInstanceId"] = request.getAcrInstanceId();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasRepository()) {
    query["repository"] = request.getRepository();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyWorkspaceAcrRamAuthorization"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/acr/authorize/verify")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyWorkspaceAcrRamAuthorizationResponse>();
}

/**
 * @summary Verifies the ACR RAM authorization for a workspace.
 *
 * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is retained and only new permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. This operation performs a read-only check to verify whether the custom policies corresponding to the target instance, namespace, and repository are attached to the shared role, and checks the workspace prerequisites. It does not create execution versions or trigger configuration delivery. AUTHORIZED only indicates that the custom policy for the target name is attached, without parsing the policy content or simulating the final permissions. ELIGIBLE does not mean that RuntimeManager capacity or template admission is complete, nor does it require ACR configuration to be delivered. Creating or updating an agent re-verifies permissions and processes ACR dependencies on the backend. Configuration waiting, failures, and retries are reported through agent details.
 *
 * @param request VerifyWorkspaceAcrRamAuthorizationRequest
 * @return VerifyWorkspaceAcrRamAuthorizationResponse
 */
VerifyWorkspaceAcrRamAuthorizationResponse Client::verifyWorkspaceAcrRamAuthorization(const string &workspaceId, const VerifyWorkspaceAcrRamAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifyWorkspaceAcrRamAuthorizationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Queries the RAM authorization status of AgenticFS mounting for a workspace.
 *
 * @description Determines the shared role and target access point based on the workspace and server, checks whether the role has a mounted policy with the expected name and a type of Custom, and returns AUTHORIZED or UNAUTHORIZED. Consistent with OSS/ACR, this operation does not verify the policy body, role trust, or actual mount read/write permissions. If the upstream query fails, an error is returned.
 *
 * @param request VerifyWorkspaceAgenticFsMountRamAuthorizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyWorkspaceAgenticFsMountRamAuthorizationResponse
 */
VerifyWorkspaceAgenticFsMountRamAuthorizationResponse Client::verifyWorkspaceAgenticFsMountRamAuthorizationWithOptions(const string &workspaceId, const VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServer()) {
    query["server"] = request.getServer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyWorkspaceAgenticFsMountRamAuthorization"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/agentic-fs/authorize/verify")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyWorkspaceAgenticFsMountRamAuthorizationResponse>();
}

/**
 * @summary Queries the RAM authorization status of AgenticFS mounting for a workspace.
 *
 * @description Determines the shared role and target access point based on the workspace and server, checks whether the role has a mounted policy with the expected name and a type of Custom, and returns AUTHORIZED or UNAUTHORIZED. Consistent with OSS/ACR, this operation does not verify the policy body, role trust, or actual mount read/write permissions. If the upstream query fails, an error is returned.
 *
 * @param request VerifyWorkspaceAgenticFsMountRamAuthorizationRequest
 * @return VerifyWorkspaceAgenticFsMountRamAuthorizationResponse
 */
VerifyWorkspaceAgenticFsMountRamAuthorizationResponse Client::verifyWorkspaceAgenticFsMountRamAuthorization(const string &workspaceId, const VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifyWorkspaceAgenticFsMountRamAuthorizationWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Verifies the RAM authorization for a workspace to access an OSS bucket and returns the current authorization status. When bucketName is specified, verifies the authorization for an agent-mounted bucket. When bucketName is not specified, verifies and updates the authorization status of the workspace\\"s private OSS storage.
 *
 * @description Queries whether the workspace OSS mount role is bound to the custom RAM policy corresponding to the target bucket, and returns AUTHORIZED or UNAUTHORIZED. When bucketName is not specified, the existing user-managed OSS binding of the workspace is used and the authorization status is saved. When bucketName is specified, only the authorization status of the specified bucket is queried without modifying the workspace OSS binding. This operation does not verify OSS data plane access permissions or resume workspace initialization tasks. Alibaba Cloud Container Registry (ACR) and user OSS mounts share the workspace role. If no existing role is available, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is reused and permissions are only appended without overwriting existing OSS policies. Previously pinned shared roles continue to be reused and are not recreated or renamed due to new naming templates.
 *
 * @param request VerifyWorkspaceOssMountRamAuthorizationRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyWorkspaceOssMountRamAuthorizationResponse
 */
VerifyWorkspaceOssMountRamAuthorizationResponse Client::verifyWorkspaceOssMountRamAuthorizationWithOptions(const string &workspaceId, const VerifyWorkspaceOssMountRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["bucketName"] = request.getBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyWorkspaceOssMountRamAuthorization"},
    {"version" , "2026-08-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/oss-mount/authorize/verify")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyWorkspaceOssMountRamAuthorizationResponse>();
}

/**
 * @summary Verifies the RAM authorization for a workspace to access an OSS bucket and returns the current authorization status. When bucketName is specified, verifies the authorization for an agent-mounted bucket. When bucketName is not specified, verifies and updates the authorization status of the workspace\\"s private OSS storage.
 *
 * @description Queries whether the workspace OSS mount role is bound to the custom RAM policy corresponding to the target bucket, and returns AUTHORIZED or UNAUTHORIZED. When bucketName is not specified, the existing user-managed OSS binding of the workspace is used and the authorization status is saved. When bucketName is specified, only the authorization status of the specified bucket is queried without modifying the workspace OSS binding. This operation does not verify OSS data plane access permissions or resume workspace initialization tasks. Alibaba Cloud Container Registry (ACR) and user OSS mounts share the workspace role. If no existing role is available, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is reused and permissions are only appended without overwriting existing OSS policies. Previously pinned shared roles continue to be reused and are not recreated or renamed due to new naming templates.
 *
 * @param request VerifyWorkspaceOssMountRamAuthorizationRequest
 * @return VerifyWorkspaceOssMountRamAuthorizationResponse
 */
VerifyWorkspaceOssMountRamAuthorizationResponse Client::verifyWorkspaceOssMountRamAuthorization(const string &workspaceId, const VerifyWorkspaceOssMountRamAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return verifyWorkspaceOssMountRamAuthorizationWithOptions(workspaceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentCore20260804