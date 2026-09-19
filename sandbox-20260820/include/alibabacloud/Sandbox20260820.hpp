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
       * @summary 创建 Template
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 Template
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary 创建模板缓存
       *
       * @param request CreateTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateCacheResponse
       */
      Models::CreateTemplateCacheResponse createTemplateCacheWithOptions(const Models::CreateTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模板缓存
       *
       * @param request CreateTemplateCacheRequest
       * @return CreateTemplateCacheResponse
       */
      Models::CreateTemplateCacheResponse createTemplateCache(const Models::CreateTemplateCacheRequest &request);

      /**
       * @summary 删除 Template
       *
       * @param request DeleteTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &templateID, const Models::DeleteTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 Template
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const string &templateID, const Models::DeleteTemplateRequest &request);

      /**
       * @summary 删除模板缓存
       *
       * @param request DeleteTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateCacheResponse
       */
      Models::DeleteTemplateCacheResponse deleteTemplateCacheWithOptions(const string &templateID, const Models::DeleteTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模板缓存
       *
       * @param request DeleteTemplateCacheRequest
       * @return DeleteTemplateCacheResponse
       */
      Models::DeleteTemplateCacheResponse deleteTemplateCache(const string &templateID, const Models::DeleteTemplateCacheRequest &request);

      /**
       * @summary 查询模板缓存
       *
       * @param request DescribeTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateCacheResponse
       */
      Models::DescribeTemplateCacheResponse describeTemplateCacheWithOptions(const string &templateID, const Models::DescribeTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模板缓存
       *
       * @param request DescribeTemplateCacheRequest
       * @return DescribeTemplateCacheResponse
       */
      Models::DescribeTemplateCacheResponse describeTemplateCache(const string &templateID, const Models::DescribeTemplateCacheRequest &request);

      /**
       * @summary 查询 Template
       *
       * @param request GetTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &templateID, const Models::GetTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 Template
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &templateID, const Models::GetTemplateRequest &request);

      /**
       * @summary 分页查询模板缓存
       *
       * @param request ListTemplateCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplateCacheResponse
       */
      Models::ListTemplateCacheResponse listTemplateCacheWithOptions(const Models::ListTemplateCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询模板缓存
       *
       * @param request ListTemplateCacheRequest
       * @return ListTemplateCacheResponse
       */
      Models::ListTemplateCacheResponse listTemplateCache(const Models::ListTemplateCacheRequest &request);

      /**
       * @summary 分页查询 Template
       *
       * @param request ListTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询 Template
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary 更新 Template
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &templateID, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Template
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &templateID, const Models::UpdateTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
