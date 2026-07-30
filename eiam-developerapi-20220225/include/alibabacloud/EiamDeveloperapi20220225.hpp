// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EIAMDEVELOPERAPI20220225_HPP_
#define ALIBABACLOUD_EIAMDEVELOPERAPI20220225_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EiamDeveloperapi20220225Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EiamDeveloperapi20220225.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds an EIAM account to one or more EIAM organizations. These organizations serve as subordinate organizations for the account. If the account is already a member of a specified organization, no update is performed.
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @param headers AddUserToOrganizationalUnitsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::AddUserToOrganizationalUnitsRequest &request, const Models::AddUserToOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an EIAM account to one or more EIAM organizations. These organizations serve as subordinate organizations for the account. If the account is already a member of a specified organization, no update is performed.
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnits(const string &instanceId, const string &applicationId, const string &userId, const Models::AddUserToOrganizationalUnitsRequest &request);

      /**
       * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to an EIAM group. If the accounts are already added to the specified group, no update is performed.
       *
       * @param request AddUsersToGroupRequest
       * @param headers AddUsersToGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::AddUsersToGroupRequest &request, const Models::AddUsersToGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to an EIAM group. If the accounts are already added to the specified group, no update is performed.
       *
       * @param request AddUsersToGroupRequest
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::AddUsersToGroupRequest &request);

      /**
       * @summary Creates a group.
       *
       * @param request CreateGroupRequest
       * @param headers CreateGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const string &instanceId, const string &applicationId, const Models::CreateGroupRequest &request, const Models::CreateGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const string &instanceId, const string &applicationId, const Models::CreateGroupRequest &request);

      /**
       * @summary Creates an organizational unit.
       *
       * @param request CreateOrganizationalUnitRequest
       * @param headers CreateOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const Models::CreateOrganizationalUnitRequest &request, const Models::CreateOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an organizational unit.
       *
       * @param request CreateOrganizationalUnitRequest
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnit(const string &instanceId, const string &applicationId, const Models::CreateOrganizationalUnitRequest &request);

      /**
       * @summary Creates a new EIAM account in a specified organization.
       *
       * @param request CreateUserRequest
       * @param headers CreateUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &instanceId, const string &applicationId, const Models::CreateUserRequest &request, const Models::CreateUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new EIAM account in a specified organization.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &instanceId, const string &applicationId, const Models::CreateUserRequest &request);

      /**
       * @summary Creates an account-specific credential.
       *
       * @description This API uses an Access Token issued by IDaaS for identity authentication and authorization.
       * Ensure that the Access Token you provide has the "Manage Static Credentials" permission for the IDaaS built-in PAM application (Privileged Access Management).
       * > The corresponding scope is `urn:cloud:idaas:pam|credential:manage`.
       *
       * @param request CreateUserExclusiveCredentialRequest
       * @param headers CreateUserExclusiveCredentialHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserExclusiveCredentialResponse
       */
      Models::CreateUserExclusiveCredentialResponse createUserExclusiveCredentialWithOptions(const string &instanceId, const Models::CreateUserExclusiveCredentialRequest &request, const Models::CreateUserExclusiveCredentialHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account-specific credential.
       *
       * @description This API uses an Access Token issued by IDaaS for identity authentication and authorization.
       * Ensure that the Access Token you provide has the "Manage Static Credentials" permission for the IDaaS built-in PAM application (Privileged Access Management).
       * > The corresponding scope is `urn:cloud:idaas:pam|credential:manage`.
       *
       * @param request CreateUserExclusiveCredentialRequest
       * @return CreateUserExclusiveCredentialResponse
       */
      Models::CreateUserExclusiveCredentialResponse createUserExclusiveCredential(const string &instanceId, const Models::CreateUserExclusiveCredentialRequest &request);

      /**
       * @summary Deletes a group.
       *
       * @param request DeleteGroupRequest
       * @param headers DeleteGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::DeleteGroupRequest &request, const Models::DeleteGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::DeleteGroupRequest &request);

      /**
       * @summary Deletes an organizational unit.
       *
       * @param request DeleteOrganizationalUnitRequest
       * @param headers DeleteOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::DeleteOrganizationalUnitRequest &request, const Models::DeleteOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an organizational unit.
       *
       * @param request DeleteOrganizationalUnitRequest
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::DeleteOrganizationalUnitRequest &request);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) account.
       *
       * @param request DeleteUserRequest
       * @param headers DeleteUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::DeleteUserRequest &request, const Models::DeleteUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) account.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const string &instanceId, const string &applicationId, const string &userId, const Models::DeleteUserRequest &request);

      /**
       * @summary Disables an Employee Identity and Access Management (EIAM) account.
       *
       * @param request DisableUserRequest
       * @param headers DisableUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::DisableUserRequest &request, const Models::DisableUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an Employee Identity and Access Management (EIAM) account.
       *
       * @param request DisableUserRequest
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUser(const string &instanceId, const string &applicationId, const string &userId, const Models::DisableUserRequest &request);

      /**
       * @summary Enables an Employee Identity and Access Management (EIAM) account.
       *
       * @param request EnableUserRequest
       * @param headers EnableUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::EnableUserRequest &request, const Models::EnableUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an Employee Identity and Access Management (EIAM) account.
       *
       * @param request EnableUserRequest
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUser(const string &instanceId, const string &applicationId, const string &userId, const Models::EnableUserRequest &request);

      /**
       * @summary Retrieves a valid OAuth authentication token.
       *
       * @description This API authenticates and authorizes requests based on an Access Token issued by IDaaS.
       * Ensure that the Access Token you provide has the function authorization to "obtain authentication token" for the IDaaS built-in PAM application (Privileged Access Management).
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:obtain`.
       *
       * @param request FetchOAuthAuthenticationTokenRequest
       * @param headers FetchOAuthAuthenticationTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchOAuthAuthenticationTokenResponse
       */
      Models::FetchOAuthAuthenticationTokenResponse fetchOAuthAuthenticationTokenWithOptions(const string &instanceId, const Models::FetchOAuthAuthenticationTokenRequest &request, const Models::FetchOAuthAuthenticationTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a valid OAuth authentication token.
       *
       * @description This API authenticates and authorizes requests based on an Access Token issued by IDaaS.
       * Ensure that the Access Token you provide has the function authorization to "obtain authentication token" for the IDaaS built-in PAM application (Privileged Access Management).
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:obtain`.
       *
       * @param request FetchOAuthAuthenticationTokenRequest
       * @return FetchOAuthAuthenticationTokenResponse
       */
      Models::FetchOAuthAuthenticationTokenResponse fetchOAuthAuthenticationToken(const string &instanceId, const Models::FetchOAuthAuthenticationTokenRequest &request);

      /**
       * @summary Generates a device code.
       *
       * @param request GenerateDeviceCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDeviceCodeResponse
       */
      Models::GenerateDeviceCodeResponse generateDeviceCodeWithOptions(const string &instanceId, const string &applicationId, const Models::GenerateDeviceCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a device code.
       *
       * @param request GenerateDeviceCodeRequest
       * @return GenerateDeviceCodeResponse
       */
      Models::GenerateDeviceCodeResponse generateDeviceCode(const string &instanceId, const string &applicationId, const Models::GenerateDeviceCodeRequest &request);

      /**
       * @summary Generates a JSON Web Token (JWT) authentication token.
       *
       * @description This API performs identity authentication and authorization using the Access Token issued by IDaaS.
       * Ensure that the provided Access Token has the authorization to access the "Obtain Authentication Token" feature of the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:obtain`.
       *
       * @param request GenerateJwtAuthenticationTokenRequest
       * @param headers GenerateJwtAuthenticationTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateJwtAuthenticationTokenResponse
       */
      Models::GenerateJwtAuthenticationTokenResponse generateJwtAuthenticationTokenWithOptions(const string &instanceId, const Models::GenerateJwtAuthenticationTokenRequest &request, const Models::GenerateJwtAuthenticationTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a JSON Web Token (JWT) authentication token.
       *
       * @description This API performs identity authentication and authorization using the Access Token issued by IDaaS.
       * Ensure that the provided Access Token has the authorization to access the "Obtain Authentication Token" feature of the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:obtain`.
       *
       * @param request GenerateJwtAuthenticationTokenRequest
       * @return GenerateJwtAuthenticationTokenResponse
       */
      Models::GenerateJwtAuthenticationTokenResponse generateJwtAuthenticationToken(const string &instanceId, const Models::GenerateJwtAuthenticationTokenRequest &request);

      /**
       * @summary Generates an access token for an application in a specified IDaaS instance based on credential information.
       *
       * @description The following methods are supported: Authorization Code, Device Flow, Refresh Token, Client Credentials, and Password.
       * ### 1. Authorization Code
       * Scenario: This is the standard OAuth 2.0 authorization code flow, which is suitable for web applications with frontend interaction.
       * Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=authorization_code
       * &code={authorization_code}
       * &redirect_uri={redirect_uri}
       * &client_id={client_id}
       * &client_secret={client_secret}
       * ```
       * Parameters:
       * ● code: The authorization code obtained from the authorization endpoint.
       * ● redirect_uri: Must be the same as the redirect_uri that was used to obtain the authorization code.
       * ### 1.1 Authorization Code for public clients
       * Scenario: This scenario is suitable for applications that cannot securely store a secret, such as single-page applications (SPAs) or native applications. In this flow, a client_secret is not required, but you must use the Proof Key for Code Exchange (PKCE) mechanism. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=authorization_code
       * &code={authorization_code}
       * &redirect_uri={redirect_uri}
       * &client_id={client_id}
       * &code_verifier={code_verifier}
       * ```
       * Parameters:
       * ● code_verifier: The code verifier for the PKCE mechanism. The client generates it when initiating an authorization request and uses it to derive the \\`code_challenge\\`. When exchanging for a token, you must submit this value. It must be identical to the value used to generate the \\`code_challenge\\`.
       * Java example for generating a code_verifier and code_challenge:
       * ```java
       * String codeVerifier = Base64.getUrlEncoder().withoutPadding().encodeToString(new SecureRandom().generateSeed(43));
       * String codeChallenge = Base64.getUrlEncoder().withoutPadding().encodeToString(java.security.MessageDigest.getInstance("SHA-256").digest(codeVerifier.getBytes()));
       * ```
       * ### 2. Device Flow
       * Scenario: This scenario is suitable for input-constrained devices, such as TVs and IoT devices. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=urn:ietf:params:oauth:grant-type:device_code
       * &device_code={device_code}
       * &client_id={client_id}
       * &client_secret={client_secret}
       * ```
       * To obtain the device code, first call `/oauth2/device/code` to retrieve the device_code and user_code.
       * ### 2.1 Device Flow for public clients
       * Scenario: This scenario is used when interactive logon is not convenient and the client is a public client. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=urn:ietf:params:oauth:grant-type:device_code
       * &device_code={device_code}
       * &client_id={client_id}
       * ```
       * ### 3. Refresh Token
       * Scenario: This scenario uses a refresh_token to obtain a new access_token. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=refresh_token
       * &refresh_token={refresh_token}
       * &client_id={client_id}
       * &client_secret={client_secret}
       * ```
       * ### 4. Client Credentials
       * Scenario: This scenario is for server-to-server authentication without user involvement. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=client_credentials
       * &client_id={client_id}
       * &client_secret={client_secret}
       * &scope={scope}
       * ```
       * ### 5. Password
       * Scenario: This scenario uses traditional username and password authentication. Use this method with caution. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=password
       * &username={username}
       * &password={password}
       * &client_id={client_id}
       * &scope={scope}
       * ```
       *
       * @param request GenerateTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTokenResponse
       */
      Models::GenerateTokenResponse generateTokenWithOptions(const string &instanceId, const string &applicationId, const Models::GenerateTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an access token for an application in a specified IDaaS instance based on credential information.
       *
       * @description The following methods are supported: Authorization Code, Device Flow, Refresh Token, Client Credentials, and Password.
       * ### 1. Authorization Code
       * Scenario: This is the standard OAuth 2.0 authorization code flow, which is suitable for web applications with frontend interaction.
       * Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=authorization_code
       * &code={authorization_code}
       * &redirect_uri={redirect_uri}
       * &client_id={client_id}
       * &client_secret={client_secret}
       * ```
       * Parameters:
       * ● code: The authorization code obtained from the authorization endpoint.
       * ● redirect_uri: Must be the same as the redirect_uri that was used to obtain the authorization code.
       * ### 1.1 Authorization Code for public clients
       * Scenario: This scenario is suitable for applications that cannot securely store a secret, such as single-page applications (SPAs) or native applications. In this flow, a client_secret is not required, but you must use the Proof Key for Code Exchange (PKCE) mechanism. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=authorization_code
       * &code={authorization_code}
       * &redirect_uri={redirect_uri}
       * &client_id={client_id}
       * &code_verifier={code_verifier}
       * ```
       * Parameters:
       * ● code_verifier: The code verifier for the PKCE mechanism. The client generates it when initiating an authorization request and uses it to derive the \\`code_challenge\\`. When exchanging for a token, you must submit this value. It must be identical to the value used to generate the \\`code_challenge\\`.
       * Java example for generating a code_verifier and code_challenge:
       * ```java
       * String codeVerifier = Base64.getUrlEncoder().withoutPadding().encodeToString(new SecureRandom().generateSeed(43));
       * String codeChallenge = Base64.getUrlEncoder().withoutPadding().encodeToString(java.security.MessageDigest.getInstance("SHA-256").digest(codeVerifier.getBytes()));
       * ```
       * ### 2. Device Flow
       * Scenario: This scenario is suitable for input-constrained devices, such as TVs and IoT devices. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=urn:ietf:params:oauth:grant-type:device_code
       * &device_code={device_code}
       * &client_id={client_id}
       * &client_secret={client_secret}
       * ```
       * To obtain the device code, first call `/oauth2/device/code` to retrieve the device_code and user_code.
       * ### 2.1 Device Flow for public clients
       * Scenario: This scenario is used when interactive logon is not convenient and the client is a public client. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=urn:ietf:params:oauth:grant-type:device_code
       * &device_code={device_code}
       * &client_id={client_id}
       * ```
       * ### 3. Refresh Token
       * Scenario: This scenario uses a refresh_token to obtain a new access_token. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=refresh_token
       * &refresh_token={refresh_token}
       * &client_id={client_id}
       * &client_secret={client_secret}
       * ```
       * ### 4. Client Credentials
       * Scenario: This scenario is for server-to-server authentication without user involvement. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=client_credentials
       * &client_id={client_id}
       * &client_secret={client_secret}
       * &scope={scope}
       * ```
       * ### 5. Password
       * Scenario: This scenario uses traditional username and password authentication. Use this method with caution. Example call:
       * ```
       * POST /v2/{instanceId}/{applicationId}/oauth2/token
       * Content-Type: application/x-www-form-urlencoded
       * grant_type=password
       * &username={username}
       * &password={password}
       * &client_id={client_id}
       * &scope={scope}
       * ```
       *
       * @param request GenerateTokenRequest
       * @return GenerateTokenResponse
       */
      Models::GenerateTokenResponse generateToken(const string &instanceId, const string &applicationId, const Models::GenerateTokenRequest &request);

      /**
       * @summary The token endpoint for an instance-level authorization server.
       *
       * @param request GenerateTokenByAuthorizationServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTokenByAuthorizationServerResponse
       */
      Models::GenerateTokenByAuthorizationServerResponse generateTokenByAuthorizationServerWithOptions(const string &instanceId, const string &authorizationServerId, const Models::GenerateTokenByAuthorizationServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The token endpoint for an instance-level authorization server.
       *
       * @param request GenerateTokenByAuthorizationServerRequest
       * @return GenerateTokenByAuthorizationServerResponse
       */
      Models::GenerateTokenByAuthorizationServerResponse generateTokenByAuthorizationServer(const string &instanceId, const string &authorizationServerId, const Models::GenerateTokenByAuthorizationServerRequest &request);

      /**
       * @summary The GetApplicationProvisioningScope operation retrieves the synchronization scope of an application in a specific instance.
       *
       * @description > - You can set the synchronization scope in Application Management in the IDaaS console. After you create an application, you have permission to call this API by default.
       *
       * @param request GetApplicationProvisioningScopeRequest
       * @param headers GetApplicationProvisioningScopeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningScopeResponse
       */
      Models::GetApplicationProvisioningScopeResponse getApplicationProvisioningScopeWithOptions(const string &instanceId, const string &applicationId, const Models::GetApplicationProvisioningScopeRequest &request, const Models::GetApplicationProvisioningScopeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The GetApplicationProvisioningScope operation retrieves the synchronization scope of an application in a specific instance.
       *
       * @description > - You can set the synchronization scope in Application Management in the IDaaS console. After you create an application, you have permission to call this API by default.
       *
       * @param request GetApplicationProvisioningScopeRequest
       * @return GetApplicationProvisioningScopeResponse
       */
      Models::GetApplicationProvisioningScopeResponse getApplicationProvisioningScope(const string &instanceId, const string &applicationId, const Models::GetApplicationProvisioningScopeRequest &request);

      /**
       * @summary Retrieves the details of a group.
       *
       * @param request GetGroupRequest
       * @param headers GetGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::GetGroupRequest &request, const Models::GetGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a group.
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::GetGroupRequest &request);

      /**
       * @summary Queries the current status and authorization result of an OAuth authorization session.
       *
       * @param request GetOAuthAuthorizationSessionRequest
       * @param headers GetOAuthAuthorizationSessionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOAuthAuthorizationSessionResponse
       */
      Models::GetOAuthAuthorizationSessionResponse getOAuthAuthorizationSessionWithOptions(const string &instanceId, const Models::GetOAuthAuthorizationSessionRequest &request, const Models::GetOAuthAuthorizationSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current status and authorization result of an OAuth authorization session.
       *
       * @param request GetOAuthAuthorizationSessionRequest
       * @return GetOAuthAuthorizationSessionResponse
       */
      Models::GetOAuthAuthorizationSessionResponse getOAuthAuthorizationSession(const string &instanceId, const Models::GetOAuthAuthorizationSessionRequest &request);

      /**
       * @summary Retrieves the information about an organizational unit.
       *
       * @param request GetOrganizationalUnitRequest
       * @param headers GetOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::GetOrganizationalUnitRequest &request, const Models::GetOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about an organizational unit.
       *
       * @param request GetOrganizationalUnitRequest
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::GetOrganizationalUnitRequest &request);

      /**
       * @summary Obtains the ID of an organizational unit based on the external ID
       *
       * @param request GetOrganizationalUnitIdByExternalIdRequest
       * @param headers GetOrganizationalUnitIdByExternalIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationalUnitIdByExternalIdResponse
       */
      Models::GetOrganizationalUnitIdByExternalIdResponse getOrganizationalUnitIdByExternalIdWithOptions(const string &instanceId, const string &applicationId, const Models::GetOrganizationalUnitIdByExternalIdRequest &request, const Models::GetOrganizationalUnitIdByExternalIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the ID of an organizational unit based on the external ID
       *
       * @param request GetOrganizationalUnitIdByExternalIdRequest
       * @return GetOrganizationalUnitIdByExternalIdResponse
       */
      Models::GetOrganizationalUnitIdByExternalIdResponse getOrganizationalUnitIdByExternalId(const string &instanceId, const string &applicationId, const Models::GetOrganizationalUnitIdByExternalIdRequest &request);

      /**
       * @summary Retrieves the details of an Employee Identity and Access Management (EIAM) account.
       *
       * @param request GetUserRequest
       * @param headers GetUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::GetUserRequest &request, const Models::GetUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an Employee Identity and Access Management (EIAM) account.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const string &instanceId, const string &applicationId, const string &userId, const Models::GetUserRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account by email address.
       *
       * @param request GetUserIdByEmailRequest
       * @param headers GetUserIdByEmailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByEmailResponse
       */
      Models::GetUserIdByEmailResponse getUserIdByEmailWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByEmailRequest &request, const Models::GetUserIdByEmailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account by email address.
       *
       * @param request GetUserIdByEmailRequest
       * @return GetUserIdByEmailResponse
       */
      Models::GetUserIdByEmailResponse getUserIdByEmail(const string &instanceId, const string &applicationId, const Models::GetUserIdByEmailRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the mobile number.
       *
       * @param request GetUserIdByPhoneNumberRequest
       * @param headers GetUserIdByPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByPhoneNumberResponse
       */
      Models::GetUserIdByPhoneNumberResponse getUserIdByPhoneNumberWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByPhoneNumberRequest &request, const Models::GetUserIdByPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the mobile number.
       *
       * @param request GetUserIdByPhoneNumberRequest
       * @return GetUserIdByPhoneNumberResponse
       */
      Models::GetUserIdByPhoneNumberResponse getUserIdByPhoneNumber(const string &instanceId, const string &applicationId, const Models::GetUserIdByPhoneNumberRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the external ID.
       *
       * @param request GetUserIdByUserExternalIdRequest
       * @param headers GetUserIdByUserExternalIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByUserExternalIdResponse
       */
      Models::GetUserIdByUserExternalIdResponse getUserIdByUserExternalIdWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByUserExternalIdRequest &request, const Models::GetUserIdByUserExternalIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the external ID.
       *
       * @param request GetUserIdByUserExternalIdRequest
       * @return GetUserIdByUserExternalIdResponse
       */
      Models::GetUserIdByUserExternalIdResponse getUserIdByUserExternalId(const string &instanceId, const string &applicationId, const Models::GetUserIdByUserExternalIdRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the username.
       *
       * @param request GetUserIdByUsernameRequest
       * @param headers GetUserIdByUsernameHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByUsernameResponse
       */
      Models::GetUserIdByUsernameResponse getUserIdByUsernameWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByUsernameRequest &request, const Models::GetUserIdByUsernameHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the username.
       *
       * @param request GetUserIdByUsernameRequest
       * @return GetUserIdByUsernameResponse
       */
      Models::GetUserIdByUsernameResponse getUserIdByUsername(const string &instanceId, const string &applicationId, const Models::GetUserIdByUsernameRequest &request);

      /**
       * @summary Retrieves the information about a user by using the user token.
       *
       * @param request GetUserInfoRequest
       * @param headers GetUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfoWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserInfoRequest &request, const Models::GetUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about a user by using the user token.
       *
       * @param request GetUserInfoRequest
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfo(const string &instanceId, const string &applicationId, const Models::GetUserInfoRequest &request);

      /**
       * @summary Lists authentication tokens.
       *
       * @description This API uses an Access Token issued by IDaaS for identity authentication and authorization.
       * Ensure that the Access Token you provide has the Query authentication tokens permission for the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The required scope is `urn:cloud:idaas:pam|authentication_token:read`.
       *
       * @param request ListAuthenticationTokensRequest
       * @param headers ListAuthenticationTokensHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthenticationTokensResponse
       */
      Models::ListAuthenticationTokensResponse listAuthenticationTokensWithOptions(const string &instanceId, const Models::ListAuthenticationTokensRequest &request, const Models::ListAuthenticationTokensHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists authentication tokens.
       *
       * @description This API uses an Access Token issued by IDaaS for identity authentication and authorization.
       * Ensure that the Access Token you provide has the Query authentication tokens permission for the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The required scope is `urn:cloud:idaas:pam|authentication_token:read`.
       *
       * @param request ListAuthenticationTokensRequest
       * @return ListAuthenticationTokensResponse
       */
      Models::ListAuthenticationTokensResponse listAuthenticationTokens(const string &instanceId, const Models::ListAuthenticationTokensRequest &request);

      /**
       * @summary Retrieves information about Employee Identity and Access Management (EIAM) groups by page.
       *
       * @param request ListGroupsRequest
       * @param headers ListGroupsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const string &instanceId, const string &applicationId, const Models::ListGroupsRequest &request, const Models::ListGroupsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about Employee Identity and Access Management (EIAM) groups by page.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const string &instanceId, const string &applicationId, const Models::ListGroupsRequest &request);

      /**
       * @summary Lists the groups that an EIAM user is a member of.
       *
       * @param request ListGroupsForUserRequest
       * @param headers ListGroupsForUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::ListGroupsForUserRequest &request, const Models::ListGroupsForUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the groups that an EIAM user is a member of.
       *
       * @param request ListGroupsForUserRequest
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUser(const string &instanceId, const string &applicationId, const string &userId, const Models::ListGroupsForUserRequest &request);

      /**
       * @summary Retrieves the information about all the parent organizational units of an organizational unit.
       *
       * @param request ListOrganizationalUnitParentIdsRequest
       * @param headers ListOrganizationalUnitParentIdsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitParentIdsResponse
       */
      Models::ListOrganizationalUnitParentIdsResponse listOrganizationalUnitParentIdsWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::ListOrganizationalUnitParentIdsRequest &request, const Models::ListOrganizationalUnitParentIdsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about all the parent organizational units of an organizational unit.
       *
       * @param request ListOrganizationalUnitParentIdsRequest
       * @return ListOrganizationalUnitParentIdsResponse
       */
      Models::ListOrganizationalUnitParentIdsResponse listOrganizationalUnitParentIds(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::ListOrganizationalUnitParentIdsRequest &request);

      /**
       * @summary Performs a paged query to retrieve organization information from EIAM.
       *
       * @description To retrieve the direct child organizations of the root organization, set the request parameter as follows:
       * ```
       * {
       *   "parentOrganizationalUnitId": "ou_root"
       * }
       * ```
       *
       * @param request ListOrganizationalUnitsRequest
       * @param headers ListOrganizationalUnitsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const Models::ListOrganizationalUnitsRequest &request, const Models::ListOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to retrieve organization information from EIAM.
       *
       * @description To retrieve the direct child organizations of the root organization, set the request parameter as follows:
       * ```
       * {
       *   "parentOrganizationalUnitId": "ou_root"
       * }
       * ```
       *
       * @param request ListOrganizationalUnitsRequest
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnits(const string &instanceId, const string &applicationId, const Models::ListOrganizationalUnitsRequest &request);

      /**
       * @summary Performs a paged query for EIAM account information.
       *
       * @param request ListUsersRequest
       * @param headers ListUsersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const string &instanceId, const string &applicationId, const Models::ListUsersRequest &request, const Models::ListUsersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for EIAM account information.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const string &instanceId, const string &applicationId, const Models::ListUsersRequest &request);

      /**
       * @summary Queries accounts in an Employee Identity and Access Management (EIAM) group.
       *
       * @param request ListUsersForGroupRequest
       * @param headers ListUsersForGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::ListUsersForGroupRequest &request, const Models::ListUsersForGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accounts in an Employee Identity and Access Management (EIAM) group.
       *
       * @param request ListUsersForGroupRequest
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::ListUsersForGroupRequest &request);

      /**
       * @summary Retrieves temporary access credentials for a cloud account role (CloudAccountRole).
       *
       * @description This API authenticates and authorizes requests based on an Access Token issued by IDaaS.
       * Ensure that the Access Token has the "Obtain Cloud Role Access Credential" permission for the IDaaS built-in PAM application (Privileged Access Management).
       * > The corresponding scope is `urn:cloud:idaas:pam|cloud_account_role:obtain_access_credential`.
       *
       * @param request ObtainCloudAccountRoleAccessCredentialRequest
       * @param headers ObtainCloudAccountRoleAccessCredentialHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainCloudAccountRoleAccessCredentialResponse
       */
      Models::ObtainCloudAccountRoleAccessCredentialResponse obtainCloudAccountRoleAccessCredentialWithOptions(const string &instanceId, const Models::ObtainCloudAccountRoleAccessCredentialRequest &request, const Models::ObtainCloudAccountRoleAccessCredentialHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves temporary access credentials for a cloud account role (CloudAccountRole).
       *
       * @description This API authenticates and authorizes requests based on an Access Token issued by IDaaS.
       * Ensure that the Access Token has the "Obtain Cloud Role Access Credential" permission for the IDaaS built-in PAM application (Privileged Access Management).
       * > The corresponding scope is `urn:cloud:idaas:pam|cloud_account_role:obtain_access_credential`.
       *
       * @param request ObtainCloudAccountRoleAccessCredentialRequest
       * @return ObtainCloudAccountRoleAccessCredentialResponse
       */
      Models::ObtainCloudAccountRoleAccessCredentialResponse obtainCloudAccountRoleAccessCredential(const string &instanceId, const Models::ObtainCloudAccountRoleAccessCredentialRequest &request);

      /**
       * @summary Retrieves the plaintext of a secret.
       *
       * @description This API uses an access token from IDaaS for authentication and authorization.
       * The access token must have permissions to obtain static credentials for the built-in privileged access management (PAM) application in IDaaS.
       * > The required scope is `urn:cloud:idaas:pam|credential:obtain`.
       *
       * @param request ObtainCredentialRequest
       * @param headers ObtainCredentialHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainCredentialResponse
       */
      Models::ObtainCredentialResponse obtainCredentialWithOptions(const string &instanceId, const Models::ObtainCredentialRequest &request, const Models::ObtainCredentialHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the plaintext of a secret.
       *
       * @description This API uses an access token from IDaaS for authentication and authorization.
       * The access token must have permissions to obtain static credentials for the built-in privileged access management (PAM) application in IDaaS.
       * > The required scope is `urn:cloud:idaas:pam|credential:obtain`.
       *
       * @param request ObtainCredentialRequest
       * @return ObtainCredentialResponse
       */
      Models::ObtainCredentialResponse obtainCredential(const string &instanceId, const Models::ObtainCredentialRequest &request);

      /**
       * @summary Obtains a JWT authentication token.
       *
       * @description This API requires an access token issued by IDaaS for authentication and authorization.
       * The provided access token must have permission to obtain authentication tokens for the built-in privileged access management (PAM) application in IDaaS.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:obtain`.
       *
       * @param request ObtainJwtAuthenticationTokenRequest
       * @param headers ObtainJwtAuthenticationTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainJwtAuthenticationTokenResponse
       */
      Models::ObtainJwtAuthenticationTokenResponse obtainJwtAuthenticationTokenWithOptions(const string &instanceId, const Models::ObtainJwtAuthenticationTokenRequest &request, const Models::ObtainJwtAuthenticationTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a JWT authentication token.
       *
       * @description This API requires an access token issued by IDaaS for authentication and authorization.
       * The provided access token must have permission to obtain authentication tokens for the built-in privileged access management (PAM) application in IDaaS.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:obtain`.
       *
       * @param request ObtainJwtAuthenticationTokenRequest
       * @return ObtainJwtAuthenticationTokenResponse
       */
      Models::ObtainJwtAuthenticationTokenResponse obtainJwtAuthenticationToken(const string &instanceId, const Models::ObtainJwtAuthenticationTokenRequest &request);

      /**
       * @summary Obtain a JWT authentication token using a derived short token.
       *
       * @param request ObtainJwtAuthenticationTokenByDerivedShortTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainJwtAuthenticationTokenByDerivedShortTokenResponse
       */
      Models::ObtainJwtAuthenticationTokenByDerivedShortTokenResponse obtainJwtAuthenticationTokenByDerivedShortTokenWithOptions(const string &instanceId, const Models::ObtainJwtAuthenticationTokenByDerivedShortTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a JWT authentication token using a derived short token.
       *
       * @param request ObtainJwtAuthenticationTokenByDerivedShortTokenRequest
       * @return ObtainJwtAuthenticationTokenByDerivedShortTokenResponse
       */
      Models::ObtainJwtAuthenticationTokenByDerivedShortTokenResponse obtainJwtAuthenticationTokenByDerivedShortToken(const string &instanceId, const Models::ObtainJwtAuthenticationTokenByDerivedShortTokenRequest &request);

      /**
       * @summary Modifies information about an Employee Identity and Access Management (EIAM) group.
       *
       * @param request PatchGroupRequest
       * @param headers PatchGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchGroupResponse
       */
      Models::PatchGroupResponse patchGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::PatchGroupRequest &request, const Models::PatchGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about an Employee Identity and Access Management (EIAM) group.
       *
       * @param request PatchGroupRequest
       * @return PatchGroupResponse
       */
      Models::PatchGroupResponse patchGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::PatchGroupRequest &request);

      /**
       * @summary Modifies an EIAM organizational unit.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchOrganizationalUnitRequest
       * @param headers PatchOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchOrganizationalUnitResponse
       */
      Models::PatchOrganizationalUnitResponse patchOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::PatchOrganizationalUnitRequest &request, const Models::PatchOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an EIAM organizational unit.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchOrganizationalUnitRequest
       * @return PatchOrganizationalUnitResponse
       */
      Models::PatchOrganizationalUnitResponse patchOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::PatchOrganizationalUnitRequest &request);

      /**
       * @summary Modifies an Employee Identity and Access Management (EIAM) account.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchUserRequest
       * @param headers PatchUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchUserResponse
       */
      Models::PatchUserResponse patchUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::PatchUserRequest &request, const Models::PatchUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Employee Identity and Access Management (EIAM) account.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchUserRequest
       * @return PatchUserResponse
       */
      Models::PatchUserResponse patchUser(const string &instanceId, const string &applicationId, const string &userId, const Models::PatchUserRequest &request);

      /**
       * @summary Reinstate an authentication token.
       *
       * @description This API uses an IDaaS-issued Access Token for identity authentication and authorization.
       * Ensure that the Access Token you provide has the Manage authentication tokens permission for the IDaaS built-in Privileged Access Management (PAM) application.
       * > The required scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * Only JWT authentication tokens support this operation.
       *
       * @param request ReinstateAuthenticationTokenRequest
       * @param headers ReinstateAuthenticationTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinstateAuthenticationTokenResponse
       */
      Models::ReinstateAuthenticationTokenResponse reinstateAuthenticationTokenWithOptions(const string &instanceId, const Models::ReinstateAuthenticationTokenRequest &request, const Models::ReinstateAuthenticationTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinstate an authentication token.
       *
       * @description This API uses an IDaaS-issued Access Token for identity authentication and authorization.
       * Ensure that the Access Token you provide has the Manage authentication tokens permission for the IDaaS built-in Privileged Access Management (PAM) application.
       * > The required scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * Only JWT authentication tokens support this operation.
       *
       * @param request ReinstateAuthenticationTokenRequest
       * @return ReinstateAuthenticationTokenResponse
       */
      Models::ReinstateAuthenticationTokenResponse reinstateAuthenticationToken(const string &instanceId, const Models::ReinstateAuthenticationTokenRequest &request);

      /**
       * @summary Reinstate an authentication token for a consumer.
       *
       * @description This API uses an access token issued by IDaaS to perform identity authentication and authorization.
       * Ensure that the provided access token is authorized to access the Manage Authentication Token feature in the IDaaS built-in PAM (Privileged Access Management) application.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * This operation supports only JWT-type authentication tokens.
       *
       * @param request ReinstateAuthenticationTokenByConsumerRequest
       * @param headers ReinstateAuthenticationTokenByConsumerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinstateAuthenticationTokenByConsumerResponse
       */
      Models::ReinstateAuthenticationTokenByConsumerResponse reinstateAuthenticationTokenByConsumerWithOptions(const string &instanceId, const Models::ReinstateAuthenticationTokenByConsumerRequest &request, const Models::ReinstateAuthenticationTokenByConsumerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reinstate an authentication token for a consumer.
       *
       * @description This API uses an access token issued by IDaaS to perform identity authentication and authorization.
       * Ensure that the provided access token is authorized to access the Manage Authentication Token feature in the IDaaS built-in PAM (Privileged Access Management) application.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * This operation supports only JWT-type authentication tokens.
       *
       * @param request ReinstateAuthenticationTokenByConsumerRequest
       * @return ReinstateAuthenticationTokenByConsumerResponse
       */
      Models::ReinstateAuthenticationTokenByConsumerResponse reinstateAuthenticationTokenByConsumer(const string &instanceId, const Models::ReinstateAuthenticationTokenByConsumerRequest &request);

      /**
       * @summary Removes an EIAM account from one or more EIAM organizational units. The operation succeeds even if the account is not in the specified organizational units.
       *
       * @param request RemoveUserFromOrganizationalUnitsRequest
       * @param headers RemoveUserFromOrganizationalUnitsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromOrganizationalUnitsResponse
       */
      Models::RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::RemoveUserFromOrganizationalUnitsRequest &request, const Models::RemoveUserFromOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an EIAM account from one or more EIAM organizational units. The operation succeeds even if the account is not in the specified organizational units.
       *
       * @param request RemoveUserFromOrganizationalUnitsRequest
       * @return RemoveUserFromOrganizationalUnitsResponse
       */
      Models::RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnits(const string &instanceId, const string &applicationId, const string &userId, const Models::RemoveUserFromOrganizationalUnitsRequest &request);

      /**
       * @summary Removes multiple Employee Identity and Access Management (EIAM) accounts from an EIAM group. If an account does not belong to the group, the removal succeeds by default.
       *
       * @param request RemoveUsersFromGroupRequest
       * @param headers RemoveUsersFromGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::RemoveUsersFromGroupRequest &request, const Models::RemoveUsersFromGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple Employee Identity and Access Management (EIAM) accounts from an EIAM group. If an account does not belong to the group, the removal succeeds by default.
       *
       * @param request RemoveUsersFromGroupRequest
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::RemoveUsersFromGroupRequest &request);

      /**
       * @summary Revokes an authentication token.
       *
       * @description This API uses an Access Token issued by IDaaS to perform identity authentication and authorization.
       * Ensure that the Access Token is authorized to access the "Manage Authentication Tokens" feature of the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * This operation currently supports only JWT authentication tokens.
       *
       * @param request RevokeAuthenticationTokenRequest
       * @param headers RevokeAuthenticationTokenHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAuthenticationTokenResponse
       */
      Models::RevokeAuthenticationTokenResponse revokeAuthenticationTokenWithOptions(const string &instanceId, const Models::RevokeAuthenticationTokenRequest &request, const Models::RevokeAuthenticationTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an authentication token.
       *
       * @description This API uses an Access Token issued by IDaaS to perform identity authentication and authorization.
       * Ensure that the Access Token is authorized to access the "Manage Authentication Tokens" feature of the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The corresponding scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * This operation currently supports only JWT authentication tokens.
       *
       * @param request RevokeAuthenticationTokenRequest
       * @return RevokeAuthenticationTokenResponse
       */
      Models::RevokeAuthenticationTokenResponse revokeAuthenticationToken(const string &instanceId, const Models::RevokeAuthenticationTokenRequest &request);

      /**
       * @summary Revokes an authentication token for a consumer.
       *
       * @description This API uses an access token issued by IDaaS to authenticate and authorize requests.
       * Make sure that the access token you provide has the \\"Manage authentication tokens\\" permission for the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The required scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * This operation can revoke only JWT authentication tokens.
       *
       * @param request RevokeAuthenticationTokenByConsumerRequest
       * @param headers RevokeAuthenticationTokenByConsumerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAuthenticationTokenByConsumerResponse
       */
      Models::RevokeAuthenticationTokenByConsumerResponse revokeAuthenticationTokenByConsumerWithOptions(const string &instanceId, const Models::RevokeAuthenticationTokenByConsumerRequest &request, const Models::RevokeAuthenticationTokenByConsumerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an authentication token for a consumer.
       *
       * @description This API uses an access token issued by IDaaS to authenticate and authorize requests.
       * Make sure that the access token you provide has the \\"Manage authentication tokens\\" permission for the built-in Privileged Access Management (PAM) application in IDaaS.
       * > The required scope is `urn:cloud:idaas:pam|authentication_token:manage`.
       * >Notice: 
       * This operation can revoke only JWT authentication tokens.
       *
       * @param request RevokeAuthenticationTokenByConsumerRequest
       * @return RevokeAuthenticationTokenByConsumerResponse
       */
      Models::RevokeAuthenticationTokenByConsumerResponse revokeAuthenticationTokenByConsumer(const string &instanceId, const Models::RevokeAuthenticationTokenByConsumerRequest &request);

      /**
       * @summary Revokes an access token or refresh token.
       *
       * @param request RevokeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTokenResponse
       */
      Models::RevokeTokenResponse revokeTokenWithOptions(const string &instanceId, const string &applicationId, const Models::RevokeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an access token or refresh token.
       *
       * @param request RevokeTokenRequest
       * @return RevokeTokenResponse
       */
      Models::RevokeTokenResponse revokeToken(const string &instanceId, const string &applicationId, const Models::RevokeTokenRequest &request);

      /**
       * @summary Sets the primary organization for an EIAM account. This operation removes the account from the old primary organization and adds it to the new one.
       *
       * @param request SetUserPrimaryOrganizationalUnitRequest
       * @param headers SetUserPrimaryOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPrimaryOrganizationalUnitResponse
       */
      Models::SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::SetUserPrimaryOrganizationalUnitRequest &request, const Models::SetUserPrimaryOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the primary organization for an EIAM account. This operation removes the account from the old primary organization and adds it to the new one.
       *
       * @param request SetUserPrimaryOrganizationalUnitRequest
       * @return SetUserPrimaryOrganizationalUnitResponse
       */
      Models::SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnit(const string &instanceId, const string &applicationId, const string &userId, const Models::SetUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary Updates the password for a specified EIAM account.
       *
       * @param request UpdateUserPasswordRequest
       * @param headers UpdateUserPasswordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPasswordResponse
       */
      Models::UpdateUserPasswordResponse updateUserPasswordWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::UpdateUserPasswordRequest &request, const Models::UpdateUserPasswordHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the password for a specified EIAM account.
       *
       * @param request UpdateUserPasswordRequest
       * @return UpdateUserPasswordResponse
       */
      Models::UpdateUserPasswordResponse updateUserPassword(const string &instanceId, const string &applicationId, const string &userId, const Models::UpdateUserPasswordRequest &request);

      /**
       * @summary Validates an authentication token.
       *
       * @description >Notice: 
       * This operation is supported only for JSON Web Token (JWT) authentication tokens.
       *
       * @param request ValidateAuthenticationTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateAuthenticationTokenResponse
       */
      Models::ValidateAuthenticationTokenResponse validateAuthenticationTokenWithOptions(const string &instanceId, const Models::ValidateAuthenticationTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates an authentication token.
       *
       * @description >Notice: 
       * This operation is supported only for JSON Web Token (JWT) authentication tokens.
       *
       * @param request ValidateAuthenticationTokenRequest
       * @return ValidateAuthenticationTokenResponse
       */
      Models::ValidateAuthenticationTokenResponse validateAuthenticationToken(const string &instanceId, const Models::ValidateAuthenticationTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
