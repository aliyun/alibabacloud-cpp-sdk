// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTCORE20260804_HPP_
#define ALIBABACLOUD_AGENTCORE20260804_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentCore20260804Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentCore20260804.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Writes messages or text to a memory store. If sync is omitted or set to true, the operation synchronously waits for extraction and returns only memories, which can be an empty array. If sync is set to false, the operation returns only a taskId, and you can query the result by calling GetMemoryTask.
       *
       * @description Writes messages or text to a memory store to fetch long-term memory to retrieve and use later.
       * - If `sync` is omitted or set to `true`: waits for the fetch to complete and returns `memories`. Returns an empty array if no memories are fetched.
       * - If `sync` is set to `false`: returns a `taskId`. You can query the fetch progress and results by calling [GetMemoryTask](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMemoryTask).
       *
       * @param tmpReq AddMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMemoriesResponse
       */
      Models::AddMemoriesResponse addMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::AddMemoriesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Writes messages or text to a memory store. If sync is omitted or set to true, the operation synchronously waits for extraction and returns only memories, which can be an empty array. If sync is set to false, the operation returns only a taskId, and you can query the result by calling GetMemoryTask.
       *
       * @description Writes messages or text to a memory store to fetch long-term memory to retrieve and use later.
       * - If `sync` is omitted or set to `true`: waits for the fetch to complete and returns `memories`. Returns an empty array if no memories are fetched.
       * - If `sync` is set to `false`: returns a `taskId`. You can query the fetch progress and results by calling [GetMemoryTask](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMemoryTask).
       *
       * @param request AddMemoriesRequest
       * @return AddMemoriesResponse
       */
      Models::AddMemoriesResponse addMemories(const string &workspaceId, const string &memoryStoreName, const Models::AddMemoriesRequest &request);

      /**
       * @summary Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
       *
       * @description Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
       *
       * @param tmpReq BatchDeleteModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteModelsResponse
       */
      Models::BatchDeleteModelsResponse batchDeleteModelsWithOptions(const string &workspaceId, const Models::BatchDeleteModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
       *
       * @description Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
       *
       * @param request BatchDeleteModelsRequest
       * @return BatchDeleteModelsResponse
       */
      Models::BatchDeleteModelsResponse batchDeleteModels(const string &workspaceId, const Models::BatchDeleteModelsRequest &request);

      /**
       * @summary Uploads multiple skill ZIP packages through OSS and returns the processing result for each skill.
       *
       * @description Imports multiple skill ZIP packages that have been uploaded to OSS into a workspace in batches, and returns the processing result for each skill.
       * OSS is used here to temporarily store the ZIP packages to be imported. First, call [GetSkillImportFileUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetSkillImportFileUrl) to obtain the upload URL and upload the files, and then call this operation. To check the package content and name conflicts in advance, call [PrecheckSkillUploadViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/PrecheckSkillUploadViaOss).
       *
       * @param tmpReq BatchUploadSkillsViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUploadSkillsViaOssResponse
       */
      Models::BatchUploadSkillsViaOssResponse batchUploadSkillsViaOssWithOptions(const string &workspaceId, const Models::BatchUploadSkillsViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads multiple skill ZIP packages through OSS and returns the processing result for each skill.
       *
       * @description Imports multiple skill ZIP packages that have been uploaded to OSS into a workspace in batches, and returns the processing result for each skill.
       * OSS is used here to temporarily store the ZIP packages to be imported. First, call [GetSkillImportFileUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetSkillImportFileUrl) to obtain the upload URL and upload the files, and then call this operation. To check the package content and name conflicts in advance, call [PrecheckSkillUploadViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/PrecheckSkillUploadViaOss).
       *
       * @param request BatchUploadSkillsViaOssRequest
       * @return BatchUploadSkillsViaOssResponse
       */
      Models::BatchUploadSkillsViaOssResponse batchUploadSkillsViaOss(const string &workspaceId, const Models::BatchUploadSkillsViaOssRequest &request);

      /**
       * @summary Converts an MCP server to free-edit mode.
       *
       * @description Converts an MCP server installed from a marketplace template to free-edit mode so that you can directly modify the server configuration. After the conversion, the original source and tag information is retained, and the template editing restrictions are removed. The server no longer appears on the use case page associated with the template.
       *
       * @param request ConvertMcpToFreeEditRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertMcpToFreeEditResponse
       */
      Models::ConvertMcpToFreeEditResponse convertMcpToFreeEditWithOptions(const string &workspaceId, const string &mcpServerId, const Models::ConvertMcpToFreeEditRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts an MCP server to free-edit mode.
       *
       * @description Converts an MCP server installed from a marketplace template to free-edit mode so that you can directly modify the server configuration. After the conversion, the original source and tag information is retained, and the template editing restrictions are removed. The server no longer appears on the use case page associated with the template.
       *
       * @param request ConvertMcpToFreeEditRequest
       * @return ConvertMcpToFreeEditResponse
       */
      Models::ConvertMcpToFreeEditResponse convertMcpToFreeEdit(const string &workspaceId, const string &mcpServerId, const Models::ConvertMcpToFreeEditRequest &request);

      /**
       * @summary Creates an IM channel for a specified agent and binds it to a publicly accessible service endpoint.
       *
       * @description Creates an IM channel for an agent to route messages from instant messaging platforms to the agent.
       * During creation, a publicly accessible service endpoint (`ServiceEndpoint`) is bound to the channel. After the channel is created, you can call [GetAgentIMChannel](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentIMChannel) to query its configuration and status.
       *
       * @param tmpReq CreateAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentIMChannelResponse
       */
      Models::CreateAgentIMChannelResponse createAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const Models::CreateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IM channel for a specified agent and binds it to a publicly accessible service endpoint.
       *
       * @description Creates an IM channel for an agent to route messages from instant messaging platforms to the agent.
       * During creation, a publicly accessible service endpoint (`ServiceEndpoint`) is bound to the channel. After the channel is created, you can call [GetAgentIMChannel](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentIMChannel) to query its configuration and status.
       *
       * @param request CreateAgentIMChannelRequest
       * @return CreateAgentIMChannelResponse
       */
      Models::CreateAgentIMChannelResponse createAgentIMChannel(const string &workspaceId, const string &agentId, const Models::CreateAgentIMChannelRequest &request);

      /**
       * @summary Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @description Creates an agent template (AgentSpec) and generates the first draft version for editing reusable agent configurations. The creation fails if a template with the same name already exists in the same workspace. After creation, you can query the template and version information by calling [GetAgentSpec](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentSpec).
       *
       * @param tmpReq CreateAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpecResponse
       */
      Models::CreateAgentSpecResponse createAgentSpecWithOptions(const string &workspaceId, const Models::CreateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @description Creates an agent template (AgentSpec) and generates the first draft version for editing reusable agent configurations. The creation fails if a template with the same name already exists in the same workspace. After creation, you can query the template and version information by calling [GetAgentSpec](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentSpec).
       *
       * @param request CreateAgentSpecRequest
       * @return CreateAgentSpecResponse
       */
      Models::CreateAgentSpecResponse createAgentSpec(const string &workspaceId, const Models::CreateAgentSpecRequest &request);

      /**
       * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
       *
       * @description Creates a new draft version for an existing agent template (AgentSpec) to modify and publish the next version of the configuration.
       * The template must already exist and must not have a draft currently being edited.
       *
       * @param tmpReq CreateAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpecVersionResponse
       */
      Models::CreateAgentSpecVersionResponse createAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const Models::CreateAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
       *
       * @description Creates a new draft version for an existing agent template (AgentSpec) to modify and publish the next version of the configuration.
       * The template must already exist and must not have a draft currently being edited.
       *
       * @param request CreateAgentSpecVersionRequest
       * @return CreateAgentSpecVersionResponse
       */
      Models::CreateAgentSpecVersionResponse createAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const Models::CreateAgentSpecVersionRequest &request);

      /**
       * @summary Saves an agent version.
       *
       * @description Saves the currently effective configuration of a specified managed or custom agent as an immutable fixed version, and archives the version template and artifacts. This operation only saves the version and does not deploy an instance. Other types of agents, such as external agents, do not support versions and return AgentVersionSubtypeUnsupported. The latest release of the agent must be effective, meaning latestSpecVersion is equal to effectiveSpecVersion. The system generates an incrementing version number, agentVersion, such as v1 and v2, for each agent. The version number is unique within the agent, and the sequence numbers of deleted versions are not reused. This version number is used for querying, deleting, and referencing versions in service endpoints. Each agent can retain up to 50 undeleted versions. If the limit is reached, AgentVersionQuotaExceeded is returned. You can continue to save versions after deleting unused ones. Duplicate submissions with the same versionName and release serial number return the existing version and are not subject to the limit. Submissions with the same versionName but a different release serial number return AgentVersionAlreadyExists.
       *
       * @param tmpReq CreateAgentVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentVersionResponse
       */
      Models::CreateAgentVersionResponse createAgentVersionWithOptions(const string &workspaceId, const string &agentId, const Models::CreateAgentVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves an agent version.
       *
       * @description Saves the currently effective configuration of a specified managed or custom agent as an immutable fixed version, and archives the version template and artifacts. This operation only saves the version and does not deploy an instance. Other types of agents, such as external agents, do not support versions and return AgentVersionSubtypeUnsupported. The latest release of the agent must be effective, meaning latestSpecVersion is equal to effectiveSpecVersion. The system generates an incrementing version number, agentVersion, such as v1 and v2, for each agent. The version number is unique within the agent, and the sequence numbers of deleted versions are not reused. This version number is used for querying, deleting, and referencing versions in service endpoints. Each agent can retain up to 50 undeleted versions. If the limit is reached, AgentVersionQuotaExceeded is returned. You can continue to save versions after deleting unused ones. Duplicate submissions with the same versionName and release serial number return the existing version and are not subject to the limit. Submissions with the same versionName but a different release serial number return AgentVersionAlreadyExists.
       *
       * @param request CreateAgentVersionRequest
       * @return CreateAgentVersionResponse
       */
      Models::CreateAgentVersionResponse createAgentVersion(const string &workspaceId, const string &agentId, const Models::CreateAgentVersionRequest &request);

      /**
       * @summary Creates an apiKey or mcpHeader credential in a workspace for agents or MCP to access external services. The credential content is submitted as a JSON string, and masked results are returned when queried.
       *
       * @description Creates an apiKey or mcpHeader credential in a workspace for agents or MCP to access external services.
       * ### Credential types
       * - `apiKey`: `credentialMetadata` is a JSON string that contains only a non-empty `apiKey`. Do not submit `resourceScope` and `resourceRefs`.
       * - `mcpHeader`: `credentialMetadata` is a JSON string that contains a non-empty `headers` array. Each item contains a non-empty `name` and `value` to configure MCP request headers.
       * ### MCP header scope
       * You must specify `resourceScope` when creating an `mcpHeader` credential:
       * - `ALL`: Applies to all MCP services. Omit `resourceRefs`.
       * - `SPECIFIED`: Applies to specified MCP services. `resourceRefs` must be a non-empty array. For each item, set `resourceType=mcpServer` and specify `resourceId`.
       * ### Subsequent queries
       * Use [GetCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCredential) or [ListCredentials](https://api.aliyun.com/document/AgentCore/2026-08-04/ListCredentials) to query credentials. For `apiKey`, a masked value is returned. For `mcpHeader`, only header names are returned, and header values are not returned.
       *
       * @param tmpReq CreateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const string &workspaceId, const Models::CreateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an apiKey or mcpHeader credential in a workspace for agents or MCP to access external services. The credential content is submitted as a JSON string, and masked results are returned when queried.
       *
       * @description Creates an apiKey or mcpHeader credential in a workspace for agents or MCP to access external services.
       * ### Credential types
       * - `apiKey`: `credentialMetadata` is a JSON string that contains only a non-empty `apiKey`. Do not submit `resourceScope` and `resourceRefs`.
       * - `mcpHeader`: `credentialMetadata` is a JSON string that contains a non-empty `headers` array. Each item contains a non-empty `name` and `value` to configure MCP request headers.
       * ### MCP header scope
       * You must specify `resourceScope` when creating an `mcpHeader` credential:
       * - `ALL`: Applies to all MCP services. Omit `resourceRefs`.
       * - `SPECIFIED`: Applies to specified MCP services. `resourceRefs` must be a non-empty array. For each item, set `resourceType=mcpServer` and specify `resourceId`.
       * ### Subsequent queries
       * Use [GetCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCredential) or [ListCredentials](https://api.aliyun.com/document/AgentCore/2026-08-04/ListCredentials) to query credentials. For `apiKey`, a masked value is returned. For `mcpHeader`, only header names are returned, and header values are not returned.
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const string &workspaceId, const Models::CreateCredentialRequest &request);

      /**
       * @summary Creates a custom code or image agent in a specified workspace, supports code package, ACR image, and custom image deployments, and executes the deployment asynchronously.
       *
       * @description Deploys a user-provided code package or container image as an agent in a workspace. This corresponds to the "Custom Code / Image" creation method in the console.
       * ### Preparations
       * Prepare a writable workspace and submit name, roleArn, artifact, and runtime. In runtime, specify both compute and sessionPolicy. roleArn is the RAM role used by the agent to access your cloud resources.
       * ### Select a deployment method
       * | Deployment method | Required configurations |
       * | --- | --- |
       * | ACR image | artifact.port, and type=acr, instanceId, namespace, repo, and tag in artifact.container. |
       * | Custom image | artifact.port, artifact.container.type=custom, and the complete customImage. The clientToken query parameter is required. |
       * | Code package | artifact.port, and sourceUri, languageRuntime, and entrypoint in artifact.code. |
       * artifact.code and artifact.container are mutually exclusive. The service listening port ranges from 1 to 65535. You can specify a startup command for a container image by using artifact.container.entrypoint. If this parameter is omitted, the default startup method of the image is used.
       * ### Code package
       * - ZIP and TAR.GZ formats are supported. The compressed package size ranges from 1 to 500,000,000 bytes. Dependencies must be included in the package. The platform does not install dependencies or perform online builds.
       * - Invoke [ListAgentCodeRuntimes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListAgentCodeRuntimes) to query the currently active `languageRuntime`.
       * - For local files, first invoke [GetAgentCodePackageUploadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageUploadUrl) and upload the file directly by using the upload method, URL, and request headers returned in the response. Then, commit `sourceUri`.
       * - `sourceUri` supports `oss://` URLs or HTTPS object URLs of standard OSS public domain names, including signed URLs. Private OSS objects must allow the workspace role to read them. You can first invoke [GetAgentCodePackageOssRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageOssRamAuthorizeUrl) to complete the authorization.
       * - Read permissions, objects, and sizes are checked upon commit, and a fixed copy is saved. If the transfer failed, the agent configuration is not created. Archive integrity and decompression are checked when the instance starts.
       * - `entrypoint` is the startup command executed in the `/code` folder, such as `python main.py`. The command does not automatically execute shell pipelines or expand environment variables. For complex startup logic, write a script in the package.
       * Sample request body for a code package (the runtime environment is subject to the query result):
       * ```json
       * {
       *   "name": "code-agent",
       *   "roleArn": "acs:ram::1234567890123456:role/AgentRuntimeRole",
       *   "artifact": {
       *     "port": 8000,
       *     "code": {
       *       "sourceUri": "oss://example-code-bucket/releases/agent.zip",
       *       "languageRuntime": "python3.12",
       *       "entrypoint": "python main.py"
       *     }
       *   },
       *   "runtime": {
       *     "compute": {
       *       "computeClass": "STANDARD"
       *     },
       *     "sessionPolicy": {
       *       "type": "AFFINITY"
       *     }
       *   }
       * }
       * ```
       * ### Custom image
       * Specify the complete image address in customImage.image. Tags or digests are supported. Do not include protocols or user information. Configure the image pull network separately in customImage.pullNetwork:
       * | Pull method | Configuration |
       * | --- | --- |
       * | Internet | type=public. Do not specify VPC fields. |
       * | VPC | type=vpc. Specify vpcId, vSwitchId, and securityGroupId. |
       * If repository authentication is required, specify both customImage.username and customImage.password. For anonymous access, omit both. The password is not returned in the response. The image pull network and the agent runtime network are configured separately.
       * useImageCache=true applies only to ACR images. For custom images and code packages, set this parameter to false or omit it.
       * ### Runtime configurations
       * Omitted fields in runtime.hpa use the following default values:
       * | Field | Default value | Valid values and description |
       * | --- | --- | --- |
       * | enabled | false | Specifies whether to enable elastic scaling. |
       * | minSandboxCount | 1 | The minimum number of instances. Valid values: 0 to 100. |
       * | maxSandboxCount | 10 | The maximum number of instances. Valid values: 0 to 100. The value cannot be less than the minimum number. |
       * | maxConcurrentSessionsPerSandbox | 20 | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | sessionTtlSeconds | 600 | The maximum idle time of a session, in seconds. Valid values: 60 to 86400. |
       * If sessionPolicy.type=ISOLATED_HEADER_FIELD, you must provide a valid HTTP request header name in headerName. Do not specify this field for other policies.
       * If network is omitted, the default access policy on the agent side is used. Actual access is still restricted by the workspace network. When submitting access items, specify the corresponding enabled field.
       * The total number of items in ossMounts and agenticFsMounts cannot exceed 10. The mount target mountPath must be an absolute path in the container, such as /data/train. It cannot conflict with platform reserved directories, be duplicated, or form parent-child directory overrides.
       * File mounts are used to allow the agent to access persistent data. When using AgenticFS, you can call [GetWorkspaceAgenticFsMountRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAgenticFsMountRamAuthorizeUrl) to complete the access point authorization first.
       * The path for an OSS mount must be a non-empty directory prefix in the bucket. The server for an AgenticFS mount is the access point domain name, without a protocol, port, or path. The path must be an existing non-empty relative directory in the access point. You cannot mount the root directory of the access point. If readOnly is omitted, the default value is false.
       * Environment variable names must be non-empty and unique in the list. Values must be strings, and empty strings are allowed. When configuring healthCheck, you must specify port. Omitting the health check means no health check is configured. When configuring logging.sls, specify both non-empty project and logstore.
       * ### Query results and retries
       * A successful response indicates that the request is accepted. Save the agentId and call [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent). Check latestVersionStatus, latestExecutionError, status, and sandboxPhaseCounts to confirm the configuration processing and instance status.
       * The clientToken query parameter is required for custom image submissions, and optional for ACR image and code package submissions. The token must be 1 to 128 characters in length and can contain letters, digits, periods, underscores, colons, and hyphens. Reuse the original token to retry the same submission. If the parameters are the same, the existing acceptance result is returned. Use a new token for different submission content.
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const string &workspaceId, const Models::CreateCustomAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom code or image agent in a specified workspace, supports code package, ACR image, and custom image deployments, and executes the deployment asynchronously.
       *
       * @description Deploys a user-provided code package or container image as an agent in a workspace. This corresponds to the "Custom Code / Image" creation method in the console.
       * ### Preparations
       * Prepare a writable workspace and submit name, roleArn, artifact, and runtime. In runtime, specify both compute and sessionPolicy. roleArn is the RAM role used by the agent to access your cloud resources.
       * ### Select a deployment method
       * | Deployment method | Required configurations |
       * | --- | --- |
       * | ACR image | artifact.port, and type=acr, instanceId, namespace, repo, and tag in artifact.container. |
       * | Custom image | artifact.port, artifact.container.type=custom, and the complete customImage. The clientToken query parameter is required. |
       * | Code package | artifact.port, and sourceUri, languageRuntime, and entrypoint in artifact.code. |
       * artifact.code and artifact.container are mutually exclusive. The service listening port ranges from 1 to 65535. You can specify a startup command for a container image by using artifact.container.entrypoint. If this parameter is omitted, the default startup method of the image is used.
       * ### Code package
       * - ZIP and TAR.GZ formats are supported. The compressed package size ranges from 1 to 500,000,000 bytes. Dependencies must be included in the package. The platform does not install dependencies or perform online builds.
       * - Invoke [ListAgentCodeRuntimes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListAgentCodeRuntimes) to query the currently active `languageRuntime`.
       * - For local files, first invoke [GetAgentCodePackageUploadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageUploadUrl) and upload the file directly by using the upload method, URL, and request headers returned in the response. Then, commit `sourceUri`.
       * - `sourceUri` supports `oss://` URLs or HTTPS object URLs of standard OSS public domain names, including signed URLs. Private OSS objects must allow the workspace role to read them. You can first invoke [GetAgentCodePackageOssRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageOssRamAuthorizeUrl) to complete the authorization.
       * - Read permissions, objects, and sizes are checked upon commit, and a fixed copy is saved. If the transfer failed, the agent configuration is not created. Archive integrity and decompression are checked when the instance starts.
       * - `entrypoint` is the startup command executed in the `/code` folder, such as `python main.py`. The command does not automatically execute shell pipelines or expand environment variables. For complex startup logic, write a script in the package.
       * Sample request body for a code package (the runtime environment is subject to the query result):
       * ```json
       * {
       *   "name": "code-agent",
       *   "roleArn": "acs:ram::1234567890123456:role/AgentRuntimeRole",
       *   "artifact": {
       *     "port": 8000,
       *     "code": {
       *       "sourceUri": "oss://example-code-bucket/releases/agent.zip",
       *       "languageRuntime": "python3.12",
       *       "entrypoint": "python main.py"
       *     }
       *   },
       *   "runtime": {
       *     "compute": {
       *       "computeClass": "STANDARD"
       *     },
       *     "sessionPolicy": {
       *       "type": "AFFINITY"
       *     }
       *   }
       * }
       * ```
       * ### Custom image
       * Specify the complete image address in customImage.image. Tags or digests are supported. Do not include protocols or user information. Configure the image pull network separately in customImage.pullNetwork:
       * | Pull method | Configuration |
       * | --- | --- |
       * | Internet | type=public. Do not specify VPC fields. |
       * | VPC | type=vpc. Specify vpcId, vSwitchId, and securityGroupId. |
       * If repository authentication is required, specify both customImage.username and customImage.password. For anonymous access, omit both. The password is not returned in the response. The image pull network and the agent runtime network are configured separately.
       * useImageCache=true applies only to ACR images. For custom images and code packages, set this parameter to false or omit it.
       * ### Runtime configurations
       * Omitted fields in runtime.hpa use the following default values:
       * | Field | Default value | Valid values and description |
       * | --- | --- | --- |
       * | enabled | false | Specifies whether to enable elastic scaling. |
       * | minSandboxCount | 1 | The minimum number of instances. Valid values: 0 to 100. |
       * | maxSandboxCount | 10 | The maximum number of instances. Valid values: 0 to 100. The value cannot be less than the minimum number. |
       * | maxConcurrentSessionsPerSandbox | 20 | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | sessionTtlSeconds | 600 | The maximum idle time of a session, in seconds. Valid values: 60 to 86400. |
       * If sessionPolicy.type=ISOLATED_HEADER_FIELD, you must provide a valid HTTP request header name in headerName. Do not specify this field for other policies.
       * If network is omitted, the default access policy on the agent side is used. Actual access is still restricted by the workspace network. When submitting access items, specify the corresponding enabled field.
       * The total number of items in ossMounts and agenticFsMounts cannot exceed 10. The mount target mountPath must be an absolute path in the container, such as /data/train. It cannot conflict with platform reserved directories, be duplicated, or form parent-child directory overrides.
       * File mounts are used to allow the agent to access persistent data. When using AgenticFS, you can call [GetWorkspaceAgenticFsMountRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAgenticFsMountRamAuthorizeUrl) to complete the access point authorization first.
       * The path for an OSS mount must be a non-empty directory prefix in the bucket. The server for an AgenticFS mount is the access point domain name, without a protocol, port, or path. The path must be an existing non-empty relative directory in the access point. You cannot mount the root directory of the access point. If readOnly is omitted, the default value is false.
       * Environment variable names must be non-empty and unique in the list. Values must be strings, and empty strings are allowed. When configuring healthCheck, you must specify port. Omitting the health check means no health check is configured. When configuring logging.sls, specify both non-empty project and logstore.
       * ### Query results and retries
       * A successful response indicates that the request is accepted. Save the agentId and call [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent). Check latestVersionStatus, latestExecutionError, status, and sandboxPhaseCounts to confirm the configuration processing and instance status.
       * The clientToken query parameter is required for custom image submissions, and optional for ACR image and code package submissions. The token must be 1 to 128 characters in length and can contain letters, digits, periods, underscores, colons, and hyphens. Reuse the original token to retry the same submission. If the parameters are the same, the existing acceptance result is returned. Use a new token for different submission content.
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const string &workspaceId, const Models::CreateCustomAgentRequest &request);

      /**
       * @summary Creates an agent that runs in an external environment, saves the configurations for the platform model, instructions, tools, and skills, and asynchronously processes the bootstrap configuration.
       *
       * @description Registers an agent hosted in the user\\"s runtime environment, which corresponds to the "Managed Agent" in the console. After registration, you can continue to obtain the bootstrap information and complete the connection.
       * ### Configure a managed agent
       * Provide name, and select the configuration based on the model source:
       * | modelSource | Model configuration |
       * | --- | --- |
       * | PLATFORM | Uses a platform model. Provide model.modelConnectionId and model.modelName. |
       * | RUNTIME | The model is managed by the external runtime environment. Do not submit model. |
       * If modelSource is omitted but model is provided, it is processed as PLATFORM. If both are omitted, the agent cannot be created.
       * Configure instructions, MCP tools, and skills through instruction, tools, and skills. You can also reference an agent template through template.aiRegistry. The external process is deployed by the caller. This operation does not create a platform runtime instance.
       * ### Bootstrap sequence
       * **Step 1:** After creation, save the agentId and call [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent) to query the configuration processing result.
       * **Step 2:** After the latest configuration takes effect, call [GetExternalAgentBootstrapOptions](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgentBootstrapOptions) to obtain the available bootstrap networks.
       * **Step 3:** Select an available network and call [CreateExternalAgentBootstrapToken](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateExternalAgentBootstrapToken) to obtain the bootstrap token and CMS configuration. The external process then completes the bootstrap.
       * clientToken is a reserved query parameter and currently does not provide idempotency guarantees.
       *
       * @param tmpReq CreateExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalAgentResponse
       */
      Models::CreateExternalAgentResponse createExternalAgentWithOptions(const string &workspaceId, const Models::CreateExternalAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agent that runs in an external environment, saves the configurations for the platform model, instructions, tools, and skills, and asynchronously processes the bootstrap configuration.
       *
       * @description Registers an agent hosted in the user\\"s runtime environment, which corresponds to the "Managed Agent" in the console. After registration, you can continue to obtain the bootstrap information and complete the connection.
       * ### Configure a managed agent
       * Provide name, and select the configuration based on the model source:
       * | modelSource | Model configuration |
       * | --- | --- |
       * | PLATFORM | Uses a platform model. Provide model.modelConnectionId and model.modelName. |
       * | RUNTIME | The model is managed by the external runtime environment. Do not submit model. |
       * If modelSource is omitted but model is provided, it is processed as PLATFORM. If both are omitted, the agent cannot be created.
       * Configure instructions, MCP tools, and skills through instruction, tools, and skills. You can also reference an agent template through template.aiRegistry. The external process is deployed by the caller. This operation does not create a platform runtime instance.
       * ### Bootstrap sequence
       * **Step 1:** After creation, save the agentId and call [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent) to query the configuration processing result.
       * **Step 2:** After the latest configuration takes effect, call [GetExternalAgentBootstrapOptions](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgentBootstrapOptions) to obtain the available bootstrap networks.
       * **Step 3:** Select an available network and call [CreateExternalAgentBootstrapToken](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateExternalAgentBootstrapToken) to obtain the bootstrap token and CMS configuration. The external process then completes the bootstrap.
       * clientToken is a reserved query parameter and currently does not provide idempotency guarantees.
       *
       * @param request CreateExternalAgentRequest
       * @return CreateExternalAgentResponse
       */
      Models::CreateExternalAgentResponse createExternalAgent(const string &workspaceId, const Models::CreateExternalAgentRequest &request);

      /**
       * @summary Issues an access token for a specified network to a managed agent with effective configurations and returns the CMS configuration.
       *
       * @description Issues an access token and connection configurations for a registered managed agent whose configurations have taken effect to complete the onboarding in the runtime environment where the agent resides.
       * ### Prerequisites and parameters
       * The managed agent must be in the running state, and its latest configurations must have taken effect. Call [GetExternalAgentBootstrapOptions](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgentBootstrapOptions) first to query available networks.
       * The `networkType` parameter is passed as a query parameter. Valid values: `INTRANET` (internal network) and `INTERNET` (Internet). The selected endpoint must be available.
       * ### Use the response
       * Pass the `bootstrapToken` to the external runtime process to complete the onboarding. The `tokenFingerprint` is used to identify the token and cannot be used as a substitute for the token. The `cms` field contains the observability reporting configurations for the corresponding network. Configure the endpoint, workspace, and license key as provided in the response.
       *
       * @param request CreateExternalAgentBootstrapTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalAgentBootstrapTokenResponse
       */
      Models::CreateExternalAgentBootstrapTokenResponse createExternalAgentBootstrapTokenWithOptions(const string &workspaceId, const string &agentId, const Models::CreateExternalAgentBootstrapTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues an access token for a specified network to a managed agent with effective configurations and returns the CMS configuration.
       *
       * @description Issues an access token and connection configurations for a registered managed agent whose configurations have taken effect to complete the onboarding in the runtime environment where the agent resides.
       * ### Prerequisites and parameters
       * The managed agent must be in the running state, and its latest configurations must have taken effect. Call [GetExternalAgentBootstrapOptions](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgentBootstrapOptions) first to query available networks.
       * The `networkType` parameter is passed as a query parameter. Valid values: `INTRANET` (internal network) and `INTERNET` (Internet). The selected endpoint must be available.
       * ### Use the response
       * Pass the `bootstrapToken` to the external runtime process to complete the onboarding. The `tokenFingerprint` is used to identify the token and cannot be used as a substitute for the token. The `cms` field contains the observability reporting configurations for the corresponding network. Configure the endpoint, workspace, and license key as provided in the response.
       *
       * @param request CreateExternalAgentBootstrapTokenRequest
       * @return CreateExternalAgentBootstrapTokenResponse
       */
      Models::CreateExternalAgentBootstrapTokenResponse createExternalAgentBootstrapToken(const string &workspaceId, const string &agentId, const Models::CreateExternalAgentBootstrapTokenRequest &request);

      /**
       * @summary Binds an external identity provider such as DingTalk, Lark, or a custom identity source to a workspace for enterprise account logon and user synchronization.
       *
       * @description Integrates an enterprise identity source with a workspace to allow application users to log on with enterprise accounts, or to synchronize users from the enterprise address book to the workspace.
       * DingTalk, Lark, and custom identity sources (CustomSSO) are supported. A workspace can be bound to only one identity source. To change the integration method, you must unbind the current identity source first.
       * ### Select an integration method
       * | Integration method | Scenario | Task completed by this operation |
       * | --- | --- | --- |
       * | DingTalk or Lark | The enterprise already uses DingTalk or Lark and wants to integrate enterprise accounts and the address book. | Saves the enterprise application credentials and establishes a binding for subsequent logon and address book synchronization configuration. |
       * | Custom identity source (CustomSSO) | The enterprise wants to integrate its own identity authentication and user management system. | Creates a shared user pool to prepare for subsequent SAML single sign-on (SSO) and SCIM user synchronization configuration. |
       * A user pool stores application users and identity integration configurations. SAML handles enterprise account logon. SCIM provisions users from the enterprise identity system to the user pool. You can configure these two capabilities separately.
       * ### Bind DingTalk or Lark
       * Specify the enterprise application credentials in metadata. DingTalk requires appKey, appSecret, and corpId. Lark requires appId and appSecret.
       * Logon is enabled by default. A user synchronization task is executed by default upon the first binding. If you want to select departments before synchronization, set syncOnBind to false.
       * Subsequent address book change synchronization is controlled by syncEnabled, which is disabled by default. When enabled, you must also provide encryptKey and verificationToken.
       * ### Bind a custom identity source
       * When you create a CustomSSO binding, you only need to specify the identity source type:
       * ```http
       * POST /workspaces/{workspaceId}/identity-providers
       * {"identityProviderType":"CustomSSO"}
       * ```
       * This call only creates a user pool. Logon and user synchronization are disabled by default. Do not specify metadata, loginEnabled, or syncEnabled during creation.
       * After creation, call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to query the progress. If WAITING_CONFIGURATION is returned, the user pool is created and you can proceed with the integration configuration:
       * - **Integrate enterprise account logon**: Call [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider) to obtain the SAML integration information of AgentCore and configure it in the enterprise identity system. Then, call [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider) to save the SAML configuration of the enterprise identity system and enable logon as needed.
       * - **Integrate user synchronization**: Call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to obtain the SCIM receiving endpoint and credentials, and configure them in the enterprise identity system. After the external configuration is complete, call [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM) to enable AgentCore user synchronization.
       * The two processes are independent. You can select one or both based on your business requirements.
       *
       * @param tmpReq CreateIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const string &workspaceId, const Models::CreateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an external identity provider such as DingTalk, Lark, or a custom identity source to a workspace for enterprise account logon and user synchronization.
       *
       * @description Integrates an enterprise identity source with a workspace to allow application users to log on with enterprise accounts, or to synchronize users from the enterprise address book to the workspace.
       * DingTalk, Lark, and custom identity sources (CustomSSO) are supported. A workspace can be bound to only one identity source. To change the integration method, you must unbind the current identity source first.
       * ### Select an integration method
       * | Integration method | Scenario | Task completed by this operation |
       * | --- | --- | --- |
       * | DingTalk or Lark | The enterprise already uses DingTalk or Lark and wants to integrate enterprise accounts and the address book. | Saves the enterprise application credentials and establishes a binding for subsequent logon and address book synchronization configuration. |
       * | Custom identity source (CustomSSO) | The enterprise wants to integrate its own identity authentication and user management system. | Creates a shared user pool to prepare for subsequent SAML single sign-on (SSO) and SCIM user synchronization configuration. |
       * A user pool stores application users and identity integration configurations. SAML handles enterprise account logon. SCIM provisions users from the enterprise identity system to the user pool. You can configure these two capabilities separately.
       * ### Bind DingTalk or Lark
       * Specify the enterprise application credentials in metadata. DingTalk requires appKey, appSecret, and corpId. Lark requires appId and appSecret.
       * Logon is enabled by default. A user synchronization task is executed by default upon the first binding. If you want to select departments before synchronization, set syncOnBind to false.
       * Subsequent address book change synchronization is controlled by syncEnabled, which is disabled by default. When enabled, you must also provide encryptKey and verificationToken.
       * ### Bind a custom identity source
       * When you create a CustomSSO binding, you only need to specify the identity source type:
       * ```http
       * POST /workspaces/{workspaceId}/identity-providers
       * {"identityProviderType":"CustomSSO"}
       * ```
       * This call only creates a user pool. Logon and user synchronization are disabled by default. Do not specify metadata, loginEnabled, or syncEnabled during creation.
       * After creation, call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to query the progress. If WAITING_CONFIGURATION is returned, the user pool is created and you can proceed with the integration configuration:
       * - **Integrate enterprise account logon**: Call [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider) to obtain the SAML integration information of AgentCore and configure it in the enterprise identity system. Then, call [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider) to save the SAML configuration of the enterprise identity system and enable logon as needed.
       * - **Integrate user synchronization**: Call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to obtain the SCIM receiving endpoint and credentials, and configure them in the enterprise identity system. After the external configuration is complete, call [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM) to enable AgentCore user synchronization.
       * The two processes are independent. You can select one or both based on your business requirements.
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const string &workspaceId, const Models::CreateIdentityProviderRequest &request);

      /**
       * @summary Explicitly issues a SCIM credential and returns the plaintext token only in the current response. A maximum of two credentials can exist in the same pool. This operation does not automatically revoke old credentials or enable AC user synchronization.
       *
       * @description Creates a SCIM access token to authorize an enterprise identity system to send user provisioning requests to AgentCore. For example, when you plan to replace the token used by the enterprise identity system, you can create a new token first and revoke the old token after the switchover is complete.
       * SCIM is a user provisioning protocol through which an enterprise identity system sends user information by using a receiving endpoint and an access token.
       * ### Before you begin
       * A `CustomSSO` binding is created, and the SCIM receiving endpoint is enabled by calling [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM).
       * A maximum of two SCIM credentials can be retained in the same user pool. When the limit is reached, query existing credentials by calling [ListIdentityProviderSCIMCredentials](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderSCIMCredentials) and revoke the credentials that are no longer in use.
       * ### What to do next
       * **Step 1:** Save the plaintext of the `token` in the response. The token is returned only upon creation. You can only query the credential summary later.
       * **Step 2:** Configure the receiving endpoint and the new token in the enterprise identity system.
       * **Step 3:** After you confirm that the enterprise identity system uses the new token, revoke the old token by calling [DeleteIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/DeleteIdentityProviderSCIMCredential) as needed.
       * If the creation response is lost, query the credential list to verify the creation result to avoid duplicate creation and occupying the credential quota. The user synchronization switch is configured separately by calling [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM).
       *
       * @param request CreateIdentityProviderSCIMCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderSCIMCredentialResponse
       */
      Models::CreateIdentityProviderSCIMCredentialResponse createIdentityProviderSCIMCredentialWithOptions(const string &workspaceId, const Models::CreateIdentityProviderSCIMCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Explicitly issues a SCIM credential and returns the plaintext token only in the current response. A maximum of two credentials can exist in the same pool. This operation does not automatically revoke old credentials or enable AC user synchronization.
       *
       * @description Creates a SCIM access token to authorize an enterprise identity system to send user provisioning requests to AgentCore. For example, when you plan to replace the token used by the enterprise identity system, you can create a new token first and revoke the old token after the switchover is complete.
       * SCIM is a user provisioning protocol through which an enterprise identity system sends user information by using a receiving endpoint and an access token.
       * ### Before you begin
       * A `CustomSSO` binding is created, and the SCIM receiving endpoint is enabled by calling [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM).
       * A maximum of two SCIM credentials can be retained in the same user pool. When the limit is reached, query existing credentials by calling [ListIdentityProviderSCIMCredentials](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderSCIMCredentials) and revoke the credentials that are no longer in use.
       * ### What to do next
       * **Step 1:** Save the plaintext of the `token` in the response. The token is returned only upon creation. You can only query the credential summary later.
       * **Step 2:** Configure the receiving endpoint and the new token in the enterprise identity system.
       * **Step 3:** After you confirm that the enterprise identity system uses the new token, revoke the old token by calling [DeleteIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/DeleteIdentityProviderSCIMCredential) as needed.
       * If the creation response is lost, query the credential list to verify the creation result to avoid duplicate creation and occupying the credential quota. The user synchronization switch is configured separately by calling [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM).
       *
       * @param request CreateIdentityProviderSCIMCredentialRequest
       * @return CreateIdentityProviderSCIMCredentialResponse
       */
      Models::CreateIdentityProviderSCIMCredentialResponse createIdentityProviderSCIMCredential(const string &workspaceId, const Models::CreateIdentityProviderSCIMCredentialRequest &request);

      /**
       * @summary Initiates a manual synchronization for an identity provider.
       *
       * @description Synchronizes users from an enterprise identity provider to a workspace based on the saved department scope. This is suitable for importing users for the first time or manually updating workspace users after adjusting the synchronization scope.
       * ### Prerequisites
       * - The identity provider is configured and its status is `READY`. If the previous synchronization failed and the status is `SYNC_FAILED`, you can also re-initiate it.
       * - The user pool is ready, and no identity provider operations are in progress.
       * - Manual synchronization uses the saved `syncScope`. You do not need to enable `syncEnabled`, which is used for subsequent address book change synchronization.
       * ### Steps for synchronizing by department
       * **Step 1:** Query departments by calling [ListIdentityProviderDepartments](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderDepartments) and select the scope to synchronize.
       * **Step 2:** Save the `syncScope` by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider), and then call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to wait for the configuration processing to complete.
       * **Step 3:** Call this operation to initiate the synchronization and save the returned `taskId`.
       * **Step 4:** Query the progress by calling [GetIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSyncJob). After the synchronization is complete, view the workspace user list.
       * If you want to select departments before the initial synchronization, set `syncOnBind=false` when creating the identity provider, and then perform the preceding steps.
       * ### Synchronization results and re-execution
       * Synchronization is subject to the maximum number of users allowed in the workspace. Narrowing the synchronization scope does not actively delete users that have already been synchronized.
       * Each successful initiation creates a new synchronization task. If a request times out or the response is lost, check the identity provider status by calling [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) before deciding whether to resubmit the request.
       *
       * @param request CreateIdentityProviderSyncJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderSyncJobResponse
       */
      Models::CreateIdentityProviderSyncJobResponse createIdentityProviderSyncJobWithOptions(const string &workspaceId, const string &identityProviderType, const Models::CreateIdentityProviderSyncJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a manual synchronization for an identity provider.
       *
       * @description Synchronizes users from an enterprise identity provider to a workspace based on the saved department scope. This is suitable for importing users for the first time or manually updating workspace users after adjusting the synchronization scope.
       * ### Prerequisites
       * - The identity provider is configured and its status is `READY`. If the previous synchronization failed and the status is `SYNC_FAILED`, you can also re-initiate it.
       * - The user pool is ready, and no identity provider operations are in progress.
       * - Manual synchronization uses the saved `syncScope`. You do not need to enable `syncEnabled`, which is used for subsequent address book change synchronization.
       * ### Steps for synchronizing by department
       * **Step 1:** Query departments by calling [ListIdentityProviderDepartments](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderDepartments) and select the scope to synchronize.
       * **Step 2:** Save the `syncScope` by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider), and then call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to wait for the configuration processing to complete.
       * **Step 3:** Call this operation to initiate the synchronization and save the returned `taskId`.
       * **Step 4:** Query the progress by calling [GetIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSyncJob). After the synchronization is complete, view the workspace user list.
       * If you want to select departments before the initial synchronization, set `syncOnBind=false` when creating the identity provider, and then perform the preceding steps.
       * ### Synchronization results and re-execution
       * Synchronization is subject to the maximum number of users allowed in the workspace. Narrowing the synchronization scope does not actively delete users that have already been synchronized.
       * Each successful initiation creates a new synchronization task. If a request times out or the response is lost, check the identity provider status by calling [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) before deciding whether to resubmit the request.
       *
       * @param request CreateIdentityProviderSyncJobRequest
       * @return CreateIdentityProviderSyncJobResponse
       */
      Models::CreateIdentityProviderSyncJobResponse createIdentityProviderSyncJob(const string &workspaceId, const string &identityProviderType, const Models::CreateIdentityProviderSyncJobRequest &request);

      /**
       * @summary Creates or reuses a cache for an ACR Enterprise Edition image in a workspace, and returns the cache status upon acceptance.
       *
       * @description Pre-builds or reuses an ACR Enterprise Edition image cache for custom code or image agents for subsequent deployment and startup.
       * ### Request parameters
       * `regionId`, `workspaceId`, and `clientToken` are passed as query parameters. The region must match the entry endpoint and the workspace.
       * Specify `acrInstanceId`, `namespace`, `repository`, and `tag` in the JSON request body. For `repository`, specify only the repository name without repeating the namespace. The source repository must have pull authorization for the workspace resource role. You can obtain the authorization URL by calling [GetWorkspaceAcrRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAcrRamAuthorizeUrl).
       * ### Transfer network
       * Both `accessInternet` and `accessVpc` must be provided, and at least one must be set to `true`. The server validates this based on the workspace network conditions. These parameters control the source reading and transfer for the current operation and do not modify the runtime network of the agent.
       * ### Acceptance and readiness
       * A successful response returns the current cache snapshot. `PENDING` indicates that the cache is being prepared, `READY` indicates that the cache is ready, and `FAILED` indicates a failure. For failures, check the `error` field. Save the `imageId` and call [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache) to query subsequent results. If the image digest has not been parsed, `digest` may be empty.
       * Currently, `clientToken` is only validated to ensure it is not empty. It does not guarantee deduplication by identifier or recovery of the original acceptance result. If the result is not confirmed, query the existing cache first.
       *
       * @param tmpReq CreateImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageCacheResponse
       */
      Models::CreateImageCacheResponse createImageCacheWithOptions(const Models::CreateImageCacheRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or reuses a cache for an ACR Enterprise Edition image in a workspace, and returns the cache status upon acceptance.
       *
       * @description Pre-builds or reuses an ACR Enterprise Edition image cache for custom code or image agents for subsequent deployment and startup.
       * ### Request parameters
       * `regionId`, `workspaceId`, and `clientToken` are passed as query parameters. The region must match the entry endpoint and the workspace.
       * Specify `acrInstanceId`, `namespace`, `repository`, and `tag` in the JSON request body. For `repository`, specify only the repository name without repeating the namespace. The source repository must have pull authorization for the workspace resource role. You can obtain the authorization URL by calling [GetWorkspaceAcrRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAcrRamAuthorizeUrl).
       * ### Transfer network
       * Both `accessInternet` and `accessVpc` must be provided, and at least one must be set to `true`. The server validates this based on the workspace network conditions. These parameters control the source reading and transfer for the current operation and do not modify the runtime network of the agent.
       * ### Acceptance and readiness
       * A successful response returns the current cache snapshot. `PENDING` indicates that the cache is being prepared, `READY` indicates that the cache is ready, and `FAILED` indicates a failure. For failures, check the `error` field. Save the `imageId` and call [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache) to query subsequent results. If the image digest has not been parsed, `digest` may be empty.
       * Currently, `clientToken` is only validated to ensure it is not empty. It does not guarantee deduplication by identifier or recovery of the original acceptance result. If the result is not confirmed, query the existing cache first.
       *
       * @param request CreateImageCacheRequest
       * @return CreateImageCacheResponse
       */
      Models::CreateImageCacheResponse createImageCache(const Models::CreateImageCacheRequest &request);

      /**
       * @summary Creates a managed Harness agent in a specified workspace, configures the harness, model, skills, and runtime resources, and deploys the agent asynchronously.
       *
       * @description Creates an agent by using a platform-managed runtime framework. This corresponds to the "Managed Harness" creation method in the console, where you can configure models, instructions, and skills.
       * ### Required configurations
       * Submit `name`, `model`, and `runtime`. The `runtime` parameter must include both `compute` and `sessionPolicy`. The agent is deployed and run by the platform. You do not need to provide a code package or container image.
       * ### Harness and model
       * | Harness | Model and connector configurations |
       * | --- | --- |
       * | `qwenpaw` | If you omit `harness` during creation, this type is used by default. Set `model.modelConnectionId` to the workspace model connection ID, and set `model.modelName` to the name of the model created under this connection. |
       * | `qodercli` | The qodercli connector must be enabled in the workspace. Set `model.modelConnectionId` to the model identifier returned by [ListConnectorModels](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectorModels). You can omit `model.modelName`. |
       * `harness` is an object, such as `{"type":"qwenpaw"}`. For qodercli, set `harness.configuration.connectorServiceAccountKey` to the account key record ID returned by [ListConnectors](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectors), not the original service account key. You can omit this parameter if only one key record exists. You must specify this parameter if multiple records exist. `connectorServiceAccountName` is the account name. Do not specify these two binding fields for qwenpaw.
       * The harness type cannot be changed after creation.
       * ### Instructions, templates, and skills
       * `skills` uses the skill names in the workspace AI registry. If `sourceType=REFERENCE`, versions are referenced by `versionSelector`: use `LABEL` with a label name, or `VERSION` with a specific version number. If the selector is omitted, `LABEL/latest` is used. If `sourceType=STATIC`, static files bundled with the package are used, and no version selector is provided.
       * `template.aiRegistry` specifies the agent template name and an optional version. If you omit the version during creation, the published version is resolved and fixed. When a template is used, `instruction`, `promptVariables`, and `subAgents` are derived from the template, and the corresponding fields in the current request do not take effect. Explicit skills and template skills are recorded separately. You can query the target and effective versions by using `configuredSkills` and `skills`.
       * If you do not use a template, you can set instructions by using `instruction`, declare variables by using `promptVariables`, and configure up to 20 sub-agents by using `subAgents`. The name and instruction of a sub-agent cannot be empty. Each sub-agent must have a unique name. Tools currently use `tools[].type=MCP`.
       * ### Runtime configurations and mounts
       * Omitted fields in `runtime.hpa` use the following default values:
       * | Field | Default value | Valid values and description |
       * | --- | --- | --- |
       * | `enabled` | `false` | Specifies whether to enable elastic scaling. |
       * | `minSandboxCount` | `1` | The minimum number of instances. Valid values: 0 to 100. |
       * | `maxSandboxCount` | `10` | The maximum number of instances. Valid values: 0 to 100. The value cannot be less than the minimum number. |
       * | `maxConcurrentSessionsPerSandbox` | `20` | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | `sessionTtlSeconds` | `600` | The maximum idle time of a session, in seconds. Valid values: 60 to 86400. |
       * If `sessionPolicy.type=ISOLATED_HEADER_FIELD`, you must provide `headerName`. Do not specify this parameter for other policies.
       * If you provide `network`, you must specify both `accessInternet.enabled` and `accessVpc.enabled`. Actual access is restricted by the workspace network configurations.
       * The total number of `ossMounts` and `agenticFsMounts` cannot exceed 10. The mount target `mountPath` uses an absolute path in the container, such as `/data/train`. The path cannot conflict with platform-reserved directories, and mount targets cannot be duplicated or form parent-child directory overwrites.
       * File mounts are used to allow the agent to access persistent data. When you use AgenticFS, you can first complete the access point authorization by using [GetWorkspaceAgenticFsMountRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAgenticFsMountRamAuthorizeUrl).
       * The `path` for an OSS mount must be a non-empty directory prefix in a bucket. The `server` for an AgenticFS mount is the access point domain name, without a protocol, port, or path. The `path` is an existing non-empty relative directory in the access point. You cannot mount the root directory of the access point. If `readOnly` is omitted, the default value is `false`.
       * `environment.variables` configures environment variables, and `environment.credentialReferences` references workspace credentials. Environment variable names must be non-empty and unique, and values must be strings.
       * ### Query deployment results
       * A successful response indicates that the request is accepted. Save the `agentId` and use [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent) to query `latestVersionStatus`, `status`, and `sandboxPhaseCounts` to confirm the configuration processing and instance status. `clientToken` is a reserved query parameter and does not provide idempotency guarantees.
       *
       * @param tmpReq CreateManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateManagedAgentResponse
       */
      Models::CreateManagedAgentResponse createManagedAgentWithOptions(const string &workspaceId, const Models::CreateManagedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a managed Harness agent in a specified workspace, configures the harness, model, skills, and runtime resources, and deploys the agent asynchronously.
       *
       * @description Creates an agent by using a platform-managed runtime framework. This corresponds to the "Managed Harness" creation method in the console, where you can configure models, instructions, and skills.
       * ### Required configurations
       * Submit `name`, `model`, and `runtime`. The `runtime` parameter must include both `compute` and `sessionPolicy`. The agent is deployed and run by the platform. You do not need to provide a code package or container image.
       * ### Harness and model
       * | Harness | Model and connector configurations |
       * | --- | --- |
       * | `qwenpaw` | If you omit `harness` during creation, this type is used by default. Set `model.modelConnectionId` to the workspace model connection ID, and set `model.modelName` to the name of the model created under this connection. |
       * | `qodercli` | The qodercli connector must be enabled in the workspace. Set `model.modelConnectionId` to the model identifier returned by [ListConnectorModels](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectorModels). You can omit `model.modelName`. |
       * `harness` is an object, such as `{"type":"qwenpaw"}`. For qodercli, set `harness.configuration.connectorServiceAccountKey` to the account key record ID returned by [ListConnectors](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectors), not the original service account key. You can omit this parameter if only one key record exists. You must specify this parameter if multiple records exist. `connectorServiceAccountName` is the account name. Do not specify these two binding fields for qwenpaw.
       * The harness type cannot be changed after creation.
       * ### Instructions, templates, and skills
       * `skills` uses the skill names in the workspace AI registry. If `sourceType=REFERENCE`, versions are referenced by `versionSelector`: use `LABEL` with a label name, or `VERSION` with a specific version number. If the selector is omitted, `LABEL/latest` is used. If `sourceType=STATIC`, static files bundled with the package are used, and no version selector is provided.
       * `template.aiRegistry` specifies the agent template name and an optional version. If you omit the version during creation, the published version is resolved and fixed. When a template is used, `instruction`, `promptVariables`, and `subAgents` are derived from the template, and the corresponding fields in the current request do not take effect. Explicit skills and template skills are recorded separately. You can query the target and effective versions by using `configuredSkills` and `skills`.
       * If you do not use a template, you can set instructions by using `instruction`, declare variables by using `promptVariables`, and configure up to 20 sub-agents by using `subAgents`. The name and instruction of a sub-agent cannot be empty. Each sub-agent must have a unique name. Tools currently use `tools[].type=MCP`.
       * ### Runtime configurations and mounts
       * Omitted fields in `runtime.hpa` use the following default values:
       * | Field | Default value | Valid values and description |
       * | --- | --- | --- |
       * | `enabled` | `false` | Specifies whether to enable elastic scaling. |
       * | `minSandboxCount` | `1` | The minimum number of instances. Valid values: 0 to 100. |
       * | `maxSandboxCount` | `10` | The maximum number of instances. Valid values: 0 to 100. The value cannot be less than the minimum number. |
       * | `maxConcurrentSessionsPerSandbox` | `20` | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | `sessionTtlSeconds` | `600` | The maximum idle time of a session, in seconds. Valid values: 60 to 86400. |
       * If `sessionPolicy.type=ISOLATED_HEADER_FIELD`, you must provide `headerName`. Do not specify this parameter for other policies.
       * If you provide `network`, you must specify both `accessInternet.enabled` and `accessVpc.enabled`. Actual access is restricted by the workspace network configurations.
       * The total number of `ossMounts` and `agenticFsMounts` cannot exceed 10. The mount target `mountPath` uses an absolute path in the container, such as `/data/train`. The path cannot conflict with platform-reserved directories, and mount targets cannot be duplicated or form parent-child directory overwrites.
       * File mounts are used to allow the agent to access persistent data. When you use AgenticFS, you can first complete the access point authorization by using [GetWorkspaceAgenticFsMountRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAgenticFsMountRamAuthorizeUrl).
       * The `path` for an OSS mount must be a non-empty directory prefix in a bucket. The `server` for an AgenticFS mount is the access point domain name, without a protocol, port, or path. The `path` is an existing non-empty relative directory in the access point. You cannot mount the root directory of the access point. If `readOnly` is omitted, the default value is `false`.
       * `environment.variables` configures environment variables, and `environment.credentialReferences` references workspace credentials. Environment variable names must be non-empty and unique, and values must be strings.
       * ### Query deployment results
       * A successful response indicates that the request is accepted. Save the `agentId` and use [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent) to query `latestVersionStatus`, `status`, and `sandboxPhaseCounts` to confirm the configuration processing and instance status. `clientToken` is a reserved query parameter and does not provide idempotency guarantees.
       *
       * @param request CreateManagedAgentRequest
       * @return CreateManagedAgentResponse
       */
      Models::CreateManagedAgentResponse createManagedAgent(const string &workspaceId, const Models::CreateManagedAgentRequest &request);

      /**
       * @summary Creates an MCP service in a specified workspace. The creation process is asynchronous. You can check whether the service is ready by using the returned status or a query operation.
       *
       * @description Creates an MCP service in a workspace for agents to use the tools provided by the service.
       * The creation process is executed asynchronously. After you submit the request, call the [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp) operation to check whether the service is ready.
       * To deploy the service by using a local code package, first call the [GetMcpCodePackageUploadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcpCodePackageUploadUrl) operation to obtain the upload URL and upload the file. Then, fill in the returned code package token in the deployment configuration.
       * The `clientToken` parameter does not provide idempotency guarantees. If the request result is not confirmed, query existing services before you decide whether to recreate the service.
       *
       * @param tmpReq CreateMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcpWithOptions(const string &workspaceId, const Models::CreateMcpRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an MCP service in a specified workspace. The creation process is asynchronous. You can check whether the service is ready by using the returned status or a query operation.
       *
       * @description Creates an MCP service in a workspace for agents to use the tools provided by the service.
       * The creation process is executed asynchronously. After you submit the request, call the [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp) operation to check whether the service is ready.
       * To deploy the service by using a local code package, first call the [GetMcpCodePackageUploadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcpCodePackageUploadUrl) operation to obtain the upload URL and upload the file. Then, fill in the returned code package token in the deployment configuration.
       * The `clientToken` parameter does not provide idempotency guarantees. If the request result is not confirmed, query existing services before you decide whether to recreate the service.
       *
       * @param request CreateMcpRequest
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcp(const string &workspaceId, const Models::CreateMcpRequest &request);

      /**
       * @summary Creates a long-term memory store in a specified workspace.
       *
       * @description Creates a long-term memory store (MemoryStore) in a workspace to organize the long-term memories of an agent and their source sessions.
       * After creation, you can write messages or text by using [AddMemories](https://api.aliyun.com/document/AgentCore/2026-08-04/AddMemories) and retrieve memories by semantics by using [SearchMemories](https://api.aliyun.com/document/AgentCore/2026-08-04/SearchMemories).
       *
       * @param tmpReq CreateMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryStoreResponse
       */
      Models::CreateMemoryStoreResponse createMemoryStoreWithOptions(const string &workspaceId, const Models::CreateMemoryStoreRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a long-term memory store in a specified workspace.
       *
       * @description Creates a long-term memory store (MemoryStore) in a workspace to organize the long-term memories of an agent and their source sessions.
       * After creation, you can write messages or text by using [AddMemories](https://api.aliyun.com/document/AgentCore/2026-08-04/AddMemories) and retrieve memories by semantics by using [SearchMemories](https://api.aliyun.com/document/AgentCore/2026-08-04/SearchMemories).
       *
       * @param request CreateMemoryStoreRequest
       * @return CreateMemoryStoreResponse
       */
      Models::CreateMemoryStoreResponse createMemoryStore(const string &workspaceId, const Models::CreateMemoryStoreRequest &request);

      /**
       * @summary Creates a model configuration under a model connection in a specified workspace for model creation.
       *
       * @description Creates a model configuration under a model connection in a workspace for model creation, allowing an agent to select and invoke the model.
       *
       * @param tmpReq CreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const string &workspaceId, const Models::CreateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model configuration under a model connection in a specified workspace for model creation.
       *
       * @description Creates a model configuration under a model connection in a workspace for model creation, allowing an agent to select and invoke the model.
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const string &workspaceId, const Models::CreateModelRequest &request);

      /**
       * @summary Creates a model connection in a specified workspace and configures the upstream model service address, invoke protocol, and access credentials for model creation.
       *
       * @description Creates a model connection in a specified workspace and configures the upstream model service address, invoke protocol, and access credentials for model creation.
       *
       * @param tmpReq CreateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelConnectionResponse
       */
      Models::CreateModelConnectionResponse createModelConnectionWithOptions(const string &workspaceId, const Models::CreateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model connection in a specified workspace and configures the upstream model service address, invoke protocol, and access credentials for model creation.
       *
       * @description Creates a model connection in a specified workspace and configures the upstream model service address, invoke protocol, and access credentials for model creation.
       *
       * @param request CreateModelConnectionRequest
       * @return CreateModelConnectionResponse
       */
      Models::CreateModelConnectionResponse createModelConnection(const string &workspaceId, const Models::CreateModelConnectionRequest &request);

      /**
       * @summary Creates permission rules.
       *
       * @description Creates access rules in batches for specified resources in a workspace to define which users or agents can or cannot access the resources.
       *
       * @param tmpReq CreatePermissionRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePermissionRulesResponse
       */
      Models::CreatePermissionRulesResponse createPermissionRulesWithOptions(const string &workspaceId, const Models::CreatePermissionRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates permission rules.
       *
       * @description Creates access rules in batches for specified resources in a workspace to define which users or agents can or cannot access the resources.
       *
       * @param request CreatePermissionRulesRequest
       * @return CreatePermissionRulesResponse
       */
      Models::CreatePermissionRulesResponse createPermissionRules(const string &workspaceId, const Models::CreatePermissionRulesRequest &request);

      /**
       * @summary Creates a skill in a specified workspace and generates an editable draft version. You can derive the draft from an existing version, or specify a target version and a commit message.
       *
       * @description Creates a skill and its draft in a workspace for editing skill instructions and related resources. You can derive the draft from an existing version, or specify a target version and a commit message.
       *
       * @param tmpReq CreateSkillDraftRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraftWithOptions(const string &workspaceId, const Models::CreateSkillDraftRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a skill in a specified workspace and generates an editable draft version. You can derive the draft from an existing version, or specify a target version and a commit message.
       *
       * @description Creates a skill and its draft in a workspace for editing skill instructions and related resources. You can derive the draft from an existing version, or specify a target version and a commit message.
       *
       * @param request CreateSkillDraftRequest
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraft(const string &workspaceId, const Models::CreateSkillDraftRequest &request);

      /**
       * @summary Creates a team in a specified workspace and configures user members and agent members at the same time. Exactly one user member must have the ADMIN role, and agent members can only have the LEADER or WORKER role.
       *
       * @description Creates a team in a specified workspace and configures user members and agent members at the same time.
       *
       * @param tmpReq CreateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const string &workspaceId, const Models::CreateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a team in a specified workspace and configures user members and agent members at the same time. Exactly one user member must have the ADMIN role, and agent members can only have the LEADER or WORKER role.
       *
       * @description Creates a team in a specified workspace and configures user members and agent members at the same time.
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const string &workspaceId, const Models::CreateTeamRequest &request);

      /**
       * @summary Creates a user in a specified workspace. The username must be unique within the workspace, can contain only lowercase letters, digits, and hyphens, and cannot be a reserved name such as manager, admin, or any name starting with worker-. If the password is not specified, the server generates an initial password and returns it in the initialPassword field of the response.
       *
       * @description Creates a user in a workspace for member collaboration and application access, which is used when configuring team members and user logons.
       *
       * @param tmpReq CreateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &workspaceId, const Models::CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user in a specified workspace. The username must be unique within the workspace, can contain only lowercase letters, digits, and hyphens, and cannot be a reserved name such as manager, admin, or any name starting with worker-. If the password is not specified, the server generates an initial password and returns it in the initialPassword field of the response.
       *
       * @description Creates a user in a workspace for member collaboration and application access, which is used when configuring team members and user logons.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &workspaceId, const Models::CreateUserRequest &request);

      /**
       * @summary Creates an AgentCore workspace as a resource scope for organizing agents, models, Model Context Protocol (MCP) services, and collaboration configurations.
       *
       * @description Creates an AgentCore workspace as a resource scope for organizing agents, models, Model Context Protocol (MCP) services, and collaboration configurations.
       * After the workspace is created, you can use the returned workspace ID to call [GetWorkspace](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspace) to query the details, and then manage agents and associated resources in the workspace. For network configuration fields and their dependencies, see the request parameters table.
       *
       * @param tmpReq CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AgentCore workspace as a resource scope for organizing agents, models, Model Context Protocol (MCP) services, and collaboration configurations.
       *
       * @description Creates an AgentCore workspace as a resource scope for organizing agents, models, Model Context Protocol (MCP) services, and collaboration configurations.
       * After the workspace is created, you can use the returned workspace ID to call [GetWorkspace](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspace) to query the details, and then manage agents and associated resources in the workspace. For network configuration fields and their dependencies, see the request parameters table.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Invokes a specified model through a published model connection to verify whether the model invocation pipeline is available.
       *
       * @description Invokes a specified model through a published model connection to verify whether the model invocation pipeline is available.
       *
       * @param tmpReq DebugModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModelWithOptions(const string &workspaceId, const string &modelId, const Models::DebugModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a specified model through a published model connection to verify whether the model invocation pipeline is available.
       *
       * @description Invokes a specified model through a published model connection to verify whether the model invocation pipeline is available.
       *
       * @param request DebugModelRequest
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModel(const string &workspaceId, const string &modelId, const Models::DebugModelRequest &request);

      /**
       * @summary Deletes an access application.
       *
       * @description Deletes a specified access application and removes the access configuration of the application from the workspace.
       *
       * @param request DeleteAccessApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessApplicationResponse
       */
      Models::DeleteAccessApplicationResponse deleteAccessApplicationWithOptions(const string &workspaceId, const string &applicationId, const Models::DeleteAccessApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access application.
       *
       * @description Deletes a specified access application and removes the access configuration of the application from the workspace.
       *
       * @param request DeleteAccessApplicationRequest
       * @return DeleteAccessApplicationResponse
       */
      Models::DeleteAccessApplicationResponse deleteAccessApplication(const string &workspaceId, const string &applicationId, const Models::DeleteAccessApplicationRequest &request);

      /**
       * @summary Deletes the IM channel of a specified agent.
       *
       * @description Deletes the IM channel of a specified agent.
       *
       * @param request DeleteAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentIMChannelResponse
       */
      Models::DeleteAgentIMChannelResponse deleteAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::DeleteAgentIMChannelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the IM channel of a specified agent.
       *
       * @description Deletes the IM channel of a specified agent.
       *
       * @param request DeleteAgentIMChannelRequest
       * @return DeleteAgentIMChannelResponse
       */
      Models::DeleteAgentIMChannelResponse deleteAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::DeleteAgentIMChannelRequest &request);

      /**
       * @summary Deletes the specified AgentSpec and all its versions and metadata. This operation is irreversible.
       *
       * @description Deletes the specified agent template and all its versions and metadata.
       * This operation is irreversible.
       *
       * @param request DeleteAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpecResponse
       */
      Models::DeleteAgentSpecResponse deleteAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified AgentSpec and all its versions and metadata. This operation is irreversible.
       *
       * @description Deletes the specified agent template and all its versions and metadata.
       * This operation is irreversible.
       *
       * @param request DeleteAgentSpecRequest
       * @return DeleteAgentSpecResponse
       */
      Models::DeleteAgentSpecResponse deleteAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecRequest &request);

      /**
       * @summary Deletes the draft version of the specified AgentSpec that is currently being edited and clears the draft version pointer.
       *
       * @description Deletes the draft version of the agent template (AgentSpec) that is currently being edited.
       *
       * @param request DeleteAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpecVersionResponse
       */
      Models::DeleteAgentSpecVersionResponse deleteAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the draft version of the specified AgentSpec that is currently being edited and clears the draft version pointer.
       *
       * @description Deletes the draft version of the agent template (AgentSpec) that is currently being edited.
       *
       * @param request DeleteAgentSpecVersionRequest
       * @return DeleteAgentSpecVersionResponse
       */
      Models::DeleteAgentSpecVersionResponse deleteAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecVersionRequest &request);

      /**
       * @summary Deletes a saved fixed version of a specified managed or custom agent.
       *
       * @description Deletes a saved fixed version of a specified managed or custom agent. You cannot delete versions that are still referenced by service endpoints or the system-maintained latest version.
       *
       * @param request DeleteAgentVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentVersionResponse
       */
      Models::DeleteAgentVersionResponse deleteAgentVersionWithOptions(const string &workspaceId, const string &agentId, const string &agentVersion, const Models::DeleteAgentVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a saved fixed version of a specified managed or custom agent.
       *
       * @description Deletes a saved fixed version of a specified managed or custom agent. You cannot delete versions that are still referenced by service endpoints or the system-maintained latest version.
       *
       * @param request DeleteAgentVersionRequest
       * @return DeleteAgentVersionResponse
       */
      Models::DeleteAgentVersionResponse deleteAgentVersion(const string &workspaceId, const string &agentId, const string &agentVersion, const Models::DeleteAgentVersionRequest &request);

      /**
       * @summary Deletes a credential in a specified workspace and deletes the ciphertext hosted in the credential service. After deletion, agents bound to the credential can no longer obtain the credential content.
       *
       * @description Deletes an access credential that is no longer used in a workspace.
       * If the credential is still bound to an MCP service, dissociate it before deletion.
       *
       * @param request DeleteCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::DeleteCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a credential in a specified workspace and deletes the ciphertext hosted in the credential service. After deletion, agents bound to the credential can no longer obtain the credential content.
       *
       * @description Deletes an access credential that is no longer used in a workspace.
       * If the credential is still bound to an MCP service, dissociate it before deletion.
       *
       * @param request DeleteCredentialRequest
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const string &workspaceId, const string &credentialId, const Models::DeleteCredentialRequest &request);

      /**
       * @summary Deletes a custom code or image agent in a specified workspace and asynchronously cleans up its associated platform resources.
       *
       * @description Deletes a custom code or image agent in a specified workspace and asynchronously cleans up its associated platform resources.
       * ### Before you begin
       * The workspace must be writable. If the agent is still associated with a team, dissociate it from the team first.
       * ### Deletion result
       * A successful response indicates that the deletion request is accepted, and the response summary typically returns `status=Deleting`. If the agent is already being deleted, a subsequent request returns the current summary.
       * Call [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent) to query the deletion progress. After the deletion is complete, a detail query returns a resource not found error. Runtime resources are cleaned up in the background.
       *
       * @param request DeleteCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const string &workspaceId, const string &agentId, const Models::DeleteCustomAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom code or image agent in a specified workspace and asynchronously cleans up its associated platform resources.
       *
       * @description Deletes a custom code or image agent in a specified workspace and asynchronously cleans up its associated platform resources.
       * ### Before you begin
       * The workspace must be writable. If the agent is still associated with a team, dissociate it from the team first.
       * ### Deletion result
       * A successful response indicates that the deletion request is accepted, and the response summary typically returns `status=Deleting`. If the agent is already being deleted, a subsequent request returns the current summary.
       * Call [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent) to query the deletion progress. After the deletion is complete, a detail query returns a resource not found error. Runtime resources are cleaned up in the background.
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const string &workspaceId, const string &agentId, const Models::DeleteCustomAgentRequest &request);

      /**
       * @summary Deletes a managed agent in a specified workspace and asynchronously cleans up its associated platform resources.
       *
       * @description Deletes a managed agent in a specified workspace and asynchronously cleans up its associated platform resources.
       * ### Prerequisites
       * The workspace must be writable. If the agent is still associated with a team, dissociate it from the team first.
       * ### Deletion results
       * A successful response indicates that the deletion request has been accepted, and the response summary is typically `status=Deleting`. If the agent is already being deleted, a subsequent request returns the current summary.
       * You can query the deletion progress by calling [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent). After the deletion is complete, a details query returns a resource not found error. The processes and runtime environment of the managed agent are managed by the caller.
       *
       * @param request DeleteExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExternalAgentResponse
       */
      Models::DeleteExternalAgentResponse deleteExternalAgentWithOptions(const string &workspaceId, const string &agentId, const Models::DeleteExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a managed agent in a specified workspace and asynchronously cleans up its associated platform resources.
       *
       * @description Deletes a managed agent in a specified workspace and asynchronously cleans up its associated platform resources.
       * ### Prerequisites
       * The workspace must be writable. If the agent is still associated with a team, dissociate it from the team first.
       * ### Deletion results
       * A successful response indicates that the deletion request has been accepted, and the response summary is typically `status=Deleting`. If the agent is already being deleted, a subsequent request returns the current summary.
       * You can query the deletion progress by calling [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent). After the deletion is complete, a details query returns a resource not found error. The processes and runtime environment of the managed agent are managed by the caller.
       *
       * @param request DeleteExternalAgentRequest
       * @return DeleteExternalAgentResponse
       */
      Models::DeleteExternalAgentResponse deleteExternalAgent(const string &workspaceId, const string &agentId, const Models::DeleteExternalAgentRequest &request);

      /**
       * @summary Disconnects the identity source integration of a workspace. For CustomSSO, this operation clears the shared user pool and related SAML and SCIM resources. To disable only logon or synchronization, use the corresponding API operations.
       *
       * @description Disconnects the association between a workspace and an enterprise identity source. This operation is used to terminate identity federation or clear the current attach configuration before you attach another identity source.
       * Disconnecting clears the AgentCore users and associated configurations imported from the identity source. For `CustomSSO`, it also clears the shared user pool and SAML and SCIM access resources. Applications created by users in the enterprise identity system must still be managed on the enterprise side.
       * ### Preparations before disconnecting
       * Remove the reference relationships between the related users and collaboration teams first. If teams still reference these users, the API operation rejects the disconnection request.
       * If you only want to temporarily disable a specific capability, you can retain the identity source binding. Use [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider) to disable logon, or use [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM) to disable SCIM synchronization.
       * ### Verify the disconnection result
       * The disconnection is executed in the background. After the request is accepted, `DISCONNECTING` is returned. You can query the progress by calling [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider):
       * - If the query returns `IdentityProviderNotFound`, the binding has been removed and the disconnection is complete.
       * - If `DISCONNECT_FAILED` is returned, the cleanup failed. Some resources may have already been cleared. You can initiate the disconnection again.
       * You can bind a new identity source to the workspace only after the disconnection is complete.
       *
       * @param request DeleteIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::DeleteIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disconnects the identity source integration of a workspace. For CustomSSO, this operation clears the shared user pool and related SAML and SCIM resources. To disable only logon or synchronization, use the corresponding API operations.
       *
       * @description Disconnects the association between a workspace and an enterprise identity source. This operation is used to terminate identity federation or clear the current attach configuration before you attach another identity source.
       * Disconnecting clears the AgentCore users and associated configurations imported from the identity source. For `CustomSSO`, it also clears the shared user pool and SAML and SCIM access resources. Applications created by users in the enterprise identity system must still be managed on the enterprise side.
       * ### Preparations before disconnecting
       * Remove the reference relationships between the related users and collaboration teams first. If teams still reference these users, the API operation rejects the disconnection request.
       * If you only want to temporarily disable a specific capability, you can retain the identity source binding. Use [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider) to disable logon, or use [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM) to disable SCIM synchronization.
       * ### Verify the disconnection result
       * The disconnection is executed in the background. After the request is accepted, `DISCONNECTING` is returned. You can query the progress by calling [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider):
       * - If the query returns `IdentityProviderNotFound`, the binding has been removed and the disconnection is complete.
       * - If `DISCONNECT_FAILED` is returned, the cleanup failed. Some resources may have already been cleared. You can initiate the disconnection again.
       * You can bind a new identity source to the workspace only after the disconnection is complete.
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary Revokes a specified SCIM credential. This operation does not trigger automatic creation of a new token, modify the AC synchronization switch, or disable SAML logon.
       *
       * @description Revokes a SCIM access token to deactivate an old token or clean up credentials that are no longer in use or have expired.
       * SCIM tokens are used to authorize enterprise identity systems to send user provisioning requests to user pools. After revocation, the enterprise identity system can no longer use the token to access the SCIM endpoint.
       * ### Usage
       * **Step 1:** Query the credential list by calling [ListIdentityProviderSCIMCredentials](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderSCIMCredentials) to obtain the target credentialId.
       * **Step 2:** If the enterprise identity system is still using the token, configure another valid token for it first.
       * **Step 3:** Call this operation to revoke the target credential, and then refresh the list to confirm the result.
       * This operation only revokes the specified token. Synchronized users, other tokens, logon configurations, and the user synchronization switch are retained. To disable user synchronization, use [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM).
       *
       * @param request DeleteIdentityProviderSCIMCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderSCIMCredentialResponse
       */
      Models::DeleteIdentityProviderSCIMCredentialResponse deleteIdentityProviderSCIMCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::DeleteIdentityProviderSCIMCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a specified SCIM credential. This operation does not trigger automatic creation of a new token, modify the AC synchronization switch, or disable SAML logon.
       *
       * @description Revokes a SCIM access token to deactivate an old token or clean up credentials that are no longer in use or have expired.
       * SCIM tokens are used to authorize enterprise identity systems to send user provisioning requests to user pools. After revocation, the enterprise identity system can no longer use the token to access the SCIM endpoint.
       * ### Usage
       * **Step 1:** Query the credential list by calling [ListIdentityProviderSCIMCredentials](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderSCIMCredentials) to obtain the target credentialId.
       * **Step 2:** If the enterprise identity system is still using the token, configure another valid token for it first.
       * **Step 3:** Call this operation to revoke the target credential, and then refresh the list to confirm the result.
       * This operation only revokes the specified token. Synchronized users, other tokens, logon configurations, and the user synchronization switch are retained. To disable user synchronization, use [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM).
       *
       * @param request DeleteIdentityProviderSCIMCredentialRequest
       * @return DeleteIdentityProviderSCIMCredentialResponse
       */
      Models::DeleteIdentityProviderSCIMCredentialResponse deleteIdentityProviderSCIMCredential(const string &workspaceId, const string &credentialId, const Models::DeleteIdentityProviderSCIMCredentialRequest &request);

      /**
       * @summary Deletes the image cache association in a workspace and checks for agent references and instance usage before submission.
       *
       * @description Deletes the image cache association in a workspace and checks for agent references and instance usage before submission.
       * ### Deletion conditions
       * The deletion request is rejected if the cache is still referenced by an agent with the cache switch enabled, or if instances are still using it or resources are being released. You can first query `agentCount`, `canDelete`, and `deleteBlockReason` by calling [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache).
       * ### Query results
       * The `imageId` in the response corresponds to this request. The current implementation of `deletionPending` returns `false`. To confirm whether the cache is still visible, call [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache) or [ListImageCaches](https://api.aliyun.com/document/AgentCore/2026-08-04/ListImageCaches).
       * This operation deletes the cache association in the specified workspace, but does not delete the source ACR repository or the source image.
       *
       * @param request DeleteImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageCacheResponse
       */
      Models::DeleteImageCacheResponse deleteImageCacheWithOptions(const string &imageId, const Models::DeleteImageCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the image cache association in a workspace and checks for agent references and instance usage before submission.
       *
       * @description Deletes the image cache association in a workspace and checks for agent references and instance usage before submission.
       * ### Deletion conditions
       * The deletion request is rejected if the cache is still referenced by an agent with the cache switch enabled, or if instances are still using it or resources are being released. You can first query `agentCount`, `canDelete`, and `deleteBlockReason` by calling [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache).
       * ### Query results
       * The `imageId` in the response corresponds to this request. The current implementation of `deletionPending` returns `false`. To confirm whether the cache is still visible, call [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache) or [ListImageCaches](https://api.aliyun.com/document/AgentCore/2026-08-04/ListImageCaches).
       * This operation deletes the cache association in the specified workspace, but does not delete the source ACR repository or the source image.
       *
       * @param request DeleteImageCacheRequest
       * @return DeleteImageCacheResponse
       */
      Models::DeleteImageCacheResponse deleteImageCache(const string &imageId, const Models::DeleteImageCacheRequest &request);

      /**
       * @summary Deletes a managed Harness agent in a specified workspace and asynchronously cleans up its platform-associated resources.
       *
       * @description Deletes a managed Harness agent in a specified workspace and asynchronously cleans up its platform-associated resources.
       * ### Prerequisites
       * The workspace must be writable. If the agent is still associated with a team, dissociate it from the team first.
       * ### Deletion results
       * A successful response indicates that the deletion request has been accepted, and the response summary is typically `status=Deleting`. If the agent is already being deleted, a subsequent request returns the current summary.
       * You can call [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent) to query the deletion progress. After the deletion is complete, a details query returns a resource not found error. Runtime resources are cleaned up in the background.
       *
       * @param request DeleteManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteManagedAgentResponse
       */
      Models::DeleteManagedAgentResponse deleteManagedAgentWithOptions(const string &workspaceId, const string &agentId, const Models::DeleteManagedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a managed Harness agent in a specified workspace and asynchronously cleans up its platform-associated resources.
       *
       * @description Deletes a managed Harness agent in a specified workspace and asynchronously cleans up its platform-associated resources.
       * ### Prerequisites
       * The workspace must be writable. If the agent is still associated with a team, dissociate it from the team first.
       * ### Deletion results
       * A successful response indicates that the deletion request has been accepted, and the response summary is typically `status=Deleting`. If the agent is already being deleted, a subsequent request returns the current summary.
       * You can call [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent) to query the deletion progress. After the deletion is complete, a details query returns a resource not found error. Runtime resources are cleaned up in the background.
       *
       * @param request DeleteManagedAgentRequest
       * @return DeleteManagedAgentResponse
       */
      Models::DeleteManagedAgentResponse deleteManagedAgent(const string &workspaceId, const string &agentId, const Models::DeleteManagedAgentRequest &request);

      /**
       * @summary Deletes a specified MCP service. The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @description Deletes a specified MCP service.
       * The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @param request DeleteMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcpWithOptions(const string &mcpServerId, const string &workspaceId, const Models::DeleteMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified MCP service. The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @description Deletes a specified MCP service.
       * The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @param request DeleteMcpRequest
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcp(const string &mcpServerId, const string &workspaceId, const Models::DeleteMcpRequest &request);

      /**
       * @summary Deletes a long-term memory by memory ID.
       *
       * @description Deletes a long-term memory by memory ID.
       *
       * @param request DeleteMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a long-term memory by memory ID.
       *
       * @description Deletes a long-term memory by memory ID.
       *
       * @param request DeleteMemoryRequest
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::DeleteMemoryRequest &request);

      /**
       * @summary Asynchronously deletes a MemoryStore and all its long-term memories.
       *
       * @description Asynchronously deletes a specified long-term memory store (MemoryStore) and all its long-term memories.
       *
       * @param request DeleteMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryStoreResponse
       */
      Models::DeleteMemoryStoreResponse deleteMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::DeleteMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously deletes a MemoryStore and all its long-term memories.
       *
       * @description Asynchronously deletes a specified long-term memory store (MemoryStore) and all its long-term memories.
       *
       * @param request DeleteMemoryStoreRequest
       * @return DeleteMemoryStoreResponse
       */
      Models::DeleteMemoryStoreResponse deleteMemoryStore(const string &workspaceId, const string &memoryStoreName, const Models::DeleteMemoryStoreRequest &request);

      /**
       * @summary Deletes a model in a specified workspace. Models that are in use cannot be deleted.
       *
       * @description Deletes a model in a specified workspace. Models that are in use cannot be deleted.
       *
       * @param request DeleteModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const string &workspaceId, const string &modelId, const Models::DeleteModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model in a specified workspace. Models that are in use cannot be deleted.
       *
       * @description Deletes a model in a specified workspace. Models that are in use cannot be deleted.
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const string &workspaceId, const string &modelId, const Models::DeleteModelRequest &request);

      /**
       * @summary Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
       *
       * @description Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
       *
       * @param request DeleteModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelConnectionResponse
       */
      Models::DeleteModelConnectionResponse deleteModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::DeleteModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
       *
       * @description Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
       *
       * @param request DeleteModelConnectionRequest
       * @return DeleteModelConnectionResponse
       */
      Models::DeleteModelConnectionResponse deleteModelConnection(const string &workspaceId, const string &connectionId, const Models::DeleteModelConnectionRequest &request);

      /**
       * @summary Deletes a permission rule.
       *
       * @description Deletes an access rule in a workspace and revokes the configuration of the rule. Repeated deletions still return a success response.
       *
       * @param request DeletePermissionRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePermissionRuleResponse
       */
      Models::DeletePermissionRuleResponse deletePermissionRuleWithOptions(const string &workspaceId, const string &permissionRuleId, const Models::DeletePermissionRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a permission rule.
       *
       * @description Deletes an access rule in a workspace and revokes the configuration of the rule. Repeated deletions still return a success response.
       *
       * @param request DeletePermissionRuleRequest
       * @return DeletePermissionRuleResponse
       */
      Models::DeletePermissionRuleResponse deletePermissionRule(const string &workspaceId, const string &permissionRuleId, const Models::DeletePermissionRuleRequest &request);

      /**
       * @summary Deletes a skill and its related version data from the specified workspace. The deletion operation is irreversible.
       *
       * @description Deletes a skill and its related version data from the specified workspace.
       * The deletion operation is irreversible.
       *
       * @param request DeleteSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const string &workspaceId, const string &skillName, const Models::DeleteSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a skill and its related version data from the specified workspace. The deletion operation is irreversible.
       *
       * @description Deletes a skill and its related version data from the specified workspace.
       * The deletion operation is irreversible.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const string &workspaceId, const string &skillName, const Models::DeleteSkillRequest &request);

      /**
       * @summary Deletes the draft version of the specified skill that is currently being edited.
       *
       * @description Deletes the draft of a skill that is being edited in normal version mode.
       * In `HEAD` mode, a persistent draft is used, and the delete draft operation is not supported. To modify the content, continue editing the draft. To remove the entire skill, use [DeleteSkill](https://api.aliyun.com/document/AgentCore/2026-08-04/DeleteSkill).
       *
       * @param request DeleteSkillDraftRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillDraftResponse
       */
      Models::DeleteSkillDraftResponse deleteSkillDraftWithOptions(const string &workspaceId, const string &skillName, const Models::DeleteSkillDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the draft version of the specified skill that is currently being edited.
       *
       * @description Deletes the draft of a skill that is being edited in normal version mode.
       * In `HEAD` mode, a persistent draft is used, and the delete draft operation is not supported. To modify the content, continue editing the draft. To remove the entire skill, use [DeleteSkill](https://api.aliyun.com/document/AgentCore/2026-08-04/DeleteSkill).
       *
       * @param request DeleteSkillDraftRequest
       * @return DeleteSkillDraftResponse
       */
      Models::DeleteSkillDraftResponse deleteSkillDraft(const string &workspaceId, const string &skillName, const Models::DeleteSkillDraftRequest &request);

      /**
       * @summary Deletes a team in a specified workspace. Deleting a team does not delete the users and agents within it, but only removes the membership associations.
       *
       * @description Deletes a team in a specified workspace.
       *
       * @param request DeleteTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const string &workspaceId, const string &teamId, const Models::DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a team in a specified workspace. Deleting a team does not delete the users and agents within it, but only removes the membership associations.
       *
       * @description Deletes a team in a specified workspace.
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const string &workspaceId, const string &teamId, const Models::DeleteTeamRequest &request);

      /**
       * @summary Deletes a user from a specified workspace. A user cannot be deleted if they are still a member of any team. Remove the user from the team first.
       *
       * @description Deletes a user from a specified workspace.
       *
       * @param request DeleteUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::DeleteUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user from a specified workspace. A user cannot be deleted if they are still a member of any team. Remove the user from the team first.
       *
       * @description Deletes a user from a specified workspace.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const string &workspaceId, const string &agentCoreUserId, const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a workspace that is no longer in use and ends the management lifecycle of the workspace.
       *
       * @description Deletes a workspace that is no longer in use and ends the management lifecycle of the workspace. The API operation processes repeated deletion requests for the same workspace in the `Deleting` or `Deleted` state based on idempotence.
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace that is no longer in use and ends the management lifecycle of the workspace.
       *
       * @description Deletes a workspace that is no longer in use and ends the management lifecycle of the workspace. The API operation processes repeated deletion requests for the same workspace in the `Deleting` or `Deleted` state based on idempotence.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Disables the QoderCLI connector in a specified workspace. The connector can be disabled only when no agent is using it. After being disabled, the connector and its service account key configuration are removed.
       *
       * @description Disables the QoderCLI connector in a workspace.
       *
       * @param request DisableConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableConnectorResponse
       */
      Models::DisableConnectorResponse disableConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::DisableConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the QoderCLI connector in a specified workspace. The connector can be disabled only when no agent is using it. After being disabled, the connector and its service account key configuration are removed.
       *
       * @description Disables the QoderCLI connector in a workspace.
       *
       * @param request DisableConnectorRequest
       * @return DisableConnectorResponse
       */
      Models::DisableConnectorResponse disableConnector(const string &workspaceId, const string &connectorName, const Models::DisableConnectorRequest &request);

      /**
       * @summary Retrieves the OSS presigned download URL for a specified AgentSpec to download the AgentSpec ZIP package.
       *
       * @description Retrieves the OSS presigned download URL for a specified agent template to download the agent template ZIP package.
       *
       * @param request DownloadAgentSpecViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadAgentSpecViaOssResponse
       */
      Models::DownloadAgentSpecViaOssResponse downloadAgentSpecViaOssWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DownloadAgentSpecViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS presigned download URL for a specified AgentSpec to download the AgentSpec ZIP package.
       *
       * @description Retrieves the OSS presigned download URL for a specified agent template to download the agent template ZIP package.
       *
       * @param request DownloadAgentSpecViaOssRequest
       * @return DownloadAgentSpecViaOssResponse
       */
      Models::DownloadAgentSpecViaOssResponse downloadAgentSpecViaOss(const string &workspaceId, const string &agentSpecName, const Models::DownloadAgentSpecViaOssRequest &request);

      /**
       * @summary Retrieves the OSS pre-signed download URL for a specified skill version to download the corresponding skill ZIP package.
       *
       * @description Retrieves the OSS pre-signed download URL for a specified skill version to download the corresponding skill ZIP package.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOssWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::DownloadSkillVersionViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS pre-signed download URL for a specified skill version to download the corresponding skill ZIP package.
       *
       * @description Retrieves the OSS pre-signed download URL for a specified skill version to download the corresponding skill ZIP package.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOss(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::DownloadSkillVersionViaOssRequest &request);

      /**
       * @summary Enables the QoderCLI connector in a specified workspace. The request must provide a site, an API key, and at least one service account key. The service verifies all account keys before saving the configuration.
       *
       * @description Enables the QoderCLI connector in a workspace. Before enabling, verify the credentials by using [VerifyConnector](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyConnector).
       *
       * @param tmpReq EnableConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableConnectorResponse
       */
      Models::EnableConnectorResponse enableConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::EnableConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the QoderCLI connector in a specified workspace. The request must provide a site, an API key, and at least one service account key. The service verifies all account keys before saving the configuration.
       *
       * @description Enables the QoderCLI connector in a workspace. Before enabling, verify the credentials by using [VerifyConnector](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyConnector).
       *
       * @param request EnableConnectorRequest
       * @return EnableConnectorResponse
       */
      Models::EnableConnectorResponse enableConnector(const string &workspaceId, const string &connectorName, const Models::EnableConnectorRequest &request);

      /**
       * @summary Retrieves a custom image preparation task by using a submitted clientToken and queries the current progress.
       *
       * @description Uses the `clientToken` of a create or update request to retrieve a custom image preparation task, which allows you to continue querying the processing progress after a request response is lost.
       * ### Search scope
       * Pass the `clientToken` used when submitting [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent) as a query parameter, and use the original workspace.
       * The preparation task can be retrieved only if the submission result includes `imagePreparation`. If no corresponding preparation task exists, a resource not found error is returned.
       * ### Query phases
       * | `phase` | Description |
       * | --- | --- |
       * | `QUEUED`, `CHECKING` | Queued or checking the source. |
       * | `COPYING` | Copying the image. |
       * | `STARTING` | Starting the target version. |
       * | `HEALTH_CHECKING` | Waiting for the target version instance to be ready. |
       * | `SUCCEEDED` | The target version deployment succeeded. |
       * | `FAILED` | The preparation or deployment failed. Check `failedPhase` and `error`. |
       * | `CANCELLED` | The target version has been replaced by a subsequent configuration or canceled. |
       * After the task is found, you can use the `preparationId` to call [GetCustomAgentImagePreparation](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgentImagePreparation) to continuously query the progress.
       *
       * @param request FindCustomAgentImagePreparationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindCustomAgentImagePreparationResponse
       */
      Models::FindCustomAgentImagePreparationResponse findCustomAgentImagePreparationWithOptions(const string &workspaceId, const Models::FindCustomAgentImagePreparationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a custom image preparation task by using a submitted clientToken and queries the current progress.
       *
       * @description Uses the `clientToken` of a create or update request to retrieve a custom image preparation task, which allows you to continue querying the processing progress after a request response is lost.
       * ### Search scope
       * Pass the `clientToken` used when submitting [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent) as a query parameter, and use the original workspace.
       * The preparation task can be retrieved only if the submission result includes `imagePreparation`. If no corresponding preparation task exists, a resource not found error is returned.
       * ### Query phases
       * | `phase` | Description |
       * | --- | --- |
       * | `QUEUED`, `CHECKING` | Queued or checking the source. |
       * | `COPYING` | Copying the image. |
       * | `STARTING` | Starting the target version. |
       * | `HEALTH_CHECKING` | Waiting for the target version instance to be ready. |
       * | `SUCCEEDED` | The target version deployment succeeded. |
       * | `FAILED` | The preparation or deployment failed. Check `failedPhase` and `error`. |
       * | `CANCELLED` | The target version has been replaced by a subsequent configuration or canceled. |
       * After the task is found, you can use the `preparationId` to call [GetCustomAgentImagePreparation](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgentImagePreparation) to continuously query the progress.
       *
       * @param request FindCustomAgentImagePreparationRequest
       * @return FindCustomAgentImagePreparationResponse
       */
      Models::FindCustomAgentImagePreparationResponse findCustomAgentImagePreparation(const string &workspaceId, const Models::FindCustomAgentImagePreparationRequest &request);

      /**
       * @summary Forcibly publishes a specified skill version by bypassing the standard review process.
       *
       * @description Forcibly publishes a specified skill version by bypassing the standard review process.
       *
       * @param tmpReq ForcePublishSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::ForcePublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Forcibly publishes a specified skill version by bypassing the standard review process.
       *
       * @description Forcibly publishes a specified skill version by bypassing the standard review process.
       *
       * @param request ForcePublishSkillVersionRequest
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::ForcePublishSkillVersionRequest &request);

      /**
       * @summary Queries the access application.
       *
       * @description Queries the configuration of an access application in a workspace to view the application access information and user source settings.
       * The query result does not include the plaintext of the application secret. The secret is returned only when the application is created.
       *
       * @param request GetAccessApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessApplicationResponse
       */
      Models::GetAccessApplicationResponse getAccessApplicationWithOptions(const string &workspaceId, const string &applicationId, const Models::GetAccessApplicationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access application.
       *
       * @description Queries the configuration of an access application in a workspace to view the application access information and user source settings.
       * The query result does not include the plaintext of the application secret. The secret is returned only when the application is created.
       *
       * @param request GetAccessApplicationRequest
       * @return GetAccessApplicationResponse
       */
      Models::GetAccessApplicationResponse getAccessApplication(const string &workspaceId, const string &applicationId, const Models::GetAccessApplicationRequest &request);

      /**
       * @summary Retrieves the time-limited read-only download URL for the currently saved fixed code package of a custom code or image agent.
       *
       * @description Retrieves the download URL for the currently saved code package of a custom code or image agent, which can be used to download, inspect, or reuse the fixed code package.
       * ### Download scope
       * Locates the fixed code package referenced by the currently saved configuration by using `workspaceId` and `agentId`. This applies to code packages uploaded locally or imported from OSS. Arbitrary bucket names, object keys, or historical version parameters are not accepted.
       * The current configuration must be deployed as a code package and the fixed package must be available. You do not need to wait for the running instance to be ready. An error is returned if the object has been changed, is missing, or is unreadable.
       * ### Use the response
       * Use `downloadUrl` to download the file. The `fileName`, `fileSize`, `format`, `etag`, and `crc64` fields describe the corresponding fixed package. The unit of `fileSize` is bytes. The `resourceVersionId` field identifies the saved configuration version corresponding to this download.
       * The URL is valid for up to 10 minutes and does not exceed the validity period of the underlying credentials, subject to `expiresAt`. Retrieve the URL again after it expires.
       *
       * @param request GetAgentCodePackageDownloadUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentCodePackageDownloadUrlResponse
       */
      Models::GetAgentCodePackageDownloadUrlResponse getAgentCodePackageDownloadUrlWithOptions(const string &workspaceId, const string &agentId, const Models::GetAgentCodePackageDownloadUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the time-limited read-only download URL for the currently saved fixed code package of a custom code or image agent.
       *
       * @description Retrieves the download URL for the currently saved code package of a custom code or image agent, which can be used to download, inspect, or reuse the fixed code package.
       * ### Download scope
       * Locates the fixed code package referenced by the currently saved configuration by using `workspaceId` and `agentId`. This applies to code packages uploaded locally or imported from OSS. Arbitrary bucket names, object keys, or historical version parameters are not accepted.
       * The current configuration must be deployed as a code package and the fixed package must be available. You do not need to wait for the running instance to be ready. An error is returned if the object has been changed, is missing, or is unreadable.
       * ### Use the response
       * Use `downloadUrl` to download the file. The `fileName`, `fileSize`, `format`, `etag`, and `crc64` fields describe the corresponding fixed package. The unit of `fileSize` is bytes. The `resourceVersionId` field identifies the saved configuration version corresponding to this download.
       * The URL is valid for up to 10 minutes and does not exceed the validity period of the underlying credentials, subject to `expiresAt`. Retrieve the URL again after it expires.
       *
       * @param request GetAgentCodePackageDownloadUrlRequest
       * @return GetAgentCodePackageDownloadUrlResponse
       */
      Models::GetAgentCodePackageDownloadUrlResponse getAgentCodePackageDownloadUrl(const string &workspaceId, const string &agentId, const Models::GetAgentCodePackageDownloadUrlRequest &request);

      /**
       * @summary Generates a RAM authorization link for the specified code package source bucket for the workspace resource role.
       *
       * @description Generates an authorization link for the workspace resource role to read the code package source bucket, which is used to complete authorization before deploying an existing OSS code package.
       * ### Authorization steps
       * **Step 1:** Provide the `ossBucketName` to obtain the `authorizeUrl` for the current workspace resource role.
       * **Step 2:** Open the returned link and confirm the authorization.
       * **Step 3:** Call [VerifyAgentCodePackageOssRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyAgentCodePackageOssRamAuthorization) to query the policy binding status. To verify a specific code package object, call [ValidateAgentCodePackageFromOss](https://api.aliyun.com/document/AgentCore/2026-08-04/ValidateAgentCodePackageFromOss).
       * ### Authorization scope
       * The role is selected by the server and cannot be overridden by the caller. This authorization reuses the `OSSObjectRestoreCustom` template, which includes permissions such as reading, writing, and deleting objects, and is not a read-only authorization. Existing authorizations for the same role and bucket can be reused.
       * Obtaining the link itself does not complete the authorization, transfer the code package, or modify the default OSS binding of the workspace.
       *
       * @param request GetAgentCodePackageOssRamAuthorizeUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentCodePackageOssRamAuthorizeUrlResponse
       */
      Models::GetAgentCodePackageOssRamAuthorizeUrlResponse getAgentCodePackageOssRamAuthorizeUrlWithOptions(const string &workspaceId, const Models::GetAgentCodePackageOssRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a RAM authorization link for the specified code package source bucket for the workspace resource role.
       *
       * @description Generates an authorization link for the workspace resource role to read the code package source bucket, which is used to complete authorization before deploying an existing OSS code package.
       * ### Authorization steps
       * **Step 1:** Provide the `ossBucketName` to obtain the `authorizeUrl` for the current workspace resource role.
       * **Step 2:** Open the returned link and confirm the authorization.
       * **Step 3:** Call [VerifyAgentCodePackageOssRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyAgentCodePackageOssRamAuthorization) to query the policy binding status. To verify a specific code package object, call [ValidateAgentCodePackageFromOss](https://api.aliyun.com/document/AgentCore/2026-08-04/ValidateAgentCodePackageFromOss).
       * ### Authorization scope
       * The role is selected by the server and cannot be overridden by the caller. This authorization reuses the `OSSObjectRestoreCustom` template, which includes permissions such as reading, writing, and deleting objects, and is not a read-only authorization. Existing authorizations for the same role and bucket can be reused.
       * Obtaining the link itself does not complete the authorization, transfer the code package, or modify the default OSS binding of the workspace.
       *
       * @param request GetAgentCodePackageOssRamAuthorizeUrlRequest
       * @return GetAgentCodePackageOssRamAuthorizeUrlResponse
       */
      Models::GetAgentCodePackageOssRamAuthorizeUrlResponse getAgentCodePackageOssRamAuthorizeUrl(const string &workspaceId, const Models::GetAgentCodePackageOssRamAuthorizeUrlRequest &request);

      /**
       * @summary Generates a time-limited upload URL for a local code package, and returns the upload method, request headers, and the sourceUri for subsequent deployment.
       *
       * @description Retrieves a time-limited direct upload URL and upload requirements for a local code package. After the upload is complete, use the returned `sourceUri` to submit the agent deployment.
       * ### Request requirements
       * | Field | Requirement |
       * | --- | --- |
       * | `fileName` | The name of the ZIP or TAR.GZ file without the folder. Maximum length: 255 characters. |
       * | `format` | `zip` or `tar.gz`. Must match the file name extension. |
       * | `fileSize` | The size of the compressed package in bytes. Valid values: 1 to 500000000. |
       * ### Upload and deployment
       * **Step 1:** Use the `uploadMethod`, `uploadUrl`, and `headers` from the response to upload the file directly. This operation only generates the URL and does not upload the file content.
       * **Step 2:** After the upload is complete, specify the `sourceUri` in the `artifact.code.sourceUri` parameter of the [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent) operation. You must also provide the `languageRuntime`, `entrypoint`, and service port.
       * **Step 3:** During creation or update, the actual object and its size are verified again. The configuration is saved after the object is transferred to a fixed replica.
       * The upload URL is valid for up to 10 minutes and does not exceed the expiration time of the underlying temporary credentials. The exact expiration time is subject to the `expiresAt` value. If the URL expires, obtain a new one and use the original link and request headers from the response.
       *
       * @param tmpReq GetAgentCodePackageUploadUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentCodePackageUploadUrlResponse
       */
      Models::GetAgentCodePackageUploadUrlResponse getAgentCodePackageUploadUrlWithOptions(const string &workspaceId, const Models::GetAgentCodePackageUploadUrlRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a time-limited upload URL for a local code package, and returns the upload method, request headers, and the sourceUri for subsequent deployment.
       *
       * @description Retrieves a time-limited direct upload URL and upload requirements for a local code package. After the upload is complete, use the returned `sourceUri` to submit the agent deployment.
       * ### Request requirements
       * | Field | Requirement |
       * | --- | --- |
       * | `fileName` | The name of the ZIP or TAR.GZ file without the folder. Maximum length: 255 characters. |
       * | `format` | `zip` or `tar.gz`. Must match the file name extension. |
       * | `fileSize` | The size of the compressed package in bytes. Valid values: 1 to 500000000. |
       * ### Upload and deployment
       * **Step 1:** Use the `uploadMethod`, `uploadUrl`, and `headers` from the response to upload the file directly. This operation only generates the URL and does not upload the file content.
       * **Step 2:** After the upload is complete, specify the `sourceUri` in the `artifact.code.sourceUri` parameter of the [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent) operation. You must also provide the `languageRuntime`, `entrypoint`, and service port.
       * **Step 3:** During creation or update, the actual object and its size are verified again. The configuration is saved after the object is transferred to a fixed replica.
       * The upload URL is valid for up to 10 minutes and does not exceed the expiration time of the underlying temporary credentials. The exact expiration time is subject to the `expiresAt` value. If the URL expires, obtain a new one and use the original link and request headers from the response.
       *
       * @param request GetAgentCodePackageUploadUrlRequest
       * @return GetAgentCodePackageUploadUrlResponse
       */
      Models::GetAgentCodePackageUploadUrlResponse getAgentCodePackageUploadUrl(const string &workspaceId, const Models::GetAgentCodePackageUploadUrlRequest &request);

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
      Models::GetAgentIMChannelResponse getAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::GetAgentIMChannelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified agent IM channel.
       *
       * @description Queries the details of a specified agent IM channel.
       *
       * @param request GetAgentIMChannelRequest
       * @return GetAgentIMChannelResponse
       */
      Models::GetAgentIMChannelResponse getAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::GetAgentIMChannelRequest &request);

      /**
       * @summary Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @description Queries the basic information, version status, and summaries of all versions of an agent template (AgentSpec) for viewing the template and selecting a version.
       *
       * @param request GetAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecResponse
       */
      Models::GetAgentSpecResponse getAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @description Queries the basic information, version status, and summaries of all versions of an agent template (AgentSpec) for viewing the template and selecting a version.
       *
       * @param request GetAgentSpecRequest
       * @return GetAgentSpecResponse
       */
      Models::GetAgentSpecResponse getAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecRequest &request);

      /**
       * @summary Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API operation to complete the import.
       *
       * @description Retrieves the upload URL for an agent template (AgentSpec) ZIP package to import templates from local files.
       * Files are transferred through Object Storage Service (OSS). First, upload the file by using the returned URL, and then call the [UploadAgentSpecViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/UploadAgentSpecViaOss) API operation to complete the import.
       *
       * @param request GetAgentSpecImportFileUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecImportFileUrlResponse
       */
      Models::GetAgentSpecImportFileUrlResponse getAgentSpecImportFileUrlWithOptions(const string &workspaceId, const Models::GetAgentSpecImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API operation to complete the import.
       *
       * @description Retrieves the upload URL for an agent template (AgentSpec) ZIP package to import templates from local files.
       * Files are transferred through Object Storage Service (OSS). First, upload the file by using the returned URL, and then call the [UploadAgentSpecViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/UploadAgentSpecViaOss) API operation to complete the import.
       *
       * @param request GetAgentSpecImportFileUrlRequest
       * @return GetAgentSpecImportFileUrlResponse
       */
      Models::GetAgentSpecImportFileUrlResponse getAgentSpecImportFileUrl(const string &workspaceId, const Models::GetAgentSpecImportFileUrlRequest &request);

      /**
       * @summary Queries the full content of the latest version of a specified AgentSpec for editing or viewing the latest version.
       *
       * @description Queries the full content of the latest version of an agent template (AgentSpec) for viewing or editing the latest version.
       *
       * @param request GetAgentSpecLatestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecLatestResponse
       */
      Models::GetAgentSpecLatestResponse getAgentSpecLatestWithOptions(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecLatestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full content of the latest version of a specified AgentSpec for editing or viewing the latest version.
       *
       * @description Queries the full content of the latest version of an agent template (AgentSpec) for viewing or editing the latest version.
       *
       * @param request GetAgentSpecLatestRequest
       * @return GetAgentSpecLatestResponse
       */
      Models::GetAgentSpecLatestResponse getAgentSpecLatest(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecLatestRequest &request);

      /**
       * @summary Queries the full content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
       *
       * @description Queries the full content of a specified agent template version, including the manifest content, resource files, and metadata.
       *
       * @param request GetAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecVersionResponse
       */
      Models::GetAgentSpecVersionResponse getAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::GetAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
       *
       * @description Queries the full content of a specified agent template version, including the manifest content, resource files, and metadata.
       *
       * @param request GetAgentSpecVersionRequest
       * @return GetAgentSpecVersionResponse
       */
      Models::GetAgentSpecVersionResponse getAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::GetAgentSpecVersionRequest &request);

      /**
       * @summary Queries the details of an agent version.
       *
       * @description Queries the details of a saved fixed version for a specified managed or custom agent. The configuration field returns the agent configuration at the time the version was saved.
       *
       * @param request GetAgentVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentVersionResponse
       */
      Models::GetAgentVersionResponse getAgentVersionWithOptions(const string &workspaceId, const string &agentId, const string &agentVersion, const Models::GetAgentVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an agent version.
       *
       * @description Queries the details of a saved fixed version for a specified managed or custom agent. The configuration field returns the agent configuration at the time the version was saved.
       *
       * @param request GetAgentVersionRequest
       * @return GetAgentVersionResponse
       */
      Models::GetAgentVersionResponse getAgentVersion(const string &workspaceId, const string &agentId, const string &agentVersion, const Models::GetAgentVersionRequest &request);

      /**
       * @summary Queries the details of a specified credential and returns the list of agents bound to the credential. The credential content is returned in a masked format.
       *
       * @description Queries the details of a specified credential and returns the list of agents bound to the credential.
       * ### Response content
       * Queries the credential type, description, application scope, and binding information. Supports two types: `apiKey` and `mcpHeader`.
       * - `apiKey`: The key value is returned in a masked format.
       * - `mcpHeader`: Returns the configured header name without the header value. The `resourceType` of the applicable resource is `mcpServer`.
       * To modify the configuration, call [UpdateCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCredential).
       *
       * @param request GetCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::GetCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified credential and returns the list of agents bound to the credential. The credential content is returned in a masked format.
       *
       * @description Queries the details of a specified credential and returns the list of agents bound to the credential.
       * ### Response content
       * Queries the credential type, description, application scope, and binding information. Supports two types: `apiKey` and `mcpHeader`.
       * - `apiKey`: The key value is returned in a masked format.
       * - `mcpHeader`: Returns the configured header name without the header value. The `resourceType` of the applicable resource is `mcpServer`.
       * To modify the configuration, call [UpdateCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCredential).
       *
       * @param request GetCredentialRequest
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const string &workspaceId, const string &credentialId, const Models::GetCredentialRequest &request);

      /**
       * @summary Queries the latest deployment configuration, version processing results, code package or image information, and running instance status of a custom code or image agent.
       *
       * @description Queries the configuration, artifacts, and running status of a custom code or image agent to confirm the processing and effective results of creation or updates.
       * ### Query configuration processing results
       * After creation or update, you can poll this operation. The returned configuration belongs to the latest submitted version and may not have taken effect yet.
       * | Field | Description |
       * | --- | --- |
       * | `latestSpecVersion` | The latest expected configuration version. |
       * | `effectiveSpecVersion` | The currently effective configuration version. |
       * | `latestVersionStatus` | The processing status of the latest expected version. |
       * | `latestExecutionError` | The reason why the latest version is waiting for a retry or failed to execute, and whether automatic retry is enabled. |
       * | `status` | The overall status of the agent. |
       * | `sandboxPhaseCounts` | The snapshot of the number of running instances in each phase. |
       * `pending`, `processing`, and `waiting_retry` indicate that processing is continuing. `succeeded` indicates that the configuration is processed successfully. If the value is `failed`, troubleshoot the issue based on `latestExecutionError`. Instance status and configuration processing status are queried separately.
       * ### Code packages and images
       * In code package mode, `artifact.code.sourceUri` is the saved fixed package address, and `codePackageInfo` provides the package information. To download the current fixed package, call [GetAgentCodePackageDownloadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageDownloadUrl).
       * In image mode, `customImage` is the most recently saved custom source, and `currentImage` is the image source of the effective version. The two may be different. You can use `imagePreparation.preparationId` to call [GetCustomAgentImagePreparation](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgentImagePreparation) to query the preparation and deployment phases of the current custom image. `imageCachePreparation.statusAtAcceptance` only indicates the cache status at the time of acceptance.
       * The response does not return the image repository password. If you query an agent that does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
       *
       * @param request GetCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgentWithOptions(const string &workspaceId, const string &agentId, const Models::GetCustomAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest deployment configuration, version processing results, code package or image information, and running instance status of a custom code or image agent.
       *
       * @description Queries the configuration, artifacts, and running status of a custom code or image agent to confirm the processing and effective results of creation or updates.
       * ### Query configuration processing results
       * After creation or update, you can poll this operation. The returned configuration belongs to the latest submitted version and may not have taken effect yet.
       * | Field | Description |
       * | --- | --- |
       * | `latestSpecVersion` | The latest expected configuration version. |
       * | `effectiveSpecVersion` | The currently effective configuration version. |
       * | `latestVersionStatus` | The processing status of the latest expected version. |
       * | `latestExecutionError` | The reason why the latest version is waiting for a retry or failed to execute, and whether automatic retry is enabled. |
       * | `status` | The overall status of the agent. |
       * | `sandboxPhaseCounts` | The snapshot of the number of running instances in each phase. |
       * `pending`, `processing`, and `waiting_retry` indicate that processing is continuing. `succeeded` indicates that the configuration is processed successfully. If the value is `failed`, troubleshoot the issue based on `latestExecutionError`. Instance status and configuration processing status are queried separately.
       * ### Code packages and images
       * In code package mode, `artifact.code.sourceUri` is the saved fixed package address, and `codePackageInfo` provides the package information. To download the current fixed package, call [GetAgentCodePackageDownloadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageDownloadUrl).
       * In image mode, `customImage` is the most recently saved custom source, and `currentImage` is the image source of the effective version. The two may be different. You can use `imagePreparation.preparationId` to call [GetCustomAgentImagePreparation](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgentImagePreparation) to query the preparation and deployment phases of the current custom image. `imageCachePreparation.statusAtAcceptance` only indicates the cache status at the time of acceptance.
       * The response does not return the image repository password. If you query an agent that does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
       *
       * @param request GetCustomAgentRequest
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgent(const string &workspaceId, const string &agentId, const Models::GetCustomAgentRequest &request);

      /**
       * @summary Queries the preparation and deployment progress of the current submission for a custom image by preparation task ID.
       *
       * @description Queries the processing progress, such as image checking, copying, and starting, by preparation task ID to track the result of the current custom image submission.
       * ### Obtain the task identifier
       * Pass the value of `imagePreparation.preparationId` from the response of creating or updating a custom code or image agent as the `preparationId` parameter without modification. It identifies the task for the current submission, not the running instance ID.
       * ### Determine completion
       * | `phase` | Meaning |
       * | --- | --- |
       * | `QUEUED`, `CHECKING` | Queued or checking the source. |
       * | `COPYING` | Copying the image. |
       * | `STARTING` | Starting the target version. |
       * | `HEALTH_CHECKING` | Waiting for the target version instance to be ready. |
       * | `SUCCEEDED` | The target version is deployed successfully. |
       * | `FAILED` | The preparation or deployment failed. Check `failedPhase` and `error`. |
       * | `CANCELLED` | The target version has been replaced by a subsequent configuration or canceled. |
       * The query only reads the status and does not recreate the copy task. `SUCCEEDED` applies to the current target version. Seeing only old instances running does not indicate that the current submission is complete. If the configuration version is replaced by a subsequent submission, the current task may return `CANCELLED`.
       * If the create or update response is lost, you can call [FindCustomAgentImagePreparation](https://api.aliyun.com/document/AgentCore/2026-08-04/FindCustomAgentImagePreparation) with the `clientToken` used at that time to retrieve the preparation task.
       *
       * @param request GetCustomAgentImagePreparationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentImagePreparationResponse
       */
      Models::GetCustomAgentImagePreparationResponse getCustomAgentImagePreparationWithOptions(const string &workspaceId, const string &preparationId, const Models::GetCustomAgentImagePreparationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the preparation and deployment progress of the current submission for a custom image by preparation task ID.
       *
       * @description Queries the processing progress, such as image checking, copying, and starting, by preparation task ID to track the result of the current custom image submission.
       * ### Obtain the task identifier
       * Pass the value of `imagePreparation.preparationId` from the response of creating or updating a custom code or image agent as the `preparationId` parameter without modification. It identifies the task for the current submission, not the running instance ID.
       * ### Determine completion
       * | `phase` | Meaning |
       * | --- | --- |
       * | `QUEUED`, `CHECKING` | Queued or checking the source. |
       * | `COPYING` | Copying the image. |
       * | `STARTING` | Starting the target version. |
       * | `HEALTH_CHECKING` | Waiting for the target version instance to be ready. |
       * | `SUCCEEDED` | The target version is deployed successfully. |
       * | `FAILED` | The preparation or deployment failed. Check `failedPhase` and `error`. |
       * | `CANCELLED` | The target version has been replaced by a subsequent configuration or canceled. |
       * The query only reads the status and does not recreate the copy task. `SUCCEEDED` applies to the current target version. Seeing only old instances running does not indicate that the current submission is complete. If the configuration version is replaced by a subsequent submission, the current task may return `CANCELLED`.
       * If the create or update response is lost, you can call [FindCustomAgentImagePreparation](https://api.aliyun.com/document/AgentCore/2026-08-04/FindCustomAgentImagePreparation) with the `clientToken` used at that time to retrieve the preparation task.
       *
       * @param request GetCustomAgentImagePreparationRequest
       * @return GetCustomAgentImagePreparationResponse
       */
      Models::GetCustomAgentImagePreparationResponse getCustomAgentImagePreparation(const string &workspaceId, const string &preparationId, const Models::GetCustomAgentImagePreparationRequest &request);

      /**
       * @summary Queries the configuration, model source, version processing status, and external runtime status of a managed agent.
       *
       * @description Queries the platform configuration, version processing status, and external runtime status of a managed agent to verify access and configuration effectiveness.
       * ### Configuration processing and runtime status
       * `latestSpecVersion` and `latestVersionStatus` indicate the latest submitted configuration and its processing status. `status` represents the platform resource status, and `externalAgentStatus` represents the external runtime status. A successful configuration acceptance does not mean that the external process is connected.
       * If `modelSource` is `PLATFORM`, the returned model configuration is used. `RUNTIME` indicates that the model is managed by the external environment. `configuredSkills` indicates explicit skill configurations, and `skills` represents the aggregated skill information.
       * ### External access
       * After the configuration takes effect, call [GetExternalAgentBootstrapOptions](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgentBootstrapOptions) to query available networks, and then call [CreateExternalAgentBootstrapToken](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateExternalAgentBootstrapToken) to obtain access information. If the agent does not exist, has been deleted, or does not belong to the workspace, a resource not found error is returned.
       *
       * @param request GetExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalAgentResponse
       */
      Models::GetExternalAgentResponse getExternalAgentWithOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration, model source, version processing status, and external runtime status of a managed agent.
       *
       * @description Queries the platform configuration, version processing status, and external runtime status of a managed agent to verify access and configuration effectiveness.
       * ### Configuration processing and runtime status
       * `latestSpecVersion` and `latestVersionStatus` indicate the latest submitted configuration and its processing status. `status` represents the platform resource status, and `externalAgentStatus` represents the external runtime status. A successful configuration acceptance does not mean that the external process is connected.
       * If `modelSource` is `PLATFORM`, the returned model configuration is used. `RUNTIME` indicates that the model is managed by the external environment. `configuredSkills` indicates explicit skill configurations, and `skills` represents the aggregated skill information.
       * ### External access
       * After the configuration takes effect, call [GetExternalAgentBootstrapOptions](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgentBootstrapOptions) to query available networks, and then call [CreateExternalAgentBootstrapToken](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateExternalAgentBootstrapToken) to obtain access information. If the agent does not exist, has been deleted, or does not belong to the workspace, a resource not found error is returned.
       *
       * @param request GetExternalAgentRequest
       * @return GetExternalAgentResponse
       */
      Models::GetExternalAgentResponse getExternalAgent(const string &workspaceId, const string &agentId, const Models::GetExternalAgentRequest &request);

      /**
       * @summary Queries the available internal and public network access options for a managed agent.
       *
       * @description Queries the available public and internal network access methods for a managed agent to select the network used for subsequent connections.
       * ### Prerequisites
       * The managed agent must be in the running state, and the latest desired configuration must be applied. If the configuration is still being created, updated, or not fully applied, query the status first by calling [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent).
       * ### Select an access network
       * In the response, the `networkType` in `networkOptions` is `INTRANET` or `INTERNET`, and `available` indicates whether the corresponding access endpoint is available. Select a network with `available=true` and call [CreateExternalAgentBootstrapToken](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateExternalAgentBootstrapToken) to obtain the corresponding access information.
       *
       * @param request GetExternalAgentBootstrapOptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalAgentBootstrapOptionsResponse
       */
      Models::GetExternalAgentBootstrapOptionsResponse getExternalAgentBootstrapOptionsWithOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentBootstrapOptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available internal and public network access options for a managed agent.
       *
       * @description Queries the available public and internal network access methods for a managed agent to select the network used for subsequent connections.
       * ### Prerequisites
       * The managed agent must be in the running state, and the latest desired configuration must be applied. If the configuration is still being created, updated, or not fully applied, query the status first by calling [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent).
       * ### Select an access network
       * In the response, the `networkType` in `networkOptions` is `INTRANET` or `INTERNET`, and `available` indicates whether the corresponding access endpoint is available. Select a network with `available=true` and call [CreateExternalAgentBootstrapToken](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateExternalAgentBootstrapToken) to obtain the corresponding access information.
       *
       * @param request GetExternalAgentBootstrapOptionsRequest
       * @return GetExternalAgentBootstrapOptionsResponse
       */
      Models::GetExternalAgentBootstrapOptionsResponse getExternalAgentBootstrapOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentBootstrapOptionsRequest &request);

      /**
       * @summary Queries the binding and expected configuration of a specified identity provider. When SAML is configured for CustomSSO, this operation reads back the actual upstream SSO configuration. The SCIM status is queried through a separate API operation.
       *
       * @description Queries the enterprise identity providers bound to a workspace to view the access configuration, logon and user synchronization switches, and configuration processing progress.
       * For a custom identity provider (`CustomSSO`), this API operation also reads the saved SAML logon configuration for viewing or modifying enterprise single sign-on (SSO) settings.
       * ### How to interpret the query results
       * | Field | Purpose |
       * | --- | --- |
       * | `identityProviderType` | Indicates whether DingTalk, Lark, or a custom identity provider is currently connected. |
       * | `loginEnabled` | Indicates whether enterprise account logon is enabled. |
       * | `saml` | The saved SAML configuration of the enterprise identity system, used for backfilling when editing the configuration. |
       * | `configuration` | The actual SAML configuration read from the identity service, used to verify whether the logon configuration has taken effect. |
       * | `status` | The processing progress to attach the identity provider or apply the logon configuration. |
       * If `CustomSSO` returns `WAITING_CONFIGURATION`, it indicates that the user pool is ready and the SAML logon configuration is pending. In this case, you can call [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider) to obtain the access information of AgentCore and continue configuring enterprise single sign-on.
       * After saving the logon configuration, you can query `status` to track the processing progress. `READY` indicates that the configuration processing is complete. To check whether logon is enabled, you also need to verify `loginEnabled` and `configuration`.
       * ### Query user synchronization status
       * SAML logon and SCIM user synchronization are configured separately. SCIM is used to pre-provision users from the enterprise identity system to the user pool. You can call [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM) to query the receiver configuration and synchronization task results.
       *
       * @param request GetIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding and expected configuration of a specified identity provider. When SAML is configured for CustomSSO, this operation reads back the actual upstream SSO configuration. The SCIM status is queried through a separate API operation.
       *
       * @description Queries the enterprise identity providers bound to a workspace to view the access configuration, logon and user synchronization switches, and configuration processing progress.
       * For a custom identity provider (`CustomSSO`), this API operation also reads the saved SAML logon configuration for viewing or modifying enterprise single sign-on (SSO) settings.
       * ### How to interpret the query results
       * | Field | Purpose |
       * | --- | --- |
       * | `identityProviderType` | Indicates whether DingTalk, Lark, or a custom identity provider is currently connected. |
       * | `loginEnabled` | Indicates whether enterprise account logon is enabled. |
       * | `saml` | The saved SAML configuration of the enterprise identity system, used for backfilling when editing the configuration. |
       * | `configuration` | The actual SAML configuration read from the identity service, used to verify whether the logon configuration has taken effect. |
       * | `status` | The processing progress to attach the identity provider or apply the logon configuration. |
       * If `CustomSSO` returns `WAITING_CONFIGURATION`, it indicates that the user pool is ready and the SAML logon configuration is pending. In this case, you can call [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider) to obtain the access information of AgentCore and continue configuring enterprise single sign-on.
       * After saving the logon configuration, you can query `status` to track the processing progress. `READY` indicates that the configuration processing is complete. To check whether logon is enabled, you also need to verify `loginEnabled` and `configuration`.
       * ### Query user synchronization status
       * SAML logon and SCIM user synchronization are configured separately. SCIM is used to pre-provision users from the enterprise identity system to the user pool. You can call [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM) to query the receiver configuration and synchronization task results.
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderRequest &request);

      /**
       * @summary Queries the actual SCIM receiving configuration, the expected AgentCore synchronization switch, and the status of the most recent independent SCIM task. SAML configuration is not required beforehand.
       *
       * @description Queries the access configuration and processing progress of SCIM user synchronization to determine whether the receiving end is ready, whether AgentCore user synchronization is enabled, and whether the most recent synchronization operation is completed.
       * SCIM is a user provisioning protocol. The enterprise identity system sends user information to the user pool through the receiving URL and access token. After AgentCore user synchronization is enabled, users in the user pool are imported into the workspace.
       * ### How to interpret the query results
       * | Field | Business meaning |
       * | --- | --- |
       * | `configuration` | The actual status and receiving URL of the SCIM receiving endpoint. |
       * | `syncEnabled` | The expected switch for AgentCore user synchronization. |
       * | `operationStatus` | The execution result of the most recent operation to enable or disable synchronization. It is an empty string `""` if no historical tasks exist. |
       * | `status` | The SCIM access state derived from the receiving endpoint configuration, credentials, and operation results. |
       * ### Proceed based on the status
       * | `status` | Current stage | Next step |
       * | --- | --- | --- |
       * | `UNCONFIGURED` | The receiving end is not ready. | Call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to prepare for access. |
       * | `WAITING_CONFIGURATION` | The URL and valid credentials are available. Waiting for the enterprise-side configuration to be completed and synchronization to be enabled. | Configure the URL and token in the enterprise identity system, and then call [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM). |
       * | `UPDATING` | Synchronization is being enabled or disabled. | Continue to query this operation and wait for the operation to complete. |
       * | `READY` | Synchronization is enabled, the current enabling task is successful, and the receiving end and credentials are still available. | You can view the synchronized workspace users. |
       * | `DISABLED` | Synchronization is disabled. Existing configurations, credentials, and users are retained. | To re-establish access, check and prepare the receiving end first, and then enable synchronization. |
       * | `UPDATE_FAILED` | The operation failed, or the configuration and credentials after enabling are no longer available. | Check the operation results and access configuration in combination with `operationStatus`. |
       * This operation queries the SCIM status. The SAML enterprise account logon configuration is queried through [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider). `READY` reflects the result of the current enabling operation. The user assignment and provisioning status in the enterprise identity system must still be verified on the enterprise side.
       *
       * @param request GetIdentityProviderSCIMRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderSCIMResponse
       */
      Models::GetIdentityProviderSCIMResponse getIdentityProviderSCIMWithOptions(const string &workspaceId, const Models::GetIdentityProviderSCIMRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the actual SCIM receiving configuration, the expected AgentCore synchronization switch, and the status of the most recent independent SCIM task. SAML configuration is not required beforehand.
       *
       * @description Queries the access configuration and processing progress of SCIM user synchronization to determine whether the receiving end is ready, whether AgentCore user synchronization is enabled, and whether the most recent synchronization operation is completed.
       * SCIM is a user provisioning protocol. The enterprise identity system sends user information to the user pool through the receiving URL and access token. After AgentCore user synchronization is enabled, users in the user pool are imported into the workspace.
       * ### How to interpret the query results
       * | Field | Business meaning |
       * | --- | --- |
       * | `configuration` | The actual status and receiving URL of the SCIM receiving endpoint. |
       * | `syncEnabled` | The expected switch for AgentCore user synchronization. |
       * | `operationStatus` | The execution result of the most recent operation to enable or disable synchronization. It is an empty string `""` if no historical tasks exist. |
       * | `status` | The SCIM access state derived from the receiving endpoint configuration, credentials, and operation results. |
       * ### Proceed based on the status
       * | `status` | Current stage | Next step |
       * | --- | --- | --- |
       * | `UNCONFIGURED` | The receiving end is not ready. | Call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to prepare for access. |
       * | `WAITING_CONFIGURATION` | The URL and valid credentials are available. Waiting for the enterprise-side configuration to be completed and synchronization to be enabled. | Configure the URL and token in the enterprise identity system, and then call [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM). |
       * | `UPDATING` | Synchronization is being enabled or disabled. | Continue to query this operation and wait for the operation to complete. |
       * | `READY` | Synchronization is enabled, the current enabling task is successful, and the receiving end and credentials are still available. | You can view the synchronized workspace users. |
       * | `DISABLED` | Synchronization is disabled. Existing configurations, credentials, and users are retained. | To re-establish access, check and prepare the receiving end first, and then enable synchronization. |
       * | `UPDATE_FAILED` | The operation failed, or the configuration and credentials after enabling are no longer available. | Check the operation results and access configuration in combination with `operationStatus`. |
       * This operation queries the SCIM status. The SAML enterprise account logon configuration is queried through [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider). `READY` reflects the result of the current enabling operation. The user assignment and provisioning status in the enterprise identity system must still be verified on the enterprise side.
       *
       * @param request GetIdentityProviderSCIMRequest
       * @return GetIdentityProviderSCIMResponse
       */
      Models::GetIdentityProviderSCIMResponse getIdentityProviderSCIM(const string &workspaceId, const Models::GetIdentityProviderSCIMRequest &request);

      /**
       * @summary Queries the SAML service provider (SP) information of CustomSSO, including the Entity ID, ACS URL, and SP metadata XML, for users to configure an external IdP.
       *
       * @description Retrieves the SAML service provider (SP) access information of AgentCore to configure single sign-on (SSO) in an enterprise identity provider (IdP).
       * An SP is a service provider that receives logon assertions. An IdP is an enterprise identity provider that verifies user identities and issues logon assertions. This operation returns the SP information on the AgentCore side.
       * ### Before you begin
       * The workspace is bound to CustomSSO, and the shared user pool is initialized. The protocol parameter is required and must be set to SAML.
       * You can call the [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) operation to query the binding information. After the user pool is available, you can obtain the SP information and then complete the SAML configuration.
       * ### Request example
       * ```http
       * GET /workspaces/{workspaceId}/identity-providers/CustomSSO/service-provider?protocol=SAML
       * ```
       * ### Response information
       * | Field | Purpose |
       * | --- | --- |
       * | protocol | The access protocol. This operation returns SAML. |
       * | entityId | The SP identifier of AgentCore. Configure it as the service provider Entity ID in the enterprise IdP. |
       * | acsUrl | The URL where AgentCore receives SAML logon assertions. Configure it as the ACS URL in the enterprise IdP. |
       * | metadataXml | The SP metadata XML. Import it to configure the SP in an enterprise IdP that supports metadata import. |
       * ### Configuration flow
       * **Step 1:** Call this operation to obtain the SP information, and configure the SP identifier and the URL to accept assertions of AgentCore in the enterprise IdP.
       * **Step 2:** Export the metadata XML from the enterprise IdP and save it to AgentCore by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider).
       * **Step 3:** After the configuration is complete, enable single sign-on logon by setting loginEnabled as needed.
       *
       * @param request GetIdentityProviderServiceProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderServiceProviderResponse
       */
      Models::GetIdentityProviderServiceProviderResponse getIdentityProviderServiceProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderServiceProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SAML service provider (SP) information of CustomSSO, including the Entity ID, ACS URL, and SP metadata XML, for users to configure an external IdP.
       *
       * @description Retrieves the SAML service provider (SP) access information of AgentCore to configure single sign-on (SSO) in an enterprise identity provider (IdP).
       * An SP is a service provider that receives logon assertions. An IdP is an enterprise identity provider that verifies user identities and issues logon assertions. This operation returns the SP information on the AgentCore side.
       * ### Before you begin
       * The workspace is bound to CustomSSO, and the shared user pool is initialized. The protocol parameter is required and must be set to SAML.
       * You can call the [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) operation to query the binding information. After the user pool is available, you can obtain the SP information and then complete the SAML configuration.
       * ### Request example
       * ```http
       * GET /workspaces/{workspaceId}/identity-providers/CustomSSO/service-provider?protocol=SAML
       * ```
       * ### Response information
       * | Field | Purpose |
       * | --- | --- |
       * | protocol | The access protocol. This operation returns SAML. |
       * | entityId | The SP identifier of AgentCore. Configure it as the service provider Entity ID in the enterprise IdP. |
       * | acsUrl | The URL where AgentCore receives SAML logon assertions. Configure it as the ACS URL in the enterprise IdP. |
       * | metadataXml | The SP metadata XML. Import it to configure the SP in an enterprise IdP that supports metadata import. |
       * ### Configuration flow
       * **Step 1:** Call this operation to obtain the SP information, and configure the SP identifier and the URL to accept assertions of AgentCore in the enterprise IdP.
       * **Step 2:** Export the metadata XML from the enterprise IdP and save it to AgentCore by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider).
       * **Step 3:** After the configuration is complete, enable single sign-on logon by setting loginEnabled as needed.
       *
       * @param request GetIdentityProviderServiceProviderRequest
       * @return GetIdentityProviderServiceProviderResponse
       */
      Models::GetIdentityProviderServiceProviderResponse getIdentityProviderServiceProvider(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderServiceProviderRequest &request);

      /**
       * @summary Queries an identity provider synchronization task.
       *
       * @description Queries the progress, number of processed users, and failure causes of a user synchronization task to track whether manual synchronization is complete.
       * Use the `taskId` returned by [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob) and keep the same workspace and identity provider.
       * ### Determine synchronization results
       * | `status` | Meaning and what to do next |
       * | --- | --- |
       * | `PENDING`, `RUNNING` | The node is not yet complete. You can continue to query. |
       * | `PAUSED` | The node is paused and has not ended. |
       * | `SUCCESS` | The synchronization is complete. You can view the workspace users. |
       * | `FAILED` | The synchronization failed. Check `failureReason`. |
       * | `CANCELED` | The node is canceled. |
       * `syncedUserCount` is the number of processed users, including updated existing users. It is not the number of newly added users and cannot be directly used as a completion percentage. `null` is returned when the count is not yet available.
       *
       * @param request GetIdentityProviderSyncJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderSyncJobResponse
       */
      Models::GetIdentityProviderSyncJobResponse getIdentityProviderSyncJobWithOptions(const string &workspaceId, const string &identityProviderType, const string &taskId, const Models::GetIdentityProviderSyncJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an identity provider synchronization task.
       *
       * @description Queries the progress, number of processed users, and failure causes of a user synchronization task to track whether manual synchronization is complete.
       * Use the `taskId` returned by [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob) and keep the same workspace and identity provider.
       * ### Determine synchronization results
       * | `status` | Meaning and what to do next |
       * | --- | --- |
       * | `PENDING`, `RUNNING` | The node is not yet complete. You can continue to query. |
       * | `PAUSED` | The node is paused and has not ended. |
       * | `SUCCESS` | The synchronization is complete. You can view the workspace users. |
       * | `FAILED` | The synchronization failed. Check `failureReason`. |
       * | `CANCELED` | The node is canceled. |
       * `syncedUserCount` is the number of processed users, including updated existing users. It is not the number of newly added users and cannot be directly used as a completion percentage. `null` is returned when the count is not yet available.
       *
       * @param request GetIdentityProviderSyncJobRequest
       * @return GetIdentityProviderSyncJobResponse
       */
      Models::GetIdentityProviderSyncJobResponse getIdentityProviderSyncJob(const string &workspaceId, const string &identityProviderType, const string &taskId, const Models::GetIdentityProviderSyncJobRequest &request);

      /**
       * @summary Queries the synchronization scope of an identity provider.
       *
       * @description Queries the saved user synchronization scope, checks whether the selected departments are valid, and views the estimated number of departments and users involved. You can use this operation to verify the scope before initiating a manual synchronization.
       * ### View synchronization scope
       * | `syncScope.mode` | Synchronization scope |
       * | --- | --- |
       * | `AllAuthorized` | The address book scope authorized for the enterprise application. The specific scope is determined by the enterprise\\"s authorization. |
       * | `SelectedDepartments` | The saved scope of specified departments. Use `selectedDepartments` to view the selected departments and their validity. |
       * This operation reads the saved configuration. After adjusting the department selection, save the changes by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider) before querying the estimated results. To browse the complete department tree, use [ListIdentityProviderDepartments](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderDepartments).
       * ### Use user count estimation
       * You can use `expandedDepartmentCount` and `estimatedUserCount` only when `estimateStatus=Ready` and the counts are not `null`. Counts that have not been obtained return `null` and must not be treated as 0.
       * After confirming the scope, initiate the synchronization by calling [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob).
       *
       * @param request GetIdentityProviderSyncScopeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderSyncScopeResponse
       */
      Models::GetIdentityProviderSyncScopeResponse getIdentityProviderSyncScopeWithOptions(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderSyncScopeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the synchronization scope of an identity provider.
       *
       * @description Queries the saved user synchronization scope, checks whether the selected departments are valid, and views the estimated number of departments and users involved. You can use this operation to verify the scope before initiating a manual synchronization.
       * ### View synchronization scope
       * | `syncScope.mode` | Synchronization scope |
       * | --- | --- |
       * | `AllAuthorized` | The address book scope authorized for the enterprise application. The specific scope is determined by the enterprise\\"s authorization. |
       * | `SelectedDepartments` | The saved scope of specified departments. Use `selectedDepartments` to view the selected departments and their validity. |
       * This operation reads the saved configuration. After adjusting the department selection, save the changes by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider) before querying the estimated results. To browse the complete department tree, use [ListIdentityProviderDepartments](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderDepartments).
       * ### Use user count estimation
       * You can use `expandedDepartmentCount` and `estimatedUserCount` only when `estimateStatus=Ready` and the counts are not `null`. Counts that have not been obtained return `null` and must not be treated as 0.
       * After confirming the scope, initiate the synchronization by calling [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob).
       *
       * @param request GetIdentityProviderSyncScopeRequest
       * @return GetIdentityProviderSyncScopeResponse
       */
      Models::GetIdentityProviderSyncScopeResponse getIdentityProviderSyncScope(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderSyncScopeRequest &request);

      /**
       * @summary Queries the status, digest, size, and deletion conditions of an image cache in a specified workspace.
       *
       * @description Queries the creation status and usage of an image cache to determine whether the cache is available and meets the deletion conditions.
       * ### Cache status
       * | `status` | Meaning |
       * | --- | --- |
       * | `PENDING` | Preparing. Continue to query. |
       * | `READY` | Ready. |
       * | `FAILED` | Preparation failed. Troubleshoot based on the `error` field. |
       * | `DELETING` | Deleting. |
       * | `DISABLED` | Disabled. |
       * The `digest` is provided after the source resolution is completed. The unit of `cacheSizeBytes` is bytes, and it can be empty when the cache is not yet available.
       * ### Usage and deletion
       * `agentCount` indicates the number of agents that have enabled the cache switch and reference this cache. `canDelete` and `deleteBlockReason` indicate whether the cache can be deleted and the reason for blocking deletion. Deletion requests will recheck the usage.
       * The query scope of this operation is determined by `regionId`, `workspaceId`, and `imageId`.
       *
       * @param request GetImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageCacheResponse
       */
      Models::GetImageCacheResponse getImageCacheWithOptions(const string &imageId, const Models::GetImageCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, digest, size, and deletion conditions of an image cache in a specified workspace.
       *
       * @description Queries the creation status and usage of an image cache to determine whether the cache is available and meets the deletion conditions.
       * ### Cache status
       * | `status` | Meaning |
       * | --- | --- |
       * | `PENDING` | Preparing. Continue to query. |
       * | `READY` | Ready. |
       * | `FAILED` | Preparation failed. Troubleshoot based on the `error` field. |
       * | `DELETING` | Deleting. |
       * | `DISABLED` | Disabled. |
       * The `digest` is provided after the source resolution is completed. The unit of `cacheSizeBytes` is bytes, and it can be empty when the cache is not yet available.
       * ### Usage and deletion
       * `agentCount` indicates the number of agents that have enabled the cache switch and reference this cache. `canDelete` and `deleteBlockReason` indicate whether the cache can be deleted and the reason for blocking deletion. Deletion requests will recheck the usage.
       * The query scope of this operation is determined by `regionId`, `workspaceId`, and `imageId`.
       *
       * @param request GetImageCacheRequest
       * @return GetImageCacheResponse
       */
      Models::GetImageCacheResponse getImageCache(const string &imageId, const Models::GetImageCacheRequest &request);

      /**
       * @summary Queries the latest configuration, Harness and skill versions, configuration processing status, and running instance statistics of a managed Harness agent.
       *
       * @description Queries the configuration, skill versions, and running status of a managed Harness agent to view the current configuration and its processing results.
       * ### Configuration and running status
       * This operation returns the latest submitted configuration, which may still be processing. Use the following fields to determine the update progress and running status:
       * | Field | Purpose |
       * | --- | --- |
       * | `latestSpecVersion` | The latest submitted desired configuration version. |
       * | `latestVersionStatus` | The processing status of the desired version. |
       * | `status` | The overall status of the agent. |
       * | `sandboxPhaseCounts` | The current snapshot of the number of instances in each phase. |
       * Successful configuration processing does not mean that all old instances have been replaced. To view specific instances or active sessions, call [ListSandboxes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxes) and [ListSandboxSessions](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxSessions) respectively.
       * ### Harness and skill versions
       * `harness.type` indicates the runtime framework determined at creation. For qodercli, `connectorServiceAccountKey` returns the ID of the bound account key record and does not return the original key.
       * `configuredSkills` refers to explicitly configured skills. `skills` includes the aggregated results of template and explicit configurations. `resolvedVersion` is the current target version, and `appliedVersion` is the version currently in effect at runtime. These two may differ during an update. `fromTemplate=true` indicates that the skill comes from a template.
       * If you query an agent that does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
       *
       * @param request GetManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedAgentResponse
       */
      Models::GetManagedAgentResponse getManagedAgentWithOptions(const string &workspaceId, const string &agentId, const Models::GetManagedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest configuration, Harness and skill versions, configuration processing status, and running instance statistics of a managed Harness agent.
       *
       * @description Queries the configuration, skill versions, and running status of a managed Harness agent to view the current configuration and its processing results.
       * ### Configuration and running status
       * This operation returns the latest submitted configuration, which may still be processing. Use the following fields to determine the update progress and running status:
       * | Field | Purpose |
       * | --- | --- |
       * | `latestSpecVersion` | The latest submitted desired configuration version. |
       * | `latestVersionStatus` | The processing status of the desired version. |
       * | `status` | The overall status of the agent. |
       * | `sandboxPhaseCounts` | The current snapshot of the number of instances in each phase. |
       * Successful configuration processing does not mean that all old instances have been replaced. To view specific instances or active sessions, call [ListSandboxes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxes) and [ListSandboxSessions](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxSessions) respectively.
       * ### Harness and skill versions
       * `harness.type` indicates the runtime framework determined at creation. For qodercli, `connectorServiceAccountKey` returns the ID of the bound account key record and does not return the original key.
       * `configuredSkills` refers to explicitly configured skills. `skills` includes the aggregated results of template and explicit configurations. `resolvedVersion` is the current target version, and `appliedVersion` is the version currently in effect at runtime. These two may differ during an update. `fromTemplate=true` indicates that the skill comes from a template.
       * If you query an agent that does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
       *
       * @param request GetManagedAgentRequest
       * @return GetManagedAgentResponse
       */
      Models::GetManagedAgentResponse getManagedAgent(const string &workspaceId, const string &agentId, const Models::GetManagedAgentRequest &request);

      /**
       * @summary Queries the details of a specified MCP service, such as the address, type, status, authentication configuration, and protocol.
       *
       * @description Queries the details of a specified MCP service, such as the address, type, status, authentication configuration, and protocol.
       *
       * @param request GetMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcpWithOptions(const string &workspaceId, const string &mcpServerId, const Models::GetMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified MCP service, such as the address, type, status, authentication configuration, and protocol.
       *
       * @description Queries the details of a specified MCP service, such as the address, type, status, authentication configuration, and protocol.
       *
       * @param request GetMcpRequest
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcp(const string &workspaceId, const string &mcpServerId, const Models::GetMcpRequest &request);

      /**
       * @summary Returns a time-limited presigned upload URL and a temporary code package token. After the upload is complete, the token can be used to create or update a code deployment.
       *
       * @description Retrieves a temporary upload URL for a local MCP code package to create or update an MCP service of the code deployment type.
       * ### Upload and deployment steps
       * **Step 1:** Prepare a ZIP code package, enter the file name in `fileName`, and call this operation to obtain the upload information.
       * **Step 2:** Use the returned `uploadMethod`, `uploadUrl`, and `headers` to upload the file content. The package size cannot exceed `maxSize`. The current limit is 50 MiB (52,428,800 bytes).
       * **Step 3:** After the upload is complete, submit the `codePackageToken` to the code deployment configuration in [CreateMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateMcp) or [UpdateMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateMcp).
       * **Step 4:** After submitting the deployment, query the service status by calling [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp).
       * ### Validity period
       * For the expiration time of the upload URL, see `expiresAt`. For the expiration time of the temporary code package, see `artifactExpiresAt`. Complete the upload and deployment within the corresponding periods. If the upload URL expires, retrieve it again.
       *
       * @param tmpReq GetMcpCodePackageUploadUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpCodePackageUploadUrlResponse
       */
      Models::GetMcpCodePackageUploadUrlResponse getMcpCodePackageUploadUrlWithOptions(const string &workspaceId, const Models::GetMcpCodePackageUploadUrlRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a time-limited presigned upload URL and a temporary code package token. After the upload is complete, the token can be used to create or update a code deployment.
       *
       * @description Retrieves a temporary upload URL for a local MCP code package to create or update an MCP service of the code deployment type.
       * ### Upload and deployment steps
       * **Step 1:** Prepare a ZIP code package, enter the file name in `fileName`, and call this operation to obtain the upload information.
       * **Step 2:** Use the returned `uploadMethod`, `uploadUrl`, and `headers` to upload the file content. The package size cannot exceed `maxSize`. The current limit is 50 MiB (52,428,800 bytes).
       * **Step 3:** After the upload is complete, submit the `codePackageToken` to the code deployment configuration in [CreateMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateMcp) or [UpdateMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateMcp).
       * **Step 4:** After submitting the deployment, query the service status by calling [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp).
       * ### Validity period
       * For the expiration time of the upload URL, see `expiresAt`. For the expiration time of the temporary code package, see `artifactExpiresAt`. Complete the upload and deployment within the corresponding periods. If the upload URL expires, retrieve it again.
       *
       * @param request GetMcpCodePackageUploadUrlRequest
       * @return GetMcpCodePackageUploadUrlResponse
       */
      Models::GetMcpCodePackageUploadUrlResponse getMcpCodePackageUploadUrl(const string &workspaceId, const Models::GetMcpCodePackageUploadUrlRequest &request);

      /**
       * @summary Queries the details of an MCP marketplace template.
       *
       * @description Queries the capabilities, parameters, and version information of an MCP marketplace template to help you select a template and prepare for installation and configuration.
       * Returns the current template version and the installation form schema.
       *
       * @param request GetMcpMarketItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpMarketItemResponse
       */
      Models::GetMcpMarketItemResponse getMcpMarketItemWithOptions(const string &workspaceId, const string &marketItemId, const Models::GetMcpMarketItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an MCP marketplace template.
       *
       * @description Queries the capabilities, parameters, and version information of an MCP marketplace template to help you select a template and prepare for installation and configuration.
       * Returns the current template version and the installation form schema.
       *
       * @param request GetMcpMarketItemRequest
       * @return GetMcpMarketItemResponse
       */
      Models::GetMcpMarketItemResponse getMcpMarketItem(const string &workspaceId, const string &marketItemId, const Models::GetMcpMarketItemRequest &request);

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
      Models::GetMemoryResponse getMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a long-term memory by memory ID.
       *
       * @description Queries a long-term memory by memory ID.
       *
       * @param request GetMemoryRequest
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryRequest &request);

      /**
       * @summary Queries the public information and current status of a MemoryStore in a specified workspace.
       *
       * @description Queries the configuration and current status of a long-term memory store (MemoryStore) for viewing memory store information.
       *
       * @param request GetMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryStoreResponse
       */
      Models::GetMemoryStoreResponse getMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::GetMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the public information and current status of a MemoryStore in a specified workspace.
       *
       * @description Queries the configuration and current status of a long-term memory store (MemoryStore) for viewing memory store information.
       *
       * @param request GetMemoryStoreRequest
       * @return GetMemoryStoreResponse
       */
      Models::GetMemoryStoreResponse getMemoryStore(const string &workspaceId, const string &memoryStoreName, const Models::GetMemoryStoreRequest &request);

      /**
       * @summary Queries the task ID returned by the asynchronous AddMemories operation.
       *
       * @description Queries the progress and results of a memory extraction task by using the `taskId` returned by the asynchronous [AddMemories](https://api.aliyun.com/document/AgentCore/2026-08-04/AddMemories) operation.
       *
       * @param request GetMemoryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryTaskResponse
       */
      Models::GetMemoryTaskResponse getMemoryTaskWithOptions(const string &workspaceId, const string &memoryStoreName, const string &taskId, const Models::GetMemoryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task ID returned by the asynchronous AddMemories operation.
       *
       * @description Queries the progress and results of a memory extraction task by using the `taskId` returned by the asynchronous [AddMemories](https://api.aliyun.com/document/AgentCore/2026-08-04/AddMemories) operation.
       *
       * @param request GetMemoryTaskRequest
       * @return GetMemoryTaskResponse
       */
      Models::GetMemoryTaskResponse getMemoryTask(const string &workspaceId, const string &memoryStoreName, const string &taskId, const Models::GetMemoryTaskRequest &request);

      /**
       * @summary Queries the detailed configuration and region of a model in a specified workspace.
       *
       * @description Queries the detailed configuration and region of a model in a specified workspace.
       *
       * @param request GetModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelResponse
       */
      Models::GetModelResponse getModelWithOptions(const string &workspaceId, const string &modelId, const Models::GetModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configuration and region of a model in a specified workspace.
       *
       * @description Queries the detailed configuration and region of a model in a specified workspace.
       *
       * @param request GetModelRequest
       * @return GetModelResponse
       */
      Models::GetModelResponse getModel(const string &workspaceId, const string &modelId, const Models::GetModelRequest &request);

      /**
       * @summary Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
       *
       * @description Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
       *
       * @param request GetModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelConnectionResponse
       */
      Models::GetModelConnectionResponse getModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::GetModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
       *
       * @description Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
       *
       * @param request GetModelConnectionRequest
       * @return GetModelConnectionResponse
       */
      Models::GetModelConnectionResponse getModelConnection(const string &workspaceId, const string &connectionId, const Models::GetModelConnectionRequest &request);

      /**
       * @summary Queries the overall result of a specified sandbox rebuild task. Always use the initial operationId returned by RebuildSandbox without tracking the rebuild task and subsequent creation tasks separately. Only the SUCCEEDED status indicates completion. Do not treat UNKNOWN, missing status, or query exceptions as success, and do not automatically resubmit the rebuild.
       *
       * @description Always use the initial operationId returned by RebuildSandbox for queries. Magic aggregates and returns the rebuildOutcome result from Runtime Manager, so the frontend does not need to track Claim tasks. Only SUCCEEDED indicates overall completion. UNKNOWN, missing fields, or query exceptions must not be treated as success, and the rebuild must not be automatically resubmitted. You can specify the endpoint runtime version by using serviceEndpointId. If omitted, the default latest runtime identity is used.
       *
       * @param request GetSandboxRebuildOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSandboxRebuildOperationResponse
       */
      Models::GetSandboxRebuildOperationResponse getSandboxRebuildOperationWithOptions(const string &workspaceId, const string &agentId, const string &sandboxId, const string &operationId, const Models::GetSandboxRebuildOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overall result of a specified sandbox rebuild task. Always use the initial operationId returned by RebuildSandbox without tracking the rebuild task and subsequent creation tasks separately. Only the SUCCEEDED status indicates completion. Do not treat UNKNOWN, missing status, or query exceptions as success, and do not automatically resubmit the rebuild.
       *
       * @description Always use the initial operationId returned by RebuildSandbox for queries. Magic aggregates and returns the rebuildOutcome result from Runtime Manager, so the frontend does not need to track Claim tasks. Only SUCCEEDED indicates overall completion. UNKNOWN, missing fields, or query exceptions must not be treated as success, and the rebuild must not be automatically resubmitted. You can specify the endpoint runtime version by using serviceEndpointId. If omitted, the default latest runtime identity is used.
       *
       * @param request GetSandboxRebuildOperationRequest
       * @return GetSandboxRebuildOperationResponse
       */
      Models::GetSandboxRebuildOperationResponse getSandboxRebuildOperation(const string &workspaceId, const string &agentId, const string &sandboxId, const string &operationId, const Models::GetSandboxRebuildOperationRequest &request);

      /**
       * @summary Queries the details of a specified service endpoint, including the target route, access URLs, authentication configuration, and current status.
       *
       * @description Queries the service endpoint of an agent or collaboration component to obtain stable access URLs, authentication configuration, and current status.
       * A service endpoint associates access URLs with a specified agent version or workspace collaboration component. You can use the target route and URL list in the response to verify the access target.
       *
       * @param request GetServiceEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpointWithOptions(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified service endpoint, including the target route, access URLs, authentication configuration, and current status.
       *
       * @description Queries the service endpoint of an agent or collaboration component to obtain stable access URLs, authentication configuration, and current status.
       * A service endpoint associates access URLs with a specified agent version or workspace collaboration component. You can use the target route and URL list in the response to verify the access target.
       *
       * @param request GetServiceEndpointRequest
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpoint(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointRequest &request);

      /**
       * @summary Queries the active API key and its invocation method for a service endpoint in a specified workspace.
       *
       * @description Retrieves the active API key and invocation method of a service endpoint for external applications to access the endpoint.
       * The endpoint must have `API_KEY` authentication enabled and access credentials ready. Securely store the returned API key.
       *
       * @param request GetServiceEndpointApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointApiKeyResponse
       */
      Models::GetServiceEndpointApiKeyResponse getServiceEndpointApiKeyWithOptions(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the active API key and its invocation method for a service endpoint in a specified workspace.
       *
       * @description Retrieves the active API key and invocation method of a service endpoint for external applications to access the endpoint.
       * The endpoint must have `API_KEY` authentication enabled and access credentials ready. Securely store the returned API key.
       *
       * @param request GetServiceEndpointApiKeyRequest
       * @return GetServiceEndpointApiKeyResponse
       */
      Models::GetServiceEndpointApiKeyResponse getServiceEndpointApiKey(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointApiKeyRequest &request);

      /**
       * @summary Queries the basic information, version status, tags, visibility scope, and version list of a specified skill.
       *
       * @description Queries the basic information, version status, tags, visibility scope, and version list of a specified skill.
       *
       * @param request GetSkillDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetailWithOptions(const string &workspaceId, const string &skillName, const Models::GetSkillDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information, version status, tags, visibility scope, and version list of a specified skill.
       *
       * @description Queries the basic information, version status, tags, visibility scope, and version list of a specified skill.
       *
       * @param request GetSkillDetailRequest
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetail(const string &workspaceId, const string &skillName, const Models::GetSkillDetailRequest &request);

      /**
       * @summary Retrieves the Object Storage Service (OSS) presigned upload URL and object name required to import a skill ZIP package. After the upload is complete, you can call the skill OSS upload API operation to complete the import.
       *
       * @description Retrieves the upload URL for a skill ZIP package to import a skill from a local file.
       * Files are transferred through OSS. Upload the file by using the returned URL, and then call [UploadSkillViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/UploadSkillViaOss) to complete the import. To check the package content and conflicts, call [PrecheckSkillUploadViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/PrecheckSkillUploadViaOss) first.
       *
       * @param request GetSkillImportFileUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrlWithOptions(const string &workspaceId, const Models::GetSkillImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Object Storage Service (OSS) presigned upload URL and object name required to import a skill ZIP package. After the upload is complete, you can call the skill OSS upload API operation to complete the import.
       *
       * @description Retrieves the upload URL for a skill ZIP package to import a skill from a local file.
       * Files are transferred through OSS. Upload the file by using the returned URL, and then call [UploadSkillViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/UploadSkillViaOss) to complete the import. To check the package content and conflicts, call [PrecheckSkillUploadViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/PrecheckSkillUploadViaOss) first.
       *
       * @param request GetSkillImportFileUrlRequest
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrl(const string &workspaceId, const Models::GetSkillImportFileUrlRequest &request);

      /**
       * @summary Queries the complete details of a specified skill version, including version metadata, skill content, and associated resources.
       *
       * @description Queries the complete details of a specified skill version, including version metadata, skill content, and associated resources.
       *
       * @param request GetSkillVersionDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetailWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::GetSkillVersionDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete details of a specified skill version, including version metadata, skill content, and associated resources.
       *
       * @description Queries the complete details of a specified skill version, including version metadata, skill content, and associated resources.
       *
       * @param request GetSkillVersionDetailRequest
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetail(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::GetSkillVersionDetailRequest &request);

      /**
       * @summary Queries the details of a specified team, including the complete attributes and team roles of each user and agent member in the team.
       *
       * @description Queries the details of a specified team, including the complete attributes and team roles of each user and agent member in the team.
       *
       * @param request GetTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const string &workspaceId, const string &teamId, const Models::GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified team, including the complete attributes and team roles of each user and agent member in the team.
       *
       * @description Queries the details of a specified team, including the complete attributes and team roles of each user and agent member in the team.
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const string &workspaceId, const string &teamId, const Models::GetTeamRequest &request);

      /**
       * @summary Queries the details of a specific user in a specified workspace. Returns an error if the user does not exist.
       *
       * @description Queries the details of a specific user in a specified workspace.
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific user in a specified workspace. Returns an error if the user does not exist.
       *
       * @description Queries the details of a specific user in a specified workspace.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const string &workspaceId, const string &agentCoreUserId, const Models::GetUserRequest &request);

      /**
       * @summary Queries the details of a workspace by workspace ID, including the lifecycle status, CMS workspace, AI registry namespace, and current network policies.
       *
       * @description Queries the basic information, associated resources, and network configurations of a workspace for status viewing or configuration verification.
       * The returned information includes the lifecycle status, associated observability workspace, AI registry namespace, and current network policies.
       *
       * @param request GetWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceId, const Models::GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a workspace by workspace ID, including the lifecycle status, CMS workspace, AI registry namespace, and current network policies.
       *
       * @description Queries the basic information, associated resources, and network configurations of a workspace for status viewing or configuration verification.
       * The returned information includes the lifecycle status, associated observability workspace, AI registry namespace, and current network policies.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceId, const Models::GetWorkspaceRequest &request);

      /**
       * @summary Generates a RAM authorization link for the workspace resource role to pull images from a specified ACR Enterprise Edition repository.
       *
       * @description Generates an authorization link for the workspace resource role to pull images from a specified ACR Enterprise Edition repository, allowing you to complete access authorization before image deployment.
       * ### Request parameters
       * The `workspaceId` parameter specifies the workspace. The `acrInstanceId`, `namespace`, and `repository` parameters are passed as query parameters. The `repository` parameter specifies the repository name without the namespace.
       * ### Complete authorization
       * Open the `authorizeUrl` in the response and confirm the authorization. Then, call [VerifyWorkspaceAcrRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyWorkspaceAcrRamAuthorization) to check the binding status. The role is selected by the server. The `roleName` and `roleSource` parameters indicate the selected role and its source, but do not indicate that the authorization is complete.
       * This authorization is used for ACR image deployment of custom agents and reading image cache sources. Obtaining the link itself does not pull images or create caches.
       *
       * @param request GetWorkspaceAcrRamAuthorizeUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceAcrRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAcrRamAuthorizeUrlResponse getWorkspaceAcrRamAuthorizeUrlWithOptions(const string &workspaceId, const Models::GetWorkspaceAcrRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a RAM authorization link for the workspace resource role to pull images from a specified ACR Enterprise Edition repository.
       *
       * @description Generates an authorization link for the workspace resource role to pull images from a specified ACR Enterprise Edition repository, allowing you to complete access authorization before image deployment.
       * ### Request parameters
       * The `workspaceId` parameter specifies the workspace. The `acrInstanceId`, `namespace`, and `repository` parameters are passed as query parameters. The `repository` parameter specifies the repository name without the namespace.
       * ### Complete authorization
       * Open the `authorizeUrl` in the response and confirm the authorization. Then, call [VerifyWorkspaceAcrRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyWorkspaceAcrRamAuthorization) to check the binding status. The role is selected by the server. The `roleName` and `roleSource` parameters indicate the selected role and its source, but do not indicate that the authorization is complete.
       * This authorization is used for ACR image deployment of custom agents and reading image cache sources. Obtaining the link itself does not pull images or create caches.
       *
       * @param request GetWorkspaceAcrRamAuthorizeUrlRequest
       * @return GetWorkspaceAcrRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAcrRamAuthorizeUrlResponse getWorkspaceAcrRamAuthorizeUrl(const string &workspaceId, const Models::GetWorkspaceAcrRamAuthorizeUrlRequest &request);

      /**
       * @summary Retrieves the RAM authorization page URL to grant the workspace resource role access to a specified AgenticFS access point before configuring NAS storage mounting for an agent.
       *
       * @description Retrieves the AgenticFS mount authorization link to enable agents in the workspace to access a specified file space.
       * [AgenticFS](https://www.alibabacloud.com/help/en/nas/product-overview/agenticfs-overview) is a storage type of Apsara File Storage NAS designed for AI agents. It can be used to persistently store files used by agents. AgenticSpace is the file space within it, and an access point provides the mount entry.
       * ### Authorization and mounting steps
       * **Step 1:** Prepare a file system, an AgenticSpace, and an access point in NAS, and obtain the file system ID, access point ID, and domain name.
       * **Step 2:** Submit `fileSystemId`, `accessPointId`, and `server` as query parameters. For `server`, enter the access point domain name returned by the NAS `ListAccessPoints` operation, without the protocol, port, or path.
       * **Step 3:** Open the returned `authorizeUrl` to complete the authorization for the workspace resource role.
       * **Step 4:** Check the authorization status by calling [VerifyWorkspaceAgenticFsMountRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyWorkspaceAgenticFsMountRamAuthorization).
       * **Step 5:** When creating or updating a custom code or image agent, or a managed Harness agent, enter the access point domain name, the relative directory `path`, and the container mount path `mountPath` in `agenticFsMounts`.
       * The access point must be located in the VPC associated with the workspace, and VPC access must be enabled for the agent. The mount directory must already exist. Use a non-empty relative directory within the access point for `path`, and use an absolute path within the container for `mountPath`.
       *
       * @param request GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse getWorkspaceAgenticFsMountRamAuthorizeUrlWithOptions(const string &workspaceId, const Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the RAM authorization page URL to grant the workspace resource role access to a specified AgenticFS access point before configuring NAS storage mounting for an agent.
       *
       * @description Retrieves the AgenticFS mount authorization link to enable agents in the workspace to access a specified file space.
       * [AgenticFS](https://www.alibabacloud.com/help/en/nas/product-overview/agenticfs-overview) is a storage type of Apsara File Storage NAS designed for AI agents. It can be used to persistently store files used by agents. AgenticSpace is the file space within it, and an access point provides the mount entry.
       * ### Authorization and mounting steps
       * **Step 1:** Prepare a file system, an AgenticSpace, and an access point in NAS, and obtain the file system ID, access point ID, and domain name.
       * **Step 2:** Submit `fileSystemId`, `accessPointId`, and `server` as query parameters. For `server`, enter the access point domain name returned by the NAS `ListAccessPoints` operation, without the protocol, port, or path.
       * **Step 3:** Open the returned `authorizeUrl` to complete the authorization for the workspace resource role.
       * **Step 4:** Check the authorization status by calling [VerifyWorkspaceAgenticFsMountRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyWorkspaceAgenticFsMountRamAuthorization).
       * **Step 5:** When creating or updating a custom code or image agent, or a managed Harness agent, enter the access point domain name, the relative directory `path`, and the container mount path `mountPath` in `agenticFsMounts`.
       * The access point must be located in the VPC associated with the workspace, and VPC access must be enabled for the agent. The mount directory must already exist. Use a non-empty relative directory within the access point for `path`, and use an absolute path within the container for `mountPath`.
       *
       * @param request GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest
       * @return GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse getWorkspaceAgenticFsMountRamAuthorizeUrl(const string &workspaceId, const Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &request);

      /**
       * @summary Queries the activation status and configuration of a specified component in a workspace. The collaboration value corresponds to the Collaboration component displayed in the console.
       *
       * @description Queries the status and configuration of the workspace collaboration component to check whether the component is activated and whether the configuration takes effect.
       * Use `pluginName=collaboration` to specify the collaboration component. To activate the component, call [InstallWorkspacePlugin](https://api.aliyun.com/document/AgentCore/2026-08-04/InstallWorkspacePlugin).
       *
       * @param request GetWorkspacePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspacePluginResponse
       */
      Models::GetWorkspacePluginResponse getWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const Models::GetWorkspacePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the activation status and configuration of a specified component in a workspace. The collaboration value corresponds to the Collaboration component displayed in the console.
       *
       * @description Queries the status and configuration of the workspace collaboration component to check whether the component is activated and whether the configuration takes effect.
       * Use `pluginName=collaboration` to specify the collaboration component. To activate the component, call [InstallWorkspacePlugin](https://api.aliyun.com/document/AgentCore/2026-08-04/InstallWorkspacePlugin).
       *
       * @param request GetWorkspacePluginRequest
       * @return GetWorkspacePluginResponse
       */
      Models::GetWorkspacePluginResponse getWorkspacePlugin(const string &workspaceId, const string &pluginName, const Models::GetWorkspacePluginRequest &request);

      /**
       * @summary Installs an MCP marketplace template.
       *
       * @description Creates an MCP service by using a marketplace template to reuse the tool capabilities and configurations provided by the template.
       * First, call [GetMcpMarketItem](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcpMarketItem) to view the template versions and required parameters, and then submit the configuration based on the selected version. After the service is created, call [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp) to query the service status.
       *
       * @param tmpReq InstallMcpMarketItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallMcpMarketItemResponse
       */
      Models::InstallMcpMarketItemResponse installMcpMarketItemWithOptions(const string &workspaceId, const string &marketItemId, const Models::InstallMcpMarketItemRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an MCP marketplace template.
       *
       * @description Creates an MCP service by using a marketplace template to reuse the tool capabilities and configurations provided by the template.
       * First, call [GetMcpMarketItem](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcpMarketItem) to view the template versions and required parameters, and then submit the configuration based on the selected version. After the service is created, call [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp) to query the service status.
       *
       * @param request InstallMcpMarketItemRequest
       * @return InstallMcpMarketItemResponse
       */
      Models::InstallMcpMarketItemResponse installMcpMarketItem(const string &workspaceId, const string &marketItemId, const Models::InstallMcpMarketItemRequest &request);

      /**
       * @summary Enables a component for a workspace. This operation corresponds to enabling the collaboration component in the console. After the component is enabled, you can query the component status and current configurations.
       *
       * @description Enables the collaboration component for a workspace and configures initial settings such as the network.
       * Set pluginName=collaboration to specify the collaboration component. The enabling process is executed asynchronously. After submission, call [GetWorkspacePlugin](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspacePlugin) to check the component status and processing result.
       *
       * @param tmpReq InstallWorkspacePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallWorkspacePluginResponse
       */
      Models::InstallWorkspacePluginResponse installWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const Models::InstallWorkspacePluginRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a component for a workspace. This operation corresponds to enabling the collaboration component in the console. After the component is enabled, you can query the component status and current configurations.
       *
       * @description Enables the collaboration component for a workspace and configures initial settings such as the network.
       * Set pluginName=collaboration to specify the collaboration component. The enabling process is executed asynchronously. After submission, call [GetWorkspacePlugin](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspacePlugin) to check the component status and processing result.
       *
       * @param request InstallWorkspacePluginRequest
       * @return InstallWorkspacePluginResponse
       */
      Models::InstallWorkspacePluginResponse installWorkspacePlugin(const string &workspaceId, const string &pluginName, const Models::InstallWorkspacePluginRequest &request);

      /**
       * @summary Queries the identity, name, and architecture of language runtime environments currently available for code package deployment by page.
       *
       * @description Queries the available runtime environments for code package deployment of custom code or image agents, which is used to populate artifact.code.languageRuntime.
       * ### Select a runtime environment
       * Copy the languageRuntime value from the response exactly as is into the artifact.code.languageRuntime parameter of [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent). The catalog is dynamically provided by the current platform version, and internal base image addresses are not returned.
       * ### Pagination rules
       * If maxResults is omitted or set to 0, the default value is 10. If the value is greater than 100, it is processed as 100. The value cannot be negative. Omit nextToken for the first request. For subsequent requests, use the token returned in the previous response and keep the workspace unchanged. An empty token indicates that the query is complete. If the token becomes invalid due to changes in the runtime environment catalog, restart the query from the first page.
       * Regular updates, restarts, and scale-outs of existing agents continue to use their saved runtime images. When you create an agent or switch the language runtime environment, the catalog currently returned by this operation prevails.
       *
       * @param request ListAgentCodeRuntimesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentCodeRuntimesResponse
       */
      Models::ListAgentCodeRuntimesResponse listAgentCodeRuntimesWithOptions(const string &workspaceId, const Models::ListAgentCodeRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the identity, name, and architecture of language runtime environments currently available for code package deployment by page.
       *
       * @description Queries the available runtime environments for code package deployment of custom code or image agents, which is used to populate artifact.code.languageRuntime.
       * ### Select a runtime environment
       * Copy the languageRuntime value from the response exactly as is into the artifact.code.languageRuntime parameter of [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent). The catalog is dynamically provided by the current platform version, and internal base image addresses are not returned.
       * ### Pagination rules
       * If maxResults is omitted or set to 0, the default value is 10. If the value is greater than 100, it is processed as 100. The value cannot be negative. Omit nextToken for the first request. For subsequent requests, use the token returned in the previous response and keep the workspace unchanged. An empty token indicates that the query is complete. If the token becomes invalid due to changes in the runtime environment catalog, restart the query from the first page.
       * Regular updates, restarts, and scale-outs of existing agents continue to use their saved runtime images. When you create an agent or switch the language runtime environment, the catalog currently returned by this operation prevails.
       *
       * @param request ListAgentCodeRuntimesRequest
       * @return ListAgentCodeRuntimesResponse
       */
      Models::ListAgentCodeRuntimesResponse listAgentCodeRuntimes(const string &workspaceId, const Models::ListAgentCodeRuntimesRequest &request);

      /**
       * @summary Queries the IM channels for a specified agent.
       *
       * @description Queries the IM channels for a specified agent.
       *
       * @param request ListAgentIMChannelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentIMChannelsResponse
       */
      Models::ListAgentIMChannelsResponse listAgentIMChannelsWithOptions(const string &workspaceId, const string &agentId, const Models::ListAgentIMChannelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IM channels for a specified agent.
       *
       * @description Queries the IM channels for a specified agent.
       *
       * @param request ListAgentIMChannelsRequest
       * @return ListAgentIMChannelsResponse
       */
      Models::ListAgentIMChannelsResponse listAgentIMChannels(const string &workspaceId, const string &agentId, const Models::ListAgentIMChannelsRequest &request);

      /**
       * @summary Performs a paging query of AgentSpecs in a specified workspace, and supports name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @description Performs a paging query of Agent templates in a specified workspace, and supports name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @param request ListAgentSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSpecsResponse
       */
      Models::ListAgentSpecsResponse listAgentSpecsWithOptions(const string &workspaceId, const Models::ListAgentSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of AgentSpecs in a specified workspace, and supports name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @description Performs a paging query of Agent templates in a specified workspace, and supports name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @param request ListAgentSpecsRequest
       * @return ListAgentSpecsResponse
       */
      Models::ListAgentSpecsResponse listAgentSpecs(const string &workspaceId, const Models::ListAgentSpecsRequest &request);

      /**
       * @summary Queries the teams to which specified agents belong. Specify the agent IDs to query by using agentIds. The response includes the membership information of each agent in its teams, such as the team ID, team name, and the role of the agent in the team.
       *
       * @description Queries the teams to which specified agents belong.
       *
       * @param tmpReq ListAgentTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentTeamsResponse
       */
      Models::ListAgentTeamsResponse listAgentTeamsWithOptions(const string &workspaceId, const Models::ListAgentTeamsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the teams to which specified agents belong. Specify the agent IDs to query by using agentIds. The response includes the membership information of each agent in its teams, such as the team ID, team name, and the role of the agent in the team.
       *
       * @description Queries the teams to which specified agents belong.
       *
       * @param request ListAgentTeamsRequest
       * @return ListAgentTeamsResponse
       */
      Models::ListAgentTeamsResponse listAgentTeams(const string &workspaceId, const Models::ListAgentTeamsRequest &request);

      /**
       * @summary Queries a list of agent versions.
       *
       * @description Performs a paged query for saved fixed versions of a specified managed or custom agent. The paging results are returned in descending order of creation time and do not include the latest version under system maintenance. List items do not return the configuration. To view the configuration, invoke GetAgentVersion.
       *
       * @param request ListAgentVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentVersionsResponse
       */
      Models::ListAgentVersionsResponse listAgentVersionsWithOptions(const string &workspaceId, const string &agentId, const Models::ListAgentVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of agent versions.
       *
       * @description Performs a paged query for saved fixed versions of a specified managed or custom agent. The paging results are returned in descending order of creation time and do not include the latest version under system maintenance. List items do not return the configuration. To view the configuration, invoke GetAgentVersion.
       *
       * @param request ListAgentVersionsRequest
       * @return ListAgentVersionsResponse
       */
      Models::ListAgentVersionsResponse listAgentVersions(const string &workspaceId, const string &agentId, const Models::ListAgentVersionsRequest &request);

      /**
       * @summary Queries the official and enterprise models available for the enabled QoderCLI connector. The service retrieves models in real time by using the saved API key and organization ID, and deduplicates them by model ID.
       *
       * @description Queries the official and enterprise models available for the enabled QoderCLI connector.
       * Queries the list of models available for a specified connector. Pagination is supported.
       *
       * @param request ListConnectorModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorModelsResponse
       */
      Models::ListConnectorModelsResponse listConnectorModelsWithOptions(const string &workspaceId, const string &connectorName, const Models::ListConnectorModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the official and enterprise models available for the enabled QoderCLI connector. The service retrieves models in real time by using the saved API key and organization ID, and deduplicates them by model ID.
       *
       * @description Queries the official and enterprise models available for the enabled QoderCLI connector.
       * Queries the list of models available for a specified connector. Pagination is supported.
       *
       * @param request ListConnectorModelsRequest
       * @return ListConnectorModelsResponse
       */
      Models::ListConnectorModelsResponse listConnectorModels(const string &workspaceId, const string &connectorName, const Models::ListConnectorModelsRequest &request);

      /**
       * @summary Queries the list of connectors supported by a specified workspace, along with their status, the number of bound agents, and configurations. The current version returns the QoderCLI connector.
       *
       * @description Queries the connectors supported by the workspace to view their activation status, configurations, and the number of bound agents.
       *
       * @param request ListConnectorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectorsWithOptions(const string &workspaceId, const Models::ListConnectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of connectors supported by a specified workspace, along with their status, the number of bound agents, and configurations. The current version returns the QoderCLI connector.
       *
       * @description Queries the connectors supported by the workspace to view their activation status, configurations, and the number of bound agents.
       *
       * @param request ListConnectorsRequest
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectors(const string &workspaceId, const Models::ListConnectorsRequest &request);

      /**
       * @summary Performs a paged query for credentials in a specified workspace. Filters credentials by type by using credentialType, performs fuzzy filtering by credential name by using nameLike, specifies the maximum number of records per page for paging by using maxResults, and retrieves the next page by using nextToken. If maxResults is not specified, the server returns 10 records by default.
       *
       * @description Performs a paged query for credentials in a specified workspace.
       * ### Query and paging
       * Filters credentials by `apiKey` or `mcpHeader` type by using `credentialType`, and performs fuzzy filtering by name by using `nameLike`.
       * Uses `maxResults` to specify the number of entries per page for paging, and uses `nextToken` in the response to retrieve the next page. The returned credential content is desensitized. To query the details of a single credential, call [GetCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCredential).
       *
       * @param request ListCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const string &workspaceId, const Models::ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for credentials in a specified workspace. Filters credentials by type by using credentialType, performs fuzzy filtering by credential name by using nameLike, specifies the maximum number of records per page for paging by using maxResults, and retrieves the next page by using nextToken. If maxResults is not specified, the server returns 10 records by default.
       *
       * @description Performs a paged query for credentials in a specified workspace.
       * ### Query and paging
       * Filters credentials by `apiKey` or `mcpHeader` type by using `credentialType`, and performs fuzzy filtering by name by using `nameLike`.
       * Uses `maxResults` to specify the number of entries per page for paging, and uses `nextToken` in the response to retrieve the next page. The returned credential content is desensitized. To query the details of a single credential, call [GetCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCredential).
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const string &workspaceId, const Models::ListCredentialsRequest &request);

      /**
       * @summary Performs a paged query to retrieve the identity, deployment method, and status summary of custom code or image agents in a workspace, with paging support.
       *
       * @description Performs a paged query to retrieve the identity, deployment method, and status summary of custom code or image agents in a workspace, with paging support.
       * ### Paged query
       * If `maxResults` is omitted or set to `0`, the default value is 20 and the maximum value is 100. Omit `nextToken` in the first request. For subsequent requests, pass the token returned in the previous response as is, and keep the same workspace and filter conditions. An empty token indicates the end of paging.
       * ### Response content
       * This operation returns the summary for the current page. It does not return the complete deployment configurations or errors that occur when you execute the latest configurations. Use `items[].agentId` to invoke [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent) to query code packages, image sources, results after you execute the version, and running instance statuses.
       *
       * @param request ListCustomAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentsResponse
       */
      Models::ListCustomAgentsResponse listCustomAgentsWithOptions(const string &workspaceId, const Models::ListCustomAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to retrieve the identity, deployment method, and status summary of custom code or image agents in a workspace, with paging support.
       *
       * @description Performs a paged query to retrieve the identity, deployment method, and status summary of custom code or image agents in a workspace, with paging support.
       * ### Paged query
       * If `maxResults` is omitted or set to `0`, the default value is 20 and the maximum value is 100. Omit `nextToken` in the first request. For subsequent requests, pass the token returned in the previous response as is, and keep the same workspace and filter conditions. An empty token indicates the end of paging.
       * ### Response content
       * This operation returns the summary for the current page. It does not return the complete deployment configurations or errors that occur when you execute the latest configurations. Use `items[].agentId` to invoke [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent) to query code packages, image sources, results after you execute the version, and running instance statuses.
       *
       * @param request ListCustomAgentsRequest
       * @return ListCustomAgentsResponse
       */
      Models::ListCustomAgentsResponse listCustomAgents(const string &workspaceId, const Models::ListCustomAgentsRequest &request);

      /**
       * @summary Performs a paging query to retrieve the identity, configuration versions, and status summary of managed agents in a workspace.
       *
       * @description Performs a paging query to retrieve the identity, configuration versions, and status summary of managed agents in a workspace.
       * ### Paging query
       * If `maxResults` is omitted or set to `0`, the default value is 20, and the maximum value is 100. Omit `nextToken` in the first request. For subsequent requests, pass the token returned in the previous response as is, and keep the same workspace and filter conditions. An empty token indicates that there are no more pages.
       * ### Response content
       * This operation returns the summary of managed agents. To query the complete models, instructions, tools, skills, and accessed state, call [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent).
       *
       * @param request ListExternalAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalAgentsResponse
       */
      Models::ListExternalAgentsResponse listExternalAgentsWithOptions(const string &workspaceId, const Models::ListExternalAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query to retrieve the identity, configuration versions, and status summary of managed agents in a workspace.
       *
       * @description Performs a paging query to retrieve the identity, configuration versions, and status summary of managed agents in a workspace.
       * ### Paging query
       * If `maxResults` is omitted or set to `0`, the default value is 20, and the maximum value is 100. Omit `nextToken` in the first request. For subsequent requests, pass the token returned in the previous response as is, and keep the same workspace and filter conditions. An empty token indicates that there are no more pages.
       * ### Response content
       * This operation returns the summary of managed agents. To query the complete models, instructions, tools, skills, and accessed state, call [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent).
       *
       * @param request ListExternalAgentsRequest
       * @return ListExternalAgentsResponse
       */
      Models::ListExternalAgentsResponse listExternalAgents(const string &workspaceId, const Models::ListExternalAgentsRequest &request);

      /**
       * @summary Queries the departments of an identity provider by paging.
       *
       * @description Queries the list of DingTalk or Lark departments by parent department and paging. This is used when selecting or adjusting the user synchronization scope.
       * ### Before you begin
       * A DingTalk or Lark identity provider is bound to the workspace, and the user pool, application credentials, and authorization to read contacts are prepared.
       * ### Query methods
       * - Omit `parentDepartmentId` to query the root level. Pass a department ID to query its direct child departments.
       * - `hasChildren` indicates whether a department can be expanded. After expansion, use the department ID to query the next level.
       * - `nextToken` is used to continue reading the next page under the same parent department. An empty string indicates that there are no more pages.
       * ### Total count and pagination
       * This operation does not calculate the total number of departments. Currently, `totalCount` returns JSON `null`, which does not mean the number of departments is 0. Whether to continue pagination depends on `nextToken`.
       * ### Request examples
       * ```http
       * GET /workspaces/{workspaceId}/identity-providers/{identityProviderType}/departments?maxResults=50
       * ```
       * ### Response examples
       * The following shows the response structure for an empty directory page. `totalCount` retains the `null` value actually returned by the operation.
       * ```json
       * {
       *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
       *   "message": "success",
       *   "httpStatusCode": 200,
       *   "code": "SUCCESS",
       *   "success": true,
       *   "maxResults": 50,
       *   "nextToken": "",
       *   "totalCount": null,
       *   "items": []
       * }
       * ```
       * ### What to do next
       * After selecting the departments to synchronize, save the synchronization scope by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider), and then call [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob) to initiate synchronization as needed.
       *
       * @param request ListIdentityProviderDepartmentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProviderDepartmentsResponse
       */
      Models::ListIdentityProviderDepartmentsResponse listIdentityProviderDepartmentsWithOptions(const string &workspaceId, const string &identityProviderType, const Models::ListIdentityProviderDepartmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the departments of an identity provider by paging.
       *
       * @description Queries the list of DingTalk or Lark departments by parent department and paging. This is used when selecting or adjusting the user synchronization scope.
       * ### Before you begin
       * A DingTalk or Lark identity provider is bound to the workspace, and the user pool, application credentials, and authorization to read contacts are prepared.
       * ### Query methods
       * - Omit `parentDepartmentId` to query the root level. Pass a department ID to query its direct child departments.
       * - `hasChildren` indicates whether a department can be expanded. After expansion, use the department ID to query the next level.
       * - `nextToken` is used to continue reading the next page under the same parent department. An empty string indicates that there are no more pages.
       * ### Total count and pagination
       * This operation does not calculate the total number of departments. Currently, `totalCount` returns JSON `null`, which does not mean the number of departments is 0. Whether to continue pagination depends on `nextToken`.
       * ### Request examples
       * ```http
       * GET /workspaces/{workspaceId}/identity-providers/{identityProviderType}/departments?maxResults=50
       * ```
       * ### Response examples
       * The following shows the response structure for an empty directory page. `totalCount` retains the `null` value actually returned by the operation.
       * ```json
       * {
       *   "requestId": "01234567-89AB-CDEF-0123-456789ABCDEF",
       *   "message": "success",
       *   "httpStatusCode": 200,
       *   "code": "SUCCESS",
       *   "success": true,
       *   "maxResults": 50,
       *   "nextToken": "",
       *   "totalCount": null,
       *   "items": []
       * }
       * ```
       * ### What to do next
       * After selecting the departments to synchronize, save the synchronization scope by calling [UpdateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProvider), and then call [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob) to initiate synchronization as needed.
       *
       * @param request ListIdentityProviderDepartmentsRequest
       * @return ListIdentityProviderDepartmentsResponse
       */
      Models::ListIdentityProviderDepartmentsResponse listIdentityProviderDepartments(const string &workspaceId, const string &identityProviderType, const Models::ListIdentityProviderDepartmentsRequest &request);

      /**
       * @summary Queries the complete summary list of up to two SCIM credentials in a shared user pool, without returning plaintext tokens or supporting pagination.
       *
       * @description Queries the list of SCIM access credentials to check which tokens are still valid, when they expire, and to select credentials for revocation.
       * SCIM tokens are used to authorize enterprise identity systems to send user provisioning requests to the user pool. This operation returns credential summaries, including the credential ID, status, creation time, and expiration time. The plaintext token is returned only upon creation.
       * ### How to use the query results
       * - Credentials with the Enabled status that have not expired can continue to be used.
       * - To obtain a new token, call [CreateIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSCIMCredential).
       * - To revoke a token, pass the target credentialId to [DeleteIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/DeleteIdentityProviderSCIMCredential).
       * A single user pool can retain up to two SCIM credentials. The list may include expired or disabled credentials. Clean up unused credentials before creating a new token.
       * ### Return method
       * This operation returns the complete array of credentials at once without using pagination parameters. If no credentials exist, the following is returned:
       * ```json
       * {"data":[]}
       * ```
       *
       * @param request ListIdentityProviderSCIMCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProviderSCIMCredentialsResponse
       */
      Models::ListIdentityProviderSCIMCredentialsResponse listIdentityProviderSCIMCredentialsWithOptions(const string &workspaceId, const Models::ListIdentityProviderSCIMCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete summary list of up to two SCIM credentials in a shared user pool, without returning plaintext tokens or supporting pagination.
       *
       * @description Queries the list of SCIM access credentials to check which tokens are still valid, when they expire, and to select credentials for revocation.
       * SCIM tokens are used to authorize enterprise identity systems to send user provisioning requests to the user pool. This operation returns credential summaries, including the credential ID, status, creation time, and expiration time. The plaintext token is returned only upon creation.
       * ### How to use the query results
       * - Credentials with the Enabled status that have not expired can continue to be used.
       * - To obtain a new token, call [CreateIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSCIMCredential).
       * - To revoke a token, pass the target credentialId to [DeleteIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/DeleteIdentityProviderSCIMCredential).
       * A single user pool can retain up to two SCIM credentials. The list may include expired or disabled credentials. Clean up unused credentials before creating a new token.
       * ### Return method
       * This operation returns the complete array of credentials at once without using pagination parameters. If no credentials exist, the following is returned:
       * ```json
       * {"data":[]}
       * ```
       *
       * @param request ListIdentityProviderSCIMCredentialsRequest
       * @return ListIdentityProviderSCIMCredentialsResponse
       */
      Models::ListIdentityProviderSCIMCredentialsResponse listIdentityProviderSCIMCredentials(const string &workspaceId, const Models::ListIdentityProviderSCIMCredentialsRequest &request);

      /**
       * @summary Queries the summary of existing identity provider bindings for a workspace, including CustomSSO. Returns local binding information without querying the actual upstream SAML or SCIM configurations.
       *
       * @description Queries the enterprise identity providers currently connected to a workspace. This operation is used to display the identity provider list or to check whether a binding already exists before configuring a new connection.
       * A workspace can be bound to at most one external identity provider: DingTalk, Lark, or a custom identity provider (`CustomSSO`). If no identity provider is bound, the returned `items` is an empty array.
       * ### What you can view in the list
       * The list returns the identity provider type, binding status, and logon and user synchronization switches. When the status of `CustomSSO` is `WAITING_CONFIGURATION`, it indicates that the user pool is ready and you can proceed to complete the integration configuration.
       * This operation returns a binding summary. To view specific integration configurations, use the corresponding operations:
       * - [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider): Views the identity provider details and SAML logon configuration.
       * - [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider): Retrieves the SAML integration information required to configure AgentCore in the enterprise identity system.
       * - [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM): Views the SCIM endpoint configuration and user synchronization status.
       * ### Pagination
       * Currently, at most one binding is returned. `nextToken` should be omitted or passed as an empty string. The default value of `maxResults` is 10. Valid values: 1 to 100.
       *
       * @param request ListIdentityProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const string &workspaceId, const Models::ListIdentityProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of existing identity provider bindings for a workspace, including CustomSSO. Returns local binding information without querying the actual upstream SAML or SCIM configurations.
       *
       * @description Queries the enterprise identity providers currently connected to a workspace. This operation is used to display the identity provider list or to check whether a binding already exists before configuring a new connection.
       * A workspace can be bound to at most one external identity provider: DingTalk, Lark, or a custom identity provider (`CustomSSO`). If no identity provider is bound, the returned `items` is an empty array.
       * ### What you can view in the list
       * The list returns the identity provider type, binding status, and logon and user synchronization switches. When the status of `CustomSSO` is `WAITING_CONFIGURATION`, it indicates that the user pool is ready and you can proceed to complete the integration configuration.
       * This operation returns a binding summary. To view specific integration configurations, use the corresponding operations:
       * - [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider): Views the identity provider details and SAML logon configuration.
       * - [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider): Retrieves the SAML integration information required to configure AgentCore in the enterprise identity system.
       * - [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM): Views the SCIM endpoint configuration and user synchronization status.
       * ### Pagination
       * Currently, at most one binding is returned. `nextToken` should be omitted or passed as an empty string. The default value of `maxResults` is 10. Valid values: 1 to 100.
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const string &workspaceId, const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary Performs a paged query for image caches in a workspace. Supports paging and filtering by image source and cache status.
       *
       * @description Performs a paged query for image caches in a workspace. Supports paging and filtering by image source and cache status.
       * ### Filter conditions
       * Provide regionId and workspaceId in the query parameters. You can filter by ACR instance, registry, namespace, repository, tag, digest, and status. Use imageRefContains to search for image address fragments.
       * ### Pagination rules
       * The default value of maxResults is 20, and the valid values are 1 to 100. Omit nextToken for the first request. For subsequent requests, use the token returned in the response as is, and keep the workspace, region, page size, and all filter conditions unchanged. An empty token indicates that there are no more pages.
       * ### Response content
       * Each item includes imageId, source, digest, status, size, reference count, and deletion conditions. PENDING only indicates that the cache is being prepared. For the cause of failure, see error. You can query a single cache by calling [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache).
       *
       * @param request ListImageCachesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageCachesResponse
       */
      Models::ListImageCachesResponse listImageCachesWithOptions(const Models::ListImageCachesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for image caches in a workspace. Supports paging and filtering by image source and cache status.
       *
       * @description Performs a paged query for image caches in a workspace. Supports paging and filtering by image source and cache status.
       * ### Filter conditions
       * Provide regionId and workspaceId in the query parameters. You can filter by ACR instance, registry, namespace, repository, tag, digest, and status. Use imageRefContains to search for image address fragments.
       * ### Pagination rules
       * The default value of maxResults is 20, and the valid values are 1 to 100. Omit nextToken for the first request. For subsequent requests, use the token returned in the response as is, and keep the workspace, region, page size, and all filter conditions unchanged. An empty token indicates that there are no more pages.
       * ### Response content
       * Each item includes imageId, source, digest, status, size, reference count, and deletion conditions. PENDING only indicates that the cache is being prepared. For the cause of failure, see error. You can query a single cache by calling [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache).
       *
       * @param request ListImageCachesRequest
       * @return ListImageCachesResponse
       */
      Models::ListImageCachesResponse listImageCaches(const Models::ListImageCachesRequest &request);

      /**
       * @summary Performs a paging query for the identity, harness, configuration version, and status summary of managed Harness agents in a workspace.
       *
       * @description Performs a paging query for the identity, harness, configuration version, and status summary of managed Harness agents in a workspace.
       * ### Paging query
       * If maxResults is omitted or set to 0, the default value is 20, and the maximum value is 100. Omit nextToken in the first request. For subsequent requests, pass the token returned in the previous response as is, and keep the same workspace and filter conditions. An empty token indicates that there are no more pages.
       * ### Response content
       * The list returns summary information, where harness.type indicates the runtime framework. For complete configurations, skill targets and effective versions, and instance status statistics, call [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent).
       *
       * @param request ListManagedAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedAgentsResponse
       */
      Models::ListManagedAgentsResponse listManagedAgentsWithOptions(const string &workspaceId, const Models::ListManagedAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query for the identity, harness, configuration version, and status summary of managed Harness agents in a workspace.
       *
       * @description Performs a paging query for the identity, harness, configuration version, and status summary of managed Harness agents in a workspace.
       * ### Paging query
       * If maxResults is omitted or set to 0, the default value is 20, and the maximum value is 100. Omit nextToken in the first request. For subsequent requests, pass the token returned in the previous response as is, and keep the same workspace and filter conditions. An empty token indicates that there are no more pages.
       * ### Response content
       * The list returns summary information, where harness.type indicates the runtime framework. For complete configurations, skill targets and effective versions, and instance status statistics, call [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent).
       *
       * @param request ListManagedAgentsRequest
       * @return ListManagedAgentsResponse
       */
      Models::ListManagedAgentsResponse listManagedAgents(const string &workspaceId, const Models::ListManagedAgentsRequest &request);

      /**
       * @summary Queries MCP marketplace templates.
       *
       * @description Queries official MCP marketplace templates available for installation to help select required tool services. Supports filtering by keyword, usage tag, and MCP type.
       *
       * @param request ListMcpMarketItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpMarketItemsResponse
       */
      Models::ListMcpMarketItemsResponse listMcpMarketItemsWithOptions(const string &workspaceId, const Models::ListMcpMarketItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries MCP marketplace templates.
       *
       * @description Queries official MCP marketplace templates available for installation to help select required tool services. Supports filtering by keyword, usage tag, and MCP type.
       *
       * @param request ListMcpMarketItemsRequest
       * @return ListMcpMarketItemsResponse
       */
      Models::ListMcpMarketItemsResponse listMcpMarketItems(const string &workspaceId, const Models::ListMcpMarketItemsRequest &request);

      /**
       * @summary Queries the list of tools exposed by a specified MCP service and their input and output schemas.
       *
       * @description Queries the list of tools exposed by a specified MCP service and their input and output schemas.
       *
       * @param request ListMcpToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpToolsWithOptions(const string &workspaceId, const string &mcpServerId, const Models::ListMcpToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tools exposed by a specified MCP service and their input and output schemas.
       *
       * @description Queries the list of tools exposed by a specified MCP service and their input and output schemas.
       *
       * @param request ListMcpToolsRequest
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpTools(const string &workspaceId, const string &mcpServerId, const Models::ListMcpToolsRequest &request);

      /**
       * @summary Performs a paging query for MCP services and their configurations and status in a specified workspace.
       *
       * @description Performs a paging query for MCP services and their configurations and status in a specified workspace.
       *
       * @param request ListMcpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcpsWithOptions(const string &workspaceId, const Models::ListMcpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query for MCP services and their configurations and status in a specified workspace.
       *
       * @description Performs a paging query for MCP services and their configurations and status in a specified workspace.
       *
       * @param request ListMcpsRequest
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcps(const string &workspaceId, const Models::ListMcpsRequest &request);

      /**
       * @summary Queries long-term memory with paging and supports independent filtering by UserId, AgentId, and SessionId.
       *
       * @description Queries long-term memory with paging and supports filtering by `UserId`, `AgentId`, and `SessionId`.
       *
       * @param request ListMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries long-term memory with paging and supports independent filtering by UserId, AgentId, and SessionId.
       *
       * @description Queries long-term memory with paging and supports filtering by `UserId`, `AgentId`, and `SessionId`.
       *
       * @param request ListMemoriesRequest
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemories(const string &workspaceId, const string &memoryStoreName, const Models::ListMemoriesRequest &request);

      /**
       * @summary Queries raw messages by exact scope with paging. SessionId is required, and at least one of UserId and AgentId must be provided.
       *
       * @description Queries raw messages of a specific session in the memory store with paging to view the session content used for generating long-term memory.
       * `SessionId` is required, and at least one of `UserId` and `AgentId` must be provided to identify the target session.
       *
       * @param request ListMemorySessionMessagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemorySessionMessagesResponse
       */
      Models::ListMemorySessionMessagesResponse listMemorySessionMessagesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries raw messages by exact scope with paging. SessionId is required, and at least one of UserId and AgentId must be provided.
       *
       * @description Queries raw messages of a specific session in the memory store with paging to view the session content used for generating long-term memory.
       * `SessionId` is required, and at least one of `UserId` and `AgentId` must be provided to identify the target session.
       *
       * @param request ListMemorySessionMessagesRequest
       * @return ListMemorySessionMessagesResponse
       */
      Models::ListMemorySessionMessagesResponse listMemorySessionMessages(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionMessagesRequest &request);

      /**
       * @summary Performs a paged query for sessions in a MemoryStore, supporting paging and filtering by user ID and agent ID independently.
       *
       * @description Performs a paged query for source sessions in a long-term memory store (MemoryStore), supporting paging and filtering by user ID and agent ID respectively.
       *
       * @param request ListMemorySessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemorySessionsResponse
       */
      Models::ListMemorySessionsResponse listMemorySessionsWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for sessions in a MemoryStore, supporting paging and filtering by user ID and agent ID independently.
       *
       * @description Performs a paged query for source sessions in a long-term memory store (MemoryStore), supporting paging and filtering by user ID and agent ID respectively.
       *
       * @param request ListMemorySessionsRequest
       * @return ListMemorySessionsResponse
       */
      Models::ListMemorySessionsResponse listMemorySessions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionsRequest &request);

      /**
       * @summary Performs a paged query of MemoryStores in a specified workspace by using paging.
       *
       * @description Performs a paged query of the long-term memory stores (MemoryStores) in a workspace by using paging for selection or management.
       *
       * @param request ListMemoryStoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryStoresResponse
       */
      Models::ListMemoryStoresResponse listMemoryStoresWithOptions(const string &workspaceId, const Models::ListMemoryStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of MemoryStores in a specified workspace by using paging.
       *
       * @description Performs a paged query of the long-term memory stores (MemoryStores) in a workspace by using paging for selection or management.
       *
       * @param request ListMemoryStoresRequest
       * @return ListMemoryStoresResponse
       */
      Models::ListMemoryStoresResponse listMemoryStores(const string &workspaceId, const Models::ListMemoryStoresRequest &request);

      /**
       * @summary Queries model connections in a specified workspace by using paging. Supports filtering by name, provider type, and invocation protocol.
       *
       * @description Queries model connections in a workspace by using paging to view configured model services.
       * - Use `Name` to filter by name, and `SearchType` to specify exact match or fuzzy match.
       * - You can filter by model provider type and invocation protocol.
       *
       * @param request ListModelConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelConnectionsResponse
       */
      Models::ListModelConnectionsResponse listModelConnectionsWithOptions(const string &workspaceId, const Models::ListModelConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries model connections in a specified workspace by using paging. Supports filtering by name, provider type, and invocation protocol.
       *
       * @description Queries model connections in a workspace by using paging to view configured model services.
       * - Use `Name` to filter by name, and `SearchType` to specify exact match or fuzzy match.
       * - You can filter by model provider type and invocation protocol.
       *
       * @param request ListModelConnectionsRequest
       * @return ListModelConnectionsResponse
       */
      Models::ListModelConnectionsResponse listModelConnections(const string &workspaceId, const Models::ListModelConnectionsRequest &request);

      /**
       * @summary Performs a paging query for models in a specified workspace and supports filtering by model connection and model name.
       *
       * @description Performs a paging query for models in a specified workspace and supports filtering by model connection and model name.
       *
       * @param request ListModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const string &workspaceId, const Models::ListModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query for models in a specified workspace and supports filtering by model connection and model name.
       *
       * @description Performs a paging query for models in a specified workspace and supports filtering by model connection and model name.
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const string &workspaceId, const Models::ListModelsRequest &request);

      /**
       * @summary Queries permission rules.
       *
       * @description Performs a paged query of access rules by resource, supporting paging to check existing rules and their sources.
       *
       * @param request ListPermissionRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionRulesResponse
       */
      Models::ListPermissionRulesResponse listPermissionRulesWithOptions(const string &workspaceId, const Models::ListPermissionRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries permission rules.
       *
       * @description Performs a paged query of access rules by resource, supporting paging to check existing rules and their sources.
       *
       * @param request ListPermissionRulesRequest
       * @return ListPermissionRulesResponse
       */
      Models::ListPermissionRulesResponse listPermissionRules(const string &workspaceId, const Models::ListPermissionRulesRequest &request);

      /**
       * @summary Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
       *
       * @description Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
       *
       * @param request ListPredefinedModelProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedModelProvidersResponse
       */
      Models::ListPredefinedModelProvidersResponse listPredefinedModelProvidersWithOptions(const Models::ListPredefinedModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
       *
       * @description Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
       *
       * @param request ListPredefinedModelProvidersRequest
       * @return ListPredefinedModelProvidersResponse
       */
      Models::ListPredefinedModelProvidersResponse listPredefinedModelProviders(const Models::ListPredefinedModelProvidersRequest &request);

      /**
       * @summary Queries the models and their capabilities for a specified provider in the AgentCore built-in model catalog.
       *
       * @description Queries the models and their capabilities for a specified provider in the AgentCore built-in model catalog.
       *
       * @param request ListPredefinedModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedModelsResponse
       */
      Models::ListPredefinedModelsResponse listPredefinedModelsWithOptions(const string &providerType, const Models::ListPredefinedModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the models and their capabilities for a specified provider in the AgentCore built-in model catalog.
       *
       * @description Queries the models and their capabilities for a specified provider in the AgentCore built-in model catalog.
       *
       * @param request ListPredefinedModelsRequest
       * @return ListPredefinedModelsResponse
       */
      Models::ListPredefinedModelsResponse listPredefinedModels(const string &providerType, const Models::ListPredefinedModelsRequest &request);

      /**
       * @summary Performs a paging query to retrieve the current active sessions and their sources in a specified agent instance.
       *
       * @description Queries the active sessions in a specified running instance to view the current mapping between sessions and instances.
       * ### Query scope
       * Locates the instance by using workspaceId, agentId, and sandboxId. You can obtain the sandboxId from [ListSandboxes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxes). This operation queries the current active sessions.
       * ### Pagination
       * The default value of maxResults is 20. Valid values: 1 to 100. Omit nextToken in the first request. For subsequent requests, use the returned token as is, and keep the workspace, agent, instance, and page size unchanged. An empty token indicates that no more pages are available.
       * ### Session sources
       * The source can be API, CONSOLE_DEBUG, EXTERNAL_CHANNEL, or UNKNOWN. For external channels, the channel type is additionally returned. If no source information is provided, UNKNOWN is returned.
       *
       * @param request ListSandboxSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSandboxSessionsResponse
       */
      Models::ListSandboxSessionsResponse listSandboxSessionsWithOptions(const string &workspaceId, const string &agentId, const string &sandboxId, const Models::ListSandboxSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query to retrieve the current active sessions and their sources in a specified agent instance.
       *
       * @description Queries the active sessions in a specified running instance to view the current mapping between sessions and instances.
       * ### Query scope
       * Locates the instance by using workspaceId, agentId, and sandboxId. You can obtain the sandboxId from [ListSandboxes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxes). This operation queries the current active sessions.
       * ### Pagination
       * The default value of maxResults is 20. Valid values: 1 to 100. Omit nextToken in the first request. For subsequent requests, use the returned token as is, and keep the workspace, agent, instance, and page size unchanged. An empty token indicates that no more pages are available.
       * ### Session sources
       * The source can be API, CONSOLE_DEBUG, EXTERNAL_CHANNEL, or UNKNOWN. For external channels, the channel type is additionally returned. If no source information is provided, UNKNOWN is returned.
       *
       * @param request ListSandboxSessionsRequest
       * @return ListSandboxSessionsResponse
       */
      Models::ListSandboxSessionsResponse listSandboxSessions(const string &workspaceId, const string &agentId, const string &sandboxId, const Models::ListSandboxSessionsRequest &request);

      /**
       * @summary Performs a paging query on the running instances of an agent, and supports filtering by Sandbox ID and current valid session ID fragments.
       *
       * @description Queries the running instances (sandboxes) of an agent to view instance distribution and current running status.
       * ### Filter instances
       * `searchText` matches Sandbox ID fragments, and `sessionId` matches current valid session ID fragments. Both are case-insensitive. If both are submitted, they are combined for filtering.
       * ### Pagination and status
       * The default value of `maxResults` is 20. Valid values: 1 to 100. Omit `nextToken` for the first request. For subsequent requests, use the response token as is, and keep `workspaceId`, `agentId`, filter conditions, and `maxResults` unchanged. An empty token indicates that the query is complete.
       * `phase` indicates the instance phase, `activeSessionCount` indicates the number of current active sessions, and `maxConcurrentSessions` indicates the configured concurrency limit for a single instance. You can query the active sessions of an instance by calling [ListSandboxSessions](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxSessions).
       *
       * @param request ListSandboxesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSandboxesResponse
       */
      Models::ListSandboxesResponse listSandboxesWithOptions(const string &workspaceId, const string &agentId, const Models::ListSandboxesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the running instances of an agent, and supports filtering by Sandbox ID and current valid session ID fragments.
       *
       * @description Queries the running instances (sandboxes) of an agent to view instance distribution and current running status.
       * ### Filter instances
       * `searchText` matches Sandbox ID fragments, and `sessionId` matches current valid session ID fragments. Both are case-insensitive. If both are submitted, they are combined for filtering.
       * ### Pagination and status
       * The default value of `maxResults` is 20. Valid values: 1 to 100. Omit `nextToken` for the first request. For subsequent requests, use the response token as is, and keep `workspaceId`, `agentId`, filter conditions, and `maxResults` unchanged. An empty token indicates that the query is complete.
       * `phase` indicates the instance phase, `activeSessionCount` indicates the number of current active sessions, and `maxConcurrentSessions` indicates the configured concurrency limit for a single instance. You can query the active sessions of an instance by calling [ListSandboxSessions](https://api.aliyun.com/document/AgentCore/2026-08-04/ListSandboxSessions).
       *
       * @param request ListSandboxesRequest
       * @return ListSandboxesResponse
       */
      Models::ListSandboxesResponse listSandboxes(const string &workspaceId, const string &agentId, const Models::ListSandboxesRequest &request);

      /**
       * @summary Queries service endpoints in a specified workspace with paging, and supports filtering by target type, agent, collaboration component, and status.
       *
       * @description Queries service endpoints in a workspace with paging to find the access endpoints for agents or collaboration components.
       * - Use targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status to filter the results.
       * - Use maxResults to set the number of entries per page. If omitted, the default value is 20.
       * - Use the returned nextToken to query the next page.
       *
       * @param request ListServiceEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpointsWithOptions(const string &workspaceId, const Models::ListServiceEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service endpoints in a specified workspace with paging, and supports filtering by target type, agent, collaboration component, and status.
       *
       * @description Queries service endpoints in a workspace with paging to find the access endpoints for agents or collaboration components.
       * - Use targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status to filter the results.
       * - Use maxResults to set the number of entries per page. If omitted, the default value is 20.
       * - Use the returned nextToken to query the next page.
       *
       * @param request ListServiceEndpointsRequest
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpoints(const string &workspaceId, const Models::ListServiceEndpointsRequest &request);

      /**
       * @summary Queries the reference relationships of a skill.
       *
       * @description Queries the reference relationships of a specified skill to verify its usage before modifying or cleaning up skill assets.
       *
       * @param request ListSkillReferencesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillReferencesResponse
       */
      Models::ListSkillReferencesResponse listSkillReferencesWithOptions(const string &workspaceId, const string &skillName, const Models::ListSkillReferencesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reference relationships of a skill.
       *
       * @description Queries the reference relationships of a specified skill to verify its usage before modifying or cleaning up skill assets.
       *
       * @param request ListSkillReferencesRequest
       * @return ListSkillReferencesResponse
       */
      Models::ListSkillReferencesResponse listSkillReferences(const string &workspaceId, const string &skillName, const Models::ListSkillReferencesRequest &request);

      /**
       * @summary Performs a paged query of skills in a specified workspace and returns the basic information, version status, and paging information of the skills.
       *
       * @description Performs a paged query of skills in a specified workspace and returns the basic information, version status, and paging information of the skills.
       *
       * @param request ListSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const string &workspaceId, const Models::ListSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of skills in a specified workspace and returns the basic information, version status, and paging information of the skills.
       *
       * @description Performs a paged query of skills in a specified workspace and returns the basic information, version status, and paging information of the skills.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const string &workspaceId, const Models::ListSkillsRequest &request);

      /**
       * @summary Performs a paging query of teams in a specified workspace. You can use nameLike to filter teams by fuzzy match on the team name, maxResults to specify the maximum number of records per page, and nextToken to retrieve the next page. If maxResults is not specified, the server returns 10 records by default. The member information in the list includes only the member ID, name, and team role.
       *
       * @description Performs a paging query of teams in a specified workspace.
       *
       * @param request ListTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const string &workspaceId, const Models::ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of teams in a specified workspace. You can use nameLike to filter teams by fuzzy match on the team name, maxResults to specify the maximum number of records per page, and nextToken to retrieve the next page. If maxResults is not specified, the server returns 10 records by default. The member information in the list includes only the member ID, name, and team role.
       *
       * @description Performs a paging query of teams in a specified workspace.
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const string &workspaceId, const Models::ListTeamsRequest &request);

      /**
       * @summary Performs a paged query for users in a specified workspace. You can filter users by fuzzy match on the username by using nameLike, specify the maximum number of records per paging by using maxResults, and retrieve the next paging by using nextToken. If maxResults is not specified, the server returns 10 records by default.
       *
       * @description Queries the application user directory in a workspace for viewing users and selecting team members.
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const string &workspaceId, const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for users in a specified workspace. You can filter users by fuzzy match on the username by using nameLike, specify the maximum number of records per paging by using maxResults, and retrieve the next paging by using nextToken. If maxResults is not specified, the server returns 10 records by default.
       *
       * @description Queries the application user directory in a workspace for viewing users and selecting team members.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const string &workspaceId, const Models::ListUsersRequest &request);

      /**
       * @summary Performs a paged query of workspaces under the current tenant. By default, the list does not return soft-deleted records whose status is Deleted. The server applies stable sorting to the results in chronological order of creation during paging.
       *
       * @description Performs a paged query of workspaces accessible to the current account for selecting a workspace or viewing a workspace overview.
       * - Use `nameLike` to filter by name using fuzzy match.
       * - Use `maxResults` to configure the Settings for the number of entries per page. If this parameter is omitted or set to `0`, the default value is 20.
       * - Use `nextToken` to query the next page during paging, or use `skip` to skip a specified number of workspaces.
       * The list is sorted in the order of creation. By default, deleted workspaces (with the `Deleted` status) are not returned.
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of workspaces under the current tenant. By default, the list does not return soft-deleted records whose status is Deleted. The server applies stable sorting to the results in chronological order of creation during paging.
       *
       * @description Performs a paged query of workspaces accessible to the current account for selecting a workspace or viewing a workspace overview.
       * - Use `nameLike` to filter by name using fuzzy match.
       * - Use `maxResults` to configure the Settings for the number of entries per page. If this parameter is omitted or set to `0`, the default value is 20.
       * - Use `nextToken` to query the next page during paging, or use `skip` to skip a specified number of workspaces.
       * The list is sorted in the order of creation. By default, deleted workspaces (with the `Deleted` status) are not returned.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Takes the online version of a specified skill offline so that it is no longer used as the online version.
       *
       * @description Takes the online version of a specified skill offline so that it is no longer used as the online version.
       *
       * @param tmpReq OfflineSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkillWithOptions(const string &workspaceId, const string &skillName, const Models::OfflineSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes the online version of a specified skill offline so that it is no longer used as the online version.
       *
       * @description Takes the online version of a specified skill offline so that it is no longer used as the online version.
       *
       * @param request OfflineSkillRequest
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkill(const string &workspaceId, const string &skillName, const Models::OfflineSkillRequest &request);

      /**
       * @summary Sets the specified skill version as the online version.
       *
       * @description Sets the specified skill version as the online version.
       *
       * @param tmpReq OnlineSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkillWithOptions(const string &workspaceId, const string &skillName, const Models::OnlineSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the specified skill version as the online version.
       *
       * @description Sets the specified skill version as the online version.
       *
       * @param request OnlineSkillRequest
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkill(const string &workspaceId, const string &skillName, const Models::OnlineSkillRequest &request);

      /**
       * @summary Parses and checks one or more skill ZIP packages uploaded to OSS, and returns the names, versions, and conflict check results.
       *
       * @description Checks one or more skill ZIP packages uploaded to OSS for skill names, versions, and import conflicts.
       * After the check passes, call [UploadSkillViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/UploadSkillViaOss) or [BatchUploadSkillsViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/BatchUploadSkillsViaOss) to import the skills into the workspace.
       *
       * @param tmpReq PrecheckSkillUploadViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckSkillUploadViaOssResponse
       */
      Models::PrecheckSkillUploadViaOssResponse precheckSkillUploadViaOssWithOptions(const string &workspaceId, const Models::PrecheckSkillUploadViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses and checks one or more skill ZIP packages uploaded to OSS, and returns the names, versions, and conflict check results.
       *
       * @description Checks one or more skill ZIP packages uploaded to OSS for skill names, versions, and import conflicts.
       * After the check passes, call [UploadSkillViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/UploadSkillViaOss) or [BatchUploadSkillsViaOss](https://api.aliyun.com/document/AgentCore/2026-08-04/BatchUploadSkillsViaOss) to import the skills into the workspace.
       *
       * @param request PrecheckSkillUploadViaOssRequest
       * @return PrecheckSkillUploadViaOssResponse
       */
      Models::PrecheckSkillUploadViaOssResponse precheckSkillUploadViaOss(const string &workspaceId, const Models::PrecheckSkillUploadViaOssRequest &request);

      /**
       * @summary Prepares the SCIM receiving configuration and returns the provisioning URL and credential summary. Issues a token if no available credentials exist and returns the plaintext only in this response, without automatically enabling AgentCore user synchronization.
       *
       * @description Prepares the receiving endpoint and access token for integrating an enterprise identity system with SCIM user synchronization. The enterprise identity system uses this information to provision users to the shared user pool of AgentCore.
       * SCIM is a user provisioning protocol. The enterprise identity system first sends users to the receiving endpoint, and then AgentCore synchronizes the users from the user pool to the workspace.
       * ### Before you begin
       * A `CustomSSO` binding has been created by using [CreateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProvider), and the shared user pool is ready. SCIM integration can be performed independently of SAML logon configuration.
       * ### What this operation prepares
       * This operation enables the SCIM receiving endpoint and returns the receiving URL and credential summary:
       * | Current credential status | Returned result |
       * | --- | --- |
       * | An unexpired credential with the status of `Enabled` already exists | Reuses the existing credential. The `token` field returns an empty string `""`. Use the previously saved token. |
       * | No available credentials exist | Creates a new credential. The `token` field returns the plaintext of the new token, which is returned only in this response. |
       * The plaintext of an existing token cannot be queried again. If the token is lost, you can create a new token by calling [CreateIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSCIMCredential). A maximum of two credentials can be retained for the same user pool. When the limit is reached, you must delete unused credentials first.
       * ### Subsequent configuration
       * 1. Configure the returned receiving URL and valid token in the SCIM user provisioning settings of the enterprise identity system.
       * 2. Complete the connection test and user assignment in the enterprise identity system.
       * 3. Enable AgentCore user synchronization by calling [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM), and then query the synchronization result by calling [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM).
       *
       * @param request PrepareIdentityProviderSCIMRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrepareIdentityProviderSCIMResponse
       */
      Models::PrepareIdentityProviderSCIMResponse prepareIdentityProviderSCIMWithOptions(const string &workspaceId, const Models::PrepareIdentityProviderSCIMRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prepares the SCIM receiving configuration and returns the provisioning URL and credential summary. Issues a token if no available credentials exist and returns the plaintext only in this response, without automatically enabling AgentCore user synchronization.
       *
       * @description Prepares the receiving endpoint and access token for integrating an enterprise identity system with SCIM user synchronization. The enterprise identity system uses this information to provision users to the shared user pool of AgentCore.
       * SCIM is a user provisioning protocol. The enterprise identity system first sends users to the receiving endpoint, and then AgentCore synchronizes the users from the user pool to the workspace.
       * ### Before you begin
       * A `CustomSSO` binding has been created by using [CreateIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProvider), and the shared user pool is ready. SCIM integration can be performed independently of SAML logon configuration.
       * ### What this operation prepares
       * This operation enables the SCIM receiving endpoint and returns the receiving URL and credential summary:
       * | Current credential status | Returned result |
       * | --- | --- |
       * | An unexpired credential with the status of `Enabled` already exists | Reuses the existing credential. The `token` field returns an empty string `""`. Use the previously saved token. |
       * | No available credentials exist | Creates a new credential. The `token` field returns the plaintext of the new token, which is returned only in this response. |
       * The plaintext of an existing token cannot be queried again. If the token is lost, you can create a new token by calling [CreateIdentityProviderSCIMCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSCIMCredential). A maximum of two credentials can be retained for the same user pool. When the limit is reached, you must delete unused credentials first.
       * ### Subsequent configuration
       * 1. Configure the returned receiving URL and valid token in the SCIM user provisioning settings of the enterprise identity system.
       * 2. Complete the connection test and user assignment in the enterprise identity system.
       * 3. Enable AgentCore user synchronization by calling [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM), and then query the synchronization result by calling [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM).
       *
       * @param request PrepareIdentityProviderSCIMRequest
       * @return PrepareIdentityProviderSCIMResponse
       */
      Models::PrepareIdentityProviderSCIMResponse prepareIdentityProviderSCIM(const string &workspaceId, const Models::PrepareIdentityProviderSCIMRequest &request);

      /**
       * @summary Publishes a specified skill version and changes its status to published.
       *
       * @description Publishes a specified skill version and changes its status to published.
       *
       * @param tmpReq PublishSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::PublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified skill version and changes its status to published.
       *
       * @description Publishes a specified skill version and changes its status to published.
       *
       * @param request PublishSkillVersionRequest
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::PublishSkillVersionRequest &request);

      /**
       * @summary Submits a request to rebuild a single sandbox image for a specified managed agent. Existing sessions may be interrupted. An HTTP 200 response only indicates that the request is accepted. Use the returned operationId to call GetSandboxRebuildOperation to query the overall result. Only a SUCCEEDED status indicates that the rebuild is complete. Do not automatically resubmit the rebuild request if the query times out, returns UNKNOWN, or the result is unclear.
       *
       * @description Submits a request to rebuild a single sandbox image for a specified managed agent. Existing sessions may be interrupted. An HTTP 200 response only indicates that the request is successfully submitted and accepted. You must use the returned operationId to call GetSandboxRebuildOperation. Only an overall SUCCEEDED status indicates that the rebuild is complete. Do not automatically resubmit the request if the query times out, returns UNKNOWN, or the result is unclear. You can specify an endpoint runtime version by using serviceEndpointId. If this parameter is omitted, the default latest runtime identity is used.
       *
       * @param request RebuildSandboxRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebuildSandboxResponse
       */
      Models::RebuildSandboxResponse rebuildSandboxWithOptions(const string &workspaceId, const string &agentId, const string &sandboxId, const Models::RebuildSandboxRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a request to rebuild a single sandbox image for a specified managed agent. Existing sessions may be interrupted. An HTTP 200 response only indicates that the request is accepted. Use the returned operationId to call GetSandboxRebuildOperation to query the overall result. Only a SUCCEEDED status indicates that the rebuild is complete. Do not automatically resubmit the rebuild request if the query times out, returns UNKNOWN, or the result is unclear.
       *
       * @description Submits a request to rebuild a single sandbox image for a specified managed agent. Existing sessions may be interrupted. An HTTP 200 response only indicates that the request is successfully submitted and accepted. You must use the returned operationId to call GetSandboxRebuildOperation. Only an overall SUCCEEDED status indicates that the rebuild is complete. Do not automatically resubmit the request if the query times out, returns UNKNOWN, or the result is unclear. You can specify an endpoint runtime version by using serviceEndpointId. If this parameter is omitted, the default latest runtime identity is used.
       *
       * @param request RebuildSandboxRequest
       * @return RebuildSandboxResponse
       */
      Models::RebuildSandboxResponse rebuildSandbox(const string &workspaceId, const string &agentId, const string &sandboxId, const Models::RebuildSandboxRequest &request);

      /**
       * @summary Reverts a specified skill version to an editable draft for further modification.
       *
       * @description Reverts a specified skill version to an editable draft for further modification.
       *
       * @param tmpReq RedraftSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedraftSkillVersionResponse
       */
      Models::RedraftSkillVersionResponse redraftSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::RedraftSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reverts a specified skill version to an editable draft for further modification.
       *
       * @description Reverts a specified skill version to an editable draft for further modification.
       *
       * @param request RedraftSkillVersionRequest
       * @return RedraftSkillVersionResponse
       */
      Models::RedraftSkillVersionResponse redraftSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::RedraftSkillVersionRequest &request);

      /**
       * @summary Resets the logon password of a specified user. Specify the user by using agentCoreUserId or username. You must specify at least one of them. This operation only supports resetting the passwords of users who use local password authentication for the workspace. If you do not specify the password parameter, the server generates a random password and returns it in the response.
       *
       * @description Resets the logon password of a specified user.
       *
       * @param tmpReq ResetUserPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const string &workspaceId, const Models::ResetUserPasswordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the logon password of a specified user. Specify the user by using agentCoreUserId or username. You must specify at least one of them. This operation only supports resetting the passwords of users who use local password authentication for the workspace. If you do not specify the password parameter, the server generates a random password and returns it in the response.
       *
       * @description Resets the logon password of a specified user.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const string &workspaceId, const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Resubmits the creation request for an ACR image cache in a specified workspace.
       *
       * @description Resubmits the creation request for an existing image cache to recreate a cache that has not been successfully created.
       * ### Call scope
       * Pass `regionId`, `workspaceId`, and `clientToken` as query parameters, and use `imageId` to locate the cache. This operation applies to ACR source caches and re-verifies the source repository authorization before submission.
       * ### Query retry results
       * A successful response indicates that a retry acceptance snapshot is returned, not that the creation is complete. Query the status through [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache). `READY` indicates that the cache is ready. If the status is `FAILED`, check the `error` field.
       * The `clientToken` parameter currently only verifies that the value is not empty and does not guarantee deduplication or recovery of the original acceptance result based on this identifier.
       *
       * @param tmpReq RetryImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryImageCacheResponse
       */
      Models::RetryImageCacheResponse retryImageCacheWithOptions(const string &imageId, const Models::RetryImageCacheRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resubmits the creation request for an ACR image cache in a specified workspace.
       *
       * @description Resubmits the creation request for an existing image cache to recreate a cache that has not been successfully created.
       * ### Call scope
       * Pass `regionId`, `workspaceId`, and `clientToken` as query parameters, and use `imageId` to locate the cache. This operation applies to ACR source caches and re-verifies the source repository authorization before submission.
       * ### Query retry results
       * A successful response indicates that a retry acceptance snapshot is returned, not that the creation is complete. Query the status through [GetImageCache](https://api.aliyun.com/document/AgentCore/2026-08-04/GetImageCache). `READY` indicates that the cache is ready. If the status is `FAILED`, check the `error` field.
       * The `clientToken` parameter currently only verifies that the value is not empty and does not guarantee deduplication or recovery of the original acceptance result based on this identifier.
       *
       * @param request RetryImageCacheRequest
       * @return RetryImageCacheResponse
       */
      Models::RetryImageCacheResponse retryImageCache(const string &imageId, const Models::RetryImageCacheRequest &request);

      /**
       * @summary Retrieves long-term memory from MemoryStore based on semantics.
       *
       * @description Retrieves relevant memories semantically from the long-term memory store (MemoryStore) to help agents obtain the information required for subsequent tasks.
       *
       * @param tmpReq SearchMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::SearchMemoriesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves long-term memory from MemoryStore based on semantics.
       *
       * @description Retrieves relevant memories semantically from the long-term memory store (MemoryStore) to help agents obtain the information required for subsequent tasks.
       *
       * @param request SearchMemoriesRequest
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemories(const string &workspaceId, const string &memoryStoreName, const Models::SearchMemoriesRequest &request);

      /**
       * @summary Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
       *
       * @description Submits a specified draft version of an agent template for review.
       * If no release pipeline is configured, the version is directly published online.
       *
       * @param tmpReq SubmitAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAgentSpecVersionResponse
       */
      Models::SubmitAgentSpecVersionResponse submitAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::SubmitAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
       *
       * @description Submits a specified draft version of an agent template for review.
       * If no release pipeline is configured, the version is directly published online.
       *
       * @param request SubmitAgentSpecVersionRequest
       * @return SubmitAgentSpecVersionResponse
       */
      Models::SubmitAgentSpecVersionResponse submitAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::SubmitAgentSpecVersionRequest &request);

      /**
       * @summary Submits a specified draft version of a skill for review.
       *
       * @description Submits a specified draft version of a skill for review.
       *
       * @param tmpReq SubmitSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::SubmitSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified draft version of a skill for review.
       *
       * @description Submits a specified draft version of a skill for review.
       *
       * @param request SubmitSkillVersionRequest
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::SubmitSkillVersionRequest &request);

      /**
       * @summary Updates an access application.
       *
       * @description Modifies the configuration of an access application in a workspace to adjust application integration and identity source settings.
       *
       * @param tmpReq UpdateAccessApplicationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccessApplicationResponse
       */
      Models::UpdateAccessApplicationResponse updateAccessApplicationWithOptions(const string &workspaceId, const string &applicationId, const Models::UpdateAccessApplicationRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an access application.
       *
       * @description Modifies the configuration of an access application in a workspace to adjust application integration and identity source settings.
       *
       * @param request UpdateAccessApplicationRequest
       * @return UpdateAccessApplicationResponse
       */
      Models::UpdateAccessApplicationResponse updateAccessApplication(const string &workspaceId, const string &applicationId, const Models::UpdateAccessApplicationRequest &request);

      /**
       * @summary Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
       *
       * @description Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel.
       * At least one updatable field must be provided.
       *
       * @param tmpReq UpdateAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentIMChannelResponse
       */
      Models::UpdateAgentIMChannelResponse updateAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
       *
       * @description Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel.
       * At least one updatable field must be provided.
       *
       * @param request UpdateAgentIMChannelRequest
       * @return UpdateAgentIMChannelResponse
       */
      Models::UpdateAgentIMChannelResponse updateAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelRequest &request);

      /**
       * @summary Fully updates the channel credentials for a specified IM channel. Secrets are not returned in the response.
       *
       * @description Replaces the access credentials for an IM channel to rotate keys or correct authentication configurations.
       * Submit the complete new credentials. The response does not return plaintext secrets.
       *
       * @param tmpReq UpdateAgentIMChannelCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentIMChannelCredentialResponse
       */
      Models::UpdateAgentIMChannelCredentialResponse updateAgentIMChannelCredentialWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fully updates the channel credentials for a specified IM channel. Secrets are not returned in the response.
       *
       * @description Replaces the access credentials for an IM channel to rotate keys or correct authentication configurations.
       * Submit the complete new credentials. The response does not return plaintext secrets.
       *
       * @param request UpdateAgentIMChannelCredentialRequest
       * @return UpdateAgentIMChannelCredentialResponse
       */
      Models::UpdateAgentIMChannelCredentialResponse updateAgentIMChannelCredential(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelCredentialRequest &request);

      /**
       * @summary Updates the business tags, version tags, and visibility scope of a specified AgentSpec. Fields not provided remain unchanged.
       *
       * @description Updates the business tags, version tags, and visibility scope of a specified agent template. Fields not provided remain unchanged.
       *
       * @param tmpReq UpdateAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentSpecResponse
       */
      Models::UpdateAgentSpecResponse updateAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::UpdateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business tags, version tags, and visibility scope of a specified AgentSpec. Fields not provided remain unchanged.
       *
       * @description Updates the business tags, version tags, and visibility scope of a specified agent template. Fields not provided remain unchanged.
       *
       * @param request UpdateAgentSpecRequest
       * @return UpdateAgentSpecResponse
       */
      Models::UpdateAgentSpecResponse updateAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::UpdateAgentSpecRequest &request);

      /**
       * @summary Updates the API key or service account key collection for an enabled QoderCLI connector. When serviceAccountKeys is submitted, the service uses it as the complete updated key collection to add, rename, rotate, and delete keys.
       *
       * @description Updates the API key or service account key collection for an enabled QoderCLI connector.
       * When updating service account keys, existing keys are matched by their record `id`.
       *
       * @param tmpReq UpdateConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnectorResponse
       */
      Models::UpdateConnectorResponse updateConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::UpdateConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the API key or service account key collection for an enabled QoderCLI connector. When serviceAccountKeys is submitted, the service uses it as the complete updated key collection to add, rename, rotate, and delete keys.
       *
       * @description Updates the API key or service account key collection for an enabled QoderCLI connector.
       * When updating service account keys, existing keys are matched by their record `id`.
       *
       * @param request UpdateConnectorRequest
       * @return UpdateConnectorResponse
       */
      Models::UpdateConnectorResponse updateConnector(const string &workspaceId, const string &connectorName, const Models::UpdateConnectorRequest &request);

      /**
       * @summary Updates the content, description, or MCP header application scope of a specified credential. Unspecified configurations retain their original values. The credential name and type cannot be modified.
       *
       * @description Updates the content, description, or MCP header application scope of a specified credential.
       * ### Update rules
       * You must modify at least one of the credential content, description, or application scope. When modifying only the application scope, you do not need to submit credentialMetadata or description.
       * - Omit credentialMetadata: The original credential content is retained. If provided, submit a JSON string according to the original credential type.
       * - Omit description: The original description is retained.
       * - The credential name and credentialType cannot be modified.
       * ### MCP header application scope
       * Only mcpHeader supports updating the application scope. For apiKey, do not submit resourceScope or resourceRefs.
       * - Omit both the scope and the resource list: The original configuration is retained.
       * - Submit resourceRefs: You must also submit resourceScope.
       * - resourceScope=ALL: Omit resourceRefs.
       * - resourceScope=SPECIFIED: Submit resourceRefs. An empty array [] is allowed during updates. For each item, specify resourceType=mcpServer and resourceId.
       * ### Query results
       * After the update, call [GetCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCredential) to query the current configuration and the masked credential content.
       *
       * @param tmpReq UpdateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::UpdateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content, description, or MCP header application scope of a specified credential. Unspecified configurations retain their original values. The credential name and type cannot be modified.
       *
       * @description Updates the content, description, or MCP header application scope of a specified credential.
       * ### Update rules
       * You must modify at least one of the credential content, description, or application scope. When modifying only the application scope, you do not need to submit credentialMetadata or description.
       * - Omit credentialMetadata: The original credential content is retained. If provided, submit a JSON string according to the original credential type.
       * - Omit description: The original description is retained.
       * - The credential name and credentialType cannot be modified.
       * ### MCP header application scope
       * Only mcpHeader supports updating the application scope. For apiKey, do not submit resourceScope or resourceRefs.
       * - Omit both the scope and the resource list: The original configuration is retained.
       * - Submit resourceRefs: You must also submit resourceScope.
       * - resourceScope=ALL: Omit resourceRefs.
       * - resourceScope=SPECIFIED: Submit resourceRefs. An empty array [] is allowed during updates. For each item, specify resourceType=mcpServer and resourceId.
       * ### Query results
       * After the update, call [GetCredential](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCredential) to query the current configuration and the masked credential content.
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const string &workspaceId, const string &credentialId, const Models::UpdateCredentialRequest &request);

      /**
       * @summary Updates the configuration of a custom code or image agent in a specified workspace and executes the update asynchronously. Omitted top-level fields retain their original configurations. You can call GetCustomAgent to query the update result.
       *
       * @description Updates the deployment artifact or runtime configuration of a custom code or image agent to release new code, images, or configurations.
       * ### Update rules
       * Updates a custom code or image agent in a specified workspace. You must provide at least one top-level field to update. Omitted top-level fields retain their original configurations.
       * The update rules for each configuration are as follows.
       * | Configuration | Update method and precautions |
       * | --- | --- |
       * | `name` | Omit to retain the original name. The value cannot be `null` or an empty string. |
       * | `description` | Omit to retain the original description. Pass `null` to clear the description. |
       * | `artifact` | When submitting, specify `port` and the required fields for the selected source. To retain a custom startup command, also specify `entrypoint`. `code` and `container` are mutually exclusive. |
       * | `runtime` | When submitting, specify both `compute` and `sessionPolicy`. To retain the elastic policy, submit the complete `hpa`. |
       * | `environment` | The environment variable list is replaced as a whole. You must include all variables that need to be retained. |
       * | `network` | When submitting, omitted access items are treated as allowed. To retain access restrictions, specify both `accessInternet` and `accessVpc`. |
       * | `healthCheck` | When submitting, you must specify `port`. Other unspecified configurations use default values. Pass `null` to remove the health check. |
       * | `logging` | When submitting `logging.sls`, specify non-empty `project` and `logstore` at the same time. |
       * | `protocol`, `ossMounts`, `agenticFsMounts` | When submitting, the corresponding list is replaced as a whole. Pass `[]` to clear the corresponding list. `agenticFsMounts` does not accept `null`. |
       * ### Deployment artifacts
       * Three deployment methods are supported: code packages, ACR images, and custom images. When updating or switching the deployment method, provide the configuration according to the target method.
       * | Deployment method | Configuration requirements |
       * | --- | --- |
       * | ACR image | When updating the image tag, also provide `artifact.port`, as well as `type=acr`, `instanceId`, `namespace`, `repo`, and `tag` in `artifact.container`. To retain a custom startup command, also provide `entrypoint`. |
       * | Custom image | Set `artifact.container.type=custom`, provide the complete `customImage`, and provide `clientToken` in the query parameters. When switching to this method, also specify `artifact.port`. Do not include ACR instance, namespace, repository, and tag fields in `container`. |
       * | Code package | Provide `artifact.port`, as well as `sourceUri`, `languageRuntime`, and `entrypoint` in `artifact.code`. Do not commit `container` at the same time. |
       * **Custom image**
       * - `customImage` must include the complete image address `image` and the independent pull network `pullNetwork`. The image address does not include a protocol or user information, and supports addresses with tags or digests.
       * - For public network pulling, set `pullNetwork.type=public` and do not include VPC fields. For VPC pulling, set `type=vpc` and provide `vpcId`, `vSwitchId`, and `securityGroupId` at the same time. The image pull network and the agent runtime network are configured separately.
       * - When repository authentication is required, provide non-empty `username` and `password` at the same time. For anonymous access, omit both. The response does not return the password.
       * - Omitting the entire `customImage` retains the saved image source. Commit the complete object when updating the custom image source. You do not need to resubmit this object when only adjusting the runtime configuration.
       * - Custom images and code packages do not support enabling `useImageCache`. The value in the final configuration must be `false`. When this field is omitted for a custom image, it is treated as `false`. When switching to a code package, if the original configuration is `true`, you must explicitly change it to `false`. When updating other sources, omitting this field retains the original value.
       * **Code package**
       * - Supports ZIP or TAR.GZ. The compressed package size cannot exceed `500000000` bytes. Dependencies are packaged by the invoker. The platform does not execute online builds or install dependencies.
       * - Query the active `languageRuntime` values by invoking [ListAgentCodeRuntimes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListAgentCodeRuntimes).
       * - `sourceUri` supports `oss://` addresses or HTTPS object addresses of standard OSS public domain name, including signed URLs.
       * - For local code packages, first invoke [GetAgentCodePackageUploadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageUploadUrl), upload the file according to the response information, and then commit the returned `sourceUri`.
       * - The new source is verified for read permissions, objects, and size before acceptance, and is transferred to a fixed copy on the platform. If the transfer failed, the current agent configuration is not saved. Common updates can reuse the saved fixed code package address.
       * ### Runtime configuration and elasticity
       * Omitting the entire `runtime` retains the original runtime configuration. When submitting `runtime`, you must specify both `compute` and `sessionPolicy`.
       * If you submit `runtime` but omit `hpa`, or omit some fields in `hpa`, the unspecified items use the following default values. **To retain the existing elastic policy, submit the complete `hpa`.**
       * | Field | Default value | Description |
       * | --- | --- | --- |
       * | `enabled` | `false` | Specifies whether elastic scaling is enabled. |
       * | `minSandboxCount` | `1` | The minimum number of instances. |
       * | `maxSandboxCount` | `10` | The maximum number of instances, which cannot be less than the minimum number. |
       * | `maxConcurrentSessionsPerSandbox` | `20` | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | `sessionTtlSeconds` | `600` | The maximum idle time of a session, in seconds. |
       * The upper and lower limits of the number of instances are configuration values. Query the current number of instances through `sandboxPhaseCounts`.
       * When `sessionPolicy.type=ISOLATED_HEADER_FIELD`, you must specify a valid HTTP request header name `headerName`. Do not specify `headerName` for other session policies.
       * ### Network and mounts
       * Omitting the entire `network` retains the original configuration. When submitting this object, omitted access items are treated as allowed on the agent side, and actual access is restricted by the workspace network configuration.
       * To retain the original restrictions, submit both `accessInternet.enabled` and `accessVpc.enabled` at the same time. Do not submit only one of them.
       * The total number of `ossMounts` and `agenticFsMounts` cannot exceed 10. When updating either list, you must include all mount items that need to be retained in the list. The two lists are updated separately. You can use `agenticFsMounts=[]` to clear AgenticFS mounts, but you cannot use `null` to clear them.
       * In this operation, ACR images, custom images, and code packages all use the same user mount target rules: `mountPath` is the absolute path in the container, such as `/data/train`, and must not conflict with platform reserved directories. Mount targets must not be duplicated or form parent-child directory overwrites.
       * ### Environment variables
       * Omitting the entire `environment` retains the original configuration. When submitting `environment.variables`, the original list is replaced as a whole with the current list. You must include all variables that need to be retained.
       * The following methods all clear the environment variables configured by the user:
       * - `environment.variables=[]`.
       * - `environment=null`.
       * - Submit `environment` but omit `variables`, such as `environment={}`.
       * Variable names must be non-empty and unique in the list. Variable values must be strings, and empty strings are allowed.
       * ### Health checks and logs
       * Omitting the entire `healthCheck` retains the original configuration. Pass `null` to remove the health check. When submitting this object, you must specify `port`. Other unspecified items use the following default values.
       * | Field | Default value |
       * | --- | --- |
       * | `path` | `/healthz` |
       * | `intervalSeconds` | `10` seconds |
       * | `timeoutSeconds` | `2` seconds |
       * | `unhealthyThreshold` | `3` times |
       * The health check port ranges from 1 to 65535. Health Check Interval, timeout period, and failure threshold must be positive integers, and the timeout period must be less than Health Check Interval. Do not submit `healthyThreshold`.
       * When configuring log delivery, `logging.sls.project` and `logging.sls.logstore` must be provided at the same time and cannot be empty.
       * ### Asynchronous results and retries
       * `success=true` indicates that the update request has been accepted. Call [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent) to query the configuration processing result.
       * | Field | Purpose |
       * | --- | --- |
       * | `latestSpecVersion` | The latest expected configuration version. |
       * | `effectiveSpecVersion` | The effective configuration version. |
       * | `latestVersionStatus` | The processing status of the latest expected configuration version. |
       * | `latestExecutionError` | The reason why the latest configuration is waiting for a retry or fails to be executed, and whether to automatically retry. |
       * | `status` | The overall status of the agent. |
       * | `sandboxPhaseCounts` | A snapshot of the number of instances counted by phase. |
       * When `latestVersionStatus` is `pending`, `processing`, or `waiting_retry`, you can continue to query later. `succeeded` indicates that the configuration is processed successfully. When the value is `failed`, troubleshoot the configuration based on `latestExecutionError`.
       * When explicitly submitting `customImage` or explicitly setting `artifact.container.type=custom`, you must provide `clientToken` in the query parameters. You can also optionally pass this parameter when updating ACR images or code packages to reuse the acceptance result of the same submission. The identifier is 1 to 128 characters in length and can contain letters, digits, periods, underscores, colons, and hyphens.
       * When retrying the same submission, reuse the original `clientToken`. The service returns the existing acceptance result based on the tenant, workspace, and this identifier. Use a new identifier when modifying the submission content.
       *
       * @param tmpReq UpdateCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgentWithOptions(const string &workspaceId, const string &agentId, const Models::UpdateCustomAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a custom code or image agent in a specified workspace and executes the update asynchronously. Omitted top-level fields retain their original configurations. You can call GetCustomAgent to query the update result.
       *
       * @description Updates the deployment artifact or runtime configuration of a custom code or image agent to release new code, images, or configurations.
       * ### Update rules
       * Updates a custom code or image agent in a specified workspace. You must provide at least one top-level field to update. Omitted top-level fields retain their original configurations.
       * The update rules for each configuration are as follows.
       * | Configuration | Update method and precautions |
       * | --- | --- |
       * | `name` | Omit to retain the original name. The value cannot be `null` or an empty string. |
       * | `description` | Omit to retain the original description. Pass `null` to clear the description. |
       * | `artifact` | When submitting, specify `port` and the required fields for the selected source. To retain a custom startup command, also specify `entrypoint`. `code` and `container` are mutually exclusive. |
       * | `runtime` | When submitting, specify both `compute` and `sessionPolicy`. To retain the elastic policy, submit the complete `hpa`. |
       * | `environment` | The environment variable list is replaced as a whole. You must include all variables that need to be retained. |
       * | `network` | When submitting, omitted access items are treated as allowed. To retain access restrictions, specify both `accessInternet` and `accessVpc`. |
       * | `healthCheck` | When submitting, you must specify `port`. Other unspecified configurations use default values. Pass `null` to remove the health check. |
       * | `logging` | When submitting `logging.sls`, specify non-empty `project` and `logstore` at the same time. |
       * | `protocol`, `ossMounts`, `agenticFsMounts` | When submitting, the corresponding list is replaced as a whole. Pass `[]` to clear the corresponding list. `agenticFsMounts` does not accept `null`. |
       * ### Deployment artifacts
       * Three deployment methods are supported: code packages, ACR images, and custom images. When updating or switching the deployment method, provide the configuration according to the target method.
       * | Deployment method | Configuration requirements |
       * | --- | --- |
       * | ACR image | When updating the image tag, also provide `artifact.port`, as well as `type=acr`, `instanceId`, `namespace`, `repo`, and `tag` in `artifact.container`. To retain a custom startup command, also provide `entrypoint`. |
       * | Custom image | Set `artifact.container.type=custom`, provide the complete `customImage`, and provide `clientToken` in the query parameters. When switching to this method, also specify `artifact.port`. Do not include ACR instance, namespace, repository, and tag fields in `container`. |
       * | Code package | Provide `artifact.port`, as well as `sourceUri`, `languageRuntime`, and `entrypoint` in `artifact.code`. Do not commit `container` at the same time. |
       * **Custom image**
       * - `customImage` must include the complete image address `image` and the independent pull network `pullNetwork`. The image address does not include a protocol or user information, and supports addresses with tags or digests.
       * - For public network pulling, set `pullNetwork.type=public` and do not include VPC fields. For VPC pulling, set `type=vpc` and provide `vpcId`, `vSwitchId`, and `securityGroupId` at the same time. The image pull network and the agent runtime network are configured separately.
       * - When repository authentication is required, provide non-empty `username` and `password` at the same time. For anonymous access, omit both. The response does not return the password.
       * - Omitting the entire `customImage` retains the saved image source. Commit the complete object when updating the custom image source. You do not need to resubmit this object when only adjusting the runtime configuration.
       * - Custom images and code packages do not support enabling `useImageCache`. The value in the final configuration must be `false`. When this field is omitted for a custom image, it is treated as `false`. When switching to a code package, if the original configuration is `true`, you must explicitly change it to `false`. When updating other sources, omitting this field retains the original value.
       * **Code package**
       * - Supports ZIP or TAR.GZ. The compressed package size cannot exceed `500000000` bytes. Dependencies are packaged by the invoker. The platform does not execute online builds or install dependencies.
       * - Query the active `languageRuntime` values by invoking [ListAgentCodeRuntimes](https://api.aliyun.com/document/AgentCore/2026-08-04/ListAgentCodeRuntimes).
       * - `sourceUri` supports `oss://` addresses or HTTPS object addresses of standard OSS public domain name, including signed URLs.
       * - For local code packages, first invoke [GetAgentCodePackageUploadUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageUploadUrl), upload the file according to the response information, and then commit the returned `sourceUri`.
       * - The new source is verified for read permissions, objects, and size before acceptance, and is transferred to a fixed copy on the platform. If the transfer failed, the current agent configuration is not saved. Common updates can reuse the saved fixed code package address.
       * ### Runtime configuration and elasticity
       * Omitting the entire `runtime` retains the original runtime configuration. When submitting `runtime`, you must specify both `compute` and `sessionPolicy`.
       * If you submit `runtime` but omit `hpa`, or omit some fields in `hpa`, the unspecified items use the following default values. **To retain the existing elastic policy, submit the complete `hpa`.**
       * | Field | Default value | Description |
       * | --- | --- | --- |
       * | `enabled` | `false` | Specifies whether elastic scaling is enabled. |
       * | `minSandboxCount` | `1` | The minimum number of instances. |
       * | `maxSandboxCount` | `10` | The maximum number of instances, which cannot be less than the minimum number. |
       * | `maxConcurrentSessionsPerSandbox` | `20` | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | `sessionTtlSeconds` | `600` | The maximum idle time of a session, in seconds. |
       * The upper and lower limits of the number of instances are configuration values. Query the current number of instances through `sandboxPhaseCounts`.
       * When `sessionPolicy.type=ISOLATED_HEADER_FIELD`, you must specify a valid HTTP request header name `headerName`. Do not specify `headerName` for other session policies.
       * ### Network and mounts
       * Omitting the entire `network` retains the original configuration. When submitting this object, omitted access items are treated as allowed on the agent side, and actual access is restricted by the workspace network configuration.
       * To retain the original restrictions, submit both `accessInternet.enabled` and `accessVpc.enabled` at the same time. Do not submit only one of them.
       * The total number of `ossMounts` and `agenticFsMounts` cannot exceed 10. When updating either list, you must include all mount items that need to be retained in the list. The two lists are updated separately. You can use `agenticFsMounts=[]` to clear AgenticFS mounts, but you cannot use `null` to clear them.
       * In this operation, ACR images, custom images, and code packages all use the same user mount target rules: `mountPath` is the absolute path in the container, such as `/data/train`, and must not conflict with platform reserved directories. Mount targets must not be duplicated or form parent-child directory overwrites.
       * ### Environment variables
       * Omitting the entire `environment` retains the original configuration. When submitting `environment.variables`, the original list is replaced as a whole with the current list. You must include all variables that need to be retained.
       * The following methods all clear the environment variables configured by the user:
       * - `environment.variables=[]`.
       * - `environment=null`.
       * - Submit `environment` but omit `variables`, such as `environment={}`.
       * Variable names must be non-empty and unique in the list. Variable values must be strings, and empty strings are allowed.
       * ### Health checks and logs
       * Omitting the entire `healthCheck` retains the original configuration. Pass `null` to remove the health check. When submitting this object, you must specify `port`. Other unspecified items use the following default values.
       * | Field | Default value |
       * | --- | --- |
       * | `path` | `/healthz` |
       * | `intervalSeconds` | `10` seconds |
       * | `timeoutSeconds` | `2` seconds |
       * | `unhealthyThreshold` | `3` times |
       * The health check port ranges from 1 to 65535. Health Check Interval, timeout period, and failure threshold must be positive integers, and the timeout period must be less than Health Check Interval. Do not submit `healthyThreshold`.
       * When configuring log delivery, `logging.sls.project` and `logging.sls.logstore` must be provided at the same time and cannot be empty.
       * ### Asynchronous results and retries
       * `success=true` indicates that the update request has been accepted. Call [GetCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetCustomAgent) to query the configuration processing result.
       * | Field | Purpose |
       * | --- | --- |
       * | `latestSpecVersion` | The latest expected configuration version. |
       * | `effectiveSpecVersion` | The effective configuration version. |
       * | `latestVersionStatus` | The processing status of the latest expected configuration version. |
       * | `latestExecutionError` | The reason why the latest configuration is waiting for a retry or fails to be executed, and whether to automatically retry. |
       * | `status` | The overall status of the agent. |
       * | `sandboxPhaseCounts` | A snapshot of the number of instances counted by phase. |
       * When `latestVersionStatus` is `pending`, `processing`, or `waiting_retry`, you can continue to query later. `succeeded` indicates that the configuration is processed successfully. When the value is `failed`, troubleshoot the configuration based on `latestExecutionError`.
       * When explicitly submitting `customImage` or explicitly setting `artifact.container.type=custom`, you must provide `clientToken` in the query parameters. You can also optionally pass this parameter when updating ACR images or code packages to reuse the acceptance result of the same submission. The identifier is 1 to 128 characters in length and can contain letters, digits, periods, underscores, colons, and hyphens.
       * When retrying the same submission, reuse the original `clientToken`. The service returns the existing acceptance result based on the tenant, workspace, and this identifier. Use a new identifier when modifying the submission content.
       *
       * @param request UpdateCustomAgentRequest
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgent(const string &workspaceId, const string &agentId, const Models::UpdateCustomAgentRequest &request);

      /**
       * @summary Updates the model source, instructions, tools, and skills of a managed agent, and processes the configuration asynchronously.
       *
       * @description Updates the model, instruction, tool, or skill configurations saved on the platform side for a managed agent to adjust its capability configurations after integration.
       * ### Update rules
       * Provide at least one updatable field. Omitted top-level fields retain their original configurations. You can set description=null to clear the description. The tools and skills fields are replaced as a whole upon submission. You must include the items to be retained, or pass [] to clear the corresponding explicit lists.
       * ### Switch model sources
       * - To switch to PLATFORM, provide modelSource=PLATFORM and a valid model configuration, including the model connection ID and model name.
       * - To switch to RUNTIME, change the Settings to modelSource=RUNTIME and do not commit the platform model. The original platform model configuration is removed when the source is switched.
       * When a template is used, configurations belonging to the template such as instructions are read from the template. A successful update indicates that the request is accepted. Invoke [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent) to query the configuration version and external accessed state. The clientToken parameter does not provide idempotence guarantees at this time.
       *
       * @param tmpReq UpdateExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExternalAgentResponse
       */
      Models::UpdateExternalAgentResponse updateExternalAgentWithOptions(const string &workspaceId, const string &agentId, const Models::UpdateExternalAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the model source, instructions, tools, and skills of a managed agent, and processes the configuration asynchronously.
       *
       * @description Updates the model, instruction, tool, or skill configurations saved on the platform side for a managed agent to adjust its capability configurations after integration.
       * ### Update rules
       * Provide at least one updatable field. Omitted top-level fields retain their original configurations. You can set description=null to clear the description. The tools and skills fields are replaced as a whole upon submission. You must include the items to be retained, or pass [] to clear the corresponding explicit lists.
       * ### Switch model sources
       * - To switch to PLATFORM, provide modelSource=PLATFORM and a valid model configuration, including the model connection ID and model name.
       * - To switch to RUNTIME, change the Settings to modelSource=RUNTIME and do not commit the platform model. The original platform model configuration is removed when the source is switched.
       * When a template is used, configurations belonging to the template such as instructions are read from the template. A successful update indicates that the request is accepted. Invoke [GetExternalAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetExternalAgent) to query the configuration version and external accessed state. The clientToken parameter does not provide idempotence guarantees at this time.
       *
       * @param request UpdateExternalAgentRequest
       * @return UpdateExternalAgentResponse
       */
      Models::UpdateExternalAgentResponse updateExternalAgent(const string &workspaceId, const string &agentId, const Models::UpdateExternalAgentRequest &request);

      /**
       * @summary Modifies the logon configuration of a bound identity provider in a specified workspace. DingTalk and Feishu support the logon switch, incremental synchronization switch, application configuration, and synchronization scope. CustomSSO supports SAML configuration and the logon switch. Updates take effect asynchronously. Call GetIdentityProvider to query the status.
       *
       * @description Modifies the logon or directory configuration of a bound enterprise identity provider to update enterprise application credentials, adjust synchronized departments, or configure custom single sign-on.
       * ### Select the configuration to modify
       * | Identity provider | Updatable content |
       * | --- | --- |
       * | DingTalk (DingTalk), Feishu (Feishu) | Enterprise application credentials metadata, logon switch loginEnabled, directory change synchronization switch syncEnabled, and synchronization scope syncScope. You must submit at least one item. |
       * | Custom identity provider (CustomSSO) | SAML protocol protocol, logon configuration saml, and logon switch loginEnabled. SCIM-based user synchronization is configured separately by using [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM). |
       * ### Update DingTalk or Feishu
       * metadata is updated by field: submit only the fields that need to be modified. Omitted fields and existing keys remain unchanged. Provided values must be non-empty strings. When you enable directory change synchronization, the configuration must include encryptKey and verificationToken.
       * To adjust synchronized departments:
       * **Step 1:** Call [ListIdentityProviderDepartments](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderDepartments) to query and select departments.
       * **Step 2:** Save syncScope by using this operation. If you omit this field or pass null, the current scope is retained.
       * **Step 3:** Call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to wait for the configuration processing to complete, and then call [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob) to synchronize users based on the new scope.
       * Saving the scope does not automatically trigger a full synchronization. syncEnabled controls subsequent directory change events. The initial synchronization and manual synchronization are executed separately.
       * ### Configure custom single sign-on
       * CustomSSO uses the SAML protocol to allow users to log on through the enterprise identity system. First, call [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider) to obtain the access information of AgentCore and configure it in the enterprise identity system. Then, fill in the enterprise-side information in saml.
       * Choose one of the following two methods:
       * | Method | Required configuration |
       * | --- | --- |
       * | Import metadata | metadataXml: a single IdP metadata XML text exported from the enterprise identity provider, with a maximum size of 1 MiB. Enter the XML content instead of a download URL or file path. |
       * | Manual entry | Provide entityId, loginUrl, bindingType, and x509Certificates at the same time. Use an HTTPS logon URL and a valid signing certificate. Set bindingType to HTTP-Redirect or HTTP-POST. You can provide up to two certificates. |
       * The entityId cannot be changed after it is saved. If the XML contains both binding methods, HTTP-POST and its corresponding URL take precedence.
       * After saving the configuration, set loginEnabled=true to enable logon. You can also enable it when submitting a valid SAML configuration. Setting it to false disables logon and retains the existing configuration.
       * ### Confirm that the configuration takes effect
       * After the request is accepted, UPDATING is usually returned. Call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to query the progress. READY indicates that the configuration processing is complete. If it fails, check the returned status and configuration.
       * If the request times out, query the current configuration and processing status first, and then decide whether to retry. Query the SCIM processing result by calling [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM).
       *
       * @param tmpReq UpdateIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::UpdateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the logon configuration of a bound identity provider in a specified workspace. DingTalk and Feishu support the logon switch, incremental synchronization switch, application configuration, and synchronization scope. CustomSSO supports SAML configuration and the logon switch. Updates take effect asynchronously. Call GetIdentityProvider to query the status.
       *
       * @description Modifies the logon or directory configuration of a bound enterprise identity provider to update enterprise application credentials, adjust synchronized departments, or configure custom single sign-on.
       * ### Select the configuration to modify
       * | Identity provider | Updatable content |
       * | --- | --- |
       * | DingTalk (DingTalk), Feishu (Feishu) | Enterprise application credentials metadata, logon switch loginEnabled, directory change synchronization switch syncEnabled, and synchronization scope syncScope. You must submit at least one item. |
       * | Custom identity provider (CustomSSO) | SAML protocol protocol, logon configuration saml, and logon switch loginEnabled. SCIM-based user synchronization is configured separately by using [UpdateIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateIdentityProviderSCIM). |
       * ### Update DingTalk or Feishu
       * metadata is updated by field: submit only the fields that need to be modified. Omitted fields and existing keys remain unchanged. Provided values must be non-empty strings. When you enable directory change synchronization, the configuration must include encryptKey and verificationToken.
       * To adjust synchronized departments:
       * **Step 1:** Call [ListIdentityProviderDepartments](https://api.aliyun.com/document/AgentCore/2026-08-04/ListIdentityProviderDepartments) to query and select departments.
       * **Step 2:** Save syncScope by using this operation. If you omit this field or pass null, the current scope is retained.
       * **Step 3:** Call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to wait for the configuration processing to complete, and then call [CreateIdentityProviderSyncJob](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateIdentityProviderSyncJob) to synchronize users based on the new scope.
       * Saving the scope does not automatically trigger a full synchronization. syncEnabled controls subsequent directory change events. The initial synchronization and manual synchronization are executed separately.
       * ### Configure custom single sign-on
       * CustomSSO uses the SAML protocol to allow users to log on through the enterprise identity system. First, call [GetIdentityProviderServiceProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderServiceProvider) to obtain the access information of AgentCore and configure it in the enterprise identity system. Then, fill in the enterprise-side information in saml.
       * Choose one of the following two methods:
       * | Method | Required configuration |
       * | --- | --- |
       * | Import metadata | metadataXml: a single IdP metadata XML text exported from the enterprise identity provider, with a maximum size of 1 MiB. Enter the XML content instead of a download URL or file path. |
       * | Manual entry | Provide entityId, loginUrl, bindingType, and x509Certificates at the same time. Use an HTTPS logon URL and a valid signing certificate. Set bindingType to HTTP-Redirect or HTTP-POST. You can provide up to two certificates. |
       * The entityId cannot be changed after it is saved. If the XML contains both binding methods, HTTP-POST and its corresponding URL take precedence.
       * After saving the configuration, set loginEnabled=true to enable logon. You can also enable it when submitting a valid SAML configuration. Setting it to false disables logon and retains the existing configuration.
       * ### Confirm that the configuration takes effect
       * After the request is accepted, UPDATING is usually returned. Call [GetIdentityProvider](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProvider) to query the progress. READY indicates that the configuration processing is complete. If it fails, check the returned status and configuration.
       * If the request times out, query the current configuration and processing status first, and then decide whether to retry. Query the SCIM processing result by calling [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM).
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary Enables or disables SCIM user synchronization independently. When enabled, an initial full import is executed asynchronously, and the result can be queried by calling GetIdentityProviderSCIM. The SAML logon configuration is retained.
       *
       * @description Enables or disables SCIM user synchronization for AgentCore. When enabled, all existing users in the shared user pool are fully imported into the workspace. Users in the user pool are provisioned by the enterprise identity system through SCIM.
       * ### Preparations
       * **Step 1:** Call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to enable the receiving endpoint and obtain the receiving URL and a valid token.
       * **Step 2:** Complete the SCIM configuration, connection test, and user assignment in the enterprise identity system.
       * **Step 3:** Call this operation and set syncEnabled to true.
       * ```http
       * PUT /workspaces/{workspaceId}/scim-provisioning
       * {"syncEnabled":true}
       * ```
       * When the enabling task is executed, the system checks whether the receiving endpoint is enabled and whether valid credentials exist. If no users are provisioned in the enterprise identity system, the initial import may succeed but contain no user records.
       * ### Impact of disabling
       * Setting syncEnabled to false disables user synchronization and the upstream SCIM receiving endpoint, but retains the imported users, existing credentials, and SAML logon configuration.
       * To re-enable the feature later, call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to prepare the receiving endpoint first, and then enable synchronization.
       * ### Verify the operation result
       * After this operation accepts the request, it executes the enabling or disabling task in the background. Call [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM) to query the progress:
       * - syncEnabled indicates whether synchronization is expected to be enabled or disabled.
       * - operationStatus indicates the execution result of the most recent operation.
       * - The status field in the query operation comprehensively indicates the current stage of SCIM, such as pending configuration, processing, available, or disabled.
       * If the operation fails, the saved syncEnabled value is not automatically rolled back. Verify the configuration based on the operation result before deciding on subsequent actions.
       *
       * @param tmpReq UpdateIdentityProviderSCIMRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderSCIMResponse
       */
      Models::UpdateIdentityProviderSCIMResponse updateIdentityProviderSCIMWithOptions(const string &workspaceId, const Models::UpdateIdentityProviderSCIMRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables SCIM user synchronization independently. When enabled, an initial full import is executed asynchronously, and the result can be queried by calling GetIdentityProviderSCIM. The SAML logon configuration is retained.
       *
       * @description Enables or disables SCIM user synchronization for AgentCore. When enabled, all existing users in the shared user pool are fully imported into the workspace. Users in the user pool are provisioned by the enterprise identity system through SCIM.
       * ### Preparations
       * **Step 1:** Call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to enable the receiving endpoint and obtain the receiving URL and a valid token.
       * **Step 2:** Complete the SCIM configuration, connection test, and user assignment in the enterprise identity system.
       * **Step 3:** Call this operation and set syncEnabled to true.
       * ```http
       * PUT /workspaces/{workspaceId}/scim-provisioning
       * {"syncEnabled":true}
       * ```
       * When the enabling task is executed, the system checks whether the receiving endpoint is enabled and whether valid credentials exist. If no users are provisioned in the enterprise identity system, the initial import may succeed but contain no user records.
       * ### Impact of disabling
       * Setting syncEnabled to false disables user synchronization and the upstream SCIM receiving endpoint, but retains the imported users, existing credentials, and SAML logon configuration.
       * To re-enable the feature later, call [PrepareIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/PrepareIdentityProviderSCIM) to prepare the receiving endpoint first, and then enable synchronization.
       * ### Verify the operation result
       * After this operation accepts the request, it executes the enabling or disabling task in the background. Call [GetIdentityProviderSCIM](https://api.aliyun.com/document/AgentCore/2026-08-04/GetIdentityProviderSCIM) to query the progress:
       * - syncEnabled indicates whether synchronization is expected to be enabled or disabled.
       * - operationStatus indicates the execution result of the most recent operation.
       * - The status field in the query operation comprehensively indicates the current stage of SCIM, such as pending configuration, processing, available, or disabled.
       * If the operation fails, the saved syncEnabled value is not automatically rolled back. Verify the configuration based on the operation result before deciding on subsequent actions.
       *
       * @param request UpdateIdentityProviderSCIMRequest
       * @return UpdateIdentityProviderSCIMResponse
       */
      Models::UpdateIdentityProviderSCIMResponse updateIdentityProviderSCIM(const string &workspaceId, const Models::UpdateIdentityProviderSCIMRequest &request);

      /**
       * @summary Updates the model, instructions, skills, and runtime configuration of a managed Harness agent and executes the update asynchronously. Omitted top-level fields retain their original configurations.
       *
       * @description Updates the model, instructions, skills, or runtime configuration of a managed Harness agent to adjust the capabilities and runtime behavior of an existing agent.
       * ### Update rules
       * Provide at least one updatable field. Omitted top-level fields retain their original configurations. You can set `description=null` to clear the description.
       * | Configuration | Update method |
       * | --- | --- |
       * | `harness` | The type cannot be changed. When updating the qodercli account binding, keep the original `type` and submit the corresponding `configuration`. |
       * | `model` | Provide a model configuration that matches the current Harness. For qwenpaw, specify the model connection ID and model name. For qodercli, use the available model identifier of the connector. |
       * | `runtime` | Specify both `compute` and `sessionPolicy` when submitting. Omitting the entire object retains the original runtime configuration. |
       * | `tools`, `skills`, `promptVariables`, `subAgents` | The corresponding lists are entirely replaced upon submission. You must include the items to be retained. Pass `[]` to clear the corresponding explicit lists. |
       * | `environment` | The variable list and credential reference list are entirely replaced respectively. Submit the items to be retained together. |
       * | `network` | Specify both `accessInternet.enabled` and `accessVpc.enabled` when submitting. |
       * | `ossMounts`, `agenticFsMounts` | Entirely replaced respectively. Pass `[]` to clear the corresponding lists. `agenticFsMounts` does not accept `null`. |
       * ### Harnesses, templates, and skills
       * | Harness | Model and connector configuration |
       * | --- | --- |
       * | `qwenpaw` | This type is used by default if `harness` is omitted during creation. Set `model.modelConnectionId` to the workspace model connection ID, and set `model.modelName` to the name of the model created under this connection. |
       * | `qodercli` | The qodercli connector must be enabled in the workspace. Set `model.modelConnectionId` to the model identifier returned by [ListConnectorModels](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectorModels). `model.modelName` can be omitted. |
       * `harness` is an object, such as `{"type":"qwenpaw"}`. For qodercli, set `harness.configuration.connectorServiceAccountKey` to the account key record ID returned by [ListConnectors](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectors), not the original service account key. This field can be omitted if there is only one key record, but must be specified if there are multiple records. `connectorServiceAccountName` is the account name. Do not specify these two binding fields for qwenpaw.
       * `skills` uses the skill names in the workspace AI Registry. If `sourceType=REFERENCE`, versions are referenced by `versionSelector`: use `LABEL` with a tag name, or `VERSION` with a specific version number. If the selector is omitted, `LABEL/latest` is used. If `sourceType=STATIC`, static files bundled with the package are used, and no version selector is provided.
       * For `template.aiRegistry`, specify the agent template name and an optional version. If the version is omitted during creation, the published version is resolved and fixed. When a template is used, `instruction`, `promptVariables`, and `subAgents` are derived from the template, and the corresponding fields in the current request do not take effect. Explicit skills and template skills are recorded separately. You can query the target and effective versions through `configuredSkills` and `skills`.
       * ### Elasticity and instances
       * If `runtime` is committed but `hpa` or some of its fields are omitted, the following default values are used for unspecified items. To retain the existing elastic policy, commit the complete `hpa`.
       * | Field | Default value | Value and description |
       * | --- | --- | --- |
       * | `enabled` | `false` | Specifies whether elastic scaling is enabled. |
       * | `minSandboxCount` | `1` | The minimum number of instances. Valid values: 0 to 100. |
       * | `maxSandboxCount` | `10` | The maximum number of instances. Valid values: 0 to 100. The value cannot be less than the minimum number. |
       * | `maxConcurrentSessionsPerSandbox` | `20` | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | `sessionTtlSeconds` | `600` | The maximum idle time of a session, in seconds. Valid values: 60 to 86400. |
       * If you only modify instructions, models, or skills, you can omit the entire `runtime` to keep the original runtime configuration unchanged. The minimum and maximum numbers of instances are the configuration border. You can query the actual number through `sandboxPhaseCounts`.
       * ### Environment and mounts
       * Omitting the entire `environment` retains the original configuration. Submitting `environment={}` or `environment=null` clears the environment configuration. Environment variable values must be strings, and variable names must be non-empty and unique.
       * The total number of `ossMounts` and `agenticFsMounts` cannot exceed 10. The mount target `mountPath` uses an absolute path in the container, such as `/data/train`. It cannot conflict with platform reserved directories, and cannot be duplicated or form parent-child directory overwrites.
       * The `path` for OSS mounts must be a non-empty directory prefix in the bucket. For AgenticFS mounts, `server` is the AccessPoint domain name, without a protocol, port, or path. `path` is an existing non-empty relative directory in the AccessPoint. You cannot mount the root directory of the AccessPoint. If `readOnly` is omitted, the default value is `false`.
       * ### Query update results
       * A successful response indicates that the update request has been accepted. Call [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent) to query `latestSpecVersion`, `latestVersionStatus`, `status`, and `sandboxPhaseCounts` to confirm the configuration processing and instance status. `clientToken` does not provide idempotence guarantees at this time.
       *
       * @param tmpReq UpdateManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateManagedAgentResponse
       */
      Models::UpdateManagedAgentResponse updateManagedAgentWithOptions(const string &workspaceId, const string &agentId, const Models::UpdateManagedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the model, instructions, skills, and runtime configuration of a managed Harness agent and executes the update asynchronously. Omitted top-level fields retain their original configurations.
       *
       * @description Updates the model, instructions, skills, or runtime configuration of a managed Harness agent to adjust the capabilities and runtime behavior of an existing agent.
       * ### Update rules
       * Provide at least one updatable field. Omitted top-level fields retain their original configurations. You can set `description=null` to clear the description.
       * | Configuration | Update method |
       * | --- | --- |
       * | `harness` | The type cannot be changed. When updating the qodercli account binding, keep the original `type` and submit the corresponding `configuration`. |
       * | `model` | Provide a model configuration that matches the current Harness. For qwenpaw, specify the model connection ID and model name. For qodercli, use the available model identifier of the connector. |
       * | `runtime` | Specify both `compute` and `sessionPolicy` when submitting. Omitting the entire object retains the original runtime configuration. |
       * | `tools`, `skills`, `promptVariables`, `subAgents` | The corresponding lists are entirely replaced upon submission. You must include the items to be retained. Pass `[]` to clear the corresponding explicit lists. |
       * | `environment` | The variable list and credential reference list are entirely replaced respectively. Submit the items to be retained together. |
       * | `network` | Specify both `accessInternet.enabled` and `accessVpc.enabled` when submitting. |
       * | `ossMounts`, `agenticFsMounts` | Entirely replaced respectively. Pass `[]` to clear the corresponding lists. `agenticFsMounts` does not accept `null`. |
       * ### Harnesses, templates, and skills
       * | Harness | Model and connector configuration |
       * | --- | --- |
       * | `qwenpaw` | This type is used by default if `harness` is omitted during creation. Set `model.modelConnectionId` to the workspace model connection ID, and set `model.modelName` to the name of the model created under this connection. |
       * | `qodercli` | The qodercli connector must be enabled in the workspace. Set `model.modelConnectionId` to the model identifier returned by [ListConnectorModels](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectorModels). `model.modelName` can be omitted. |
       * `harness` is an object, such as `{"type":"qwenpaw"}`. For qodercli, set `harness.configuration.connectorServiceAccountKey` to the account key record ID returned by [ListConnectors](https://api.aliyun.com/document/AgentCore/2026-08-04/ListConnectors), not the original service account key. This field can be omitted if there is only one key record, but must be specified if there are multiple records. `connectorServiceAccountName` is the account name. Do not specify these two binding fields for qwenpaw.
       * `skills` uses the skill names in the workspace AI Registry. If `sourceType=REFERENCE`, versions are referenced by `versionSelector`: use `LABEL` with a tag name, or `VERSION` with a specific version number. If the selector is omitted, `LABEL/latest` is used. If `sourceType=STATIC`, static files bundled with the package are used, and no version selector is provided.
       * For `template.aiRegistry`, specify the agent template name and an optional version. If the version is omitted during creation, the published version is resolved and fixed. When a template is used, `instruction`, `promptVariables`, and `subAgents` are derived from the template, and the corresponding fields in the current request do not take effect. Explicit skills and template skills are recorded separately. You can query the target and effective versions through `configuredSkills` and `skills`.
       * ### Elasticity and instances
       * If `runtime` is committed but `hpa` or some of its fields are omitted, the following default values are used for unspecified items. To retain the existing elastic policy, commit the complete `hpa`.
       * | Field | Default value | Value and description |
       * | --- | --- | --- |
       * | `enabled` | `false` | Specifies whether elastic scaling is enabled. |
       * | `minSandboxCount` | `1` | The minimum number of instances. Valid values: 0 to 100. |
       * | `maxSandboxCount` | `10` | The maximum number of instances. Valid values: 0 to 100. The value cannot be less than the minimum number. |
       * | `maxConcurrentSessionsPerSandbox` | `20` | The maximum number of concurrent sessions per instance. Valid values: 1 to 20. |
       * | `sessionTtlSeconds` | `600` | The maximum idle time of a session, in seconds. Valid values: 60 to 86400. |
       * If you only modify instructions, models, or skills, you can omit the entire `runtime` to keep the original runtime configuration unchanged. The minimum and maximum numbers of instances are the configuration border. You can query the actual number through `sandboxPhaseCounts`.
       * ### Environment and mounts
       * Omitting the entire `environment` retains the original configuration. Submitting `environment={}` or `environment=null` clears the environment configuration. Environment variable values must be strings, and variable names must be non-empty and unique.
       * The total number of `ossMounts` and `agenticFsMounts` cannot exceed 10. The mount target `mountPath` uses an absolute path in the container, such as `/data/train`. It cannot conflict with platform reserved directories, and cannot be duplicated or form parent-child directory overwrites.
       * The `path` for OSS mounts must be a non-empty directory prefix in the bucket. For AgenticFS mounts, `server` is the AccessPoint domain name, without a protocol, port, or path. `path` is an existing non-empty relative directory in the AccessPoint. You cannot mount the root directory of the AccessPoint. If `readOnly` is omitted, the default value is `false`.
       * ### Query update results
       * A successful response indicates that the update request has been accepted. Call [GetManagedAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/GetManagedAgent) to query `latestSpecVersion`, `latestVersionStatus`, `status`, and `sandboxPhaseCounts` to confirm the configuration processing and instance status. `clientToken` does not provide idempotence guarantees at this time.
       *
       * @param request UpdateManagedAgentRequest
       * @return UpdateManagedAgentResponse
       */
      Models::UpdateManagedAgentResponse updateManagedAgent(const string &workspaceId, const string &agentId, const Models::UpdateManagedAgentRequest &request);

      /**
       * @summary Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update process is asynchronous.
       *
       * @description Updates the address, description, authentication, or Swagger configuration of an MCP service. The service type and protocol cannot be modified after creation.
       * The update process is executed asynchronously. After submission, call [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp) to query the processing result. The `clientToken` parameter does not currently provide idempotency guarantees. If the request result is not confirmed, query the current configuration and status first.
       *
       * @param tmpReq UpdateMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcpWithOptions(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update process is asynchronous.
       *
       * @description Updates the address, description, authentication, or Swagger configuration of an MCP service. The service type and protocol cannot be modified after creation.
       * The update process is executed asynchronously. After submission, call [GetMcp](https://api.aliyun.com/document/AgentCore/2026-08-04/GetMcp) to query the processing result. The `clientToken` parameter does not currently provide idempotency guarantees. If the request result is not confirmed, query the current configuration and status first.
       *
       * @param request UpdateMcpRequest
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcp(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpRequest &request);

      /**
       * @summary Updates MCP parameters based on a template.
       *
       * @description Updates parameters based on the marketplace template bound to the MCP service to adjust the configuration of the templated service.
       * Updates the parameters exposed by the schema using the same template version bound during MCP creation, without upgrading the template version.
       *
       * @param tmpReq UpdateMcpTemplateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpTemplateConfigResponse
       */
      Models::UpdateMcpTemplateConfigResponse updateMcpTemplateConfigWithOptions(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpTemplateConfigRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates MCP parameters based on a template.
       *
       * @description Updates parameters based on the marketplace template bound to the MCP service to adjust the configuration of the templated service.
       * Updates the parameters exposed by the schema using the same template version bound during MCP creation, without upgrading the template version.
       *
       * @param request UpdateMcpTemplateConfigRequest
       * @return UpdateMcpTemplateConfigResponse
       */
      Models::UpdateMcpTemplateConfigResponse updateMcpTemplateConfig(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpTemplateConfigRequest &request);

      /**
       * @summary Updates the long-term memory text or metadata based on the memory ID.
       *
       * @description Updates the long-term memory text or metadata based on the memory ID.
       *
       * @param tmpReq UpdateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::UpdateMemoryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the long-term memory text or metadata based on the memory ID.
       *
       * @description Updates the long-term memory text or metadata based on the memory ID.
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::UpdateMemoryRequest &request);

      /**
       * @summary Updates a memory store.
       *
       * @description Updates the mutable configurations of a long-term memory store to adjust the settings of an existing memory store.
       *
       * @param tmpReq UpdateMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryStoreResponse
       */
      Models::UpdateMemoryStoreResponse updateMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::UpdateMemoryStoreRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a memory store.
       *
       * @description Updates the mutable configurations of a long-term memory store to adjust the settings of an existing memory store.
       *
       * @param request UpdateMemoryStoreRequest
       * @return UpdateMemoryStoreResponse
       */
      Models::UpdateMemoryStoreResponse updateMemoryStore(const string &workspaceId, const string &memoryStoreName, const Models::UpdateMemoryStoreRequest &request);

      /**
       * @summary Updates the description, context token limit, maximum output token count, or capability configuration of a specified model.
       *
       * @description Updates the description, context length, maximum output length, or capability configuration of a model.
       * ### Update rules
       * - Provide at least one non-null field among description, contextSize, maxTokens, and capabilities.
       * - Omitted fields or fields passed as null retain their original values.
       * - The capabilities object is replaced as a whole. Unsubmitted capabilities within the object are treated as false.
       * ### Impact on agents
       * After contextSize, maxTokens, or capabilities actually change, the platform asynchronously refreshes the managed Harness agents that reference this model, as well as the managed agents that use platform models (modelSource=PLATFORM). Modifying only the description or repeatedly submitting the same configuration does not trigger a refresh.
       * A successful response indicates that the model configuration has been saved. Verify the configuration by calling [GetModel](https://api.aliyun.com/document/AgentCore/2026-08-04/GetModel), and then check whether the configuration takes effect by calling the corresponding agent details API operation.
       *
       * @param tmpReq UpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description, context token limit, maximum output token count, or capability configuration of a specified model.
       *
       * @description Updates the description, context length, maximum output length, or capability configuration of a model.
       * ### Update rules
       * - Provide at least one non-null field among description, contextSize, maxTokens, and capabilities.
       * - Omitted fields or fields passed as null retain their original values.
       * - The capabilities object is replaced as a whole. Unsubmitted capabilities within the object are treated as false.
       * ### Impact on agents
       * After contextSize, maxTokens, or capabilities actually change, the platform asynchronously refreshes the managed Harness agents that reference this model, as well as the managed agents that use platform models (modelSource=PLATFORM). Modifying only the description or repeatedly submitting the same configuration does not trigger a refresh.
       * A successful response indicates that the model configuration has been saved. Verify the configuration by calling [GetModel](https://api.aliyun.com/document/AgentCore/2026-08-04/GetModel), and then check whether the configuration takes effect by calling the corresponding agent details API operation.
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &request);

      /**
       * @summary Updates the mutable configurations of a specified model connection and resubmits the publishing task. The invocation protocol cannot be modified after creation.
       *
       * @description Updates the mutable configurations of a specified model connection and resubmits the publishing task. The invocation protocol cannot be modified after creation.
       *
       * @param tmpReq UpdateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the mutable configurations of a specified model connection and resubmits the publishing task. The invocation protocol cannot be modified after creation.
       *
       * @description Updates the mutable configurations of a specified model connection and resubmits the publishing task. The invocation protocol cannot be modified after creation.
       *
       * @param request UpdateModelConnectionRequest
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnection(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &request);

      /**
       * @summary Updates the business tags of a specified skill. Other attributes that are not specified remain unchanged.
       *
       * @description Updates the business tags of a specified skill. Other attributes that are not specified remain unchanged.
       *
       * @param tmpReq UpdateSkillBizTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTagsWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillBizTagsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business tags of a specified skill. Other attributes that are not specified remain unchanged.
       *
       * @description Updates the business tags of a specified skill. Other attributes that are not specified remain unchanged.
       *
       * @param request UpdateSkillBizTagsRequest
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTags(const string &workspaceId, const string &skillName, const Models::UpdateSkillBizTagsRequest &request);

      /**
       * @summary Updates the version labels and their mappings for a specified skill.
       *
       * @description Updates the version labels and their mappings for a specified skill.
       *
       * @param tmpReq UpdateSkillLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabelsWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillLabelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version labels and their mappings for a specified skill.
       *
       * @description Updates the version labels and their mappings for a specified skill.
       *
       * @param request UpdateSkillLabelsRequest
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabels(const string &workspaceId, const string &skillName, const Models::UpdateSkillLabelsRequest &request);

      /**
       * @summary Updates the visibility scope of a specified skill.
       *
       * @description Updates the visibility scope of a specified skill.
       *
       * @param tmpReq UpdateSkillScopeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScopeWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillScopeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the visibility scope of a specified skill.
       *
       * @description Updates the visibility scope of a specified skill.
       *
       * @param request UpdateSkillScopeRequest
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScope(const string &workspaceId, const string &skillName, const Models::UpdateSkillScopeRequest &request);

      /**
       * @summary Updates the description and members of a specified team. When users or agents are provided, the corresponding member lists are replaced based on full overwrite semantics. Member lists that are not provided remain unchanged. The team name cannot be modified after creation.
       *
       * @description Updates the description and members of a specified team.
       *
       * @param tmpReq UpdateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const string &workspaceId, const string &teamId, const Models::UpdateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description and members of a specified team. When users or agents are provided, the corresponding member lists are replaced based on full overwrite semantics. Member lists that are not provided remain unchanged. The team name cannot be modified after creation.
       *
       * @description Updates the description and members of a specified team.
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const string &workspaceId, const string &teamId, const Models::UpdateTeamRequest &request);

      /**
       * @summary Updates the display name, email address, or note of a specified user. At least one of displayName, email, and note must be specified. Unspecified properties remain unchanged. The username cannot be modified after creation.
       *
       * @description Updates the display name, email address, or note of a specified user.
       *
       * @param tmpReq UpdateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the display name, email address, or note of a specified user. At least one of displayName, email, and note must be specified. Unspecified properties remain unchanged. The username cannot be modified after creation.
       *
       * @description Updates the display name, email address, or note of a specified user.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const string &workspaceId, const string &agentCoreUserId, const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized state can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this operation.
       *
       * @description Modifies the name or network configuration of a workspace to adjust workspace information and the private network access environment for agents.
       * The workspace must be in the `Initialized` state. To enable VPC networking, set `Enabled` in the network configuration to `true`, and provide both `VpcId` and at least one `VSwitchIds`.
       *
       * @param tmpReq UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &workspaceId, const Models::UpdateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized state can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this operation.
       *
       * @description Modifies the name or network configuration of a workspace to adjust workspace information and the private network access environment for agents.
       * The workspace must be in the `Initialized` state. To enable VPC networking, set `Enabled` in the network configuration to `true`, and provide both `VpcId` and at least one `VSwitchIds`.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &workspaceId, const Models::UpdateWorkspaceRequest &request);

      /**
       * @summary Retrieves an uploaded AgentSpec ZIP package from OSS, parses the package, and imports the AgentSpec into the current workspace.
       *
       * @description Retrieves an uploaded agent template ZIP package from OSS, parses the package, and imports the agent template into the current workspace.
       *
       * @param tmpReq UploadAgentSpecViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAgentSpecViaOssResponse
       */
      Models::UploadAgentSpecViaOssResponse uploadAgentSpecViaOssWithOptions(const string &workspaceId, const Models::UploadAgentSpecViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an uploaded AgentSpec ZIP package from OSS, parses the package, and imports the AgentSpec into the current workspace.
       *
       * @description Retrieves an uploaded agent template ZIP package from OSS, parses the package, and imports the agent template into the current workspace.
       *
       * @param request UploadAgentSpecViaOssRequest
       * @return UploadAgentSpecViaOssResponse
       */
      Models::UploadAgentSpecViaOssResponse uploadAgentSpecViaOss(const string &workspaceId, const Models::UploadAgentSpecViaOssRequest &request);

      /**
       * @summary Imports a skill into the current workspace by retrieving and parsing an uploaded skill ZIP package from OSS.
       *
       * @description Imports a skill into the current workspace by retrieving and parsing an uploaded skill ZIP package from OSS.
       *
       * @param tmpReq UploadSkillViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOssWithOptions(const string &workspaceId, const Models::UploadSkillViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a skill into the current workspace by retrieving and parsing an uploaded skill ZIP package from OSS.
       *
       * @description Imports a skill into the current workspace by retrieving and parsing an uploaded skill ZIP package from OSS.
       *
       * @param request UploadSkillViaOssRequest
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOss(const string &workspaceId, const Models::UploadSkillViaOssRequest &request);

      /**
       * @summary Validates the read conditions of the workspace role for a specified OSS code package object and returns the source URI and package information.
       *
       * @description Checks the read conditions and package information of a specified OSS object before submitting the code package for deployment, and obtains the source URI for subsequent deployment.
       * ### Request and validation scope
       * In the JSON request body, specify `ossBucketName` and the complete `ossObjectName`. Do not specify the HTTPS download URL. The object extension must be ZIP or TAR.GZ, and the compressed size must be between 1 and 500,000,000 bytes.
       * This operation uses the workspace role to check the object metadata and read permissions, and returns the `sourceUri`, file name, size, and format.
       * ### Subsequent deployment
       * Passing the validation indicates that the object check is successful, but does not mean that the archive content is complete or ready to start. Submit the returned `sourceUri` to [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent). The system will recheck and save a fixed copy upon submission.
       * This operation is an optional precheck and is not a required step for creation or update.
       *
       * @param tmpReq ValidateAgentCodePackageFromOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateAgentCodePackageFromOssResponse
       */
      Models::ValidateAgentCodePackageFromOssResponse validateAgentCodePackageFromOssWithOptions(const string &workspaceId, const Models::ValidateAgentCodePackageFromOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the read conditions of the workspace role for a specified OSS code package object and returns the source URI and package information.
       *
       * @description Checks the read conditions and package information of a specified OSS object before submitting the code package for deployment, and obtains the source URI for subsequent deployment.
       * ### Request and validation scope
       * In the JSON request body, specify `ossBucketName` and the complete `ossObjectName`. Do not specify the HTTPS download URL. The object extension must be ZIP or TAR.GZ, and the compressed size must be between 1 and 500,000,000 bytes.
       * This operation uses the workspace role to check the object metadata and read permissions, and returns the `sourceUri`, file name, size, and format.
       * ### Subsequent deployment
       * Passing the validation indicates that the object check is successful, but does not mean that the archive content is complete or ready to start. Submit the returned `sourceUri` to [CreateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/CreateCustomAgent) or [UpdateCustomAgent](https://api.aliyun.com/document/AgentCore/2026-08-04/UpdateCustomAgent). The system will recheck and save a fixed copy upon submission.
       * This operation is an optional precheck and is not a required step for creation or update.
       *
       * @param request ValidateAgentCodePackageFromOssRequest
       * @return ValidateAgentCodePackageFromOssResponse
       */
      Models::ValidateAgentCodePackageFromOssResponse validateAgentCodePackageFromOss(const string &workspaceId, const Models::ValidateAgentCodePackageFromOssRequest &request);

      /**
       * @summary Queries the binding status of the authorization policy for the code package source bucket to the current workspace resource role.
       *
       * @description Queries whether the read authorization for the code package source bucket is bound to the workspace resource role to determine whether supplementary authorization is required.
       * ### Query results
       * `ossBucketName` is passed as a query parameter. `authorizationStatus=AUTHORIZED` indicates that the policy is bound, and `UNAUTHORIZED` indicates that it is not bound.
       * A bound policy does not mean that a specific code package object definitely exists or is readable. To check the object, call [ValidateAgentCodePackageFromOss](https://api.aliyun.com/document/AgentCore/2026-08-04/ValidateAgentCodePackageFromOss). To obtain the authorization link, call [GetAgentCodePackageOssRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageOssRamAuthorizeUrl).
       *
       * @param request VerifyAgentCodePackageOssRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyAgentCodePackageOssRamAuthorizationResponse
       */
      Models::VerifyAgentCodePackageOssRamAuthorizationResponse verifyAgentCodePackageOssRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyAgentCodePackageOssRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding status of the authorization policy for the code package source bucket to the current workspace resource role.
       *
       * @description Queries whether the read authorization for the code package source bucket is bound to the workspace resource role to determine whether supplementary authorization is required.
       * ### Query results
       * `ossBucketName` is passed as a query parameter. `authorizationStatus=AUTHORIZED` indicates that the policy is bound, and `UNAUTHORIZED` indicates that it is not bound.
       * A bound policy does not mean that a specific code package object definitely exists or is readable. To check the object, call [ValidateAgentCodePackageFromOss](https://api.aliyun.com/document/AgentCore/2026-08-04/ValidateAgentCodePackageFromOss). To obtain the authorization link, call [GetAgentCodePackageOssRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetAgentCodePackageOssRamAuthorizeUrl).
       *
       * @param request VerifyAgentCodePackageOssRamAuthorizationRequest
       * @return VerifyAgentCodePackageOssRamAuthorizationResponse
       */
      Models::VerifyAgentCodePackageOssRamAuthorizationResponse verifyAgentCodePackageOssRamAuthorization(const string &workspaceId, const Models::VerifyAgentCodePackageOssRamAuthorizationRequest &request);

      /**
       * @summary Verifies whether one or more Qoder service account keys are available at a specified site. This operation does not save the keys or modify the connector status.
       *
       * @description Verifies Qoder service account keys for a specified site to check whether the credentials are available before enabling or updating a connector. You can submit multiple keys at the same time. The response returns a list of invalid service account keys.
       *
       * @param tmpReq VerifyConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyConnectorResponse
       */
      Models::VerifyConnectorResponse verifyConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::VerifyConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether one or more Qoder service account keys are available at a specified site. This operation does not save the keys or modify the connector status.
       *
       * @description Verifies Qoder service account keys for a specified site to check whether the credentials are available before enabling or updating a connector. You can submit multiple keys at the same time. The response returns a list of invalid service account keys.
       *
       * @param request VerifyConnectorRequest
       * @return VerifyConnectorResponse
       */
      Models::VerifyConnectorResponse verifyConnector(const string &workspaceId, const string &connectorName, const Models::VerifyConnectorRequest &request);

      /**
       * @summary Queries the authorization status of a workspace resource role for a specified ACR Enterprise Edition repository.
       *
       * @description Queries the authorization status of a workspace resource role for a specified ACR Enterprise Edition image repository to determine whether to proceed with image preparation or grant additional authorizations.
       * ### Request parameters
       * `acrInstanceId`, `namespace`, and `repository` use query parameters and must be consistent with the targets used when obtaining the authorization URL.
       * ### Authorization and deployment
       * `authorizationStatus=AUTHORIZED` indicates that the target authorization for the selected role is satisfied, and `UNAUTHORIZED` indicates that it is not yet satisfied. If authorization is required, call [GetWorkspaceAcrRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAcrRamAuthorizeUrl) and confirm on the RAM page.
       * The authorization status is checked separately from whether the specific image tag exists and whether the pull network is reachable.
       *
       * @param request VerifyWorkspaceAcrRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWorkspaceAcrRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAcrRamAuthorizationResponse verifyWorkspaceAcrRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyWorkspaceAcrRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization status of a workspace resource role for a specified ACR Enterprise Edition repository.
       *
       * @description Queries the authorization status of a workspace resource role for a specified ACR Enterprise Edition image repository to determine whether to proceed with image preparation or grant additional authorizations.
       * ### Request parameters
       * `acrInstanceId`, `namespace`, and `repository` use query parameters and must be consistent with the targets used when obtaining the authorization URL.
       * ### Authorization and deployment
       * `authorizationStatus=AUTHORIZED` indicates that the target authorization for the selected role is satisfied, and `UNAUTHORIZED` indicates that it is not yet satisfied. If authorization is required, call [GetWorkspaceAcrRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAcrRamAuthorizeUrl) and confirm on the RAM page.
       * The authorization status is checked separately from whether the specific image tag exists and whether the pull network is reachable.
       *
       * @param request VerifyWorkspaceAcrRamAuthorizationRequest
       * @return VerifyWorkspaceAcrRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAcrRamAuthorizationResponse verifyWorkspaceAcrRamAuthorization(const string &workspaceId, const Models::VerifyWorkspaceAcrRamAuthorizationRequest &request);

      /**
       * @summary Queries whether the workspace resource role has been granted access to the specified NAS (AgenticFS) access point for subsequent Agent mount configurations.
       *
       * @description Checks whether the workspace has been granted access to the specified AgenticFS access point for subsequent Agent file mount configurations.
       * [AgenticFS](https://www.alibabacloud.com/help/en/nas/product-overview/agenticfs-overview) is a storage type of File Storage NAS designed for AI agents. Access points provide mount entries for file spaces.
       * ### Query and what to do next
       * For the `server` query parameter, specify the access point domain name without the protocol, port, or path. Keep it consistent with the value used when obtaining the authorization link.
       * | `authorizationStatus` | What to do next |
       * | --- | --- |
       * | `AUTHORIZED` | Authorization is complete. You can continue to configure `agenticFsMounts` for the agent. |
       * | `UNAUTHORIZED` | Obtain the link through [GetWorkspaceAgenticFsMountRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAgenticFsMountRamAuthorizeUrl), complete the authorization, and then query again. |
       * After authorization is complete, you must still commit the mount configuration in the agent and check the configuration processing result through the agent details. The mount folder must already exist, the access point must be located in the VPC associated with the workspace, and VPC access must be enabled for the agent.
       *
       * @param request VerifyWorkspaceAgenticFsMountRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWorkspaceAgenticFsMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAgenticFsMountRamAuthorizationResponse verifyWorkspaceAgenticFsMountRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the workspace resource role has been granted access to the specified NAS (AgenticFS) access point for subsequent Agent mount configurations.
       *
       * @description Checks whether the workspace has been granted access to the specified AgenticFS access point for subsequent Agent file mount configurations.
       * [AgenticFS](https://www.alibabacloud.com/help/en/nas/product-overview/agenticfs-overview) is a storage type of File Storage NAS designed for AI agents. Access points provide mount entries for file spaces.
       * ### Query and what to do next
       * For the `server` query parameter, specify the access point domain name without the protocol, port, or path. Keep it consistent with the value used when obtaining the authorization link.
       * | `authorizationStatus` | What to do next |
       * | --- | --- |
       * | `AUTHORIZED` | Authorization is complete. You can continue to configure `agenticFsMounts` for the agent. |
       * | `UNAUTHORIZED` | Obtain the link through [GetWorkspaceAgenticFsMountRamAuthorizeUrl](https://api.aliyun.com/document/AgentCore/2026-08-04/GetWorkspaceAgenticFsMountRamAuthorizeUrl), complete the authorization, and then query again. |
       * After authorization is complete, you must still commit the mount configuration in the agent and check the configuration processing result through the agent details. The mount folder must already exist, the access point must be located in the VPC associated with the workspace, and VPC access must be enabled for the agent.
       *
       * @param request VerifyWorkspaceAgenticFsMountRamAuthorizationRequest
       * @return VerifyWorkspaceAgenticFsMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAgenticFsMountRamAuthorizationResponse verifyWorkspaceAgenticFsMountRamAuthorization(const string &workspaceId, const Models::VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &request);

      /**
       * @summary Verifies the OSS mount authorization for a workspace, or checks and updates the authorization status of the default OSS storage for the workspace.
       *
       * @description Verifies the OSS mount authorization for a workspace, or checks and updates the authorization status of the default OSS storage for the workspace.
       * ### Two query scopes
       * | Query parameter `bucketName` | Behavior |
       * | --- | --- |
       * | Bucket name provided | Checks the mount authorization of the bucket for the workspace resource role without modifying the default OSS binding. |
       * | Omitted | Checks the authorization of the default private OSS storage for the workspace and updates its authorization status. |
       * ### Return statuses
       * `AUTHORIZED` indicates that authorization is granted, `UNAUTHORIZED` indicates that authorization is not granted, and `NOT_REQUIRED` indicates that authorization is not required. The authorization status does not indicate whether a specific mount directory exists or an instance has completed the mount.
       * If the goal is to read from a code package source, use [VerifyAgentCodePackageOssRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyAgentCodePackageOssRamAuthorization). Do not mix code package verification with runtime directory mounting.
       *
       * @param request VerifyWorkspaceOssMountRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWorkspaceOssMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceOssMountRamAuthorizationResponse verifyWorkspaceOssMountRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyWorkspaceOssMountRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the OSS mount authorization for a workspace, or checks and updates the authorization status of the default OSS storage for the workspace.
       *
       * @description Verifies the OSS mount authorization for a workspace, or checks and updates the authorization status of the default OSS storage for the workspace.
       * ### Two query scopes
       * | Query parameter `bucketName` | Behavior |
       * | --- | --- |
       * | Bucket name provided | Checks the mount authorization of the bucket for the workspace resource role without modifying the default OSS binding. |
       * | Omitted | Checks the authorization of the default private OSS storage for the workspace and updates its authorization status. |
       * ### Return statuses
       * `AUTHORIZED` indicates that authorization is granted, `UNAUTHORIZED` indicates that authorization is not granted, and `NOT_REQUIRED` indicates that authorization is not required. The authorization status does not indicate whether a specific mount directory exists or an instance has completed the mount.
       * If the goal is to read from a code package source, use [VerifyAgentCodePackageOssRamAuthorization](https://api.aliyun.com/document/AgentCore/2026-08-04/VerifyAgentCodePackageOssRamAuthorization). Do not mix code package verification with runtime directory mounting.
       *
       * @param request VerifyWorkspaceOssMountRamAuthorizationRequest
       * @return VerifyWorkspaceOssMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceOssMountRamAuthorizationResponse verifyWorkspaceOssMountRamAuthorization(const string &workspaceId, const Models::VerifyWorkspaceOssMountRamAuthorizationRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
