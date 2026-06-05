// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELSTUDIO20260210_HPP_
#define ALIBABACLOUD_MODELSTUDIO20260210_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ModelStudio20260210Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ModelStudio20260210.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建ApiKey
       *
       * @param request CreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建ApiKey
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

      /**
       * @summary 创建业务空间
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建业务空间
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary 删除apiKey
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除apiKey
       *
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const string &apiKeyId);

      /**
       * @summary 删除业务空间
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除业务空间
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary 禁用API Key
       *
       * @param request DisableApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApiKeyResponse
       */
      Models::DisableApiKeyResponse disableApiKeyWithOptions(const string &apiKeyId, const Models::DisableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用API Key
       *
       * @param request DisableApiKeyRequest
       * @return DisableApiKeyResponse
       */
      Models::DisableApiKeyResponse disableApiKey(const string &apiKeyId, const Models::DisableApiKeyRequest &request);

      /**
       * @summary 启用API Key
       *
       * @param request EnableApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApiKeyResponse
       */
      Models::EnableApiKeyResponse enableApiKeyWithOptions(const string &apiKeyId, const Models::EnableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用API Key
       *
       * @param request EnableApiKeyRequest
       * @return EnableApiKeyResponse
       */
      Models::EnableApiKeyResponse enableApiKey(const string &apiKeyId, const Models::EnableApiKeyRequest &request);

      /**
       * @summary 查询ApiKey详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ApiKey详情
       *
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKey(const string &apiKeyId);

      /**
       * @summary 获取ApiKey列表
       *
       * @param request ListApiKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取ApiKey列表
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary 业务空间列表
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 业务空间列表
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary 重置API Key
       *
       * @param request ResetApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKeyWithOptions(const string &apiKeyId, const Models::ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置API Key
       *
       * @param request ResetApiKeyRequest
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKey(const string &apiKeyId, const Models::ResetApiKeyRequest &request);

      /**
       * @summary 编辑apiKey的描述
       *
       * @param request UpdateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKeyWithOptions(const string &apiKeyId, const Models::UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑apiKey的描述
       *
       * @param request UpdateApiKeyRequest
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKey(const string &apiKeyId, const Models::UpdateApiKeyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
