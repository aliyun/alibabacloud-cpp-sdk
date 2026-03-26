// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MAAS20260318_HPP_
#define ALIBABACLOUD_MAAS20260318_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MaaS20260318Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MaaS20260318.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaaS20260318
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
       * @summary 删除apiKey
       *
       * @param request DeleteApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const Models::DeleteApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除apiKey
       *
       * @param request DeleteApiKeyRequest
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const Models::DeleteApiKeyRequest &request);

      /**
       * @summary 查询ApiKey详情
       *
       * @param request GetApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKeyWithOptions(const Models::GetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ApiKey详情
       *
       * @param request GetApiKeyRequest
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKey(const Models::GetApiKeyRequest &request);

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
       * @summary 编辑apiKey的描述
       *
       * @param request UpdateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKeyWithOptions(const Models::UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑apiKey的描述
       *
       * @param request UpdateApiKeyRequest
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKey(const Models::UpdateApiKeyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaaS20260318
#endif
