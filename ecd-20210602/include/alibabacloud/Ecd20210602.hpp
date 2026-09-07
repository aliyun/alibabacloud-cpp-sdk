// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ECD20210602_HPP_
#define ALIBABACLOUD_ECD20210602_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ecd20210602Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ecd20210602.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20210602
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a tenant skill.
       *
       * @param tmpReq CreateTenantSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTenantSkillResponse
       */
      Models::CreateTenantSkillResponse createTenantSkillWithOptions(const Models::CreateTenantSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tenant skill.
       *
       * @param request CreateTenantSkillRequest
       * @return CreateTenantSkillResponse
       */
      Models::CreateTenantSkillResponse createTenantSkill(const Models::CreateTenantSkillRequest &request);

      /**
       * @summary Deletes skills in batches.
       *
       * @param request DeleteTenantSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTenantSkillsResponse
       */
      Models::DeleteTenantSkillsResponse deleteTenantSkillsWithOptions(const Models::DeleteTenantSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes skills in batches.
       *
       * @param request DeleteTenantSkillsRequest
       * @return DeleteTenantSkillsResponse
       */
      Models::DeleteTenantSkillsResponse deleteTenantSkills(const Models::DeleteTenantSkillsRequest &request);

      /**
       * @summary Retrieves a temporary OSS token for authentication.
       *
       * @description The obtained SecurityToken is valid for 15 minutes.
       *
       * @param request GetOssStsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssStsTokenResponse
       */
      Models::GetOssStsTokenResponse getOssStsTokenWithOptions(const Models::GetOssStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a temporary OSS token for authentication.
       *
       * @description The obtained SecurityToken is valid for 15 minutes.
       *
       * @param request GetOssStsTokenRequest
       * @return GetOssStsTokenResponse
       */
      Models::GetOssStsTokenResponse getOssStsToken(const Models::GetOssStsTokenRequest &request);

      /**
       * @summary Retrieves the parsed content of a skill package.
       *
       * @description Call the ParseSkillPackage operation first. Poll this operation every 3 seconds.
       *
       * @param request GetParseProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetParseProgressResponse
       */
      Models::GetParseProgressResponse getParseProgressWithOptions(const Models::GetParseProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the parsed content of a skill package.
       *
       * @description Call the ParseSkillPackage operation first. Poll this operation every 3 seconds.
       *
       * @param request GetParseProgressRequest
       * @return GetParseProgressResponse
       */
      Models::GetParseProgressResponse getParseProgress(const Models::GetParseProgressRequest &request);

      /**
       * @summary Queries the list of identities for which security policies are enabled.
       *
       * @description The resource type supports only cloud computers.
       *
       * @param request ListSecureSkillIdentitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecureSkillIdentitiesResponse
       */
      Models::ListSecureSkillIdentitiesResponse listSecureSkillIdentitiesWithOptions(const Models::ListSecureSkillIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of identities for which security policies are enabled.
       *
       * @description The resource type supports only cloud computers.
       *
       * @param request ListSecureSkillIdentitiesRequest
       * @return ListSecureSkillIdentitiesResponse
       */
      Models::ListSecureSkillIdentitiesResponse listSecureSkillIdentities(const Models::ListSecureSkillIdentitiesRequest &request);

      /**
       * @summary Queries the list of identities authorized for a skill.
       *
       * @description Authorized objects support only cloud computers.
       *
       * @param request ListSkillAuthedIdentitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillAuthedIdentitiesResponse
       */
      Models::ListSkillAuthedIdentitiesResponse listSkillAuthedIdentitiesWithOptions(const Models::ListSkillAuthedIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of identities authorized for a skill.
       *
       * @description Authorized objects support only cloud computers.
       *
       * @param request ListSkillAuthedIdentitiesRequest
       * @return ListSkillAuthedIdentitiesResponse
       */
      Models::ListSkillAuthedIdentitiesResponse listSkillAuthedIdentities(const Models::ListSkillAuthedIdentitiesRequest &request);

      /**
       * @summary Queries the list of skills.
       *
       * @param request ListSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of skills.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary Performs a paging query of desktop applications visible to the current tenant, with support for filtering by application name and source.
       *
       * @description The query scope is determined by the caller identity and includes applications uploaded by the current tenant and marketplace applications that the tenant is authorized to view. The visibility of marketplace applications is subject to authorization and display policy restrictions. The authorization and auto-installation information in the list represents application configurations and does not indicate the actual installation result on a specific device.
       * - **Application identity**: Id is a numeric application ID, and AppUid is a character string UID. The two cannot be used interchangeably.
       * - **Authorization scope**: DistributeType is used together with AuthType. For example, `AuthType=auth_type_user` and `DistributeType=ALL` indicate that the application is allocated to all users on a per-user dimension.
       * - **Auto-installation**: AutoInstallmentType specifies the auto-installation scope policy, which is used to distinguish between full, partial, or disabled auto-installation.
       * - **Partial auto-installation**: When AutoInstallmentType is set to 1, use SetAutoInstallUser or SetAutoInstallDesktop to configure specific users or cloud desktops. OperationType=1 indicates enabled, and OperationType=2 indicates disabled. ListTenantApp only returns configurations and does not modify auto-installation settings.
       * - **Capabilities and execution results**: The silent installation capability is application metadata returned in the response. To determine the actual installation or execution result on a device, use the corresponding execution result query capability.
       * - **Optional information**: Information such as timestamps may be empty.
       * - **Compatibility handling**: Extension information and subtype do not use closed enumerations. Clients should ignore unrecognized extension fields and be compatible with new enumeration values.
       *
       * @param request ListTenantAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTenantAppResponse
       */
      Models::ListTenantAppResponse listTenantAppWithOptions(const Models::ListTenantAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of desktop applications visible to the current tenant, with support for filtering by application name and source.
       *
       * @description The query scope is determined by the caller identity and includes applications uploaded by the current tenant and marketplace applications that the tenant is authorized to view. The visibility of marketplace applications is subject to authorization and display policy restrictions. The authorization and auto-installation information in the list represents application configurations and does not indicate the actual installation result on a specific device.
       * - **Application identity**: Id is a numeric application ID, and AppUid is a character string UID. The two cannot be used interchangeably.
       * - **Authorization scope**: DistributeType is used together with AuthType. For example, `AuthType=auth_type_user` and `DistributeType=ALL` indicate that the application is allocated to all users on a per-user dimension.
       * - **Auto-installation**: AutoInstallmentType specifies the auto-installation scope policy, which is used to distinguish between full, partial, or disabled auto-installation.
       * - **Partial auto-installation**: When AutoInstallmentType is set to 1, use SetAutoInstallUser or SetAutoInstallDesktop to configure specific users or cloud desktops. OperationType=1 indicates enabled, and OperationType=2 indicates disabled. ListTenantApp only returns configurations and does not modify auto-installation settings.
       * - **Capabilities and execution results**: The silent installation capability is application metadata returned in the response. To determine the actual installation or execution result on a device, use the corresponding execution result query capability.
       * - **Optional information**: Information such as timestamps may be empty.
       * - **Compatibility handling**: Extension information and subtype do not use closed enumerations. Clients should ignore unrecognized extension fields and be compatible with new enumeration values.
       *
       * @param request ListTenantAppRequest
       * @return ListTenantAppResponse
       */
      Models::ListTenantAppResponse listTenantApp(const Models::ListTenantAppRequest &request);

      /**
       * @summary Parses a skill package.
       *
       * @param request ParseSkillPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ParseSkillPackageResponse
       */
      Models::ParseSkillPackageResponse parseSkillPackageWithOptions(const Models::ParseSkillPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses a skill package.
       *
       * @param request ParseSkillPackageRequest
       * @return ParseSkillPackageResponse
       */
      Models::ParseSkillPackageResponse parseSkillPackage(const Models::ParseSkillPackageRequest &request);

      /**
       * @summary Sets skill permissions for an identity.
       *
       * @description The authorized object supports only cloud computers.
       *
       * @param request SetIdentitySkillAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentitySkillAuthResponse
       */
      Models::SetIdentitySkillAuthResponse setIdentitySkillAuthWithOptions(const Models::SetIdentitySkillAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets skill permissions for an identity.
       *
       * @description The authorized object supports only cloud computers.
       *
       * @param request SetIdentitySkillAuthRequest
       * @return SetIdentitySkillAuthResponse
       */
      Models::SetIdentitySkillAuthResponse setIdentitySkillAuth(const Models::SetIdentitySkillAuthRequest &request);

      /**
       * @summary Sets the security policy for identity skills.
       *
       * @description The resource type supports only cloud computers.
       *
       * @param request SetIdentitySkillSecurityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentitySkillSecurityResponse
       */
      Models::SetIdentitySkillSecurityResponse setIdentitySkillSecurityWithOptions(const Models::SetIdentitySkillSecurityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the security policy for identity skills.
       *
       * @description The resource type supports only cloud computers.
       *
       * @param request SetIdentitySkillSecurityRequest
       * @return SetIdentitySkillSecurityResponse
       */
      Models::SetIdentitySkillSecurityResponse setIdentitySkillSecurity(const Models::SetIdentitySkillSecurityRequest &request);

      /**
       * @summary Sets the enabling status of skills at the tenant level.
       *
       * @param request SetTenantSkillEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTenantSkillEnabledResponse
       */
      Models::SetTenantSkillEnabledResponse setTenantSkillEnabledWithOptions(const Models::SetTenantSkillEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the enabling status of skills at the tenant level.
       *
       * @param request SetTenantSkillEnabledRequest
       * @return SetTenantSkillEnabledResponse
       */
      Models::SetTenantSkillEnabledResponse setTenantSkillEnabled(const Models::SetTenantSkillEnabledRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
