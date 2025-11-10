// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OPENAPIEXPLORER20241130_HPP_
#define ALIBABACLOUD_OPENAPIEXPLORER20241130_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OpenAPIExplorer20241130Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OpenAPIExplorer20241130.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 验证 Terraform HCL 语法
       *
       * @param request ApiMcpServerValidateHclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApiMcpServerValidateHclResponse
       */
      Models::ApiMcpServerValidateHclResponse apiMcpServerValidateHclWithOptions(const Models::ApiMcpServerValidateHclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证 Terraform HCL 语法
       *
       * @param request ApiMcpServerValidateHclRequest
       * @return ApiMcpServerValidateHclResponse
       */
      Models::ApiMcpServerValidateHclResponse apiMcpServerValidateHcl(const Models::ApiMcpServerValidateHclRequest &request);

      /**
       * @summary 创建ApiMcpServer
       *
       * @param request CreateApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiMcpServerResponse
       */
      Models::CreateApiMcpServerResponse createApiMcpServerWithOptions(const Models::CreateApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建ApiMcpServer
       *
       * @param request CreateApiMcpServerRequest
       * @return CreateApiMcpServerResponse
       */
      Models::CreateApiMcpServerResponse createApiMcpServer(const Models::CreateApiMcpServerRequest &request);

      /**
       * @summary 删除ApiMcpServer
       *
       * @param request DeleteApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiMcpServerResponse
       */
      Models::DeleteApiMcpServerResponse deleteApiMcpServerWithOptions(const Models::DeleteApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ApiMcpServer
       *
       * @param request DeleteApiMcpServerRequest
       * @return DeleteApiMcpServerResponse
       */
      Models::DeleteApiMcpServerResponse deleteApiMcpServer(const Models::DeleteApiMcpServerRequest &request);

      /**
       * @summary 动态生成Aliyun CLI命令
       *
       * @param tmpReq GenerateCLICommandRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCLICommandResponse
       */
      Models::GenerateCLICommandResponse generateCLICommandWithOptions(const Models::GenerateCLICommandRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 动态生成Aliyun CLI命令
       *
       * @param request GenerateCLICommandRequest
       * @return GenerateCLICommandResponse
       */
      Models::GenerateCLICommandResponse generateCLICommand(const Models::GenerateCLICommandRequest &request);

      /**
       * @summary 获取产品相关接口的开放元数据
       *
       * @param request GetApiDefinitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiDefinitionResponse
       */
      Models::GetApiDefinitionResponse getApiDefinitionWithOptions(const Models::GetApiDefinitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取产品相关接口的开放元数据
       *
       * @param request GetApiDefinitionRequest
       * @return GetApiDefinitionResponse
       */
      Models::GetApiDefinitionResponse getApiDefinition(const Models::GetApiDefinitionRequest &request);

      /**
       * @summary 查询 ApiMcpServer
       *
       * @param request GetApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiMcpServerResponse
       */
      Models::GetApiMcpServerResponse getApiMcpServerWithOptions(const Models::GetApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 ApiMcpServer
       *
       * @param request GetApiMcpServerRequest
       * @return GetApiMcpServerResponse
       */
      Models::GetApiMcpServerResponse getApiMcpServer(const Models::GetApiMcpServerRequest &request);

      /**
       * @summary Queries an error solution by error code.
       *
       * @description You can call this API operation to query public information instead of special information, such as the account ownership. Permissions on this API operation cannot be granted to other members.
       *
       * @param request GetErrorCodeSolutionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErrorCodeSolutionsResponse
       */
      Models::GetErrorCodeSolutionsResponse getErrorCodeSolutionsWithOptions(const Models::GetErrorCodeSolutionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an error solution by error code.
       *
       * @description You can call this API operation to query public information instead of special information, such as the account ownership. Permissions on this API operation cannot be granted to other members.
       *
       * @param request GetErrorCodeSolutionsRequest
       * @return GetErrorCodeSolutionsResponse
       */
      Models::GetErrorCodeSolutionsResponse getErrorCodeSolutions(const Models::GetErrorCodeSolutionsRequest &request);

      /**
       * @summary Queries the log of an API call performed by using the current account based on the returned request ID of the API to troubleshoot issues.
       *
       * @description Permissions on this API cannot be granted to other members.
       *
       * @param request GetOwnRequestLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOwnRequestLogResponse
       */
      Models::GetOwnRequestLogResponse getOwnRequestLogWithOptions(const Models::GetOwnRequestLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of an API call performed by using the current account based on the returned request ID of the API to troubleshoot issues.
       *
       * @description Permissions on this API cannot be granted to other members.
       *
       * @param request GetOwnRequestLogRequest
       * @return GetOwnRequestLogResponse
       */
      Models::GetOwnRequestLogResponse getOwnRequestLog(const Models::GetOwnRequestLogRequest &request);

      /**
       * @summary 获取产品的接入点信息
       *
       * @param request GetProductEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductEndpointsResponse
       */
      Models::GetProductEndpointsResponse getProductEndpointsWithOptions(const Models::GetProductEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取产品的接入点信息
       *
       * @param request GetProductEndpointsRequest
       * @return GetProductEndpointsResponse
       */
      Models::GetProductEndpointsResponse getProductEndpoints(const Models::GetProductEndpointsRequest &request);

      /**
       * @summary Queries the log of an API call based on the returned request ID of the API to troubleshoot issues.
       *
       * @description You can grant permissions to a Resource Access Management (RAM) user or assume a role to query the log of an API call across RAM users or Alibaba Cloud accounts. For more information, see [Grant permissions to troubleshoot API errors across accounts](https://help.aliyun.com/document_detail/2868101.html).
       *
       * @param request GetRequestLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRequestLogResponse
       */
      Models::GetRequestLogResponse getRequestLogWithOptions(const Models::GetRequestLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log of an API call based on the returned request ID of the API to troubleshoot issues.
       *
       * @description You can grant permissions to a Resource Access Management (RAM) user or assume a role to query the log of an API call across RAM users or Alibaba Cloud accounts. For more information, see [Grant permissions to troubleshoot API errors across accounts](https://help.aliyun.com/document_detail/2868101.html).
       *
       * @param request GetRequestLogRequest
       * @return GetRequestLogResponse
       */
      Models::GetRequestLogResponse getRequestLog(const Models::GetRequestLogRequest &request);

      /**
       * @summary 获取产品的开放元数据
       *
       * @param request ListApiDefinitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiDefinitionsResponse
       */
      Models::ListApiDefinitionsResponse listApiDefinitionsWithOptions(const Models::ListApiDefinitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取产品的开放元数据
       *
       * @param request ListApiDefinitionsRequest
       * @return ListApiDefinitionsResponse
       */
      Models::ListApiDefinitionsResponse listApiDefinitions(const Models::ListApiDefinitionsRequest &request);

      /**
       * @summary 查询系统工具列表
       *
       * @param request ListApiMcpServerSystemToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiMcpServerSystemToolsResponse
       */
      Models::ListApiMcpServerSystemToolsResponse listApiMcpServerSystemToolsWithOptions(const Models::ListApiMcpServerSystemToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询系统工具列表
       *
       * @param request ListApiMcpServerSystemToolsRequest
       * @return ListApiMcpServerSystemToolsResponse
       */
      Models::ListApiMcpServerSystemToolsResponse listApiMcpServerSystemTools(const Models::ListApiMcpServerSystemToolsRequest &request);

      /**
       * @summary 列出资源ApiMcpServer
       *
       * @param request ListApiMcpServersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiMcpServersResponse
       */
      Models::ListApiMcpServersResponse listApiMcpServersWithOptions(const Models::ListApiMcpServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源ApiMcpServer
       *
       * @param request ListApiMcpServersRequest
       * @return ListApiMcpServersResponse
       */
      Models::ListApiMcpServersResponse listApiMcpServers(const Models::ListApiMcpServersRequest &request);

      /**
       * @summary 更新UpdateApiMcpServer
       *
       * @param request UpdateApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiMcpServerResponse
       */
      Models::UpdateApiMcpServerResponse updateApiMcpServerWithOptions(const Models::UpdateApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新UpdateApiMcpServer
       *
       * @param request UpdateApiMcpServerRequest
       * @return UpdateApiMcpServerResponse
       */
      Models::UpdateApiMcpServerResponse updateApiMcpServer(const Models::UpdateApiMcpServerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
