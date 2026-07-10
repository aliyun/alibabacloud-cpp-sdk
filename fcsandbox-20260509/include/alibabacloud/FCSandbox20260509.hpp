// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FCSANDBOX20260509_HPP_
#define ALIBABACLOUD_FCSANDBOX20260509_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/FCSandbox20260509Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/FCSandbox20260509.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建 ApiKey
       *
       * @param request CreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 ApiKey
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

      /**
       * @summary 创建 Team
       *
       * @param request CreateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const Models::CreateTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Team
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const Models::CreateTeamRequest &request);

      /**
       * @summary 删除 ApiKey 
       *
       * @param request DeleteApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const string &apiKeyID, const Models::DeleteApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 ApiKey 
       *
       * @param request DeleteApiKeyRequest
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const string &apiKeyID, const Models::DeleteApiKeyRequest &request);

      /**
       * @summary 删除 quota 配置
       *
       * @param request DeleteQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuotaWithOptions(const Models::DeleteQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 quota 配置
       *
       * @param request DeleteQuotaRequest
       * @return DeleteQuotaResponse
       */
      Models::DeleteQuotaResponse deleteQuota(const Models::DeleteQuotaRequest &request);

      /**
       * @summary 删除 Team
       *
       * @param request DeleteTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const string &teamID, const Models::DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Team
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const string &teamID, const Models::DeleteTeamRequest &request);

      /**
       * @summary 查看 ApiKey
       *
       * @param request DescribeApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiKeyResponse
       */
      Models::DescribeApiKeyResponse describeApiKeyWithOptions(const string &apiKeyID, const Models::DescribeApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看 ApiKey
       *
       * @param request DescribeApiKeyRequest
       * @return DescribeApiKeyResponse
       */
      Models::DescribeApiKeyResponse describeApiKey(const string &apiKeyID, const Models::DescribeApiKeyRequest &request);

      /**
       * @summary 获取 quota 配置
       *
       * @param request DescribeQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQuotaResponse
       */
      Models::DescribeQuotaResponse describeQuotaWithOptions(const Models::DescribeQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 quota 配置
       *
       * @param request DescribeQuotaRequest
       * @return DescribeQuotaResponse
       */
      Models::DescribeQuotaResponse describeQuota(const Models::DescribeQuotaRequest &request);

      /**
       * @summary 获取Team详情
       *
       * @param request GetTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const string &teamID, const Models::GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Team详情
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const string &teamID, const Models::GetTeamRequest &request);

      /**
       * @summary 分页查询 ApiKey
       *
       * @param request ListApiKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询 ApiKey
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary 查询 quota 配置
       *
       * @param request ListQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaResponse
       */
      Models::ListQuotaResponse listQuotaWithOptions(const Models::ListQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 quota 配置
       *
       * @param request ListQuotaRequest
       * @return ListQuotaResponse
       */
      Models::ListQuotaResponse listQuota(const Models::ListQuotaRequest &request);

      /**
       * @summary 查询 Team 列表
       *
       * @param request ListTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const Models::ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Team 列表
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const Models::ListTeamsRequest &request);

      /**
       * @summary 重置 ApiKey 
       *
       * @param request ResetApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKeyWithOptions(const string &apiKeyID, const Models::ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置 ApiKey 
       *
       * @param request ResetApiKeyRequest
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKey(const string &apiKeyID, const Models::ResetApiKeyRequest &request);

      /**
       * @summary 更新 quota 配置
       *
       * @param request UpdateQuotaRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuotaWithOptions(const Models::UpdateQuotaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 quota 配置
       *
       * @param request UpdateQuotaRequest
       * @return UpdateQuotaResponse
       */
      Models::UpdateQuotaResponse updateQuota(const Models::UpdateQuotaRequest &request);

      /**
       * @summary 更新 Team
       *
       * @param request UpdateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const string &teamID, const Models::UpdateTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Team
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const string &teamID, const Models::UpdateTeamRequest &request);
  };
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
