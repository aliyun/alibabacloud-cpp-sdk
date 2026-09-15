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
       * @description ## 请求说明
       * - 该接口支持通过 GET 或 POST 方法调用。
       * - 必须提供 `InstanceId`、`JobName` 和 `SqlContent` 参数，其中 `SqlContent` 是待校验的 Flink SQL 语句。
       * - 返回结果中，`Data.Valid` 字段指示 SQL 是否通过校验；若未通过，则错误详情位于 `Data.ErrorList` 中。
       * - 当前版本要求同时传入实例 ID (`InstanceId`) 和作业名称 (`JobName`) 以构建作业上下文。
       * - 接口返回成功仅表示校验流程执行完成，并不直接反映 SQL 的有效性，请检查 `Data.Valid` 字段来确定 SQL 是否有效。
       * - 错误码和异常处理请参考文档中的“错误码”部分。
       *
       * @param request CheckSqlContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSqlContentResponse
       */
      Models::CheckSqlContentResponse checkSqlContentWithOptions(const Models::CheckSqlContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查sql语法
       *
       * @description ## 请求说明
       * - 该接口支持通过 GET 或 POST 方法调用。
       * - 必须提供 `InstanceId`、`JobName` 和 `SqlContent` 参数，其中 `SqlContent` 是待校验的 Flink SQL 语句。
       * - 返回结果中，`Data.Valid` 字段指示 SQL 是否通过校验；若未通过，则错误详情位于 `Data.ErrorList` 中。
       * - 当前版本要求同时传入实例 ID (`InstanceId`) 和作业名称 (`JobName`) 以构建作业上下文。
       * - 接口返回成功仅表示校验流程执行完成，并不直接反映 SQL 的有效性，请检查 `Data.Valid` 字段来确定 SQL 是否有效。
       * - 错误码和异常处理请参考文档中的“错误码”部分。
       *
       * @param request CheckSqlContentRequest
       * @return CheckSqlContentResponse
       */
      Models::CheckSqlContentResponse checkSqlContent(const Models::CheckSqlContentRequest &request);

      /**
       * @summary 创建 流计算实例
       *
       * @description 创建一个计算实例。接口只完成购买阶段；创建成功后需调用 StartComputeInstance 完成网络配置和部署。
       * - API 版本：2026-02-02
       * - Action：CreateComputeInstance
       *
       * @param request CreateComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstanceWithOptions(const Models::CreateComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 流计算实例
       *
       * @description 创建一个计算实例。接口只完成购买阶段；创建成功后需调用 StartComputeInstance 完成网络配置和部署。
       * - API 版本：2026-02-02
       * - Action：CreateComputeInstance
       *
       * @param request CreateComputeInstanceRequest
       * @return CreateComputeInstanceResponse
       */
      Models::CreateComputeInstanceResponse createComputeInstance(const Models::CreateComputeInstanceRequest &request);

      /**
       * @summary 创建 JOB
       *
       * @description ## 请求说明
       * - 该API用于在指定的运行中的计算实例上创建一个新的Flink SQL作业。
       * - 创建后的作业将处于`INIT`状态。
       * - 用户可以通过设置`CuLimit`和`CuReserved`来控制作业的资源使用情况。
       * - `Remark`字段允许用户为作业添加备注信息，便于管理和识别。
       * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
       * - 如果尝试创建同名作业，则会返回错误提示。
       * - 计算实例必须处于运行状态才能成功创建作业。
       *
       * @param request CreateComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComputeJobResponse
       */
      Models::CreateComputeJobResponse createComputeJobWithOptions(const Models::CreateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 JOB
       *
       * @description ## 请求说明
       * - 该API用于在指定的运行中的计算实例上创建一个新的Flink SQL作业。
       * - 创建后的作业将处于`INIT`状态。
       * - 用户可以通过设置`CuLimit`和`CuReserved`来控制作业的资源使用情况。
       * - `Remark`字段允许用户为作业添加备注信息，便于管理和识别。
       * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
       * - 如果尝试创建同名作业，则会返回错误提示。
       * - 计算实例必须处于运行状态才能成功创建作业。
       *
       * @param request CreateComputeJobRequest
       * @return CreateComputeJobResponse
       */
      Models::CreateComputeJobResponse createComputeJob(const Models::CreateComputeJobRequest &request);

      /**
       * @summary  删除实例
       *
       * @description 删除处于待部署、已停止或已释放状态的计算实例。
       * - API版本：2026-02-02
       * - Action：DeleteComputeInstance
       *
       * @param request DeleteComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeInstanceResponse
       */
      Models::DeleteComputeInstanceResponse deleteComputeInstanceWithOptions(const Models::DeleteComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary  删除实例
       *
       * @description 删除处于待部署、已停止或已释放状态的计算实例。
       * - API版本：2026-02-02
       * - Action：DeleteComputeInstance
       *
       * @param request DeleteComputeInstanceRequest
       * @return DeleteComputeInstanceResponse
       */
      Models::DeleteComputeInstanceResponse deleteComputeInstance(const Models::DeleteComputeInstanceRequest &request);

      /**
       * @summary 删除 JOB
       *
       * @description ## 请求说明
       * - 该接口用于删除一个特定的计算作业。
       * - 成功调用此接口仅表示删除请求已被系统接受，并非立即完成删除操作。
       * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
       * - 如果计算实例或作业处于不允许删除的状态（例如：非运行状态），则会返回相应的错误信息。
       * - 删除操作不可逆，请谨慎使用。
       *
       * @param request DeleteComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComputeJobResponse
       */
      Models::DeleteComputeJobResponse deleteComputeJobWithOptions(const Models::DeleteComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 JOB
       *
       * @description ## 请求说明
       * - 该接口用于删除一个特定的计算作业。
       * - 成功调用此接口仅表示删除请求已被系统接受，并非立即完成删除操作。
       * - 确保提供的`RegionId`、`InstanceId`以及`JobName`参数准确无误，否则可能导致请求失败。
       * - 如果计算实例或作业处于不允许删除的状态（例如：非运行状态），则会返回相应的错误信息。
       * - 删除操作不可逆，请谨慎使用。
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
       * @description ## 请求说明
       * - 本接口用于查询指定计算作业的详情。
       * - 支持使用 GET 或 POST 方法进行请求。
       * - 所有时间字段以 Unix 时间戳形式返回，单位为毫秒。
       * - 必须提供 `RegionId`、`InstanceId` 和 `JobName` 参数。
       * - 授权操作为 `alikafkastreaming:GetComputeJob`，访问级别为读取（Read）。
       *
       * @param request GetComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetComputeJobResponse
       */
      Models::GetComputeJobResponse getComputeJobWithOptions(const Models::GetComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 JOB 详情
       *
       * @description ## 请求说明
       * - 本接口用于查询指定计算作业的详情。
       * - 支持使用 GET 或 POST 方法进行请求。
       * - 所有时间字段以 Unix 时间戳形式返回，单位为毫秒。
       * - 必须提供 `RegionId`、`InstanceId` 和 `JobName` 参数。
       * - 授权操作为 `alikafkastreaming:GetComputeJob`，访问级别为读取（Read）。
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
       * @description ## 请求说明
       * - 该接口支持通过 `MaxResults` 和 `NextToken` 参数进行游标分页查询。
       * - 首次请求时不需要传递 `NextToken`，后续请求需使用上一次响应中返回的 `NextToken` 值。
       * - 支持按作业名称或备注搜索，并可选择不同的排序字段和方向。
       * - 返回的时间字段均为 Unix 时间戳（单位：毫秒）。
       * - 授权操作为 `alikafkastreaming:ListComputeJobs`，访问级别为列出（List），适用于全部资源。
       *
       * @param request ListComputeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListComputeJobsResponse
       */
      Models::ListComputeJobsResponse listComputeJobsWithOptions(const Models::ListComputeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询 JOB 列表
       *
       * @description ## 请求说明
       * - 该接口支持通过 `MaxResults` 和 `NextToken` 参数进行游标分页查询。
       * - 首次请求时不需要传递 `NextToken`，后续请求需使用上一次响应中返回的 `NextToken` 值。
       * - 支持按作业名称或备注搜索，并可选择不同的排序字段和方向。
       * - 返回的时间字段均为 Unix 时间戳（单位：毫秒）。
       * - 授权操作为 `alikafkastreaming:ListComputeJobs`，访问级别为列出（List），适用于全部资源。
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
       * @description 重新启用一个已停止的后付费计算实例。接口返回成功表示启用请求已受理。
       * - API版本：2026-02-02
       * - Action：ReopenComputeInstance
       *
       * @param request ReopenComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenComputeInstanceResponse
       */
      Models::ReopenComputeInstanceResponse reopenComputeInstanceWithOptions(const Models::ReopenComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重新启动后付费实例
       *
       * @description 重新启用一个已停止的后付费计算实例。接口返回成功表示启用请求已受理。
       * - API版本：2026-02-02
       * - Action：ReopenComputeInstance
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
       * @description 为处于待部署状态的计算实例配置网络并发起部署。
       * - API 版本：2026-02-02
       * - Action：StartComputeInstance
       *
       * @param tmpReq StartComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartComputeInstanceResponse
       */
      Models::StartComputeInstanceResponse startComputeInstanceWithOptions(const Models::StartComputeInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 部署实例
       *
       * @description 为处于待部署状态的计算实例配置网络并发起部署。
       * - API 版本：2026-02-02
       * - Action：StartComputeInstance
       *
       * @param request StartComputeInstanceRequest
       * @return StartComputeInstanceResponse
       */
      Models::StartComputeInstanceResponse startComputeInstance(const Models::StartComputeInstanceRequest &request);

      /**
       * @summary 创建 JOB
       *
       * @description ## 请求说明
       * - `RecoveryMode` 支持两种模式：`savepoint` 和 `stateless`。如果选择 `savepoint` 模式但没有可用的 savepoint，则会返回错误。
       * - `CuLimit` 和 `CuReserved` 参数分别用来设定作业的 CU 上限和预留 CU 数量，支持整数或小数形式输入。
       * - 确保提供的 `RegionId`, `InstanceId`, 和 `JobName` 参数值正确且存在，否则将导致请求失败。
       *
       * @param request StartComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartComputeJobResponse
       */
      Models::StartComputeJobResponse startComputeJobWithOptions(const Models::StartComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 JOB
       *
       * @description ## 请求说明
       * - `RecoveryMode` 支持两种模式：`savepoint` 和 `stateless`。如果选择 `savepoint` 模式但没有可用的 savepoint，则会返回错误。
       * - `CuLimit` 和 `CuReserved` 参数分别用来设定作业的 CU 上限和预留 CU 数量，支持整数或小数形式输入。
       * - 确保提供的 `RegionId`, `InstanceId`, 和 `JobName` 参数值正确且存在，否则将导致请求失败。
       *
       * @param request StartComputeJobRequest
       * @return StartComputeJobResponse
       */
      Models::StartComputeJobResponse startComputeJob(const Models::StartComputeJobRequest &request);

      /**
       * @summary 停用/释放后付费实例
       *
       * @description 停止一个正在运行的后付费计算实例。接口返回成功表示停止请求已受理。
       * - API 版本：2026-02-02
       * - Action：StopComputeInstance
       *
       * @param request StopComputeInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopComputeInstanceResponse
       */
      Models::StopComputeInstanceResponse stopComputeInstanceWithOptions(const Models::StopComputeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停用/释放后付费实例
       *
       * @description 停止一个正在运行的后付费计算实例。接口返回成功表示停止请求已受理。
       * - API 版本：2026-02-02
       * - Action：StopComputeInstance
       *
       * @param request StopComputeInstanceRequest
       * @return StopComputeInstanceResponse
       */
      Models::StopComputeInstanceResponse stopComputeInstance(const Models::StopComputeInstanceRequest &request);

      /**
       * @summary 停止 JOB
       *
       * @description ## 请求说明
       * - 该接口用于停止指定的计算作业生产或 Debug 运行实例。
       * - 接口返回成功表示停止请求已被受理，但并不意味着作业立即停止。
       *
       * @param request StopComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopComputeJobResponse
       */
      Models::StopComputeJobResponse stopComputeJobWithOptions(const Models::StopComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止 JOB
       *
       * @description ## 请求说明
       * - 该接口用于停止指定的计算作业生产或 Debug 运行实例。
       * - 接口返回成功表示停止请求已被受理，但并不意味着作业立即停止。
       *
       * @param request StopComputeJobRequest
       * @return StopComputeJobResponse
       */
      Models::StopComputeJobResponse stopComputeJob(const Models::StopComputeJobRequest &request);

      /**
       * @summary 更新实例名称
       *
       * @description 修改计算实例名称。实例需处于部署准备阶段或运行中状态。
       * - API 版本：2026-02-02
       * - Action：UpdateComputeInstanceName
       *
       * @param request UpdateComputeInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeInstanceNameResponse
       */
      Models::UpdateComputeInstanceNameResponse updateComputeInstanceNameWithOptions(const Models::UpdateComputeInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例名称
       *
       * @description 修改计算实例名称。实例需处于部署准备阶段或运行中状态。
       * - API 版本：2026-02-02
       * - Action：UpdateComputeInstanceName
       *
       * @param request UpdateComputeInstanceNameRequest
       * @return UpdateComputeInstanceNameResponse
       */
      Models::UpdateComputeInstanceNameResponse updateComputeInstanceName(const Models::UpdateComputeInstanceNameRequest &request);

      /**
       * @summary 更新 JOB
       *
       * @description ## 请求说明
       * - 确保提供的 `InstanceId` 和 `JobName` 是有效的，否则将返回错误。
       * - 如果实例状态不在运行中，则不允许执行此操作。
       * - 当前作业状态如果为调试任务正在运行或变更中，则不支持修改。
       *
       * @param request UpdateComputeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobResponse
       */
      Models::UpdateComputeJobResponse updateComputeJobWithOptions(const Models::UpdateComputeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 JOB
       *
       * @description ## 请求说明
       * - 确保提供的 `InstanceId` 和 `JobName` 是有效的，否则将返回错误。
       * - 如果实例状态不在运行中，则不允许执行此操作。
       * - 当前作业状态如果为调试任务正在运行或变更中，则不支持修改。
       *
       * @param request UpdateComputeJobRequest
       * @return UpdateComputeJobResponse
       */
      Models::UpdateComputeJobResponse updateComputeJob(const Models::UpdateComputeJobRequest &request);

      /**
       * @summary 更新 JOB 的 CU 配额
       *
       * @description ## 请求说明
       * 本API允许用户修改特定计算作业的计算单元（CU）上限和预留CU数量。在调用此接口前，请确保提供的`InstanceId`和`JobName`正确无误，并且实例处于运行状态。此外，注意检查`CuLimit`与`CuReserved`参数的有效性和合理性，避免因超出限制或不符合业务逻辑导致请求失败。
       *
       * @param request UpdateComputeJobCuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobCuResponse
       */
      Models::UpdateComputeJobCuResponse updateComputeJobCuWithOptions(const Models::UpdateComputeJobCuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 JOB 的 CU 配额
       *
       * @description ## 请求说明
       * 本API允许用户修改特定计算作业的计算单元（CU）上限和预留CU数量。在调用此接口前，请确保提供的`InstanceId`和`JobName`正确无误，并且实例处于运行状态。此外，注意检查`CuLimit`与`CuReserved`参数的有效性和合理性，避免因超出限制或不符合业务逻辑导致请求失败。
       *
       * @param request UpdateComputeJobCuRequest
       * @return UpdateComputeJobCuResponse
       */
      Models::UpdateComputeJobCuResponse updateComputeJobCu(const Models::UpdateComputeJobCuRequest &request);

      /**
       * @summary 更新 JOB 的 SQL
       *
       * @description ## 请求说明
       * 本接口用于更新特定计算实例下的某个计算作业所保存的Flink SQL草稿内容。请确保提供的`InstanceId`和`JobName`准确无误，并且该作业当前状态支持进行SQL修改操作。
       * - **注意事项**：
       *   - 确保目标实例处于运行状态。
       *   - 当前作业状态需允许修改SQL，即作业不应处于调试或变更过程中。
       *   - `DraftSql`参数应包含完整的、格式正确的Flink SQL语句。
       *
       * @param request UpdateComputeJobDraftSqlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateComputeJobDraftSqlResponse
       */
      Models::UpdateComputeJobDraftSqlResponse updateComputeJobDraftSqlWithOptions(const Models::UpdateComputeJobDraftSqlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 JOB 的 SQL
       *
       * @description ## 请求说明
       * 本接口用于更新特定计算实例下的某个计算作业所保存的Flink SQL草稿内容。请确保提供的`InstanceId`和`JobName`准确无误，并且该作业当前状态支持进行SQL修改操作。
       * - **注意事项**：
       *   - 确保目标实例处于运行状态。
       *   - 当前作业状态需允许修改SQL，即作业不应处于调试或变更过程中。
       *   - `DraftSql`参数应包含完整的、格式正确的Flink SQL语句。
       *
       * @param request UpdateComputeJobDraftSqlRequest
       * @return UpdateComputeJobDraftSqlResponse
       */
      Models::UpdateComputeJobDraftSqlResponse updateComputeJobDraftSql(const Models::UpdateComputeJobDraftSqlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
