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
       * @summary Create a deployment job.
       *
       * @param request CreateDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentResponse
       */
      Models::CreateDeploymentResponse createDeploymentWithOptions(const Models::CreateDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a deployment job.
       *
       * @param request CreateDeploymentRequest
       * @return CreateDeploymentResponse
       */
      Models::CreateDeploymentResponse createDeployment(const Models::CreateDeploymentRequest &request);

      /**
       * @summary Create a knowledge base.
       *
       * @param request CreateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBaseWithOptions(const Models::CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a knowledge base.
       *
       * @param request CreateKnowledgeBaseRequest
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBase(const Models::CreateKnowledgeBaseRequest &request);

      /**
       * @summary Create a Knowledge Base Task.
       *
       * @param request CreateKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseJobResponse
       */
      Models::CreateKnowledgeBaseJobResponse createKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const Models::CreateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Knowledge Base Task.
       *
       * @param request CreateKnowledgeBaseJobRequest
       * @return CreateKnowledgeBaseJobResponse
       */
      Models::CreateKnowledgeBaseJobResponse createKnowledgeBaseJob(const string &KnowledgeBaseId, const Models::CreateKnowledgeBaseJobRequest &request);

      /**
       * @summary Create a runtime.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/pai/dsw-billing-description?spm=a2c4g.11186623.help-menu-30347.d_1_1_3.fb4453d9l200bE) of PAI-DSW product.
       *
       * @param request CreateRuntimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuntimeResponse
       */
      Models::CreateRuntimeResponse createRuntimeWithOptions(const Models::CreateRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a runtime.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/zh/pai/dsw-billing-description?spm=a2c4g.11186623.help-menu-30347.d_1_1_3.fb4453d9l200bE) of PAI-DSW product.
       *
       * @param request CreateRuntimeRequest
       * @return CreateRuntimeResponse
       */
      Models::CreateRuntimeResponse createRuntime(const Models::CreateRuntimeRequest &request);

      /**
       * @summary Create a snapshot.
       *
       * @param request CreateSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a snapshot.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Delete a deployment job.
       *
       * @param request DeleteDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentResponse
       */
      Models::DeleteDeploymentResponse deleteDeploymentWithOptions(const string &DeploymentId, const Models::DeleteDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a deployment job.
       *
       * @param request DeleteDeploymentRequest
       * @return DeleteDeploymentResponse
       */
      Models::DeleteDeploymentResponse deleteDeployment(const string &DeploymentId, const Models::DeleteDeploymentRequest &request);

      /**
       * @summary Delete knowledge base.
       *
       * @param request DeleteKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::DeleteKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete knowledge base.
       *
       * @param request DeleteKnowledgeBaseRequest
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBase(const string &KnowledgeBaseId, const Models::DeleteKnowledgeBaseRequest &request);

      /**
       * @summary Delete Knowledge Base Task.
       *
       * @param request DeleteKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKnowledgeBaseJobResponse
       */
      Models::DeleteKnowledgeBaseJobResponse deleteKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::DeleteKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Knowledge Base Task.
       *
       * @param request DeleteKnowledgeBaseJobRequest
       * @return DeleteKnowledgeBaseJobResponse
       */
      Models::DeleteKnowledgeBaseJobResponse deleteKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::DeleteKnowledgeBaseJobRequest &request);

      /**
       * @summary Delete a runtime.
       *
       * @param request DeleteRuntimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuntimeResponse
       */
      Models::DeleteRuntimeResponse deleteRuntimeWithOptions(const string &RuntimeId, const Models::DeleteRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a runtime.
       *
       * @param request DeleteRuntimeRequest
       * @return DeleteRuntimeResponse
       */
      Models::DeleteRuntimeResponse deleteRuntime(const string &RuntimeId, const Models::DeleteRuntimeRequest &request);

      /**
       * @summary Delete a snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const string &SnapshotId, const Models::DeleteSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const string &SnapshotId, const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Retrieve the details of a deployment job.
       *
       * @param request GetDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeploymentWithOptions(const string &DeploymentId, const Models::GetDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the details of a deployment job.
       *
       * @param request GetDeploymentRequest
       * @return GetDeploymentResponse
       */
      Models::GetDeploymentResponse getDeployment(const string &DeploymentId, const Models::GetDeploymentRequest &request);

      /**
       * @summary Get knowledge base.
       *
       * @param request GetKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::GetKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get knowledge base.
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
       * @summary Obtain the details of the runtime.
       *
       * @param request GetRuntimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuntimeResponse
       */
      Models::GetRuntimeResponse getRuntimeWithOptions(const string &RuntimeId, const Models::GetRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the details of the runtime.
       *
       * @param request GetRuntimeRequest
       * @return GetRuntimeResponse
       */
      Models::GetRuntimeResponse getRuntime(const string &RuntimeId, const Models::GetRuntimeRequest &request);

      /**
       * @summary Obtain snapshot details.
       *
       * @param request GetSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSnapshotResponse
       */
      Models::GetSnapshotResponse getSnapshotWithOptions(const string &SnapshotId, const Models::GetSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain snapshot details.
       *
       * @param request GetSnapshotRequest
       * @return GetSnapshotResponse
       */
      Models::GetSnapshotResponse getSnapshot(const string &SnapshotId, const Models::GetSnapshotRequest &request);

      /**
       * @summary Retrieve a list of deployment jobs.
       *
       * @param request ListDeploymentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeploymentsWithOptions(const Models::ListDeploymentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a list of deployment jobs.
       *
       * @param request ListDeploymentsRequest
       * @return ListDeploymentsResponse
       */
      Models::ListDeploymentsResponse listDeployments(const Models::ListDeploymentsRequest &request);

      /**
       * @summary Retrieve the knowledge base segment list.
       *
       * @param request ListKnowledgeBaseChunksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBaseChunksResponse
       */
      Models::ListKnowledgeBaseChunksResponse listKnowledgeBaseChunksWithOptions(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseChunksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the knowledge base segment list.
       *
       * @param request ListKnowledgeBaseChunksRequest
       * @return ListKnowledgeBaseChunksResponse
       */
      Models::ListKnowledgeBaseChunksResponse listKnowledgeBaseChunks(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseChunksRequest &request);

      /**
       * @summary Get the Knowledge Base task list.
       *
       * @param request ListKnowledgeBaseJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBaseJobsResponse
       */
      Models::ListKnowledgeBaseJobsResponse listKnowledgeBaseJobsWithOptions(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the Knowledge Base task list.
       *
       * @param request ListKnowledgeBaseJobsRequest
       * @return ListKnowledgeBaseJobsResponse
       */
      Models::ListKnowledgeBaseJobsResponse listKnowledgeBaseJobs(const string &KnowledgeBaseId, const Models::ListKnowledgeBaseJobsRequest &request);

      /**
       * @summary Queries a list of knowledge bases.
       *
       * @param request ListKnowledgeBasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBasesWithOptions(const Models::ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of knowledge bases.
       *
       * @param request ListKnowledgeBasesRequest
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBases(const Models::ListKnowledgeBasesRequest &request);

      /**
       * @summary Get the list of runtimes.
       *
       * @param request ListRuntimesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRuntimesResponse
       */
      Models::ListRuntimesResponse listRuntimesWithOptions(const Models::ListRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the list of runtimes.
       *
       * @param request ListRuntimesRequest
       * @return ListRuntimesResponse
       */
      Models::ListRuntimesResponse listRuntimes(const Models::ListRuntimesRequest &request);

      /**
       * @summary Retrieve a snapshot list.
       *
       * @param request ListSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const Models::ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a snapshot list.
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const Models::ListSnapshotsRequest &request);

      /**
       * @summary Retrieve the knowledge base.
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::RetrieveKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the knowledge base.
       *
       * @param request RetrieveKnowledgeBaseRequest
       * @return RetrieveKnowledgeBaseResponse
       */
      Models::RetrieveKnowledgeBaseResponse retrieveKnowledgeBase(const string &KnowledgeBaseId, const Models::RetrieveKnowledgeBaseRequest &request);

      /**
       * @summary Update a deployment job.
       *
       * @param request UpdateDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentResponse
       */
      Models::UpdateDeploymentResponse updateDeploymentWithOptions(const string &DeploymentId, const Models::UpdateDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a deployment job.
       *
       * @param request UpdateDeploymentRequest
       * @return UpdateDeploymentResponse
       */
      Models::UpdateDeploymentResponse updateDeployment(const string &DeploymentId, const Models::UpdateDeploymentRequest &request);

      /**
       * @summary Update Knowledge Base.
       *
       * @param request UpdateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBaseWithOptions(const string &KnowledgeBaseId, const Models::UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Knowledge Base.
       *
       * @param request UpdateKnowledgeBaseRequest
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBase(const string &KnowledgeBaseId, const Models::UpdateKnowledgeBaseRequest &request);

      /**
       * @summary Update Knowledge Base Chunk
       *
       * @param request UpdateKnowledgeBaseChunkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseChunkResponse
       */
      Models::UpdateKnowledgeBaseChunkResponse updateKnowledgeBaseChunkWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const Models::UpdateKnowledgeBaseChunkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Knowledge Base Chunk
       *
       * @param request UpdateKnowledgeBaseChunkRequest
       * @return UpdateKnowledgeBaseChunkResponse
       */
      Models::UpdateKnowledgeBaseChunkResponse updateKnowledgeBaseChunk(const string &KnowledgeBaseId, const string &KnowledgeBaseChunkId, const Models::UpdateKnowledgeBaseChunkRequest &request);

      /**
       * @summary Update Knowledge Base Task.
       *
       * @param request UpdateKnowledgeBaseJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseJobResponse
       */
      Models::UpdateKnowledgeBaseJobResponse updateKnowledgeBaseJobWithOptions(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::UpdateKnowledgeBaseJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Knowledge Base Task.
       *
       * @param request UpdateKnowledgeBaseJobRequest
       * @return UpdateKnowledgeBaseJobResponse
       */
      Models::UpdateKnowledgeBaseJobResponse updateKnowledgeBaseJob(const string &KnowledgeBaseId, const string &KnowledgeBaseJobId, const Models::UpdateKnowledgeBaseJobRequest &request);

      /**
       * @summary Update runtime.
       *
       * @param request UpdateRuntimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuntimeResponse
       */
      Models::UpdateRuntimeResponse updateRuntimeWithOptions(const string &RuntimeId, const Models::UpdateRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update runtime.
       *
       * @param request UpdateRuntimeRequest
       * @return UpdateRuntimeResponse
       */
      Models::UpdateRuntimeResponse updateRuntime(const string &RuntimeId, const Models::UpdateRuntimeRequest &request);

      /**
       * @summary Update a snapshot.
       *
       * @param request UpdateSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSnapshotResponse
       */
      Models::UpdateSnapshotResponse updateSnapshotWithOptions(const string &SnapshotId, const Models::UpdateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a snapshot.
       *
       * @param request UpdateSnapshotRequest
       * @return UpdateSnapshotResponse
       */
      Models::UpdateSnapshotResponse updateSnapshot(const string &SnapshotId, const Models::UpdateSnapshotRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
