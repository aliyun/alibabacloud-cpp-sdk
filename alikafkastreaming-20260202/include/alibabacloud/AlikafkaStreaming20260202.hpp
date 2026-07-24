// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIKAFKASTREAMING20260202_HPP_
#define ALIBABACLOUD_ALIKAFKASTREAMING20260202_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaStreaming20260202Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AlikafkaStreaming20260202.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 检查sql语法
       *
       * @param request CheckSqlContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSqlContentResponse
       */
      Models::CheckSqlContentResponse checkSqlContentWithOptions(const Models::CheckSqlContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查sql语法
       *
       * @param request CheckSqlContentRequest
       * @return CheckSqlContentResponse
       */
      Models::CheckSqlContentResponse checkSqlContent(const Models::CheckSqlContentRequest &request);

      /**
       * @summary 创建 流计算实例
       *
       * @param request CreateComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstanceWithOptions(const Models::CreateComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 流计算实例
       *
       * @param request CreateComputeInstanceRequest
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstance(const Models::CreateComputeInstanceRequest &request);

      /**
       * @summary 创建 JOB
       *
       * @param request CreateComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeJobResponse
       */
      Models::CreateComputeJobResponse createComputeJobWithOptions(const Models::CreateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 JOB
       *
       * @param request CreateComputeJobRequest
       * @return CreateComputeJobResponse
       */
      Models::CreateComputeJobResponse createComputeJob(const Models::CreateComputeJobRequest &request);

      /**
       * @summary  删除实例
       *
       * @param request DeleteComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeInstanceResponse
       */
      Models::DeleteComputeInstanceResponse deleteComputeInstanceWithOptions(const Models::DeleteComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  删除实例
       *
       * @param request DeleteComputeInstanceRequest
       * @return DeleteComputeInstanceResponse
       */
      Models::DeleteComputeInstanceResponse deleteComputeInstance(const Models::DeleteComputeInstanceRequest &request);

      /**
       * @summary 删除 JOB
       *
       * @param request DeleteComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeJobResponse
       */
      Models::DeleteComputeJobResponse deleteComputeJobWithOptions(const Models::DeleteComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 JOB
       *
       * @param request DeleteComputeJobRequest
       * @return DeleteComputeJobResponse
       */
      Models::DeleteComputeJobResponse deleteComputeJob(const Models::DeleteComputeJobRequest &request);

      /**
       * @summary 查询单个实例
       *
       * @param request GetComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeInstanceResponse
       */
      Models::GetComputeInstanceResponse getComputeInstanceWithOptions(const Models::GetComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个实例
       *
       * @param request GetComputeInstanceRequest
       * @return GetComputeInstanceResponse
       */
      Models::GetComputeInstanceResponse getComputeInstance(const Models::GetComputeInstanceRequest &request);

      /**
       * @summary 查询 JOB 详情
       *
       * @param request GetComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeJobResponse
       */
      Models::GetComputeJobResponse getComputeJobWithOptions(const Models::GetComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 JOB 详情
       *
       * @param request GetComputeJobRequest
       * @return GetComputeJobResponse
       */
      Models::GetComputeJobResponse getComputeJob(const Models::GetComputeJobRequest &request);

      /**
       * @summary 获取debug信息
       *
       * @param request GetJobDebugDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDebugDataResponse
       */
      Models::GetJobDebugDataResponse getJobDebugDataWithOptions(const Models::GetJobDebugDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取debug信息
       *
       * @param request GetJobDebugDataRequest
       * @return GetJobDebugDataResponse
       */
      Models::GetJobDebugDataResponse getJobDebugData(const Models::GetJobDebugDataRequest &request);

      /**
       * @summary 查询实例列表（分页）
       *
       * @param tmpReq ListComputeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeInstancesResponse
       */
      Models::ListComputeInstancesResponse listComputeInstancesWithOptions(const Models::ListComputeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例列表（分页）
       *
       * @param request ListComputeInstancesRequest
       * @return ListComputeInstancesResponse
       */
      Models::ListComputeInstancesResponse listComputeInstances(const Models::ListComputeInstancesRequest &request);

      /**
       * @summary 查询实例列表（分页）
       *
       * @param tmpReq ListComputeInstancesInPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeInstancesInPageResponse
       */
      Models::ListComputeInstancesInPageResponse listComputeInstancesInPageWithOptions(const Models::ListComputeInstancesInPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例列表（分页）
       *
       * @param request ListComputeInstancesInPageRequest
       * @return ListComputeInstancesInPageResponse
       */
      Models::ListComputeInstancesInPageResponse listComputeInstancesInPage(const Models::ListComputeInstancesInPageRequest &request);

      /**
       * @summary 分页查询 JOB 列表
       *
       * @param request ListComputeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeJobsResponse
       */
      Models::ListComputeJobsResponse listComputeJobsWithOptions(const Models::ListComputeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询 JOB 列表
       *
       * @param request ListComputeJobsRequest
       * @return ListComputeJobsResponse
       */
      Models::ListComputeJobsResponse listComputeJobs(const Models::ListComputeJobsRequest &request);

      /**
       * @summary 查询创建 SQL 任务时支持的连接器列表
       *
       * @param request ListSupportedConnectorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSupportedConnectorsResponse
       */
      Models::ListSupportedConnectorsResponse listSupportedConnectorsWithOptions(const Models::ListSupportedConnectorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询创建 SQL 任务时支持的连接器列表
       *
       * @param request ListSupportedConnectorsRequest
       * @return ListSupportedConnectorsResponse
       */
      Models::ListSupportedConnectorsResponse listSupportedConnectors(const Models::ListSupportedConnectorsRequest &request);

      /**
       * @summary 重新启动后付费实例
       *
       * @param request ReopenComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenComputeInstanceResponse
       */
      Models::ReopenComputeInstanceResponse reopenComputeInstanceWithOptions(const Models::ReopenComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新启动后付费实例
       *
       * @param request ReopenComputeInstanceRequest
       * @return ReopenComputeInstanceResponse
       */
      Models::ReopenComputeInstanceResponse reopenComputeInstance(const Models::ReopenComputeInstanceRequest &request);

      /**
       * @summary 重启 JOB
       *
       * @param request RestartComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartComputeJobResponse
       */
      Models::RestartComputeJobResponse restartComputeJobWithOptions(const Models::RestartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启 JOB
       *
       * @param request RestartComputeJobRequest
       * @return RestartComputeJobResponse
       */
      Models::RestartComputeJobResponse restartComputeJob(const Models::RestartComputeJobRequest &request);

      /**
       * @summary 部署实例
       *
       * @param tmpReq StartComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartComputeInstanceResponse
       */
      Models::StartComputeInstanceResponse startComputeInstanceWithOptions(const Models::StartComputeInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 部署实例
       *
       * @param request StartComputeInstanceRequest
       * @return StartComputeInstanceResponse
       */
      Models::StartComputeInstanceResponse startComputeInstance(const Models::StartComputeInstanceRequest &request);

      /**
       * @summary 创建 JOB
       *
       * @param request StartComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartComputeJobResponse
       */
      Models::StartComputeJobResponse startComputeJobWithOptions(const Models::StartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 JOB
       *
       * @param request StartComputeJobRequest
       * @return StartComputeJobResponse
       */
      Models::StartComputeJobResponse startComputeJob(const Models::StartComputeJobRequest &request);

      /**
       * @summary 停用/释放后付费实例
       *
       * @param request StopComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopComputeInstanceResponse
       */
      Models::StopComputeInstanceResponse stopComputeInstanceWithOptions(const Models::StopComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停用/释放后付费实例
       *
       * @param request StopComputeInstanceRequest
       * @return StopComputeInstanceResponse
       */
      Models::StopComputeInstanceResponse stopComputeInstance(const Models::StopComputeInstanceRequest &request);

      /**
       * @summary 停止 JOB
       *
       * @param request StopComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopComputeJobResponse
       */
      Models::StopComputeJobResponse stopComputeJobWithOptions(const Models::StopComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止 JOB
       *
       * @param request StopComputeJobRequest
       * @return StopComputeJobResponse
       */
      Models::StopComputeJobResponse stopComputeJob(const Models::StopComputeJobRequest &request);

      /**
       * @summary 更新实例名称
       *
       * @param request UpdateComputeInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeInstanceNameResponse
       */
      Models::UpdateComputeInstanceNameResponse updateComputeInstanceNameWithOptions(const Models::UpdateComputeInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例名称
       *
       * @param request UpdateComputeInstanceNameRequest
       * @return UpdateComputeInstanceNameResponse
       */
      Models::UpdateComputeInstanceNameResponse updateComputeInstanceName(const Models::UpdateComputeInstanceNameRequest &request);

      /**
       * @summary 更新 JOB
       *
       * @param request UpdateComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobResponse
       */
      Models::UpdateComputeJobResponse updateComputeJobWithOptions(const Models::UpdateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 JOB
       *
       * @param request UpdateComputeJobRequest
       * @return UpdateComputeJobResponse
       */
      Models::UpdateComputeJobResponse updateComputeJob(const Models::UpdateComputeJobRequest &request);

      /**
       * @summary 更新 JOB 的 CU 配额
       *
       * @param request UpdateComputeJobCuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobCuResponse
       */
      Models::UpdateComputeJobCuResponse updateComputeJobCuWithOptions(const Models::UpdateComputeJobCuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 JOB 的 CU 配额
       *
       * @param request UpdateComputeJobCuRequest
       * @return UpdateComputeJobCuResponse
       */
      Models::UpdateComputeJobCuResponse updateComputeJobCu(const Models::UpdateComputeJobCuRequest &request);

      /**
       * @summary 更新 JOB 的 SQL
       *
       * @param request UpdateComputeJobDraftSqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobDraftSqlResponse
       */
      Models::UpdateComputeJobDraftSqlResponse updateComputeJobDraftSqlWithOptions(const Models::UpdateComputeJobDraftSqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 JOB 的 SQL
       *
       * @param request UpdateComputeJobDraftSqlRequest
       * @return UpdateComputeJobDraftSqlResponse
       */
      Models::UpdateComputeJobDraftSqlResponse updateComputeJobDraftSql(const Models::UpdateComputeJobDraftSqlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
