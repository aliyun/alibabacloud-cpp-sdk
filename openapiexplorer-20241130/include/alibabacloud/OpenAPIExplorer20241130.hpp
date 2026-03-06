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
       * @summary Validates the syntax of HashiCorp Configuration Language (HCL) for Terraform.
       *
       * @param request ApiMcpServerValidateHclRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApiMcpServerValidateHclResponse
       */
      Models::ApiMcpServerValidateHclResponse apiMcpServerValidateHclWithOptions(const Models::ApiMcpServerValidateHclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the syntax of HashiCorp Configuration Language (HCL) for Terraform.
       *
       * @param request ApiMcpServerValidateHclRequest
       * @return ApiMcpServerValidateHclResponse
       */
      Models::ApiMcpServerValidateHclResponse apiMcpServerValidateHcl(const Models::ApiMcpServerValidateHclRequest &request);

      /**
       * @summary Creates an API MCP service.
       *
       * @param request CreateApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiMcpServerResponse
       */
      Models::CreateApiMcpServerResponse createApiMcpServerWithOptions(const Models::CreateApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API MCP service.
       *
       * @param request CreateApiMcpServerRequest
       * @return CreateApiMcpServerResponse
       */
      Models::CreateApiMcpServerResponse createApiMcpServer(const Models::CreateApiMcpServerRequest &request);

      /**
       * @summary Deletes an API MCP service.
       *
       * @param request DeleteApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiMcpServerResponse
       */
      Models::DeleteApiMcpServerResponse deleteApiMcpServerWithOptions(const Models::DeleteApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API MCP service.
       *
       * @param request DeleteApiMcpServerRequest
       * @return DeleteApiMcpServerResponse
       */
      Models::DeleteApiMcpServerResponse deleteApiMcpServer(const Models::DeleteApiMcpServerRequest &request);

      /**
       * @summary Generates commands for the Alibaba Cloud command-line interface (CLI).
       *
       * @param tmpReq GenerateCLICommandRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCLICommandResponse
       */
      Models::GenerateCLICommandResponse generateCLICommandWithOptions(const Models::GenerateCLICommandRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates commands for the Alibaba Cloud command-line interface (CLI).
       *
       * @param request GenerateCLICommandRequest
       * @return GenerateCLICommandResponse
       */
      Models::GenerateCLICommandResponse generateCLICommand(const Models::GenerateCLICommandRequest &request);

      /**
       * @summary Retrieves the OpenAPI metadata for an API in a product.
       *
       * @param request GetApiDefinitionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiDefinitionResponse
       */
      Models::GetApiDefinitionResponse getApiDefinitionWithOptions(const Models::GetApiDefinitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OpenAPI metadata for an API in a product.
       *
       * @param request GetApiDefinitionRequest
       * @return GetApiDefinitionResponse
       */
      Models::GetApiDefinitionResponse getApiDefinition(const Models::GetApiDefinitionRequest &request);

      /**
       * @summary Retrieves the details of a specific API MCP service.
       *
       * @param request GetApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiMcpServerResponse
       */
      Models::GetApiMcpServerResponse getApiMcpServerWithOptions(const Models::GetApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific API MCP service.
       *
       * @param request GetApiMcpServerRequest
       * @return GetApiMcpServerResponse
       */
      Models::GetApiMcpServerResponse getApiMcpServer(const Models::GetApiMcpServerRequest &request);

      /**
       * @summary Queries the global API MCP Server configuration for a user. The configuration includes settings for public network access and the whitelist of source VPC IDs for requests from a VPC.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiMcpServerUserConfigResponse
       */
      Models::GetApiMcpServerUserConfigResponse getApiMcpServerUserConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global API MCP Server configuration for a user. The configuration includes settings for public network access and the whitelist of source VPC IDs for requests from a VPC.
       *
       * @return GetApiMcpServerUserConfigResponse
       */
      Models::GetApiMcpServerUserConfigResponse getApiMcpServerUserConfig();

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
       * @summary Queries the details of an OpenAPI call log for your account using the request ID returned from an API call. This operation is used for troubleshooting.
       *
       * @description This API does not support authorization.
       *
       * @param request GetOwnRequestLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOwnRequestLogResponse
       */
      Models::GetOwnRequestLogResponse getOwnRequestLogWithOptions(const Models::GetOwnRequestLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an OpenAPI call log for your account using the request ID returned from an API call. This operation is used for troubleshooting.
       *
       * @description This API does not support authorization.
       *
       * @param request GetOwnRequestLogRequest
       * @return GetOwnRequestLogResponse
       */
      Models::GetOwnRequestLogResponse getOwnRequestLog(const Models::GetOwnRequestLogRequest &request);

      /**
       * @summary Retrieves the endpoint information for a product.
       *
       * @param request GetProductEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductEndpointsResponse
       */
      Models::GetProductEndpointsResponse getProductEndpointsWithOptions(const Models::GetProductEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the endpoint information for a product.
       *
       * @param request GetProductEndpointsRequest
       * @return GetProductEndpointsResponse
       */
      Models::GetProductEndpointsResponse getProductEndpoints(const Models::GetProductEndpointsRequest &request);

      /**
       * @summary Queries the details of a request log using the request ID that is returned from an API call. This operation is useful for troubleshooting.
       *
       * @description You can query call logs across different RAM users or Alibaba Cloud accounts using RAM authorization or role assumption. For more information, see [Cross-account API error diagnosis authorization](https://help.aliyun.com/document_detail/2868101.html).
       *
       * @param request GetRequestLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRequestLogResponse
       */
      Models::GetRequestLogResponse getRequestLogWithOptions(const Models::GetRequestLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a request log using the request ID that is returned from an API call. This operation is useful for troubleshooting.
       *
       * @description You can query call logs across different RAM users or Alibaba Cloud accounts using RAM authorization or role assumption. For more information, see [Cross-account API error diagnosis authorization](https://help.aliyun.com/document_detail/2868101.html).
       *
       * @param request GetRequestLogRequest
       * @return GetRequestLogResponse
       */
      Models::GetRequestLogResponse getRequestLog(const Models::GetRequestLogRequest &request);

      /**
       * @summary Retrieves the OpenAPI metadata for a product.
       *
       * @param request ListApiDefinitionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiDefinitionsResponse
       */
      Models::ListApiDefinitionsResponse listApiDefinitionsWithOptions(const Models::ListApiDefinitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OpenAPI metadata for a product.
       *
       * @param request ListApiDefinitionsRequest
       * @return ListApiDefinitionsResponse
       */
      Models::ListApiDefinitionsResponse listApiDefinitions(const Models::ListApiDefinitionsRequest &request);

      /**
       * @summary Lists the system tools supported by the MCP service.
       *
       * @param request ListApiMcpServerSystemToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiMcpServerSystemToolsResponse
       */
      Models::ListApiMcpServerSystemToolsResponse listApiMcpServerSystemToolsWithOptions(const Models::ListApiMcpServerSystemToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the system tools supported by the MCP service.
       *
       * @param request ListApiMcpServerSystemToolsRequest
       * @return ListApiMcpServerSystemToolsResponse
       */
      Models::ListApiMcpServerSystemToolsResponse listApiMcpServerSystemTools(const Models::ListApiMcpServerSystemToolsRequest &request);

      /**
       * @summary This operation queries a list of all API MCP servers in an Alibaba Cloud account.
       *
       * @param request ListApiMcpServersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiMcpServersResponse
       */
      Models::ListApiMcpServersResponse listApiMcpServersWithOptions(const Models::ListApiMcpServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries a list of all API MCP servers in an Alibaba Cloud account.
       *
       * @param request ListApiMcpServersRequest
       * @return ListApiMcpServersResponse
       */
      Models::ListApiMcpServersResponse listApiMcpServers(const Models::ListApiMcpServersRequest &request);

      /**
       * @summary Updates an API MCP service.
       *
       * @param request UpdateApiMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiMcpServerResponse
       */
      Models::UpdateApiMcpServerResponse updateApiMcpServerWithOptions(const Models::UpdateApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an API MCP service.
       *
       * @param request UpdateApiMcpServerRequest
       * @return UpdateApiMcpServerResponse
       */
      Models::UpdateApiMcpServerResponse updateApiMcpServer(const Models::UpdateApiMcpServerRequest &request);

      /**
       * @summary Updates the global API MCP Server configuration for a user.
       *
       * @param request UpdateApiMcpServerUserConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiMcpServerUserConfigResponse
       */
      Models::UpdateApiMcpServerUserConfigResponse updateApiMcpServerUserConfigWithOptions(const Models::UpdateApiMcpServerUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the global API MCP Server configuration for a user.
       *
       * @param request UpdateApiMcpServerUserConfigRequest
       * @return UpdateApiMcpServerUserConfigResponse
       */
      Models::UpdateApiMcpServerUserConfigResponse updateApiMcpServerUserConfig(const Models::UpdateApiMcpServerUserConfigRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
