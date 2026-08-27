// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTTEAMS20260605_HPP_
#define ALIBABACLOUD_AGENTTEAMS20260605_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentTeams20260605Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentTeams20260605.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Binds an upstream identity provider to a specified instance and triggers a synchronization task.
       *
       * @description ## Operation description
       * - This is an asynchronous operation that immediately returns binding task information after the call.
       * - Use `GetInstanceAsyncTask` to poll for the asynchronous task result. The default polling interval is 30 seconds, with a maximum of 20 attempts.
       * - The `IdpMetadata` parameter contains sensitive information. Ensure secure transmission.
       * - The default values of `LoginEnabled` and `SyncEnabled` are `true` and `false`, respectively. If not explicitly specified, the default values are used.
       *
       * @param request BindIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindIdentityProviderResponse
       */
      Models::BindIdentityProviderResponse bindIdentityProviderWithOptions(const Models::BindIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an upstream identity provider to a specified instance and triggers a synchronization task.
       *
       * @description ## Operation description
       * - This is an asynchronous operation that immediately returns binding task information after the call.
       * - Use `GetInstanceAsyncTask` to poll for the asynchronous task result. The default polling interval is 30 seconds, with a maximum of 20 attempts.
       * - The `IdpMetadata` parameter contains sensitive information. Ensure secure transmission.
       * - The default values of `LoginEnabled` and `SyncEnabled` are `true` and `false`, respectively. If not explicitly specified, the default values are used.
       *
       * @param request BindIdentityProviderRequest
       * @return BindIdentityProviderResponse
       */
      Models::BindIdentityProviderResponse bindIdentityProvider(const Models::BindIdentityProviderRequest &request);

      /**
       * @summary Activates and configures an Internet NAT gateway for a specified AgentTeams instance.
       *
       * @description ## Operation description
       * - This operation creates an Internet NAT gateway and automatically applies for an elastic IP address (EIP), bindS the EIP, and configures SNAT rules.
       * - An asynchronous task ID is returned after the call. The actual resource ID is provided in the task result.
       * - NAT gateway name format: `magic-create-for-vpc-{vpcId}`.
       * - GET and POST methods are supported.
       * - The `eipBandwidth` parameter ranges from 1 to 200 Mbit/s. Default value: 5 Mbit/s.
       * - If `InstanceId` is invalid or `eipBandwidth` is out of range, the API returns an error response.
       *
       * @param request ConfigureNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigureNatGatewayResponse
       */
      Models::ConfigureNatGatewayResponse configureNatGatewayWithOptions(const Models::ConfigureNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates and configures an Internet NAT gateway for a specified AgentTeams instance.
       *
       * @description ## Operation description
       * - This operation creates an Internet NAT gateway and automatically applies for an elastic IP address (EIP), bindS the EIP, and configures SNAT rules.
       * - An asynchronous task ID is returned after the call. The actual resource ID is provided in the task result.
       * - NAT gateway name format: `magic-create-for-vpc-{vpcId}`.
       * - GET and POST methods are supported.
       * - The `eipBandwidth` parameter ranges from 1 to 200 Mbit/s. Default value: 5 Mbit/s.
       * - If `InstanceId` is invalid or `eipBandwidth` is out of range, the API returns an error response.
       *
       * @param request ConfigureNatGatewayRequest
       * @return ConfigureNatGatewayResponse
       */
      Models::ConfigureNatGatewayResponse configureNatGateway(const Models::ConfigureNatGatewayRequest &request);

      /**
       * @summary Creates a new key-value credential under a specified AgentTeams instance.
       *
       * @description ## Operation description
       * - `ApiKey` is a sensitive field and is not returned in plaintext.
       * - `ClientToken` is used to ensure idempotence of the request. This parameter is optional but recommended.
       * - The credential name (Name) must match the regular expression `^[A-Z_][A-Z0-9_]*$`.
       * - If the specified credential name already exists in the specified instance, the error code `Credential.Name.AlreadyExists` is returned.
       *
       * @param request CreateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const Models::CreateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new key-value credential under a specified AgentTeams instance.
       *
       * @description ## Operation description
       * - `ApiKey` is a sensitive field and is not returned in plaintext.
       * - `ClientToken` is used to ensure idempotence of the request. This parameter is optional but recommended.
       * - The credential name (Name) must match the regular expression `^[A-Z_][A-Z0-9_]*$`.
       * - If the specified credential name already exists in the specified instance, the error code `Credential.Name.AlreadyExists` is returned.
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const Models::CreateCredentialRequest &request);

      /**
       * @summary Asynchronously creates a cluster instance with the specified configurations.
       *
       * @description ## Operation description
       * - This is an asynchronous operation. After a successful call, the instance status changes to CREATING.
       * - The actual resource creation is completed asynchronously in the background. Poll the creation result by calling the `GetInstance` operation.
       * - You can pass request information by using form parameters or query parameters.
       * - If optional parameters are not provided, default values are used.
       * - Use `ClientToken` to ensure the idempotence of the request.
       *
       * @param tmpReq CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously creates a cluster instance with the specified configurations.
       *
       * @description ## Operation description
       * - This is an asynchronous operation. After a successful call, the instance status changes to CREATING.
       * - The actual resource creation is completed asynchronously in the background. Poll the creation result by calling the `GetInstance` operation.
       * - You can pass request information by using form parameters or query parameters.
       * - If optional parameters are not provided, default values are used.
       * - Use `ClientToken` to ensure the idempotence of the request.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates an MCP server.
       *
       * @description ## Operation description
       * - You must specify the `InstanceId`, `Name`, and `Addresses` parameters when you create an MCP server.
       * - The `CreateType` parameter defaults to `DIRECT_PROXY`. If you select the `HTTP_TO_MCP` mode, you must also specify `SwaggerConfig`.
       * - Set `AuthEnabled` to enable or disable authentication. If authentication is enabled, you must specify `AuthConfig`.
       * - Use `ClientToken` to ensure the idempotence of the request.
       * - Custom protocol types are supported. The `streamable` protocol is used by default.
       *
       * @param tmpReq CreateMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcpWithOptions(const Models::CreateMcpRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an MCP server.
       *
       * @description ## Operation description
       * - You must specify the `InstanceId`, `Name`, and `Addresses` parameters when you create an MCP server.
       * - The `CreateType` parameter defaults to `DIRECT_PROXY`. If you select the `HTTP_TO_MCP` mode, you must also specify `SwaggerConfig`.
       * - Set `AuthEnabled` to enable or disable authentication. If authentication is enabled, you must specify `AuthConfig`.
       * - Use `ClientToken` to ensure the idempotence of the request.
       * - Custom protocol types are supported. The `streamable` protocol is used by default.
       *
       * @param request CreateMcpRequest
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcp(const Models::CreateMcpRequest &request);

      /**
       * @summary Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
       *
       * @description Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
       *
       * @param tmpReq CreateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const Models::CreateModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
       *
       * @description Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const Models::CreateModelRequest &request);

      /**
       * @summary Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
       *
       * @description Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
       *
       * @param tmpReq CreateModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelProviderResponse
       */
      Models::CreateModelProviderResponse createModelProviderWithOptions(const Models::CreateModelProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
       *
       * @description Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
       *
       * @param request CreateModelProviderRequest
       * @return CreateModelProviderResponse
       */
      Models::CreateModelProviderResponse createModelProvider(const Models::CreateModelProviderRequest &request);

      /**
       * @summary Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
       *
       * @description Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
       * - The current controller uses standard parameter binding instead of @RequestBody, so parameters are better suited for query/form-based transmission.
       * - The domain field is trimmed and converted to lowercase on the server side.
       * - The query and headers must be in JSON object string format and cannot be arrays.
       * - The create operation only saves data to the database. The AI Gateway domain name synchronization logic is triggered only during an update when the conditions ELEMENT/MATRIX + AI_GATEWAY + INTERNET are met and the domain name or certificate has changed.
       *
       * @param request CreateServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceEndpointResponse
       */
      Models::CreateServiceEndpointResponse createServiceEndpointWithOptions(const Models::CreateServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
       *
       * @description Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
       * - The current controller uses standard parameter binding instead of @RequestBody, so parameters are better suited for query/form-based transmission.
       * - The domain field is trimmed and converted to lowercase on the server side.
       * - The query and headers must be in JSON object string format and cannot be arrays.
       * - The create operation only saves data to the database. The AI Gateway domain name synchronization logic is triggered only during an update when the conditions ELEMENT/MATRIX + AI_GATEWAY + INTERNET are met and the domain name or certificate has changed.
       *
       * @param request CreateServiceEndpointRequest
       * @return CreateServiceEndpointResponse
       */
      Models::CreateServiceEndpointResponse createServiceEndpoint(const Models::CreateServiceEndpointRequest &request);

      /**
       * @summary Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
       *
       * @description Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
       *
       * @param tmpReq CreateTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const Models::CreateTeamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
       *
       * @description Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const Models::CreateTeamRequest &request);

      /**
       * @summary Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
       *
       * @description Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
       *
       * @description Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
       *
       * @description Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
       *
       * @param tmpReq CreateWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkerResponse
       */
      Models::CreateWorkerResponse createWorkerWithOptions(const Models::CreateWorkerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
       *
       * @description Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
       *
       * @param request CreateWorkerRequest
       * @return CreateWorkerResponse
       */
      Models::CreateWorkerResponse createWorker(const Models::CreateWorkerRequest &request);

      /**
       * @summary Creates a local management bootstrap token for a Worker, with support for specifying the network type.
       *
       * @description Creates a local management bootstrap token for a Worker, with support for specifying the network type.
       *
       * @param request CreateWorkerBootstrapTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkerBootstrapTokenResponse
       */
      Models::CreateWorkerBootstrapTokenResponse createWorkerBootstrapTokenWithOptions(const Models::CreateWorkerBootstrapTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a local management bootstrap token for a Worker, with support for specifying the network type.
       *
       * @description Creates a local management bootstrap token for a Worker, with support for specifying the network type.
       *
       * @param request CreateWorkerBootstrapTokenRequest
       * @return CreateWorkerBootstrapTokenResponse
       */
      Models::CreateWorkerBootstrapTokenResponse createWorkerBootstrapToken(const Models::CreateWorkerBootstrapTokenRequest &request);

      /**
       * @summary Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
       *
       * @description Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
       *
       * @param request DeleteCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const Models::DeleteCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
       *
       * @description Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
       *
       * @param request DeleteCredentialRequest
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const Models::DeleteCredentialRequest &request);

      /**
       * @summary Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
       *
       * @description Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
       *
       * @description Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
       *
       * @description Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
       *
       * @param request DeleteMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcpWithOptions(const Models::DeleteMcpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
       *
       * @description Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
       *
       * @param request DeleteMcpRequest
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcp(const Models::DeleteMcpRequest &request);

      /**
       * @summary Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
       *
       * @description Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
       *
       * @param request DeleteModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const Models::DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
       *
       * @description Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const Models::DeleteModelRequest &request);

      /**
       * @summary Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
       *
       * @description Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
       *
       * @param request DeleteModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProviderResponse
       */
      Models::DeleteModelProviderResponse deleteModelProviderWithOptions(const Models::DeleteModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
       *
       * @description Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
       *
       * @param request DeleteModelProviderRequest
       * @return DeleteModelProviderResponse
       */
      Models::DeleteModelProviderResponse deleteModelProvider(const Models::DeleteModelProviderRequest &request);

      /**
       * @summary Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
       *
       * @description Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
       * - This operation supports GET or POST methods.
       * - If the target endpoint is of the WORKER type, the system automatically cleans up associated APIG/AI Gateway cloud resources and KubeOne worker service configurations.
       * - The request parameters must include instanceId and endpointId, and neither can be empty.
       * - A successful response returns HTTP status code 200 and a success flag. An error response returns the corresponding HTTP status code (such as 400, 404, or 409) and an error message.
       *
       * @param request DeleteServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceEndpointResponse
       */
      Models::DeleteServiceEndpointResponse deleteServiceEndpointWithOptions(const Models::DeleteServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
       *
       * @description Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
       * - This operation supports GET or POST methods.
       * - If the target endpoint is of the WORKER type, the system automatically cleans up associated APIG/AI Gateway cloud resources and KubeOne worker service configurations.
       * - The request parameters must include instanceId and endpointId, and neither can be empty.
       * - A successful response returns HTTP status code 200 and a success flag. An error response returns the corresponding HTTP status code (such as 400, 404, or 409) and an error message.
       *
       * @param request DeleteServiceEndpointRequest
       * @return DeleteServiceEndpointResponse
       */
      Models::DeleteServiceEndpointResponse deleteServiceEndpoint(const Models::DeleteServiceEndpointRequest &request);

      /**
       * @summary Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
       *
       * @description Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
       *
       * @param request DeleteTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const Models::DeleteTeamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
       *
       * @description Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const Models::DeleteTeamRequest &request);

      /**
       * @summary Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
       *
       * @description Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
       *
       * @description Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a Worker under a specified instance.
       *
       * @description Deletes a Worker under a specified instance.
       *
       * @param request DeleteWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkerResponse
       */
      Models::DeleteWorkerResponse deleteWorkerWithOptions(const Models::DeleteWorkerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Worker under a specified instance.
       *
       * @description Deletes a Worker under a specified instance.
       *
       * @param request DeleteWorkerRequest
       * @return DeleteWorkerResponse
       */
      Models::DeleteWorkerResponse deleteWorker(const Models::DeleteWorkerRequest &request);

      /**
       * @summary Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
       *
       * @description Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
       *
       * @param request GetCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const Models::GetCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
       *
       * @description Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
       *
       * @param request GetCredentialRequest
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const Models::GetCredentialRequest &request);

      /**
       * @summary Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
       *
       * @description Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
       *
       * @param request GetIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const Models::GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
       *
       * @description Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const Models::GetIdentityProviderRequest &request);

      /**
       * @summary Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
       *
       * @description Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
       *
       * @description Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with pagination support.
       *
       * @description Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with paging support.
       * - This operation queries the execution status of asynchronous tasks under a specific AgentTeams instance.
       * - Currently, only instance creation tasks related to the instance lifecycle are supported.
       * - Use the taskCode parameter to specify the task type to query. The default is the instance creation task.
       * - Use maxResults and nextToken for result paging.
       * - When a task is in the PAUSED state, the response includes information about the action the user needs to take (recoveryMessage).
       * - Querying task status directly by taskId is not currently supported.
       *
       * @param request GetInstanceAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceAsyncTaskResponse
       */
      Models::GetInstanceAsyncTaskResponse getInstanceAsyncTaskWithOptions(const Models::GetInstanceAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with pagination support.
       *
       * @description Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with paging support.
       * - This operation queries the execution status of asynchronous tasks under a specific AgentTeams instance.
       * - Currently, only instance creation tasks related to the instance lifecycle are supported.
       * - Use the taskCode parameter to specify the task type to query. The default is the instance creation task.
       * - Use maxResults and nextToken for result paging.
       * - When a task is in the PAUSED state, the response includes information about the action the user needs to take (recoveryMessage).
       * - Querying task status directly by taskId is not currently supported.
       *
       * @param request GetInstanceAsyncTaskRequest
       * @return GetInstanceAsyncTaskResponse
       */
      Models::GetInstanceAsyncTaskResponse getInstanceAsyncTask(const Models::GetInstanceAsyncTaskRequest &request);

      /**
       * @summary Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
       *
       * @description Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
       * - This operation supports GET and POST methods.
       * - The X-User-Id header must be included in the request to verify instance ownership.
       * - The InstanceId parameter is required to specify the instance. The backend generates the authorization URL based on the instance information.
       * - A successful response returns the RAM console authorization URL without creating a RAM role or policy.
       *
       * @param request GetInstanceOssMountRamAuthorizeUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceOssMountRamAuthorizeUrlResponse
       */
      Models::GetInstanceOssMountRamAuthorizeUrlResponse getInstanceOssMountRamAuthorizeUrlWithOptions(const Models::GetInstanceOssMountRamAuthorizeUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
       *
       * @description Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
       * - This operation supports GET and POST methods.
       * - The X-User-Id header must be included in the request to verify instance ownership.
       * - The InstanceId parameter is required to specify the instance. The backend generates the authorization URL based on the instance information.
       * - A successful response returns the RAM console authorization URL without creating a RAM role or policy.
       *
       * @param request GetInstanceOssMountRamAuthorizeUrlRequest
       * @return GetInstanceOssMountRamAuthorizeUrlResponse
       */
      Models::GetInstanceOssMountRamAuthorizeUrlResponse getInstanceOssMountRamAuthorizeUrl(const Models::GetInstanceOssMountRamAuthorizeUrlRequest &request);

      /**
       * @summary Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
       *
       * @description Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
       *
       * @param request GetMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcpWithOptions(const Models::GetMcpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
       *
       * @description Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
       *
       * @param request GetMcpRequest
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcp(const Models::GetMcpRequest &request);

      /**
       * @summary Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
       *
       * @description Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
       *
       * @param request GetModelInvocationSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelInvocationSummaryResponse
       */
      Models::GetModelInvocationSummaryResponse getModelInvocationSummaryWithOptions(const Models::GetModelInvocationSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
       *
       * @description Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
       *
       * @param request GetModelInvocationSummaryRequest
       * @return GetModelInvocationSummaryResponse
       */
      Models::GetModelInvocationSummaryResponse getModelInvocationSummary(const Models::GetModelInvocationSummaryRequest &request);

      /**
       * @summary Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
       *
       * @description Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
       *
       * @param request GetModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelProviderResponse
       */
      Models::GetModelProviderResponse getModelProviderWithOptions(const Models::GetModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
       *
       * @description Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
       *
       * @param request GetModelProviderRequest
       * @return GetModelProviderResponse
       */
      Models::GetModelProviderResponse getModelProvider(const Models::GetModelProviderRequest &request);

      /**
       * @summary Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
       *
       * @description Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
       * - This API allows you to retrieve the NAT gateway configuration details and SNAT rule status associated with a specific instance. This operation supports GET or POST method calls and requires the instanceId as a request parameter to specify the instance to query.
       * - Ensure that the provided instanceId is valid and belongs to your account.
       * - Based on the returned status values (such as READY, NEED_CONFIGURE_NAT_GATEWAY, or NEED_CONFIGURE_SNAT_RULE), take the corresponding actions to complete the NAT gateway or SNAT rule configuration.
       * - When the status is NEED_CONFIGURE_NAT_GATEWAY, it indicates that no available NAT gateway exists in the current VPC. NEED_CONFIGURE_SNAT_RULE means that a NAT gateway exists but some subnet CIDRs are not covered by SNAT rules.
       *
       * @param request GetNatGatewayStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNatGatewayStatusResponse
       */
      Models::GetNatGatewayStatusResponse getNatGatewayStatusWithOptions(const Models::GetNatGatewayStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
       *
       * @description Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
       * - This API allows you to retrieve the NAT gateway configuration details and SNAT rule status associated with a specific instance. This operation supports GET or POST method calls and requires the instanceId as a request parameter to specify the instance to query.
       * - Ensure that the provided instanceId is valid and belongs to your account.
       * - Based on the returned status values (such as READY, NEED_CONFIGURE_NAT_GATEWAY, or NEED_CONFIGURE_SNAT_RULE), take the corresponding actions to complete the NAT gateway or SNAT rule configuration.
       * - When the status is NEED_CONFIGURE_NAT_GATEWAY, it indicates that no available NAT gateway exists in the current VPC. NEED_CONFIGURE_SNAT_RULE means that a NAT gateway exists but some subnet CIDRs are not covered by SNAT rules.
       *
       * @param request GetNatGatewayStatusRequest
       * @return GetNatGatewayStatusResponse
       */
      Models::GetNatGatewayStatusResponse getNatGatewayStatus(const Models::GetNatGatewayStatusRequest &request);

      /**
       * @summary Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
       *
       * @description Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
       * - This API operation queries the configuration and status information of a single endpoint based on the endpointId.
       * - The optional parameter instanceId is used to verify whether the endpoint belongs to a specific instance.
       * - The request supports both GET and POST methods. GET passes parameters through the query string, while POST submits parameters through form data.
       * - If endpointId is missing or empty, an InvalidParameter error is returned.
       * - If the requested endpoint does not exist, does not belong to the specified instance, or does not belong to the current user, a resource-not-found error is returned.
       *
       * @param request GetServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpointWithOptions(const Models::GetServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
       *
       * @description Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
       * - This API operation queries the configuration and status information of a single endpoint based on the endpointId.
       * - The optional parameter instanceId is used to verify whether the endpoint belongs to a specific instance.
       * - The request supports both GET and POST methods. GET passes parameters through the query string, while POST submits parameters through form data.
       * - If endpointId is missing or empty, an InvalidParameter error is returned.
       * - If the requested endpoint does not exist, does not belong to the specified instance, or does not belong to the current user, a resource-not-found error is returned.
       *
       * @param request GetServiceEndpointRequest
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpoint(const Models::GetServiceEndpointRequest &request);

      /**
       * @summary Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
       *
       * @description Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
       *
       * @param request GetTaskStatsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatsSummaryResponse
       */
      Models::GetTaskStatsSummaryResponse getTaskStatsSummaryWithOptions(const Models::GetTaskStatsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
       *
       * @description Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
       *
       * @param request GetTaskStatsSummaryRequest
       * @return GetTaskStatsSummaryResponse
       */
      Models::GetTaskStatsSummaryResponse getTaskStatsSummary(const Models::GetTaskStatsSummaryRequest &request);

      /**
       * @summary Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
       *
       * @description Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
       *
       * @param request GetTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const Models::GetTeamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
       *
       * @description Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const Models::GetTeamRequest &request);

      /**
       * @summary Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
       *
       * @description Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
       *
       * @param request GetTokenTrendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenTrendResponse
       */
      Models::GetTokenTrendResponse getTokenTrendWithOptions(const Models::GetTokenTrendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
       *
       * @description Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
       *
       * @param request GetTokenTrendRequest
       * @return GetTokenTrendResponse
       */
      Models::GetTokenTrendResponse getTokenTrend(const Models::GetTokenTrendRequest &request);

      /**
       * @summary Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
       *
       * @description Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
       *
       * @param request GetToolCallDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetToolCallDistributionResponse
       */
      Models::GetToolCallDistributionResponse getToolCallDistributionWithOptions(const Models::GetToolCallDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
       *
       * @description Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
       *
       * @param request GetToolCallDistributionRequest
       * @return GetToolCallDistributionResponse
       */
      Models::GetToolCallDistributionResponse getToolCallDistribution(const Models::GetToolCallDistributionRequest &request);

      /**
       * @summary Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
       *
       * @description Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
       *
       * @description Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
       *
       * @description Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
       *
       * @param request GetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPasswordResponse
       */
      Models::GetUserPasswordResponse getUserPasswordWithOptions(const Models::GetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
       *
       * @description Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
       *
       * @param request GetUserPasswordRequest
       * @return GetUserPasswordResponse
       */
      Models::GetUserPasswordResponse getUserPassword(const Models::GetUserPasswordRequest &request);

      /**
       * @summary Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
       *
       * @description Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
       *
       * @param request GetWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerResponse
       */
      Models::GetWorkerResponse getWorkerWithOptions(const Models::GetWorkerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
       *
       * @description Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
       *
       * @param request GetWorkerRequest
       * @return GetWorkerResponse
       */
      Models::GetWorkerResponse getWorker(const Models::GetWorkerRequest &request);

      /**
       * @summary Queries the startup options for local Worker management and returns available network types.
       *
       * @description Queries the startup options for local Worker management and returns available network types.
       *
       * @param request GetWorkerBootstrapOptionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerBootstrapOptionsResponse
       */
      Models::GetWorkerBootstrapOptionsResponse getWorkerBootstrapOptionsWithOptions(const Models::GetWorkerBootstrapOptionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the startup options for local Worker management and returns available network types.
       *
       * @description Queries the startup options for local Worker management and returns available network types.
       *
       * @param request GetWorkerBootstrapOptionsRequest
       * @return GetWorkerBootstrapOptionsResponse
       */
      Models::GetWorkerBootstrapOptionsResponse getWorkerBootstrapOptions(const Models::GetWorkerBootstrapOptionsRequest &request);

      /**
       * @summary Queries the maximum upgradable version of a worker.
       *
       * @description Queries the maximum upgradable version of a worker.
       *
       * @param request GetWorkerMaxVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerMaxVersionResponse
       */
      Models::GetWorkerMaxVersionResponse getWorkerMaxVersionWithOptions(const Models::GetWorkerMaxVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum upgradable version of a worker.
       *
       * @description Queries the maximum upgradable version of a worker.
       *
       * @param request GetWorkerMaxVersionRequest
       * @return GetWorkerMaxVersionResponse
       */
      Models::GetWorkerMaxVersionResponse getWorkerMaxVersion(const Models::GetWorkerMaxVersionRequest &request);

      /**
       * @summary Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
       *
       * @description Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
       *
       * @param request GetWorkerStatsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkerStatsSummaryResponse
       */
      Models::GetWorkerStatsSummaryResponse getWorkerStatsSummaryWithOptions(const Models::GetWorkerStatsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
       *
       * @description Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
       *
       * @param request GetWorkerStatsSummaryRequest
       * @return GetWorkerStatsSummaryResponse
       */
      Models::GetWorkerStatsSummaryResponse getWorkerStatsSummary(const Models::GetWorkerStatsSummaryRequest &request);

      /**
       * @summary Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
       *
       * @description Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
       *
       * @param request ListCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const Models::ListCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
       *
       * @description Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const Models::ListCredentialsRequest &request);

      /**
       * @summary Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
       *
       * @description Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
       *
       * @param request ListIdentityProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const Models::ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
       *
       * @description Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
       *
       * @description Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
       *
       * @description Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
       *
       * @description Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
       *
       * @param request ListMcpToolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpToolsWithOptions(const Models::ListMcpToolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
       *
       * @description Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
       *
       * @param request ListMcpToolsRequest
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpTools(const Models::ListMcpToolsRequest &request);

      /**
       * @summary Queries the MCP server list under a specified AgentTeams instance by using paging.
       *
       * @description Queries the MCP server list under a specified AgentTeams instance by using paging.
       *
       * @param request ListMcpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcpsWithOptions(const Models::ListMcpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the MCP server list under a specified AgentTeams instance by using paging.
       *
       * @description Queries the MCP server list under a specified AgentTeams instance by using paging.
       *
       * @param request ListMcpsRequest
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcps(const Models::ListMcpsRequest &request);

      /**
       * @summary Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
       *
       * @description Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
       *
       * @param request ListModelProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProvidersWithOptions(const Models::ListModelProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
       *
       * @description Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
       *
       * @param request ListModelProvidersRequest
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProviders(const Models::ListModelProvidersRequest &request);

      /**
       * @summary Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
       *
       * @description Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
       *
       * @param request ListModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const Models::ListModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
       *
       * @description Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const Models::ListModelsRequest &request);

      /**
       * @summary Queries the list of AI gateway endpoints under a specified instance.
       *
       * @description This API queries the list of AI gateway endpoints under a specified instance.
       * - instanceId is a required parameter that specifies the AgentTeams instance ID.
       * - Optional parameters include component, serviceName, networkType, and domainType, which are used to further filter the returned endpoint list.
       * - Filtering by the status parameter is not supported.
       *
       * @param request ListServiceEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpointsWithOptions(const Models::ListServiceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI gateway endpoints under a specified instance.
       *
       * @description This API queries the list of AI gateway endpoints under a specified instance.
       * - instanceId is a required parameter that specifies the AgentTeams instance ID.
       * - Optional parameters include component, serviceName, networkType, and domainType, which are used to further filter the returned endpoint list.
       * - Filtering by the status parameter is not supported.
       *
       * @param request ListServiceEndpointsRequest
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpoints(const Models::ListServiceEndpointsRequest &request);

      /**
       * @summary Queries the list of SSL certificates available to the user in APIG.
       *
       * @description Queries the list of SSL certificates available to the user in APIG.
       * - This API retrieves the list of SSL certificates associated with a specified AgentTeams instance.
       * - The pagination parameters MaxResults and NextToken allow the client to control the number of returned results and retrieve the next page of data.
       * - A successful response includes the request ID, success flag, error code, next page token, total certificate count, and the certificate details list.
       *
       * @param request ListSslCertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCertsWithOptions(const Models::ListSslCertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of SSL certificates available to the user in APIG.
       *
       * @description Queries the list of SSL certificates available to the user in APIG.
       * - This API retrieves the list of SSL certificates associated with a specified AgentTeams instance.
       * - The pagination parameters MaxResults and NextToken allow the client to control the number of returned results and retrieve the next page of data.
       * - A successful response includes the request ID, success flag, error code, next page token, total certificate count, and the certificate details list.
       *
       * @param request ListSslCertsRequest
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCerts(const Models::ListSslCertsRequest &request);

      /**
       * @summary Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
       *
       * @description Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
       *
       * @param request ListTeamDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamDetailsResponse
       */
      Models::ListTeamDetailsResponse listTeamDetailsWithOptions(const Models::ListTeamDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
       *
       * @description Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
       *
       * @param request ListTeamDetailsRequest
       * @return ListTeamDetailsResponse
       */
      Models::ListTeamDetailsResponse listTeamDetails(const Models::ListTeamDetailsRequest &request);

      /**
       * @summary Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
       *
       * @description Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
       *
       * @param request ListTeamTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamTasksResponse
       */
      Models::ListTeamTasksResponse listTeamTasksWithOptions(const Models::ListTeamTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
       *
       * @description Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
       *
       * @param request ListTeamTasksRequest
       * @return ListTeamTasksResponse
       */
      Models::ListTeamTasksResponse listTeamTasks(const Models::ListTeamTasksRequest &request);

      /**
       * @summary Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
       *
       * @description Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
       *
       * @param request ListTeamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const Models::ListTeamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
       *
       * @description Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const Models::ListTeamsRequest &request);

      /**
       * @summary Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
       *
       * @description Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
       *
       * @description Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
       *
       * @description Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
       *
       * @param request ListWorkerStatsDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkerStatsDetailsResponse
       */
      Models::ListWorkerStatsDetailsResponse listWorkerStatsDetailsWithOptions(const Models::ListWorkerStatsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
       *
       * @description Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
       *
       * @param request ListWorkerStatsDetailsRequest
       * @return ListWorkerStatsDetailsResponse
       */
      Models::ListWorkerStatsDetailsResponse listWorkerStatsDetails(const Models::ListWorkerStatsDetailsRequest &request);

      /**
       * @summary Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
       *
       * @description Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
       *
       * @param tmpReq ListWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkersResponse
       */
      Models::ListWorkersResponse listWorkersWithOptions(const Models::ListWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
       *
       * @description Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
       *
       * @param request ListWorkersRequest
       * @return ListWorkersResponse
       */
      Models::ListWorkersResponse listWorkers(const Models::ListWorkersRequest &request);

      /**
       * @summary Creates or updates a CMS workspace.
       *
       * @description Creates or updates a CMS workspace.
       *
       * @param request PutCmsWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCmsWorkspaceResponse
       */
      Models::PutCmsWorkspaceResponse putCmsWorkspaceWithOptions(const Models::PutCmsWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a CMS workspace.
       *
       * @description Creates or updates a CMS workspace.
       *
       * @param request PutCmsWorkspaceRequest
       * @return PutCmsWorkspaceResponse
       */
      Models::PutCmsWorkspaceResponse putCmsWorkspace(const Models::PutCmsWorkspaceRequest &request);

      /**
       * @summary Queries the attribute status of a specified instance, worker, team, or individual.
       *
       * @description Queries the feature status of a specified instance, worker, team, or individual.
       * - This operation queries the feature status of different targets (such as INSTANCE, WORKER, TEAM, or HUMAN) under a specific instanceId.
       * - The targetScope parameter defines the target type for the query. Depending on the targetScope value, you may need to provide an additional resourceName parameter to specify the resource name.
       * - If a featureCodes list is provided, the status of those specific features is returned. Otherwise, the status of all features under the specified targetScope is returned.
       * - When using WORKER, TEAM, or HUMAN as the targetScope, make sure to correctly specify the corresponding resourceName.
       * - For INSTANCE-level queries, resourceName is not required.
       * - Feature support is affected by factors such as the base version and worker version. The unsupportedReasonCode and unsupportedReason fields provide the specific reason why a feature is not supported.
       *
       * @param request QueryFeaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFeaturesResponse
       */
      Models::QueryFeaturesResponse queryFeaturesWithOptions(const Models::QueryFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attribute status of a specified instance, worker, team, or individual.
       *
       * @description Queries the feature status of a specified instance, worker, team, or individual.
       * - This operation queries the feature status of different targets (such as INSTANCE, WORKER, TEAM, or HUMAN) under a specific instanceId.
       * - The targetScope parameter defines the target type for the query. Depending on the targetScope value, you may need to provide an additional resourceName parameter to specify the resource name.
       * - If a featureCodes list is provided, the status of those specific features is returned. Otherwise, the status of all features under the specified targetScope is returned.
       * - When using WORKER, TEAM, or HUMAN as the targetScope, make sure to correctly specify the corresponding resourceName.
       * - For INSTANCE-level queries, resourceName is not required.
       * - Feature support is affected by factors such as the base version and worker version. The unsupportedReasonCode and unsupportedReason fields provide the specific reason why a feature is not supported.
       *
       * @param request QueryFeaturesRequest
       * @return QueryFeaturesResponse
       */
      Models::QueryFeaturesResponse queryFeatures(const Models::QueryFeaturesRequest &request);

      /**
       * @summary Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
       *
       * @description Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
       *
       * @param request QuerySupportedZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySupportedZonesResponse
       */
      Models::QuerySupportedZonesResponse querySupportedZonesWithOptions(const Models::QuerySupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
       *
       * @description Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
       *
       * @param request QuerySupportedZonesRequest
       * @return QuerySupportedZonesResponse
       */
      Models::QuerySupportedZonesResponse querySupportedZones(const Models::QuerySupportedZonesRequest &request);

      /**
       * @summary Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
       *
       * @description Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
       *
       * @description Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
       *
       * @description Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
       *
       * @param request TestModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestModelProviderResponse
       */
      Models::TestModelProviderResponse testModelProviderWithOptions(const Models::TestModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
       *
       * @description Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
       *
       * @param request TestModelProviderRequest
       * @return TestModelProviderResponse
       */
      Models::TestModelProviderResponse testModelProvider(const Models::TestModelProviderRequest &request);

      /**
       * @summary Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
       *
       * @description Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
       *
       * @param request UnbindIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindIdentityProviderResponse
       */
      Models::UnbindIdentityProviderResponse unbindIdentityProviderWithOptions(const Models::UnbindIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
       *
       * @description Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
       *
       * @param request UnbindIdentityProviderRequest
       * @return UnbindIdentityProviderResponse
       */
      Models::UnbindIdentityProviderResponse unbindIdentityProvider(const Models::UnbindIdentityProviderRequest &request);

      /**
       * @summary Updates the plaintext key of an existing credential in an AgentTeams instance.
       *
       * @description Updates the plaintext key of an existing credential in an AgentTeams instance.
       * - This operation updates the plaintext key of an existing Credential in an AgentTeams instance.
       * - Only the key value of the APIKeyCredentialProvider with the same name in the Agent Identity TokenVault is updated. Local metadata (description, createTime, updateTime, and status) is not modified.
       * - The response does not contain the apiKey plaintext. To obtain Worker details, call GetCredential.
       *
       * @param request UpdateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const Models::UpdateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the plaintext key of an existing credential in an AgentTeams instance.
       *
       * @description Updates the plaintext key of an existing credential in an AgentTeams instance.
       * - This operation updates the plaintext key of an existing Credential in an AgentTeams instance.
       * - Only the key value of the APIKeyCredentialProvider with the same name in the Agent Identity TokenVault is updated. Local metadata (description, createTime, updateTime, and status) is not modified.
       * - The response does not contain the apiKey plaintext. To obtain Worker details, call GetCredential.
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const Models::UpdateCredentialRequest &request);

      /**
       * @summary Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
       *
       * @description Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
       *
       * @param request UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
       *
       * @description Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
       *
       * @description Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
       *
       * @param tmpReq UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
       *
       * @description Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Restarts a paused asynchronous task for creating an instance.
       *
       * @description Restarts a paused asynchronous task for creating an instance.
       * - This operation restarts a create-instance task that is in the paused state.
       * - Only tasks of the agentteams:pay-order:create type are supported.
       * - Ensure that the InstanceId, TaskCode, and TaskId parameters are accurate. Otherwise, the request may fail.
       * - If the task is not in the paused state (PAUSED), you cannot call this operation to update the task.
       *
       * @param request UpdateInstanceAsyncTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceAsyncTaskResponse
       */
      Models::UpdateInstanceAsyncTaskResponse updateInstanceAsyncTaskWithOptions(const Models::UpdateInstanceAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a paused asynchronous task for creating an instance.
       *
       * @description Restarts a paused asynchronous task for creating an instance.
       * - This operation restarts a create-instance task that is in the paused state.
       * - Only tasks of the agentteams:pay-order:create type are supported.
       * - Ensure that the InstanceId, TaskCode, and TaskId parameters are accurate. Otherwise, the request may fail.
       * - If the task is not in the paused state (PAUSED), you cannot call this operation to update the task.
       *
       * @param request UpdateInstanceAsyncTaskRequest
       * @return UpdateInstanceAsyncTaskResponse
       */
      Models::UpdateInstanceAsyncTaskResponse updateInstanceAsyncTask(const Models::UpdateInstanceAsyncTaskRequest &request);

      /**
       * @summary Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
       *
       * @description Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
       *
       * @param tmpReq UpdateMcpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcpWithOptions(const Models::UpdateMcpRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
       *
       * @description Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
       *
       * @param request UpdateMcpRequest
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcp(const Models::UpdateMcpRequest &request);

      /**
       * @summary Updates the description and other information of an AI model in a specified AgentTeams instance.
       *
       * @description Updates the description and other information of an AI model in a specified AgentTeams instance.
       *
       * @param request UpdateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const Models::UpdateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description and other information of an AI model in a specified AgentTeams instance.
       *
       * @description Updates the description and other information of an AI model in a specified AgentTeams instance.
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const Models::UpdateModelRequest &request);

      /**
       * @summary Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
       *
       * @description Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
       *
       * @param tmpReq UpdateModelProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelProviderResponse
       */
      Models::UpdateModelProviderResponse updateModelProviderWithOptions(const Models::UpdateModelProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
       *
       * @description Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
       *
       * @param request UpdateModelProviderRequest
       * @return UpdateModelProviderResponse
       */
      Models::UpdateModelProviderResponse updateModelProvider(const Models::UpdateModelProviderRequest &request);

      /**
       * @summary Updates the domain name and SSL certificate information for a specified endpoint.
       *
       * @description Updates the domain name and SSL certificate information for a specified endpoint.
       * - This API operation supports updating endpoints of the ELEMENT or MATRIX type.
       * - If you attempt to update an endpoint of another type, a 400 error is returned.
       * - If the endpointId does not exist or does not belong to the current user instance, a 404 error is returned.
       * - When updating a domain name, the system creates or reuses a new HTTPS domain and binds it to the original endpoint route. The old domain is unbound but not deleted.
       * - If the domain or certIdentifier parameter is not specified, the existing settings are retained.
       * - Other fields such as component and gatewayType are not updated even if they are specified in the request.
       *
       * @param request UpdateServiceEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceEndpointResponse
       */
      Models::UpdateServiceEndpointResponse updateServiceEndpointWithOptions(const Models::UpdateServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the domain name and SSL certificate information for a specified endpoint.
       *
       * @description Updates the domain name and SSL certificate information for a specified endpoint.
       * - This API operation supports updating endpoints of the ELEMENT or MATRIX type.
       * - If you attempt to update an endpoint of another type, a 400 error is returned.
       * - If the endpointId does not exist or does not belong to the current user instance, a 404 error is returned.
       * - When updating a domain name, the system creates or reuses a new HTTPS domain and binds it to the original endpoint route. The old domain is unbound but not deleted.
       * - If the domain or certIdentifier parameter is not specified, the existing settings are retained.
       * - Other fields such as component and gatewayType are not updated even if they are specified in the request.
       *
       * @param request UpdateServiceEndpointRequest
       * @return UpdateServiceEndpointResponse
       */
      Models::UpdateServiceEndpointResponse updateServiceEndpoint(const Models::UpdateServiceEndpointRequest &request);

      /**
       * @summary Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
       *
       * @description Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
       *
       * @param tmpReq UpdateTeamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const Models::UpdateTeamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
       *
       * @description Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const Models::UpdateTeamRequest &request);

      /**
       * @summary Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
       *
       * @description Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
       *
       * @description Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
       *
       * @description Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
       *
       * @param tmpReq UpdateWorkerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkerResponse
       */
      Models::UpdateWorkerResponse updateWorkerWithOptions(const Models::UpdateWorkerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
       *
       * @description Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
       *
       * @param request UpdateWorkerRequest
       * @return UpdateWorkerResponse
       */
      Models::UpdateWorkerResponse updateWorker(const Models::UpdateWorkerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
