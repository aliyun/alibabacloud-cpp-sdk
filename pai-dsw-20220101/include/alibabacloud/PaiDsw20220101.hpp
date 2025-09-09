// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIDSW20220101_HPP_
#define ALIBABACLOUD_PAIDSW20220101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiDsw20220101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiDsw20220101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an automatic stop policy for a specific Data Science Workshop (DSW) instance. When the conditions are met, the instance is automatically stopped. You can create only one automatic stop policy for an idle DSW instance. If the specific instance has an automatic stop policy, call DeleteIdleInstanceCuller to delete it first.
       *
       * @param request CreateIdleInstanceCullerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdleInstanceCullerResponse
       */
      Models::CreateIdleInstanceCullerResponse createIdleInstanceCullerWithOptions(const string &InstanceId, const Models::CreateIdleInstanceCullerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an automatic stop policy for a specific Data Science Workshop (DSW) instance. When the conditions are met, the instance is automatically stopped. You can create only one automatic stop policy for an idle DSW instance. If the specific instance has an automatic stop policy, call DeleteIdleInstanceCuller to delete it first.
       *
       * @param request CreateIdleInstanceCullerRequest
       * @return CreateIdleInstanceCullerResponse
       */
      Models::CreateIdleInstanceCullerResponse createIdleInstanceCuller(const string &InstanceId, const Models::CreateIdleInstanceCullerRequest &request);

      /**
       * @summary Creates a Data Science Workshop (DSW) instance.
       *
       * @param request CreateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Data Science Workshop (DSW) instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a scheduled stop task for an instance.
       *
       * @param request CreateInstanceShutdownTimerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceShutdownTimerResponse
       */
      Models::CreateInstanceShutdownTimerResponse createInstanceShutdownTimerWithOptions(const string &InstanceId, const Models::CreateInstanceShutdownTimerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled stop task for an instance.
       *
       * @param request CreateInstanceShutdownTimerRequest
       * @return CreateInstanceShutdownTimerResponse
       */
      Models::CreateInstanceShutdownTimerResponse createInstanceShutdownTimer(const string &InstanceId, const Models::CreateInstanceShutdownTimerRequest &request);

      /**
       * @summary 创建实例快照
       *
       * @param request CreateInstanceSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceSnapshotResponse
       */
      Models::CreateInstanceSnapshotResponse createInstanceSnapshotWithOptions(const string &InstanceId, const Models::CreateInstanceSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建实例快照
       *
       * @param request CreateInstanceSnapshotRequest
       * @return CreateInstanceSnapshotResponse
       */
      Models::CreateInstanceSnapshotResponse createInstanceSnapshot(const string &InstanceId, const Models::CreateInstanceSnapshotRequest &request);

      /**
       * @summary Deletes the automatic stop policy of an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdleInstanceCullerResponse
       */
      Models::DeleteIdleInstanceCullerResponse deleteIdleInstanceCullerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the automatic stop policy of an instance.
       *
       * @return DeleteIdleInstanceCullerResponse
       */
      Models::DeleteIdleInstanceCullerResponse deleteIdleInstanceCuller(const string &InstanceId);

      /**
       * @summary Deletes a specific instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific instance.
       *
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const string &InstanceId);

      /**
       * @summary Delete tags from a Data Science Workshop (DSW) instance.
       *
       * @param request DeleteInstanceLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceLabelsResponse
       */
      Models::DeleteInstanceLabelsResponse deleteInstanceLabelsWithOptions(const string &InstanceId, const Models::DeleteInstanceLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete tags from a Data Science Workshop (DSW) instance.
       *
       * @param request DeleteInstanceLabelsRequest
       * @return DeleteInstanceLabelsResponse
       */
      Models::DeleteInstanceLabelsResponse deleteInstanceLabels(const string &InstanceId, const Models::DeleteInstanceLabelsRequest &request);

      /**
       * @summary Deletes a scheduled stop task of an instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceShutdownTimerResponse
       */
      Models::DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled stop task of an instance.
       *
       * @return DeleteInstanceShutdownTimerResponse
       */
      Models::DeleteInstanceShutdownTimerResponse deleteInstanceShutdownTimer(const string &InstanceId);

      /**
       * @summary 获取实例快照详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceSnapshotResponse
       */
      Models::DeleteInstanceSnapshotResponse deleteInstanceSnapshotWithOptions(const string &InstanceId, const string &SnapshotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例快照详情
       *
       * @return DeleteInstanceSnapshotResponse
       */
      Models::DeleteInstanceSnapshotResponse deleteInstanceSnapshot(const string &InstanceId, const string &SnapshotId);

      /**
       * @summary Queries the information about an auto stop policy for a specific idle instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdleInstanceCullerResponse
       */
      Models::GetIdleInstanceCullerResponse getIdleInstanceCullerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an auto stop policy for a specific idle instance.
       *
       * @return GetIdleInstanceCullerResponse
       */
      Models::GetIdleInstanceCullerResponse getIdleInstanceCuller(const string &InstanceId);

      /**
       * @summary Queries the details of a DSW instance.
       *
       * @param request GetInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const string &InstanceId, const Models::GetInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a DSW instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const string &InstanceId, const Models::GetInstanceRequest &request);

      /**
       * @summary Queries a list of system events for a Data Science Workshop (DSW) instance.
       *
       * @param request GetInstanceEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceEventsResponse
       */
      Models::GetInstanceEventsResponse getInstanceEventsWithOptions(const string &InstanceId, const Models::GetInstanceEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of system events for a Data Science Workshop (DSW) instance.
       *
       * @param request GetInstanceEventsRequest
       * @return GetInstanceEventsResponse
       */
      Models::GetInstanceEventsResponse getInstanceEvents(const string &InstanceId, const Models::GetInstanceEventsRequest &request);

      /**
       * @summary Queries the resource metrics of an instance.
       *
       * @param request GetInstanceMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceMetricsResponse
       */
      Models::GetInstanceMetricsResponse getInstanceMetricsWithOptions(const string &InstanceId, const Models::GetInstanceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource metrics of an instance.
       *
       * @param request GetInstanceMetricsRequest
       * @return GetInstanceMetricsResponse
       */
      Models::GetInstanceMetricsResponse getInstanceMetrics(const string &InstanceId, const Models::GetInstanceMetricsRequest &request);

      /**
       * @summary 获取定时关机任务
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceShutdownTimerResponse
       */
      Models::GetInstanceShutdownTimerResponse getInstanceShutdownTimerWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取定时关机任务
       *
       * @return GetInstanceShutdownTimerResponse
       */
      Models::GetInstanceShutdownTimerResponse getInstanceShutdownTimer(const string &InstanceId);

      /**
       * @summary 获取实例快照详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceSnapshotResponse
       */
      Models::GetInstanceSnapshotResponse getInstanceSnapshotWithOptions(const string &InstanceId, const string &SnapshotId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例快照详情
       *
       * @return GetInstanceSnapshotResponse
       */
      Models::GetInstanceSnapshotResponse getInstanceSnapshot(const string &InstanceId, const string &SnapshotId);

      /**
       * @summary Obtains the lifecycle of an instance
       *
       * @description Obtains the lifecycle transition information for an instance, including details on the status an instance transitions to at a specific point in time.
       *
       * @param request GetLifecycleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLifecycleResponse
       */
      Models::GetLifecycleResponse getLifecycleWithOptions(const string &InstanceId, const Models::GetLifecycleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the lifecycle of an instance
       *
       * @description Obtains the lifecycle transition information for an instance, including details on the status an instance transitions to at a specific point in time.
       *
       * @param request GetLifecycleRequest
       * @return GetLifecycleResponse
       */
      Models::GetLifecycleResponse getLifecycle(const string &InstanceId, const Models::GetLifecycleRequest &request);

      /**
       * @summary 获取metrics数据
       *
       * @param request GetMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetricsResponse
       */
      Models::GetMetricsResponse getMetricsWithOptions(const string &InstanceId, const Models::GetMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取metrics数据
       *
       * @param request GetMetricsRequest
       * @return GetMetricsResponse
       */
      Models::GetMetricsResponse getMetrics(const string &InstanceId, const Models::GetMetricsRequest &request);

      /**
       * @param request GetResourceGroupStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceGroupStatisticsResponse
       */
      Models::GetResourceGroupStatisticsResponse getResourceGroupStatisticsWithOptions(const Models::GetResourceGroupStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetResourceGroupStatisticsRequest
       * @return GetResourceGroupStatisticsResponse
       */
      Models::GetResourceGroupStatisticsResponse getResourceGroupStatistics(const Models::GetResourceGroupStatisticsRequest &request);

      /**
       * @summary Obtains the temporary authentication information of a DSW instance.
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the temporary authentication information of a DSW instance.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary 获取自定义用户命令
       *
       * @param request GetUserCommandRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserCommandResponse
       */
      Models::GetUserCommandResponse getUserCommandWithOptions(const string &UserCommandId, const Models::GetUserCommandRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义用户命令
       *
       * @param request GetUserCommandRequest
       * @return GetUserCommandResponse
       */
      Models::GetUserCommandResponse getUserCommand(const string &UserCommandId, const Models::GetUserCommandRequest &request);

      /**
       * @summary 获取用户配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserConfigResponse
       */
      Models::GetUserConfigResponse getUserConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户配置
       *
       * @return GetUserConfigResponse
       */
      Models::GetUserConfigResponse getUserConfig();

      /**
       * @summary Queries a list of specifications of ECS instances.
       *
       * @param request ListEcsSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcsSpecsResponse
       */
      Models::ListEcsSpecsResponse listEcsSpecsWithOptions(const Models::ListEcsSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of specifications of ECS instances.
       *
       * @param request ListEcsSpecsRequest
       * @return ListEcsSpecsResponse
       */
      Models::ListEcsSpecsResponse listEcsSpecs(const Models::ListEcsSpecsRequest &request);

      /**
       * @summary 查询实例快照列表
       *
       * @param request ListInstanceSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceSnapshotResponse
       */
      Models::ListInstanceSnapshotResponse listInstanceSnapshotWithOptions(const string &InstanceId, const Models::ListInstanceSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例快照列表
       *
       * @param request ListInstanceSnapshotRequest
       * @return ListInstanceSnapshotResponse
       */
      Models::ListInstanceSnapshotResponse listInstanceSnapshot(const string &InstanceId, const Models::ListInstanceSnapshotRequest &request);

      /**
       * @summary 获取实例统计信息
       *
       * @param request ListInstanceStatisticsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceStatisticsResponse
       */
      Models::ListInstanceStatisticsResponse listInstanceStatisticsWithOptions(const Models::ListInstanceStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例统计信息
       *
       * @param request ListInstanceStatisticsRequest
       * @return ListInstanceStatisticsResponse
       */
      Models::ListInstanceStatisticsResponse listInstanceStatistics(const Models::ListInstanceStatisticsRequest &request);

      /**
       * @summary Queries a list of Data Science Workshop (DSW) instances.
       *
       * @param tmpReq ListInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Data Science Workshop (DSW) instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary 获取系统日志
       *
       * @param request ListSystemLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemLogsResponse
       */
      Models::ListSystemLogsResponse listSystemLogsWithOptions(const Models::ListSystemLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取系统日志
       *
       * @param request ListSystemLogsRequest
       * @return ListSystemLogsResponse
       */
      Models::ListSystemLogsResponse listSystemLogs(const Models::ListSystemLogsRequest &request);

      /**
       * @summary 启动实例
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const string &InstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动实例
       *
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const string &InstanceId);

      /**
       * @summary 停止实例
       *
       * @param request StopInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const string &InstanceId, const Models::StopInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止实例
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const string &InstanceId, const Models::StopInstanceRequest &request);

      /**
       * @summary Updates the properties of a DSW instance.
       *
       * @param request UpdateInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const string &InstanceId, const Models::UpdateInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the properties of a DSW instance.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const string &InstanceId, const Models::UpdateInstanceRequest &request);

      /**
       * @summary Updates the tags of a Data Science Workshop (DSW) instance. If the tags do not exist, the system adds tags.
       *
       * @param request UpdateInstanceLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceLabelsResponse
       */
      Models::UpdateInstanceLabelsResponse updateInstanceLabelsWithOptions(const string &InstanceId, const Models::UpdateInstanceLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the tags of a Data Science Workshop (DSW) instance. If the tags do not exist, the system adds tags.
       *
       * @param request UpdateInstanceLabelsRequest
       * @return UpdateInstanceLabelsResponse
       */
      Models::UpdateInstanceLabelsResponse updateInstanceLabels(const string &InstanceId, const Models::UpdateInstanceLabelsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
