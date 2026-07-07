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
       * @summary 获取 OSS STS 令牌
       *
       * @description 获取到的SecurityToken有效期为15分钟。
       *
       * @param request GetOssStsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssStsTokenResponse
       */
      Models::GetOssStsTokenResponse getOssStsTokenWithOptions(const Models::GetOssStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 OSS STS 令牌
       *
       * @description 获取到的SecurityToken有效期为15分钟。
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
       * @summary 设置租户技能启用状态
       *
       * @param request SetTenantSkillEnabledRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTenantSkillEnabledResponse
       */
      Models::SetTenantSkillEnabledResponse setTenantSkillEnabledWithOptions(const Models::SetTenantSkillEnabledRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置租户技能启用状态
       *
       * @param request SetTenantSkillEnabledRequest
       * @return SetTenantSkillEnabledResponse
       */
      Models::SetTenantSkillEnabledResponse setTenantSkillEnabled(const Models::SetTenantSkillEnabledRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ecd20210602
#endif
