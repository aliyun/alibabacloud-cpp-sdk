// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTIDENTITY20250901_HPP_
#define ALIBABACLOUD_AGENTIDENTITY20250901_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentIdentity20250901Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentIdentity20250901.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建一个 API 密钥凭证提供商
       *
       * @param request CreateAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAPIKeyCredentialProviderResponse
       */
      Models::CreateAPIKeyCredentialProviderResponse createAPIKeyCredentialProviderWithOptions(const Models::CreateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个 API 密钥凭证提供商
       *
       * @param request CreateAPIKeyCredentialProviderRequest
       * @return CreateAPIKeyCredentialProviderResponse
       */
      Models::CreateAPIKeyCredentialProviderResponse createAPIKeyCredentialProvider(const Models::CreateAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 创建IdentityProvider
       *
       * @param tmpReq CreateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const Models::CreateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建IdentityProvider
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const Models::CreateIdentityProviderRequest &request);

      /**
       * @summary 创建 OAuth2 凭证提供商
       *
       * @param tmpReq CreateOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOAuth2CredentialProviderResponse
       */
      Models::CreateOAuth2CredentialProviderResponse createOAuth2CredentialProviderWithOptions(const Models::CreateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 OAuth2 凭证提供商
       *
       * @param request CreateOAuth2CredentialProviderRequest
       * @return CreateOAuth2CredentialProviderResponse
       */
      Models::CreateOAuth2CredentialProviderResponse createOAuth2CredentialProvider(const Models::CreateOAuth2CredentialProviderRequest &request);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param tmpReq CreateWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkloadIdentityResponse
       */
      Models::CreateWorkloadIdentityResponse createWorkloadIdentityWithOptions(const Models::CreateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param request CreateWorkloadIdentityRequest
       * @return CreateWorkloadIdentityResponse
       */
      Models::CreateWorkloadIdentityResponse createWorkloadIdentity(const Models::CreateWorkloadIdentityRequest &request);

      /**
       * @summary 删除一个 API 密钥凭证提供商
       *
       * @param request DeleteAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAPIKeyCredentialProviderResponse
       */
      Models::DeleteAPIKeyCredentialProviderResponse deleteAPIKeyCredentialProviderWithOptions(const Models::DeleteAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个 API 密钥凭证提供商
       *
       * @param request DeleteAPIKeyCredentialProviderRequest
       * @return DeleteAPIKeyCredentialProviderResponse
       */
      Models::DeleteAPIKeyCredentialProviderResponse deleteAPIKeyCredentialProvider(const Models::DeleteAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 删除IdentityProvider
       *
       * @param request DeleteIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const Models::DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除IdentityProvider
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary 删除 OAuth2 凭证提供商
       *
       * @param request DeleteOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOAuth2CredentialProviderResponse
       */
      Models::DeleteOAuth2CredentialProviderResponse deleteOAuth2CredentialProviderWithOptions(const Models::DeleteOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 OAuth2 凭证提供商
       *
       * @param request DeleteOAuth2CredentialProviderRequest
       * @return DeleteOAuth2CredentialProviderResponse
       */
      Models::DeleteOAuth2CredentialProviderResponse deleteOAuth2CredentialProvider(const Models::DeleteOAuth2CredentialProviderRequest &request);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkloadIdentityResponse
       */
      Models::DeleteWorkloadIdentityResponse deleteWorkloadIdentityWithOptions(const Models::DeleteWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteWorkloadIdentityRequest
       * @return DeleteWorkloadIdentityResponse
       */
      Models::DeleteWorkloadIdentityResponse deleteWorkloadIdentity(const Models::DeleteWorkloadIdentityRequest &request);

      /**
       * @summary 查询一个 API 密钥凭证提供商
       *
       * @param request GetAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAPIKeyCredentialProviderResponse
       */
      Models::GetAPIKeyCredentialProviderResponse getAPIKeyCredentialProviderWithOptions(const Models::GetAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个 API 密钥凭证提供商
       *
       * @param request GetAPIKeyCredentialProviderRequest
       * @return GetAPIKeyCredentialProviderResponse
       */
      Models::GetAPIKeyCredentialProviderResponse getAPIKeyCredentialProvider(const Models::GetAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const Models::GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const Models::GetIdentityProviderRequest &request);

      /**
       * @summary 查询 OAuth2 凭证提供商
       *
       * @param request GetOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOAuth2CredentialProviderResponse
       */
      Models::GetOAuth2CredentialProviderResponse getOAuth2CredentialProviderWithOptions(const Models::GetOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 OAuth2 凭证提供商
       *
       * @param request GetOAuth2CredentialProviderRequest
       * @return GetOAuth2CredentialProviderResponse
       */
      Models::GetOAuth2CredentialProviderResponse getOAuth2CredentialProvider(const Models::GetOAuth2CredentialProviderRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkloadIdentityResponse
       */
      Models::GetWorkloadIdentityResponse getWorkloadIdentityWithOptions(const Models::GetWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetWorkloadIdentityRequest
       * @return GetWorkloadIdentityResponse
       */
      Models::GetWorkloadIdentityResponse getWorkloadIdentity(const Models::GetWorkloadIdentityRequest &request);

      /**
       * @summary 列出 API 密钥凭证提供商
       *
       * @param request ListAPIKeyCredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAPIKeyCredentialProvidersResponse
       */
      Models::ListAPIKeyCredentialProvidersResponse listAPIKeyCredentialProvidersWithOptions(const Models::ListAPIKeyCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 API 密钥凭证提供商
       *
       * @param request ListAPIKeyCredentialProvidersRequest
       * @return ListAPIKeyCredentialProvidersResponse
       */
      Models::ListAPIKeyCredentialProvidersResponse listAPIKeyCredentialProviders(const Models::ListAPIKeyCredentialProvidersRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListIdentityProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const Models::ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary 列出 OAuth2 凭证提供商
       *
       * @param request ListOAuth2CredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOAuth2CredentialProvidersResponse
       */
      Models::ListOAuth2CredentialProvidersResponse listOAuth2CredentialProvidersWithOptions(const Models::ListOAuth2CredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 OAuth2 凭证提供商
       *
       * @param request ListOAuth2CredentialProvidersRequest
       * @return ListOAuth2CredentialProvidersResponse
       */
      Models::ListOAuth2CredentialProvidersResponse listOAuth2CredentialProviders(const Models::ListOAuth2CredentialProvidersRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListWorkloadIdentitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkloadIdentitiesResponse
       */
      Models::ListWorkloadIdentitiesResponse listWorkloadIdentitiesWithOptions(const Models::ListWorkloadIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListWorkloadIdentitiesRequest
       * @return ListWorkloadIdentitiesResponse
       */
      Models::ListWorkloadIdentitiesResponse listWorkloadIdentities(const Models::ListWorkloadIdentitiesRequest &request);

      /**
       * @summary 更新一个 API 密钥凭证提供商
       *
       * @param request UpdateAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAPIKeyCredentialProviderResponse
       */
      Models::UpdateAPIKeyCredentialProviderResponse updateAPIKeyCredentialProviderWithOptions(const Models::UpdateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个 API 密钥凭证提供商
       *
       * @param request UpdateAPIKeyCredentialProviderRequest
       * @return UpdateAPIKeyCredentialProviderResponse
       */
      Models::UpdateAPIKeyCredentialProviderResponse updateAPIKeyCredentialProvider(const Models::UpdateAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 更新IdentityProvider
       *
       * @param tmpReq UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新IdentityProvider
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary 修改 OAuth2 凭证提供商
       *
       * @param tmpReq UpdateOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOAuth2CredentialProviderResponse
       */
      Models::UpdateOAuth2CredentialProviderResponse updateOAuth2CredentialProviderWithOptions(const Models::UpdateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改 OAuth2 凭证提供商
       *
       * @param request UpdateOAuth2CredentialProviderRequest
       * @return UpdateOAuth2CredentialProviderResponse
       */
      Models::UpdateOAuth2CredentialProviderResponse updateOAuth2CredentialProvider(const Models::UpdateOAuth2CredentialProviderRequest &request);

      /**
       * @summary 创建应用
       *
       * @param tmpReq UpdateWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkloadIdentityResponse
       */
      Models::UpdateWorkloadIdentityResponse updateWorkloadIdentityWithOptions(const Models::UpdateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request UpdateWorkloadIdentityRequest
       * @return UpdateWorkloadIdentityResponse
       */
      Models::UpdateWorkloadIdentityResponse updateWorkloadIdentity(const Models::UpdateWorkloadIdentityRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
