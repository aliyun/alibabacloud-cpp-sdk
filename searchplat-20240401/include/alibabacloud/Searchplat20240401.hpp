// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SEARCHPLAT20240401_HPP_
#define ALIBABACLOUD_SEARCHPLAT20240401_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Searchplat20240401Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Searchplat20240401.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Stops a service.
       *
       * @param request CeaseFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CeaseFunctionInstanceResponse
       */
      Models::CeaseFunctionInstanceResponse ceaseFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const Models::CeaseFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a service.
       *
       * @param request CeaseFunctionInstanceRequest
       * @return CeaseFunctionInstanceResponse
       */
      Models::CeaseFunctionInstanceResponse ceaseFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const Models::CeaseFunctionInstanceRequest &request);

      /**
       * @summary Creates an asynchronous task.
       *
       * @param request CreateAsyncTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTaskWithOptions(const string &workspaceName, const Models::CreateAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous task.
       *
       * @param request CreateAsyncTaskRequest
       * @return CreateAsyncTaskResponse
       */
      Models::CreateAsyncTaskResponse createAsyncTask(const string &workspaceName, const Models::CreateAsyncTaskRequest &request);

      /**
       * @summary Creates a knowledge base-related configuration.
       *
       * @param request CreateCapabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCapabilityResponse
       */
      Models::CreateCapabilityResponse createCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const Models::CreateCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a knowledge base-related configuration.
       *
       * @param request CreateCapabilityRequest
       * @return CreateCapabilityResponse
       */
      Models::CreateCapabilityResponse createCapability(const string &workspaceName, const string &itemCategory, const Models::CreateCapabilityRequest &request);

      /**
       * @summary Creates a configuration item in a specified workspace. The prompt and lark types are supported.
       *
       * @description ## Operation description
       * - This API operation allows you to create a configuration for a specific workspace.
       * - The `configType` parameter specifies the type of configuration to create. Valid values: `prompt` and `lark`.
       * - When `dryRun` is set to `true`, the API operation only validates the request without actually performing the creation.
       * - The `configData` field varies depending on the value of `configType`. Refer to the examples for the specific structure to construct the request body.
       *
       * @param request CreateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfigWithOptions(const string &workspaceName, const string &configType, const Models::CreateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration item in a specified workspace. The prompt and lark types are supported.
       *
       * @description ## Operation description
       * - This API operation allows you to create a configuration for a specific workspace.
       * - The `configType` parameter specifies the type of configuration to create. Valid values: `prompt` and `lark`.
       * - When `dryRun` is set to `true`, the API operation only validates the request without actually performing the creation.
       * - The `configData` field varies depending on the value of `configType`. Refer to the examples for the specific structure to construct the request body.
       *
       * @param request CreateConfigRequest
       * @return CreateConfigResponse
       */
      Models::CreateConfigResponse createConfig(const string &workspaceName, const string &configType, const Models::CreateConfigRequest &request);

      /**
       * @summary Creates access credentials.
       *
       * @param request CreateCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialsResponse
       */
      Models::CreateCredentialsResponse createCredentialsWithOptions(const string &workspaceName, const Models::CreateCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates access credentials.
       *
       * @param request CreateCredentialsRequest
       * @return CreateCredentialsResponse
       */
      Models::CreateCredentialsResponse createCredentials(const string &workspaceName, const Models::CreateCredentialsRequest &request);

      /**
       * @summary Creates experience data.
       *
       * @param request CreateExperienceDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExperienceDataResponse
       */
      Models::CreateExperienceDataResponse createExperienceDataWithOptions(const string &workspaceName, const Models::CreateExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates experience data.
       *
       * @param request CreateExperienceDataRequest
       * @return CreateExperienceDataResponse
       */
      Models::CreateExperienceDataResponse createExperienceData(const string &workspaceName, const Models::CreateExperienceDataRequest &request);

      /**
       * @summary Creates a service configuration.
       *
       * @param request CreateFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionInstanceResponse
       */
      Models::CreateFunctionInstanceResponse createFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const Models::CreateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service configuration.
       *
       * @param request CreateFunctionInstanceRequest
       * @return CreateFunctionInstanceResponse
       */
      Models::CreateFunctionInstanceResponse createFunctionInstance(const string &workspaceName, const string &functionName, const Models::CreateFunctionInstanceRequest &request);

      /**
       * @summary Creates a service configuration task.
       *
       * @param request CreateFunctionTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFunctionTaskResponse
       */
      Models::CreateFunctionTaskResponse createFunctionTaskWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const Models::CreateFunctionTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service configuration task.
       *
       * @param request CreateFunctionTaskRequest
       * @return CreateFunctionTaskResponse
       */
      Models::CreateFunctionTaskResponse createFunctionTask(const string &workspaceName, const string &functionName, const string &instanceName, const Models::CreateFunctionTaskRequest &request);

      /**
       * @summary Creates an offline processing task for video retrieval. You can configure the data source, processing parameters, and output destination.
       *
       * @description ## Operation description.
       *
       * @param request CreateOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOfflineTaskResponse
       */
      Models::CreateOfflineTaskResponse createOfflineTaskWithOptions(const string &workspaceName, const string &type, const Models::CreateOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an offline processing task for video retrieval. You can configure the data source, processing parameters, and output destination.
       *
       * @description ## Operation description.
       *
       * @param request CreateOfflineTaskRequest
       * @return CreateOfflineTaskResponse
       */
      Models::CreateOfflineTaskResponse createOfflineTask(const string &workspaceName, const string &type, const Models::CreateOfflineTaskRequest &request);

      /**
       * @summary Creates an evaluation task for the RAG edition.
       *
       * @param request CreateRagEvaluatorTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRagEvaluatorTaskResponse
       */
      Models::CreateRagEvaluatorTaskResponse createRagEvaluatorTaskWithOptions(const string &workspaceName, const Models::CreateRagEvaluatorTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an evaluation task for the RAG edition.
       *
       * @param request CreateRagEvaluatorTaskRequest
       * @return CreateRagEvaluatorTaskResponse
       */
      Models::CreateRagEvaluatorTaskResponse createRagEvaluatorTask(const string &workspaceName, const Models::CreateRagEvaluatorTaskRequest &request);

      /**
       * @summary Create Workspace
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Workspace
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Deletes a specific configuration item from a specified workspace.
       *
       * @description ## Operation description
       * This API operation allows you to delete a specific configuration item by specifying the workspace name, configuration category, and configuration name. Before calling this operation, ensure that you have sufficient permissions (such as the `DeleteCapability` action in a RAM policy). After a configuration item is deleted, all related data and services may be affected.
       *
       * @param request DeleteCapabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCapabilityResponse
       */
      Models::DeleteCapabilityResponse deleteCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const string &itemName, const Models::DeleteCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific configuration item from a specified workspace.
       *
       * @description ## Operation description
       * This API operation allows you to delete a specific configuration item by specifying the workspace name, configuration category, and configuration name. Before calling this operation, ensure that you have sufficient permissions (such as the `DeleteCapability` action in a RAM policy). After a configuration item is deleted, all related data and services may be affected.
       *
       * @param request DeleteCapabilityRequest
       * @return DeleteCapabilityResponse
       */
      Models::DeleteCapabilityResponse deleteCapability(const string &workspaceName, const string &itemCategory, const string &itemName, const Models::DeleteCapabilityRequest &request);

      /**
       * @summary Deletes a specific type of configuration from a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request DeleteConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConfigResponse
       */
      Models::DeleteConfigResponse deleteConfigWithOptions(const string &workspaceName, const string &configType, const string &id, const Models::DeleteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific type of configuration from a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request DeleteConfigRequest
       * @return DeleteConfigResponse
       */
      Models::DeleteConfigResponse deleteConfig(const string &workspaceName, const string &configType, const string &id, const Models::DeleteConfigRequest &request);

      /**
       * @summary Deletes an access credential.
       *
       * @param request DeleteCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialsResponse
       */
      Models::DeleteCredentialsResponse deleteCredentialsWithOptions(const string &token, const string &workspaceName, const Models::DeleteCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access credential.
       *
       * @param request DeleteCredentialsRequest
       * @return DeleteCredentialsResponse
       */
      Models::DeleteCredentialsResponse deleteCredentials(const string &token, const string &workspaceName, const Models::DeleteCredentialsRequest &request);

      /**
       * @summary Delete experience data
       *
       * @param request DeleteExperienceDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExperienceDataResponse
       */
      Models::DeleteExperienceDataResponse deleteExperienceDataWithOptions(const string &id, const string &workspaceName, const Models::DeleteExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete experience data
       *
       * @param request DeleteExperienceDataRequest
       * @return DeleteExperienceDataResponse
       */
      Models::DeleteExperienceDataResponse deleteExperienceData(const string &id, const string &workspaceName, const Models::DeleteExperienceDataRequest &request);

      /**
       * @summary Deletes a service configuration.
       *
       * @param request DeleteFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFunctionInstanceResponse
       */
      Models::DeleteFunctionInstanceResponse deleteFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const Models::DeleteFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service configuration.
       *
       * @param request DeleteFunctionInstanceRequest
       * @return DeleteFunctionInstanceResponse
       */
      Models::DeleteFunctionInstanceResponse deleteFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const Models::DeleteFunctionInstanceRequest &request);

      /**
       * @summary Deletes a batch task.
       *
       * @param request DeleteOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOfflineTaskResponse
       */
      Models::DeleteOfflineTaskResponse deleteOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::DeleteOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a batch task.
       *
       * @param request DeleteOfflineTaskRequest
       * @return DeleteOfflineTaskResponse
       */
      Models::DeleteOfflineTaskResponse deleteOfflineTask(const string &workspaceName, const string &type, const string &taskName, const Models::DeleteOfflineTaskRequest &request);

      /**
       * @summary Deletes a RAG evaluation task.
       *
       * @param request DeleteRagEvaluatorTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRagEvaluatorTaskResponse
       */
      Models::DeleteRagEvaluatorTaskResponse deleteRagEvaluatorTaskWithOptions(const string &workspaceName, const string &taskId, const Models::DeleteRagEvaluatorTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a RAG evaluation task.
       *
       * @param request DeleteRagEvaluatorTaskRequest
       * @return DeleteRagEvaluatorTaskResponse
       */
      Models::DeleteRagEvaluatorTaskResponse deleteRagEvaluatorTask(const string &workspaceName, const string &taskId, const Models::DeleteRagEvaluatorTaskRequest &request);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceName, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceName, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Query the details of a configuration item of a specific category within a specified workspace.
       *
       * @description ## Request Description
       * This API is used to retrieve specific configuration information based on the provided workspace name, configuration category, and configuration name. Please ensure the parameters in the request path are accurate, especially the three required fields: `workspaceName`, `itemCategory`, and `itemName`. Additionally, please note that `itemCategory` currently only supports the `ai_search_agent` category.
       *
       * @param request DescribeCapabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCapabilityResponse
       */
      Models::DescribeCapabilityResponse describeCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const string &itemName, const Models::DescribeCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a configuration item of a specific category within a specified workspace.
       *
       * @description ## Request Description
       * This API is used to retrieve specific configuration information based on the provided workspace name, configuration category, and configuration name. Please ensure the parameters in the request path are accurate, especially the three required fields: `workspaceName`, `itemCategory`, and `itemName`. Additionally, please note that `itemCategory` currently only supports the `ai_search_agent` category.
       *
       * @param request DescribeCapabilityRequest
       * @return DescribeCapabilityResponse
       */
      Models::DescribeCapabilityResponse describeCapability(const string &workspaceName, const string &itemCategory, const string &itemName, const Models::DescribeCapabilityRequest &request);

      /**
       * @summary DescribeRegions.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeRegions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Retrieves the details of an asynchronous task.
       *
       * @param request GetAsyncTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTaskWithOptions(const string &workspaceName, const string &id, const Models::GetAsyncTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an asynchronous task.
       *
       * @param request GetAsyncTaskRequest
       * @return GetAsyncTaskResponse
       */
      Models::GetAsyncTaskResponse getAsyncTask(const string &workspaceName, const string &id, const Models::GetAsyncTaskRequest &request);

      /**
       * @summary Queries a specific type of configuration from a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request GetConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigResponse
       */
      Models::GetConfigResponse getConfigWithOptions(const string &workspaceName, const string &configType, const string &id, const Models::GetConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specific type of configuration from a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request GetConfigRequest
       * @return GetConfigResponse
       */
      Models::GetConfigResponse getConfig(const string &workspaceName, const string &configType, const string &id, const Models::GetConfigRequest &request);

      /**
       * @summary Retrieves the details of an access credential.
       *
       * @param request GetCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialsResponse
       */
      Models::GetCredentialsResponse getCredentialsWithOptions(const string &token, const string &workspaceName, const Models::GetCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an access credential.
       *
       * @param request GetCredentialsRequest
       * @return GetCredentialsResponse
       */
      Models::GetCredentialsResponse getCredentials(const string &token, const string &workspaceName, const Models::GetCredentialsRequest &request);

      /**
       * @summary Retrieves the details of experience data.
       *
       * @param request GetExperienceDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExperienceDataResponse
       */
      Models::GetExperienceDataResponse getExperienceDataWithOptions(const string &workspaceName, const string &id, const Models::GetExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of experience data.
       *
       * @param request GetExperienceDataRequest
       * @return GetExperienceDataResponse
       */
      Models::GetExperienceDataResponse getExperienceData(const string &workspaceName, const string &id, const Models::GetExperienceDataRequest &request);

      /**
       * @summary Queries the details of a specific feature instance in a specified workspace.
       *
       * @param request GetFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFunctionInstanceResponse
       */
      Models::GetFunctionInstanceResponse getFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const Models::GetFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific feature instance in a specified workspace.
       *
       * @param request GetFunctionInstanceRequest
       * @return GetFunctionInstanceResponse
       */
      Models::GetFunctionInstanceResponse getFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const Models::GetFunctionInstanceRequest &request);

      /**
       * @summary Retrieves information about an offline node.
       *
       * @param request GetOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOfflineTaskResponse
       */
      Models::GetOfflineTaskResponse getOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::GetOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about an offline node.
       *
       * @param request GetOfflineTaskRequest
       * @return GetOfflineTaskResponse
       */
      Models::GetOfflineTaskResponse getOfflineTask(const string &workspaceName, const string &type, const string &taskName, const Models::GetOfflineTaskRequest &request);

      /**
       * @summary Queries the details of offline task logs in a specified workspace.
       *
       * @description ## Operation description
       * - This operation allows you to retrieve offline task logs information by specifying the workspace name, node type, and node name.
       * - Provide a valid `regionId` as one of the query parameters to specify the area for the request.
       * - The returned information includes but is not limited to network configurations (private ES and public ES) and their enabling status, domain names, and IP whitelist groups.
       * - Note: Ensure that you have sufficient permissions (such as the `GetLog` action in the RAM policy) to invoke this operation.
       *
       * @param request GetOfflineTaskLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOfflineTaskLogResponse
       */
      Models::GetOfflineTaskLogResponse getOfflineTaskLogWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::GetOfflineTaskLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of offline task logs in a specified workspace.
       *
       * @description ## Operation description
       * - This operation allows you to retrieve offline task logs information by specifying the workspace name, node type, and node name.
       * - Provide a valid `regionId` as one of the query parameters to specify the area for the request.
       * - The returned information includes but is not limited to network configurations (private ES and public ES) and their enabling status, domain names, and IP whitelist groups.
       * - Note: Ensure that you have sufficient permissions (such as the `GetLog` action in the RAM policy) to invoke this operation.
       *
       * @param request GetOfflineTaskLogRequest
       * @return GetOfflineTaskLogResponse
       */
      Models::GetOfflineTaskLogResponse getOfflineTaskLog(const string &workspaceName, const string &type, const string &taskName, const Models::GetOfflineTaskLogRequest &request);

      /**
       * @summary Retrieves a RAG evaluation task.
       *
       * @param request GetRagEvaluatorTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRagEvaluatorTaskResponse
       */
      Models::GetRagEvaluatorTaskResponse getRagEvaluatorTaskWithOptions(const string &workspaceName, const string &taskId, const Models::GetRagEvaluatorTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a RAG evaluation task.
       *
       * @param request GetRagEvaluatorTaskRequest
       * @return GetRagEvaluatorTaskResponse
       */
      Models::GetRagEvaluatorTaskResponse getRagEvaluatorTask(const string &workspaceName, const string &taskId, const Models::GetRagEvaluatorTaskRequest &request);

      /**
       * @summary Retrieves data table field information.
       *
       * @param request GetTableColumnsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumnsWithOptions(const string &workspaceName, const string &dataSourceType, const Models::GetTableColumnsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves data table field information.
       *
       * @param request GetTableColumnsRequest
       * @return GetTableColumnsResponse
       */
      Models::GetTableColumnsResponse getTableColumns(const string &workspaceName, const string &dataSourceType, const Models::GetTableColumnsRequest &request);

      /**
       * @param request GetTableFieldsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTableFieldsResponse
       */
      Models::GetTableFieldsResponse getTableFieldsWithOptions(const string &workspaceName, const string &dataSourceType, const Models::GetTableFieldsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetTableFieldsRequest
       * @return GetTableFieldsResponse
       */
      Models::GetTableFieldsResponse getTableFields(const string &workspaceName, const string &dataSourceType, const Models::GetTableFieldsRequest &request);

      /**
       * @summary Retrieves data tables.
       *
       * @param request GetTablesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTablesResponse
       */
      Models::GetTablesResponse getTablesWithOptions(const string &workspaceName, const string &dataSourceType, const Models::GetTablesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves data tables.
       *
       * @param request GetTablesRequest
       * @return GetTablesResponse
       */
      Models::GetTablesResponse getTables(const string &workspaceName, const string &dataSourceType, const Models::GetTablesRequest &request);

      /**
       * @summary Retrieves a workspace.
       *
       * @param request GetWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceName, const Models::GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a workspace.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceName, const Models::GetWorkspaceRequest &request);

      /**
       * @summary Retrieves a list of asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasksWithOptions(const string &workspaceName, const Models::ListAsyncTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of asynchronous tasks.
       *
       * @param request ListAsyncTasksRequest
       * @return ListAsyncTasksResponse
       */
      Models::ListAsyncTasksResponse listAsyncTasks(const string &workspaceName, const Models::ListAsyncTasksRequest &request);

      /**
       * @summary Queries the list of configuration items of a specific category in a specified workspace.
       *
       * @description ## Operation description
       * You can use this API operation to retrieve the list of configuration items based on the specified workspace name and configuration category. Paged query is supported. Use the `pageNumber` and `pageSize` parameters to control the number of results and the page number. The `nextToken` and `maxResults` parameters are also provided for paged query when handling large amounts of data.
       *
       * @param request ListCapabilitiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCapabilitiesResponse
       */
      Models::ListCapabilitiesResponse listCapabilitiesWithOptions(const string &workspaceName, const string &itemCategory, const Models::ListCapabilitiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of configuration items of a specific category in a specified workspace.
       *
       * @description ## Operation description
       * You can use this API operation to retrieve the list of configuration items based on the specified workspace name and configuration category. Paged query is supported. Use the `pageNumber` and `pageSize` parameters to control the number of results and the page number. The `nextToken` and `maxResults` parameters are also provided for paged query when handling large amounts of data.
       *
       * @param request ListCapabilitiesRequest
       * @return ListCapabilitiesResponse
       */
      Models::ListCapabilitiesResponse listCapabilities(const string &workspaceName, const string &itemCategory, const Models::ListCapabilitiesRequest &request);

      /**
       * @summary Queries the list of configurations of a specific type in a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request ListConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigsResponse
       */
      Models::ListConfigsResponse listConfigsWithOptions(const string &workspaceName, const string &configType, const Models::ListConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of configurations of a specific type in a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request ListConfigsRequest
       * @return ListConfigsResponse
       */
      Models::ListConfigsResponse listConfigs(const string &workspaceName, const string &configType, const Models::ListConfigsRequest &request);

      /**
       * @summary Retrieves a list of access credentials.
       *
       * @param request ListCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const string &workspaceName, const Models::ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of access credentials.
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const string &workspaceName, const Models::ListCredentialsRequest &request);

      /**
       * @summary Retrieves all experience data in a specified workspace, with support for filtering by service type and data type.
       *
       * @description ## Operation description
       * - This API operation queries all experience data of a user in a specific workspace. The results are sorted by creation time in descending order by default.
       * - Pagination is not supported. However, you can filter data by using the serviceType and dataType parameters.
       * - workspaceName is a path parameter and must be specified to indicate the workspace to query.
       *
       * @param request ListExperienceDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExperienceDataResponse
       */
      Models::ListExperienceDataResponse listExperienceDataWithOptions(const string &workspaceName, const Models::ListExperienceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all experience data in a specified workspace, with support for filtering by service type and data type.
       *
       * @description ## Operation description
       * - This API operation queries all experience data of a user in a specific workspace. The results are sorted by creation time in descending order by default.
       * - Pagination is not supported. However, you can filter data by using the serviceType and dataType parameters.
       * - workspaceName is a path parameter and must be specified to indicate the workspace to query.
       *
       * @param request ListExperienceDataRequest
       * @return ListExperienceDataResponse
       */
      Models::ListExperienceDataResponse listExperienceData(const string &workspaceName, const Models::ListExperienceDataRequest &request);

      /**
       * @summary Retrieves a list of service configurations.
       *
       * @param request ListFunctionInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionInstancesResponse
       */
      Models::ListFunctionInstancesResponse listFunctionInstancesWithOptions(const string &workspaceName, const string &functionName, const Models::ListFunctionInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of service configurations.
       *
       * @param request ListFunctionInstancesRequest
       * @return ListFunctionInstancesResponse
       */
      Models::ListFunctionInstancesResponse listFunctionInstances(const string &workspaceName, const string &functionName, const Models::ListFunctionInstancesRequest &request);

      /**
       * @summary Retrieves the restriction items of a feature.
       *
       * @param request ListFunctionRestrictionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFunctionRestrictionsResponse
       */
      Models::ListFunctionRestrictionsResponse listFunctionRestrictionsWithOptions(const string &workspaceName, const string &functionName, const string &restrictionName, const Models::ListFunctionRestrictionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the restriction items of a feature.
       *
       * @param request ListFunctionRestrictionsRequest
       * @return ListFunctionRestrictionsResponse
       */
      Models::ListFunctionRestrictionsResponse listFunctionRestrictions(const string &workspaceName, const string &functionName, const string &restrictionName, const Models::ListFunctionRestrictionsRequest &request);

      /**
       * @summary Get Offline Task Information List
       *
       * @param tmpReq ListOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOfflineTaskResponse
       */
      Models::ListOfflineTaskResponse listOfflineTaskWithOptions(const string &workspaceName, const string &type, const Models::ListOfflineTaskRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Offline Task Information List
       *
       * @param request ListOfflineTaskRequest
       * @return ListOfflineTaskResponse
       */
      Models::ListOfflineTaskResponse listOfflineTask(const string &workspaceName, const string &type, const Models::ListOfflineTaskRequest &request);

      /**
       * @summary Queries the error log list of batch tasks in a specified workspace.
       *
       * @description ## Operation description
       * - This API operation retrieves error logs for a specific workspace, node type, and node name.
       * - The `startTime` and `endTime` parameters allow you to define a custom query time range. If not provided, data from the past hour is queried by default.
       * - The paging parameters `pageNum` and `pageSize` help control the number of returned results and page navigation. They represent the requested page number and the number of log entries per page, with default values of 1 and 10 respectively.
       * - Note: Ensure that you have obtained the required RAM permissions (Action: ListErrorLogs) before you invoke this operation.
       *
       * @param request ListOfflineTaskErrorLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOfflineTaskErrorLogsResponse
       */
      Models::ListOfflineTaskErrorLogsResponse listOfflineTaskErrorLogsWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::ListOfflineTaskErrorLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the error log list of batch tasks in a specified workspace.
       *
       * @description ## Operation description
       * - This API operation retrieves error logs for a specific workspace, node type, and node name.
       * - The `startTime` and `endTime` parameters allow you to define a custom query time range. If not provided, data from the past hour is queried by default.
       * - The paging parameters `pageNum` and `pageSize` help control the number of returned results and page navigation. They represent the requested page number and the number of log entries per page, with default values of 1 and 10 respectively.
       * - Note: Ensure that you have obtained the required RAM permissions (Action: ListErrorLogs) before you invoke this operation.
       *
       * @param request ListOfflineTaskErrorLogsRequest
       * @return ListOfflineTaskErrorLogsResponse
       */
      Models::ListOfflineTaskErrorLogsResponse listOfflineTaskErrorLogs(const string &workspaceName, const string &type, const string &taskName, const Models::ListOfflineTaskErrorLogsRequest &request);

      /**
       * @summary Retrieves the list of RAG evaluation tasks.
       *
       * @param request ListRagEvaluatorTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRagEvaluatorTasksResponse
       */
      Models::ListRagEvaluatorTasksResponse listRagEvaluatorTasksWithOptions(const string &workspaceName, const Models::ListRagEvaluatorTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of RAG evaluation tasks.
       *
       * @param request ListRagEvaluatorTasksRequest
       * @return ListRagEvaluatorTasksResponse
       */
      Models::ListRagEvaluatorTasksResponse listRagEvaluatorTasks(const string &workspaceName, const Models::ListRagEvaluatorTasksRequest &request);

      /**
       * @summary Retrieves the list of services.
       *
       * @param request ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const string &workspaceName, const Models::ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const string &workspaceName, const Models::ListServicesRequest &request);

      /**
       * @summary Retrieves a list of workspaces.
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Updates a batch task.
       *
       * @param request ModifyOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOfflineTaskResponse
       */
      Models::ModifyOfflineTaskResponse modifyOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::ModifyOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a batch task.
       *
       * @param request ModifyOfflineTaskRequest
       * @return ModifyOfflineTaskResponse
       */
      Models::ModifyOfflineTaskResponse modifyOfflineTask(const string &workspaceName, const string &type, const string &taskName, const Models::ModifyOfflineTaskRequest &request);

      /**
       * @summary Modifies the network configuration for batch task log scenarios, including enabling or disabling public and private network access and setting IP whitelists.
       *
       * @description ## Operation description
       * - This API allows you to adjust network-related configurations for a specific type of batch node within a specified workspace.
       * - Use this operation to control public or private network access permissions for the ES service and set the corresponding IP whitelists.
       * - When you need to change any network settings (such as enabling or shutting down public network access or updating IP whitelists), ensure that the `network` object contains the correct parameters.
       * - Note: Executing this operation may affect currently running nodes. Proceed with caution.
       *
       * @param request ModifyOfflineTaskLogRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOfflineTaskLogResponse
       */
      Models::ModifyOfflineTaskLogResponse modifyOfflineTaskLogWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::ModifyOfflineTaskLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network configuration for batch task log scenarios, including enabling or disabling public and private network access and setting IP whitelists.
       *
       * @description ## Operation description
       * - This API allows you to adjust network-related configurations for a specific type of batch node within a specified workspace.
       * - Use this operation to control public or private network access permissions for the ES service and set the corresponding IP whitelists.
       * - When you need to change any network settings (such as enabling or shutting down public network access or updating IP whitelists), ensure that the `network` object contains the correct parameters.
       * - Note: Executing this operation may affect currently running nodes. Proceed with caution.
       *
       * @param request ModifyOfflineTaskLogRequest
       * @return ModifyOfflineTaskLogResponse
       */
      Models::ModifyOfflineTaskLogResponse modifyOfflineTaskLog(const string &workspaceName, const string &type, const string &taskName, const Models::ModifyOfflineTaskLogRequest &request);

      /**
       * @summary Restarts the service.
       *
       * @param request ResumeFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeFunctionInstanceResponse
       */
      Models::ResumeFunctionInstanceResponse resumeFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const Models::ResumeFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts the service.
       *
       * @param request ResumeFunctionInstanceRequest
       * @return ResumeFunctionInstanceResponse
       */
      Models::ResumeFunctionInstanceResponse resumeFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const Models::ResumeFunctionInstanceRequest &request);

      /**
       * @summary Starts a batch task.
       *
       * @description ## Operation description.
       *
       * @param request StartOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartOfflineTaskResponse
       */
      Models::StartOfflineTaskResponse startOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::StartOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a batch task.
       *
       * @description ## Operation description.
       *
       * @param request StartOfflineTaskRequest
       * @return StartOfflineTaskResponse
       */
      Models::StartOfflineTaskResponse startOfflineTask(const string &workspaceName, const string &type, const string &taskName, const Models::StartOfflineTaskRequest &request);

      /**
       * @summary Stops a batch task.
       *
       * @param request StopOfflineTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopOfflineTaskResponse
       */
      Models::StopOfflineTaskResponse stopOfflineTaskWithOptions(const string &workspaceName, const string &type, const string &taskName, const Models::StopOfflineTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a batch task.
       *
       * @param request StopOfflineTaskRequest
       * @return StopOfflineTaskResponse
       */
      Models::StopOfflineTaskResponse stopOfflineTask(const string &workspaceName, const string &type, const string &taskName, const Models::StopOfflineTaskRequest &request);

      /**
       * @summary Updates a specific configuration item in a specified workspace.
       *
       * @description ## Request description
       * This API operation allows you to update a specific configuration item (`itemName`) under a category (`itemCategory`) in a specified workspace (`workspaceName`). By setting the `dryRun` parameter, you can preview changes without actually applying them. The request body can contain a new configuration description (`itemDesc`) and configuration content (`itemValue`). The structure of `itemValue` must conform to the requirements of the target configuration item.
       *
       * @param request UpdateCapabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCapabilityResponse
       */
      Models::UpdateCapabilityResponse updateCapabilityWithOptions(const string &workspaceName, const string &itemCategory, const string &itemName, const Models::UpdateCapabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specific configuration item in a specified workspace.
       *
       * @description ## Request description
       * This API operation allows you to update a specific configuration item (`itemName`) under a category (`itemCategory`) in a specified workspace (`workspaceName`). By setting the `dryRun` parameter, you can preview changes without actually applying them. The request body can contain a new configuration description (`itemDesc`) and configuration content (`itemValue`). The structure of `itemValue` must conform to the requirements of the target configuration item.
       *
       * @param request UpdateCapabilityRequest
       * @return UpdateCapabilityResponse
       */
      Models::UpdateCapabilityResponse updateCapability(const string &workspaceName, const string &itemCategory, const string &itemName, const Models::UpdateCapabilityRequest &request);

      /**
       * @summary Updates the configuration of a specific type in a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request UpdateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfigWithOptions(const string &workspaceName, const string &configType, const Models::UpdateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specific type in a specified workspace.
       *
       * @description ## Request description.
       *
       * @param request UpdateConfigRequest
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfig(const string &workspaceName, const string &configType, const Models::UpdateConfigRequest &request);

      /**
       * @summary Modifies an access credential.
       *
       * @param request UpdateCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialsResponse
       */
      Models::UpdateCredentialsResponse updateCredentialsWithOptions(const string &token, const string &workspaceName, const Models::UpdateCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an access credential.
       *
       * @param request UpdateCredentialsRequest
       * @return UpdateCredentialsResponse
       */
      Models::UpdateCredentialsResponse updateCredentials(const string &token, const string &workspaceName, const Models::UpdateCredentialsRequest &request);

      /**
       * @summary Updates the service configuration.
       *
       * @param request UpdateFunctionInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFunctionInstanceResponse
       */
      Models::UpdateFunctionInstanceResponse updateFunctionInstanceWithOptions(const string &workspaceName, const string &functionName, const string &instanceName, const Models::UpdateFunctionInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the service configuration.
       *
       * @param request UpdateFunctionInstanceRequest
       * @return UpdateFunctionInstanceResponse
       */
      Models::UpdateFunctionInstanceResponse updateFunctionInstance(const string &workspaceName, const string &functionName, const string &instanceName, const Models::UpdateFunctionInstanceRequest &request);

      /**
       * @summary Updates a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &workspaceName, const Models::UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &workspaceName, const Models::UpdateWorkspaceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
