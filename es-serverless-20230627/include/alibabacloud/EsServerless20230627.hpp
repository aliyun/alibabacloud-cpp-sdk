// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ESSERVERLESS20230627_HPP_
#define ALIBABACLOUD_ESSERVERLESS20230627_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EsServerless20230627Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EsServerless20230627.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 撤销规格审批
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelSpecReviewTaskResponse
       */
      Models::CancelSpecReviewTaskResponse cancelSpecReviewTaskWithOptions(const string &appName, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 撤销规格审批
       *
       * @return CancelSpecReviewTaskResponse
       */
      Models::CancelSpecReviewTaskResponse cancelSpecReviewTask(const string &appName, const string &taskId);

      /**
       * @summary 创建Serverless应用
       *
       * @param request CreateAppRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Serverless应用
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary 创建端点
       *
       * @param request CreateEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpointWithOptions(const Models::CreateEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建端点
       *
       * @param request CreateEndpointRequest
       * @return CreateEndpointResponse
       */
      Models::CreateEndpointResponse createEndpoint(const Models::CreateEndpointRequest &request);

      /**
       * @summary 创建快照
       *
       * @param request CreateSnapshotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const string &appName, const string &repository, const Models::CreateSnapshotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建快照
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const string &appName, const string &repository, const Models::CreateSnapshotRequest &request);

      /**
       * @summary 删除Serverless应用。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Serverless应用。
       *
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const string &appName);

      /**
       * @summary 删除词典
       *
       * @param request DeleteDictRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDictResponse
       */
      Models::DeleteDictResponse deleteDictWithOptions(const string &appName, const Models::DeleteDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除词典
       *
       * @param request DeleteDictRequest
       * @return DeleteDictResponse
       */
      Models::DeleteDictResponse deleteDict(const string &appName, const Models::DeleteDictRequest &request);

      /**
       * @summary 删除端点
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpointWithOptions(const string &endpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除端点
       *
       * @return DeleteEndpointResponse
       */
      Models::DeleteEndpointResponse deleteEndpoint(const string &endpointId);

      /**
       * @summary 删除快照
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const string &appName, const string &repository, const string &snapshot, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除快照
       *
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const string &appName, const string &repository, const string &snapshot);

      /**
       * @summary 获取Serverless应用详情
       *
       * @param request GetAppRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppResponse
       */
      Models::GetAppResponse getAppWithOptions(const string &appName, const Models::GetAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Serverless应用详情
       *
       * @param request GetAppRequest
       * @return GetAppResponse
       */
      Models::GetAppResponse getApp(const string &appName, const Models::GetAppRequest &request);

      /**
       * @summary 获取Serverless应用配额详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppQuotaResponse
       */
      Models::GetAppQuotaResponse getAppQuotaWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Serverless应用配额详情
       *
       * @return GetAppQuotaResponse
       */
      Models::GetAppQuotaResponse getAppQuota(const string &appName);

      /**
       * @summary 获取监控数据
       *
       * @param request GetMonitorDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMonitorDataResponse
       */
      Models::GetMonitorDataResponse getMonitorDataWithOptions(const Models::GetMonitorDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取监控数据
       *
       * @param request GetMonitorDataRequest
       * @return GetMonitorDataResponse
       */
      Models::GetMonitorDataResponse getMonitorData(const Models::GetMonitorDataRequest &request);

      /**
       * @summary 获取自动备份配置
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSnapshotSettingResponse
       */
      Models::GetSnapshotSettingResponse getSnapshotSettingWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自动备份配置
       *
       * @return GetSnapshotSettingResponse
       */
      Models::GetSnapshotSettingResponse getSnapshotSetting(const string &appName);

      /**
       * @summary 获取配额审批详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpecReviewTaskResponse
       */
      Models::GetSpecReviewTaskResponse getSpecReviewTaskWithOptions(const string &appName, const string &taskId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取配额审批详情
       *
       * @return GetSpecReviewTaskResponse
       */
      Models::GetSpecReviewTaskResponse getSpecReviewTask(const string &appName, const string &taskId);

      /**
       * @summary 查看Serverless应用列表
       *
       * @param request ListAppsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listAppsWithOptions(const Models::ListAppsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看Serverless应用列表
       *
       * @param request ListAppsRequest
       * @return ListAppsResponse
       */
      Models::ListAppsResponse listApps(const Models::ListAppsRequest &request);

      /**
       * @summary 获取词典列表
       *
       * @param request ListDictsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDictsResponse
       */
      Models::ListDictsResponse listDictsWithOptions(const string &appName, const Models::ListDictsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取词典列表
       *
       * @param request ListDictsRequest
       * @return ListDictsResponse
       */
      Models::ListDictsResponse listDicts(const string &appName, const Models::ListDictsRequest &request);

      /**
       * @summary 获取端点信息列表
       *
       * @param request ListEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEndpointsResponse
       */
      Models::ListEndpointsResponse listEndpointsWithOptions(const Models::ListEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取端点信息列表
       *
       * @param request ListEndpointsRequest
       * @return ListEndpointsResponse
       */
      Models::ListEndpointsResponse listEndpoints(const Models::ListEndpointsRequest &request);

      /**
       * @summary 查看索引列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndicesWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看索引列表
       *
       * @return ListIndicesResponse
       */
      Models::ListIndicesResponse listIndices(const string &appName);

      /**
       * @summary 获取快照仓库列表
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotRepositoriesResponse
       */
      Models::ListSnapshotRepositoriesResponse listSnapshotRepositoriesWithOptions(const string &appName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取快照仓库列表
       *
       * @return ListSnapshotRepositoriesResponse
       */
      Models::ListSnapshotRepositoriesResponse listSnapshotRepositories(const string &appName);

      /**
       * @summary 获取仓库的快照列表
       *
       * @param request ListSnapshotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const string &appName, const Models::ListSnapshotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取仓库的快照列表
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const string &appName, const Models::ListSnapshotsRequest &request);

      /**
       * @summary 获取规格审批列表
       *
       * @param request ListSpecReviewTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSpecReviewTasksResponse
       */
      Models::ListSpecReviewTasksResponse listSpecReviewTasksWithOptions(const string &appName, const Models::ListSpecReviewTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取规格审批列表
       *
       * @param request ListSpecReviewTasksRequest
       * @return ListSpecReviewTasksResponse
       */
      Models::ListSpecReviewTasksResponse listSpecReviewTasks(const string &appName, const Models::ListSpecReviewTasksRequest &request);

      /**
       * @summary 编辑Serverless应用
       *
       * @param request UpdateAppRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppResponse
       */
      Models::UpdateAppResponse updateAppWithOptions(const string &appName, const Models::UpdateAppRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑Serverless应用
       *
       * @param request UpdateAppRequest
       * @return UpdateAppResponse
       */
      Models::UpdateAppResponse updateApp(const string &appName, const Models::UpdateAppRequest &request);

      /**
       * @summary 创建或更新词典
       *
       * @param request UpdateDictRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDictResponse
       */
      Models::UpdateDictResponse updateDictWithOptions(const string &appName, const Models::UpdateDictRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建或更新词典
       *
       * @param request UpdateDictRequest
       * @return UpdateDictResponse
       */
      Models::UpdateDictResponse updateDict(const string &appName, const Models::UpdateDictRequest &request);

      /**
       * @summary 修改端点信息
       *
       * @param request UpdateEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEndpointResponse
       */
      Models::UpdateEndpointResponse updateEndpointWithOptions(const string &endpointId, const Models::UpdateEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改端点信息
       *
       * @param request UpdateEndpointRequest
       * @return UpdateEndpointResponse
       */
      Models::UpdateEndpointResponse updateEndpoint(const string &endpointId, const Models::UpdateEndpointRequest &request);

      /**
       * @summary 修改应用公网配置。
       *
       * @param request UpdateNetworkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkResponse
       */
      Models::UpdateNetworkResponse updateNetworkWithOptions(const string &appName, const Models::UpdateNetworkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用公网配置。
       *
       * @param request UpdateNetworkRequest
       * @return UpdateNetworkResponse
       */
      Models::UpdateNetworkResponse updateNetwork(const string &appName, const Models::UpdateNetworkRequest &request);

      /**
       * @summary 修改应用公网信息。
       *
       * @param request UpdatePrivateNetwrokRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateNetwrokResponse
       */
      Models::UpdatePrivateNetwrokResponse updatePrivateNetwrokWithOptions(const string &appName, const Models::UpdatePrivateNetwrokRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用公网信息。
       *
       * @param request UpdatePrivateNetwrokRequest
       * @return UpdatePrivateNetwrokResponse
       */
      Models::UpdatePrivateNetwrokResponse updatePrivateNetwrok(const string &appName, const Models::UpdatePrivateNetwrokRequest &request);

      /**
       * @summary 修改自动备份配置
       *
       * @param request UpdateSnapshotSettingRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSnapshotSettingResponse
       */
      Models::UpdateSnapshotSettingResponse updateSnapshotSettingWithOptions(const string &appName, const Models::UpdateSnapshotSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改自动备份配置
       *
       * @param request UpdateSnapshotSettingRequest
       * @return UpdateSnapshotSettingResponse
       */
      Models::UpdateSnapshotSettingResponse updateSnapshotSetting(const string &appName, const Models::UpdateSnapshotSettingRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
