// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SANDBOX20260820_HPP_
#define ALIBABACLOUD_SANDBOX20260820_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sandbox20260820Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sandbox20260820.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an API key.
       *
       * @param request CreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API key.
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

      /**
       * @summary Creates a team.
       *
       * @param request CreateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const Models::CreateTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a team.
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const Models::CreateTeamRequest &request);

      /**
       * @summary Creates a template.
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary Creates a template cache.
       *
       * @param request CreateTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateCacheResponse
       */
      Models::CreateTemplateCacheResponse createTemplateCacheWithOptions(const Models::CreateTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template cache.
       *
       * @param request CreateTemplateCacheRequest
       * @return CreateTemplateCacheResponse
       */
      Models::CreateTemplateCacheResponse createTemplateCache(const Models::CreateTemplateCacheRequest &request);

      /**
       * @summary Creates a storage volume.
       *
       * @param request CreateVolumeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVolumeResponse
       */
      Models::CreateVolumeResponse createVolumeWithOptions(const Models::CreateVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a storage volume.
       *
       * @param request CreateVolumeRequest
       * @return CreateVolumeResponse
       */
      Models::CreateVolumeResponse createVolume(const Models::CreateVolumeRequest &request);

      /**
       * @summary Deletes a specified API key.
       *
       * @param request DeleteApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const string &apiKeyID, const Models::DeleteApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified API key.
       *
       * @param request DeleteApiKeyRequest
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const string &apiKeyID, const Models::DeleteApiKeyRequest &request);

      /**
       * @summary Deletes the quota configuration for a specified team.
       *
       * @param request DeleteQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuotaWithOptions(const Models::DeleteQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the quota configuration for a specified team.
       *
       * @param request DeleteQuotaRequest
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuota(const Models::DeleteQuotaRequest &request);

      /**
       * @summary Deletes a specified team.
       *
       * @param request DeleteTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const string &teamID, const Models::DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified team.
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const string &teamID, const Models::DeleteTeamRequest &request);

      /**
       * @summary Deletes a template.
       *
       * @param request DeleteTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &templateID, const Models::DeleteTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a template.
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const string &templateID, const Models::DeleteTemplateRequest &request);

      /**
       * @summary Deletes the template cache.
       *
       * @param request DeleteTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateCacheResponse
       */
      Models::DeleteTemplateCacheResponse deleteTemplateCacheWithOptions(const string &templateID, const Models::DeleteTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the template cache.
       *
       * @param request DeleteTemplateCacheRequest
       * @return DeleteTemplateCacheResponse
       */
      Models::DeleteTemplateCacheResponse deleteTemplateCache(const string &templateID, const Models::DeleteTemplateCacheRequest &request);

      /**
       * @summary Deletes a specified storage volume.
       *
       * @param request DeleteVolumeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVolumeResponse
       */
      Models::DeleteVolumeResponse deleteVolumeWithOptions(const string &volumeID, const Models::DeleteVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified storage volume.
       *
       * @param request DeleteVolumeRequest
       * @return DeleteVolumeResponse
       */
      Models::DeleteVolumeResponse deleteVolume(const string &volumeID, const Models::DeleteVolumeRequest &request);

      /**
       * @summary Queries the details of a specified API key.
       *
       * @param request DescribeApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiKeyResponse
       */
      Models::DescribeApiKeyResponse describeApiKeyWithOptions(const string &apiKeyID, const Models::DescribeApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified API key.
       *
       * @param request DescribeApiKeyRequest
       * @return DescribeApiKeyResponse
       */
      Models::DescribeApiKeyResponse describeApiKey(const string &apiKeyID, const Models::DescribeApiKeyRequest &request);

      /**
       * @summary Queries the quota configuration of a specified team.
       *
       * @param request DescribeQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuotaResponse
       */
      Models::DescribeQuotaResponse describeQuotaWithOptions(const Models::DescribeQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota configuration of a specified team.
       *
       * @param request DescribeQuotaRequest
       * @return DescribeQuotaResponse
       */
      Models::DescribeQuotaResponse describeQuota(const Models::DescribeQuotaRequest &request);

      /**
       * @summary Queries the template cache.
       *
       * @param request DescribeTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateCacheResponse
       */
      Models::DescribeTemplateCacheResponse describeTemplateCacheWithOptions(const string &templateID, const Models::DescribeTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the template cache.
       *
       * @param request DescribeTemplateCacheRequest
       * @return DescribeTemplateCacheResponse
       */
      Models::DescribeTemplateCacheResponse describeTemplateCache(const string &templateID, const Models::DescribeTemplateCacheRequest &request);

      /**
       * @summary Queries the details of a specified team.
       *
       * @param request GetTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const string &teamID, const Models::GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified team.
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const string &teamID, const Models::GetTeamRequest &request);

      /**
       * @summary Queries a template.
       *
       * @param request GetTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &templateID, const Models::GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a template.
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &templateID, const Models::GetTemplateRequest &request);

      /**
       * @summary Queries the details of a specified storage volume.
       *
       * @param request GetVolumeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVolumeResponse
       */
      Models::GetVolumeResponse getVolumeWithOptions(const string &volumeID, const Models::GetVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified storage volume.
       *
       * @param request GetVolumeRequest
       * @return GetVolumeResponse
       */
      Models::GetVolumeResponse getVolume(const string &volumeID, const Models::GetVolumeRequest &request);

      /**
       * @summary Queries the list of API keys by using paging.
       *
       * @param request ListApiKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of API keys by using paging.
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary Performs a paging query on the quota configurations for the current account.
       *
       * @param request ListQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaResponse
       */
      Models::ListQuotaResponse listQuotaWithOptions(const Models::ListQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the quota configurations for the current account.
       *
       * @param request ListQuotaRequest
       * @return ListQuotaResponse
       */
      Models::ListQuotaResponse listQuota(const Models::ListQuotaRequest &request);

      /**
       * @summary Queries the list of teams by using paging.
       *
       * @param request ListTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const Models::ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of teams by using paging.
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const Models::ListTeamsRequest &request);

      /**
       * @summary Performs a paging query of template caches.
       *
       * @param request ListTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateCacheResponse
       */
      Models::ListTemplateCacheResponse listTemplateCacheWithOptions(const Models::ListTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query of template caches.
       *
       * @param request ListTemplateCacheRequest
       * @return ListTemplateCacheResponse
       */
      Models::ListTemplateCacheResponse listTemplateCache(const Models::ListTemplateCacheRequest &request);

      /**
       * @summary Performs a paged query on the template list by using paging.
       *
       * @param request ListTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the template list by using paging.
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary Queries a list of storage volumes by using paging.
       *
       * @param request ListVolumesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVolumesResponse
       */
      Models::ListVolumesResponse listVolumesWithOptions(const Models::ListVolumesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of storage volumes by using paging.
       *
       * @param request ListVolumesRequest
       * @return ListVolumesResponse
       */
      Models::ListVolumesResponse listVolumes(const Models::ListVolumesRequest &request);

      /**
       * @summary Resets a specified API key.
       *
       * @param request ResetApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKeyWithOptions(const string &apiKeyID, const Models::ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a specified API key.
       *
       * @param request ResetApiKeyRequest
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKey(const string &apiKeyID, const Models::ResetApiKeyRequest &request);

      /**
       * @summary Updates the configuration of a specified API key.
       *
       * @param request UpdateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKeyWithOptions(const string &apiKeyID, const Models::UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified API key.
       *
       * @param request UpdateApiKeyRequest
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKey(const string &apiKeyID, const Models::UpdateApiKeyRequest &request);

      /**
       * @summary Updates the quota configuration.
       *
       * @param request UpdateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuotaWithOptions(const Models::UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the quota configuration.
       *
       * @param request UpdateQuotaRequest
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuota(const Models::UpdateQuotaRequest &request);

      /**
       * @summary Updates the information of a specified team.
       *
       * @param request UpdateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const string &teamID, const Models::UpdateTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a specified team.
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const string &teamID, const Models::UpdateTeamRequest &request);

      /**
       * @summary Updates a template.
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &templateID, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a template.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &templateID, const Models::UpdateTemplateRequest &request);

      /**
       * @summary Updates the configuration of a specified storage volume.
       *
       * @param request UpdateVolumeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVolumeResponse
       */
      Models::UpdateVolumeResponse updateVolumeWithOptions(const string &volumeID, const Models::UpdateVolumeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified storage volume.
       *
       * @param request UpdateVolumeRequest
       * @return UpdateVolumeResponse
       */
      Models::UpdateVolumeResponse updateVolume(const string &volumeID, const Models::UpdateVolumeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
