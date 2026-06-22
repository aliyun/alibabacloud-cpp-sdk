// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTLOOP20260520_HPP_
#define ALIBABACLOUD_AGENTLOOP20260520_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentLoop20260520Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentLoop20260520.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 向指定 Dataset 追加结构化数据行，避免客户端拼接 SQL。
       *
       * @param request AddDatasetDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDatasetDataResponse
       */
      Models::AddDatasetDataResponse addDatasetDataWithOptions(const string &agentSpace, const string &datasetName, const Models::AddDatasetDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 向指定 Dataset 追加结构化数据行，避免客户端拼接 SQL。
       *
       * @param request AddDatasetDataRequest
       * @return AddDatasetDataResponse
       */
      Models::AddDatasetDataResponse addDatasetData(const string &agentSpace, const string &datasetName, const Models::AddDatasetDataRequest &request);

      /**
       * @summary 创建AgentSpace
       *
       * @param request CreateAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpaceResponse
       */
      Models::CreateAgentSpaceResponse createAgentSpaceWithOptions(const Models::CreateAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建AgentSpace
       *
       * @param request CreateAgentSpaceRequest
       * @return CreateAgentSpaceResponse
       */
      Models::CreateAgentSpaceResponse createAgentSpace(const Models::CreateAgentSpaceRequest &request);

      /**
       * @summary 创建上下文库
       *
       * @param request CreateContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextStoreResponse
       */
      Models::CreateContextStoreResponse createContextStoreWithOptions(const string &agentSpace, const Models::CreateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建上下文库
       *
       * @param request CreateContextStoreRequest
       * @return CreateContextStoreResponse
       */
      Models::CreateContextStoreResponse createContextStore(const string &agentSpace, const Models::CreateContextStoreRequest &request);

      /**
       * @summary 创建 API Key
       *
       * @param request CreateContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextStoreAPIKeyResponse
       */
      Models::CreateContextStoreAPIKeyResponse createContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const Models::CreateContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 API Key
       *
       * @param request CreateContextStoreAPIKeyRequest
       * @return CreateContextStoreAPIKeyResponse
       */
      Models::CreateContextStoreAPIKeyResponse createContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const Models::CreateContextStoreAPIKeyRequest &request);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const string &agentSpace, const Models::CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建数据集
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const string &agentSpace, const Models::CreateDatasetRequest &request);

      /**
       * @summary 删除AgentSpace
       *
       * @param request DeleteAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpaceResponse
       */
      Models::DeleteAgentSpaceResponse deleteAgentSpaceWithOptions(const string &agentSpace, const Models::DeleteAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除AgentSpace
       *
       * @param request DeleteAgentSpaceRequest
       * @return DeleteAgentSpaceResponse
       */
      Models::DeleteAgentSpaceResponse deleteAgentSpace(const string &agentSpace, const Models::DeleteAgentSpaceRequest &request);

      /**
       * @summary 删除上下文库
       *
       * @param request DeleteContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextStoreResponse
       */
      Models::DeleteContextStoreResponse deleteContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const Models::DeleteContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除上下文库
       *
       * @param request DeleteContextStoreRequest
       * @return DeleteContextStoreResponse
       */
      Models::DeleteContextStoreResponse deleteContextStore(const string &agentSpace, const string &contextStoreName, const Models::DeleteContextStoreRequest &request);

      /**
       * @summary 删除 API Key
       *
       * @param request DeleteContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextStoreAPIKeyResponse
       */
      Models::DeleteContextStoreAPIKeyResponse deleteContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const string &name, const Models::DeleteContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 API Key
       *
       * @param request DeleteContextStoreAPIKeyRequest
       * @return DeleteContextStoreAPIKeyResponse
       */
      Models::DeleteContextStoreAPIKeyResponse deleteContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const string &name, const Models::DeleteContextStoreAPIKeyRequest &request);

      /**
       * @summary 删除数据集
       *
       * @param request DeleteDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const string &agentSpace, const string &datasetName, const Models::DeleteDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据集
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const string &agentSpace, const string &datasetName, const Models::DeleteDatasetRequest &request);

      /**
       * @summary 删除流水线
       *
       * @param request DeletePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::DeletePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除流水线
       *
       * @param request DeletePipelineRequest
       * @return DeletePipelineResponse
       */
      Models::DeletePipelineResponse deletePipeline(const string &agentSpace, const string &pipelineName, const Models::DeletePipelineRequest &request);

      /**
       * @summary 查询Regions
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Regions
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary 执行查询语句
       *
       * @param request ExecuteQueryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteQueryResponse
       */
      Models::ExecuteQueryResponse executeQueryWithOptions(const string &agentSpace, const string &datasetName, const Models::ExecuteQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 执行查询语句
       *
       * @param request ExecuteQueryRequest
       * @return ExecuteQueryResponse
       */
      Models::ExecuteQueryResponse executeQuery(const string &agentSpace, const string &datasetName, const Models::ExecuteQueryRequest &request);

      /**
       * @summary 查询AgentSpace
       *
       * @param request GetAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpaceResponse
       */
      Models::GetAgentSpaceResponse getAgentSpaceWithOptions(const string &agentSpace, const Models::GetAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询AgentSpace
       *
       * @param request GetAgentSpaceRequest
       * @return GetAgentSpaceResponse
       */
      Models::GetAgentSpaceResponse getAgentSpace(const string &agentSpace, const Models::GetAgentSpaceRequest &request);

      /**
       * @summary 查询上下文库
       *
       * @param request GetContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextStoreResponse
       */
      Models::GetContextStoreResponse getContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const Models::GetContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询上下文库
       *
       * @param request GetContextStoreRequest
       * @return GetContextStoreResponse
       */
      Models::GetContextStoreResponse getContextStore(const string &agentSpace, const string &contextStoreName, const Models::GetContextStoreRequest &request);

      /**
       * @summary 获取 API Key
       *
       * @param request GetContextStoreAPIKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextStoreAPIKeyResponse
       */
      Models::GetContextStoreAPIKeyResponse getContextStoreAPIKeyWithOptions(const string &agentSpace, const string &contextStoreName, const string &name, const Models::GetContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 API Key
       *
       * @param request GetContextStoreAPIKeyRequest
       * @return GetContextStoreAPIKeyResponse
       */
      Models::GetContextStoreAPIKeyResponse getContextStoreAPIKey(const string &agentSpace, const string &contextStoreName, const string &name, const Models::GetContextStoreAPIKeyRequest &request);

      /**
       * @summary 查询数据集
       *
       * @param request GetDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDatasetWithOptions(const string &agentSpace, const string &datasetName, const Models::GetDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据集
       *
       * @param request GetDatasetRequest
       * @return GetDatasetResponse
       */
      Models::GetDatasetResponse getDataset(const string &agentSpace, const string &datasetName, const Models::GetDatasetRequest &request);

      /**
       * @summary 查询流水线
       *
       * @param request GetPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::GetPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流水线
       *
       * @param request GetPipelineRequest
       * @return GetPipelineResponse
       */
      Models::GetPipelineResponse getPipeline(const string &agentSpace, const string &pipelineName, const Models::GetPipelineRequest &request);

      /**
       * @summary 查询AgentSpace列表
       *
       * @param request ListAgentSpacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSpacesResponse
       */
      Models::ListAgentSpacesResponse listAgentSpacesWithOptions(const Models::ListAgentSpacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询AgentSpace列表
       *
       * @param request ListAgentSpacesRequest
       * @return ListAgentSpacesResponse
       */
      Models::ListAgentSpacesResponse listAgentSpaces(const Models::ListAgentSpacesRequest &request);

      /**
       * @summary 获取 API Key 列表
       *
       * @param request ListContextStoreAPIKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextStoreAPIKeysResponse
       */
      Models::ListContextStoreAPIKeysResponse listContextStoreAPIKeysWithOptions(const string &agentSpace, const string &contextStoreName, const Models::ListContextStoreAPIKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 API Key 列表
       *
       * @param request ListContextStoreAPIKeysRequest
       * @return ListContextStoreAPIKeysResponse
       */
      Models::ListContextStoreAPIKeysResponse listContextStoreAPIKeys(const string &agentSpace, const string &contextStoreName, const Models::ListContextStoreAPIKeysRequest &request);

      /**
       * @summary 查询上下文库列表
       *
       * @param request ListContextStoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextStoresResponse
       */
      Models::ListContextStoresResponse listContextStoresWithOptions(const string &agentSpace, const Models::ListContextStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询上下文库列表
       *
       * @param request ListContextStoresRequest
       * @return ListContextStoresResponse
       */
      Models::ListContextStoresResponse listContextStores(const string &agentSpace, const Models::ListContextStoresRequest &request);

      /**
       * @summary 查询数据集列表
       *
       * @param request ListDatasetsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasetsWithOptions(const string &agentSpace, const Models::ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询数据集列表
       *
       * @param request ListDatasetsRequest
       * @return ListDatasetsResponse
       */
      Models::ListDatasetsResponse listDatasets(const string &agentSpace, const Models::ListDatasetsRequest &request);

      /**
       * @summary 查询流水线列表
       *
       * @param request ListPipelinesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelinesWithOptions(const string &agentSpace, const Models::ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流水线列表
       *
       * @param request ListPipelinesRequest
       * @return ListPipelinesResponse
       */
      Models::ListPipelinesResponse listPipelines(const string &agentSpace, const Models::ListPipelinesRequest &request);

      /**
       * @summary 搜索上下文
       *
       * @param request SearchContextRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchContextResponse
       */
      Models::SearchContextResponse searchContextWithOptions(const string &agentSpace, const string &contextStoreName, const Models::SearchContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索上下文
       *
       * @param request SearchContextRequest
       * @return SearchContextResponse
       */
      Models::SearchContextResponse searchContext(const string &agentSpace, const string &contextStoreName, const Models::SearchContextRequest &request);

      /**
       * @summary 更新AgentSpace
       *
       * @param request UpdateAgentSpaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentSpaceResponse
       */
      Models::UpdateAgentSpaceResponse updateAgentSpaceWithOptions(const string &agentSpace, const Models::UpdateAgentSpaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新AgentSpace
       *
       * @param request UpdateAgentSpaceRequest
       * @return UpdateAgentSpaceResponse
       */
      Models::UpdateAgentSpaceResponse updateAgentSpace(const string &agentSpace, const Models::UpdateAgentSpaceRequest &request);

      /**
       * @summary 修改上下文库配置
       *
       * @param request UpdateContextStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextStoreResponse
       */
      Models::UpdateContextStoreResponse updateContextStoreWithOptions(const string &agentSpace, const string &contextStoreName, const Models::UpdateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改上下文库配置
       *
       * @param request UpdateContextStoreRequest
       * @return UpdateContextStoreResponse
       */
      Models::UpdateContextStoreResponse updateContextStore(const string &agentSpace, const string &contextStoreName, const Models::UpdateContextStoreRequest &request);

      /**
       * @summary 更新数据集
       *
       * @param request UpdateDatasetRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDatasetWithOptions(const string &agentSpace, const string &datasetName, const Models::UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新数据集
       *
       * @param request UpdateDatasetRequest
       * @return UpdateDatasetResponse
       */
      Models::UpdateDatasetResponse updateDataset(const string &agentSpace, const string &datasetName, const Models::UpdateDatasetRequest &request);

      /**
       * @summary 更新流水线
       *
       * @param request UpdatePipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipelineWithOptions(const string &agentSpace, const string &pipelineName, const Models::UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新流水线
       *
       * @param request UpdatePipelineRequest
       * @return UpdatePipelineResponse
       */
      Models::UpdatePipelineResponse updatePipeline(const string &agentSpace, const string &pipelineName, const Models::UpdatePipelineRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
