// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAILANGSTUDIO20240710_HPP_
#define ALIBABACLOUD_PAILANGSTUDIO20240710_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PAILangStudio20240710Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PAILangStudio20240710.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建知识库
       *
       * @param request CreateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBaseWithOptions(const Models::CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建知识库
       *
       * @param request CreateKnowledgeBaseRequest
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBase(const Models::CreateKnowledgeBaseRequest &request);

      /**
       * @summary 创建知识库任务
       *
       * @param request CreateKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseJobResponse
       */
      Models::CreateKnowledgeBaseJobResponse createKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const Models::CreateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建知识库任务
       *
       * @param request CreateKnowledgeBaseJobRequest
       * @return CreateKnowledgeBaseJobResponse
       */
      Models::CreateKnowledgeBaseJobResponse createKnowledgeBaseJob(const string &KnowledgeBaseId, const Models::CreateKnowledgeBaseJobRequest &request);

      /**
       * @summary 删除知识库
       *
       * @param request DeleteKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::DeleteKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除知识库
       *
       * @param request DeleteKnowledgeBaseRequest
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBase(const string &KnowledgeBaseId, const Models::DeleteKnowledgeBaseRequest &request);

      /**
       * @summary 删除知识库任务
       *
       * @param request DeleteKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKnowledgeBaseJobResponse
       */
      Models::DeleteKnowledgeBaseJobResponse deleteKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::DeleteKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除知识库任务
       *
       * @param request DeleteKnowledgeBaseJobRequest
       * @return DeleteKnowledgeBaseJobResponse
       */
      Models::DeleteKnowledgeBaseJobResponse deleteKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::DeleteKnowledgeBaseJobRequest &request);

      /**
       * @summary 查看知识库
       *
       * @param request GetKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::GetKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看知识库
       *
       * @param request GetKnowledgeBaseRequest
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBase(const string &KnowledgeBaseId, const Models::GetKnowledgeBaseRequest &request);

      /**
       * @summary 查看知识库任务
       *
       * @param request GetKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBaseJobResponse
       */
      Models::GetKnowledgeBaseJobResponse getKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::GetKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看知识库任务
       *
       * @param request GetKnowledgeBaseJobRequest
       * @return GetKnowledgeBaseJobResponse
       */
      Models::GetKnowledgeBaseJobResponse getKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::GetKnowledgeBaseJobRequest &request);

      /**
       * @summary 获取知识库切片列表
       *
       * @param request ListKnowledgeBaseChunksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBaseChunksResponse
       */
      Models::ListKnowledgeBaseChunksResponse listKnowledgeBaseChunksWithOptions(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库切片列表
       *
       * @param request ListKnowledgeBaseChunksRequest
       * @return ListKnowledgeBaseChunksResponse
       */
      Models::ListKnowledgeBaseChunksResponse listKnowledgeBaseChunks(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseChunksRequest &request);

      /**
       * @summary 获取知识库任务列表
       *
       * @param request ListKnowledgeBaseJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBaseJobsResponse
       */
      Models::ListKnowledgeBaseJobsResponse listKnowledgeBaseJobsWithOptions(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库任务列表
       *
       * @param request ListKnowledgeBaseJobsRequest
       * @return ListKnowledgeBaseJobsResponse
       */
      Models::ListKnowledgeBaseJobsResponse listKnowledgeBaseJobs(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseJobsRequest &request);

      /**
       * @summary 获取知识库列表
       *
       * @param request ListKnowledgeBasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBasesWithOptions(const Models::ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库列表
       *
       * @param request ListKnowledgeBasesRequest
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBases(const Models::ListKnowledgeBasesRequest &request);

      /**
       * @summary 搜索知识库
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::RetrieveKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索知识库
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBase(const string &KnowledgeBaseId, const Models::RetrieveKnowledgeBaseRequest &request);

      /**
       * @summary 更新知识库
       *
       * @param request UpdateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新知识库
       *
       * @param request UpdateKnowledgeBaseRequest
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBase(const string &KnowledgeBaseId, const Models::UpdateKnowledgeBaseRequest &request);

      /**
       * @summary 更新知识库切片
       *
       * @param request UpdateKnowledgeBaseChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseChunkResponse
       */
      Models::UpdateKnowledgeBaseChunkResponse updateKnowledgeBaseChunkWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const Models::UpdateKnowledgeBaseChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新知识库切片
       *
       * @param request UpdateKnowledgeBaseChunkRequest
       * @return UpdateKnowledgeBaseChunkResponse
       */
      Models::UpdateKnowledgeBaseChunkResponse updateKnowledgeBaseChunk(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const Models::UpdateKnowledgeBaseChunkRequest &request);

      /**
       * @summary 更新知识库任务
       *
       * @param request UpdateKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseJobResponse
       */
      Models::UpdateKnowledgeBaseJobResponse updateKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::UpdateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新知识库任务
       *
       * @param request UpdateKnowledgeBaseJobRequest
       * @return UpdateKnowledgeBaseJobResponse
       */
      Models::UpdateKnowledgeBaseJobResponse updateKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::UpdateKnowledgeBaseJobRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
