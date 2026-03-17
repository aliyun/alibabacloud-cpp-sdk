// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BAILIANCONTROL20240816_HPP_
#define ALIBABACLOUD_BAILIANCONTROL20240816_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/BailianControl20240816Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/BailianControl20240816.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianControl20240816
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 查询 apiKey
       *
       * @param request GetApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKeyWithOptions(const Models::GetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 apiKey
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
  };
} // namespace AlibabaCloud
} // namespace BailianControl20240816
#endif
