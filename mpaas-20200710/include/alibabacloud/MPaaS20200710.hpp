// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MPAAS20200710_HPP_
#define ALIBABACLOUD_MPAAS20200710_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MPaaS20200710Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MPaaS20200710.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 取消定时任务
       *
       * @param request CancelMpsSchedulerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelMpsSchedulerResponse
       */
      Models::CancelMpsSchedulerResponse cancelMpsSchedulerWithOptions(const Models::CancelMpsSchedulerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消定时任务
       *
       * @param request CancelMpsSchedulerRequest
       * @return CancelMpsSchedulerResponse
       */
      Models::CancelMpsSchedulerResponse cancelMpsScheduler(const Models::CancelMpsSchedulerRequest &request);

      /**
       * @param request CancelPushSchedulerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPushSchedulerResponse
       */
      Models::CancelPushSchedulerResponse cancelPushSchedulerWithOptions(const Models::CancelPushSchedulerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CancelPushSchedulerRequest
       * @return CancelPushSchedulerResponse
       */
      Models::CancelPushSchedulerResponse cancelPushScheduler(const Models::CancelPushSchedulerRequest &request);

      /**
       * @param request ChangeMcubeMiniTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeMcubeMiniTaskStatusResponse
       */
      Models::ChangeMcubeMiniTaskStatusResponse changeMcubeMiniTaskStatusWithOptions(const Models::ChangeMcubeMiniTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeMcubeMiniTaskStatusRequest
       * @return ChangeMcubeMiniTaskStatusResponse
       */
      Models::ChangeMcubeMiniTaskStatusResponse changeMcubeMiniTaskStatus(const Models::ChangeMcubeMiniTaskStatusRequest &request);

      /**
       * @param request ChangeMcubeNebulaTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeMcubeNebulaTaskStatusResponse
       */
      Models::ChangeMcubeNebulaTaskStatusResponse changeMcubeNebulaTaskStatusWithOptions(const Models::ChangeMcubeNebulaTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeMcubeNebulaTaskStatusRequest
       * @return ChangeMcubeNebulaTaskStatusResponse
       */
      Models::ChangeMcubeNebulaTaskStatusResponse changeMcubeNebulaTaskStatus(const Models::ChangeMcubeNebulaTaskStatusRequest &request);

      /**
       * @param request ChangeMcubePublicTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeMcubePublicTaskStatusResponse
       */
      Models::ChangeMcubePublicTaskStatusResponse changeMcubePublicTaskStatusWithOptions(const Models::ChangeMcubePublicTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeMcubePublicTaskStatusRequest
       * @return ChangeMcubePublicTaskStatusResponse
       */
      Models::ChangeMcubePublicTaskStatusResponse changeMcubePublicTaskStatus(const Models::ChangeMcubePublicTaskStatusRequest &request);

      /**
       * @param request CreateMcubeMiniAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeMiniAppResponse
       */
      Models::CreateMcubeMiniAppResponse createMcubeMiniAppWithOptions(const Models::CreateMcubeMiniAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeMiniAppRequest
       * @return CreateMcubeMiniAppResponse
       */
      Models::CreateMcubeMiniAppResponse createMcubeMiniApp(const Models::CreateMcubeMiniAppRequest &request);

      /**
       * @param request CreateMcubeMiniTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeMiniTaskResponse
       */
      Models::CreateMcubeMiniTaskResponse createMcubeMiniTaskWithOptions(const Models::CreateMcubeMiniTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeMiniTaskRequest
       * @return CreateMcubeMiniTaskResponse
       */
      Models::CreateMcubeMiniTaskResponse createMcubeMiniTask(const Models::CreateMcubeMiniTaskRequest &request);

      /**
       * @param request CreateMcubeNebulaAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeNebulaAppResponse
       */
      Models::CreateMcubeNebulaAppResponse createMcubeNebulaAppWithOptions(const Models::CreateMcubeNebulaAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeNebulaAppRequest
       * @return CreateMcubeNebulaAppResponse
       */
      Models::CreateMcubeNebulaAppResponse createMcubeNebulaApp(const Models::CreateMcubeNebulaAppRequest &request);

      /**
       * @param request CreateMcubeNebulaResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeNebulaResourceResponse
       */
      Models::CreateMcubeNebulaResourceResponse createMcubeNebulaResourceWithOptions(const Models::CreateMcubeNebulaResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeNebulaResourceRequest
       * @return CreateMcubeNebulaResourceResponse
       */
      Models::CreateMcubeNebulaResourceResponse createMcubeNebulaResource(const Models::CreateMcubeNebulaResourceRequest &request);

      /**
       * @param request CreateMcubeNebulaTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeNebulaTaskResponse
       */
      Models::CreateMcubeNebulaTaskResponse createMcubeNebulaTaskWithOptions(const Models::CreateMcubeNebulaTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeNebulaTaskRequest
       * @return CreateMcubeNebulaTaskResponse
       */
      Models::CreateMcubeNebulaTaskResponse createMcubeNebulaTask(const Models::CreateMcubeNebulaTaskRequest &request);

      /**
       * @param request CreateMcubeUpgradePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeUpgradePackageResponse
       */
      Models::CreateMcubeUpgradePackageResponse createMcubeUpgradePackageWithOptions(const Models::CreateMcubeUpgradePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeUpgradePackageRequest
       * @return CreateMcubeUpgradePackageResponse
       */
      Models::CreateMcubeUpgradePackageResponse createMcubeUpgradePackage(const Models::CreateMcubeUpgradePackageRequest &request);

      /**
       * @param request CreateMcubeUpgradeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeUpgradeTaskResponse
       */
      Models::CreateMcubeUpgradeTaskResponse createMcubeUpgradeTaskWithOptions(const Models::CreateMcubeUpgradeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeUpgradeTaskRequest
       * @return CreateMcubeUpgradeTaskResponse
       */
      Models::CreateMcubeUpgradeTaskResponse createMcubeUpgradeTask(const Models::CreateMcubeUpgradeTaskRequest &request);

      /**
       * @param request CreateMcubeVhostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeVhostResponse
       */
      Models::CreateMcubeVhostResponse createMcubeVhostWithOptions(const Models::CreateMcubeVhostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeVhostRequest
       * @return CreateMcubeVhostResponse
       */
      Models::CreateMcubeVhostResponse createMcubeVhost(const Models::CreateMcubeVhostRequest &request);

      /**
       * @param request CreateMcubeWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeWhitelistResponse
       */
      Models::CreateMcubeWhitelistResponse createMcubeWhitelistWithOptions(const Models::CreateMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeWhitelistRequest
       * @return CreateMcubeWhitelistResponse
       */
      Models::CreateMcubeWhitelistResponse createMcubeWhitelist(const Models::CreateMcubeWhitelistRequest &request);

      /**
       * @param request CreateMcubeWhitelistForIdeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcubeWhitelistForIdeResponse
       */
      Models::CreateMcubeWhitelistForIdeResponse createMcubeWhitelistForIdeWithOptions(const Models::CreateMcubeWhitelistForIdeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcubeWhitelistForIdeRequest
       * @return CreateMcubeWhitelistForIdeResponse
       */
      Models::CreateMcubeWhitelistForIdeResponse createMcubeWhitelistForIde(const Models::CreateMcubeWhitelistForIdeRequest &request);

      /**
       * @param request CreateOpenGlobalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpenGlobalDataResponse
       */
      Models::CreateOpenGlobalDataResponse createOpenGlobalDataWithOptions(const Models::CreateOpenGlobalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateOpenGlobalDataRequest
       * @return CreateOpenGlobalDataResponse
       */
      Models::CreateOpenGlobalDataResponse createOpenGlobalData(const Models::CreateOpenGlobalDataRequest &request);

      /**
       * @param request CreateOpenSingleDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOpenSingleDataResponse
       */
      Models::CreateOpenSingleDataResponse createOpenSingleDataWithOptions(const Models::CreateOpenSingleDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateOpenSingleDataRequest
       * @return CreateOpenSingleDataResponse
       */
      Models::CreateOpenSingleDataResponse createOpenSingleData(const Models::CreateOpenSingleDataRequest &request);

      /**
       * @summary 创建模版
       *
       * @param request CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模版
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @param request DeleteCubecardWhitelistContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCubecardWhitelistContentResponse
       */
      Models::DeleteCubecardWhitelistContentResponse deleteCubecardWhitelistContentWithOptions(const Models::DeleteCubecardWhitelistContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCubecardWhitelistContentRequest
       * @return DeleteCubecardWhitelistContentResponse
       */
      Models::DeleteCubecardWhitelistContentResponse deleteCubecardWhitelistContent(const Models::DeleteCubecardWhitelistContentRequest &request);

      /**
       * @param request DeleteMcubeMiniAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcubeMiniAppResponse
       */
      Models::DeleteMcubeMiniAppResponse deleteMcubeMiniAppWithOptions(const Models::DeleteMcubeMiniAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcubeMiniAppRequest
       * @return DeleteMcubeMiniAppResponse
       */
      Models::DeleteMcubeMiniAppResponse deleteMcubeMiniApp(const Models::DeleteMcubeMiniAppRequest &request);

      /**
       * @param request DeleteMcubeNebulaAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcubeNebulaAppResponse
       */
      Models::DeleteMcubeNebulaAppResponse deleteMcubeNebulaAppWithOptions(const Models::DeleteMcubeNebulaAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcubeNebulaAppRequest
       * @return DeleteMcubeNebulaAppResponse
       */
      Models::DeleteMcubeNebulaAppResponse deleteMcubeNebulaApp(const Models::DeleteMcubeNebulaAppRequest &request);

      /**
       * @param request DeleteMcubeUpgradeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcubeUpgradeResourceResponse
       */
      Models::DeleteMcubeUpgradeResourceResponse deleteMcubeUpgradeResourceWithOptions(const Models::DeleteMcubeUpgradeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcubeUpgradeResourceRequest
       * @return DeleteMcubeUpgradeResourceResponse
       */
      Models::DeleteMcubeUpgradeResourceResponse deleteMcubeUpgradeResource(const Models::DeleteMcubeUpgradeResourceRequest &request);

      /**
       * @param request DeleteMcubeWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcubeWhitelistResponse
       */
      Models::DeleteMcubeWhitelistResponse deleteMcubeWhitelistWithOptions(const Models::DeleteMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcubeWhitelistRequest
       * @return DeleteMcubeWhitelistResponse
       */
      Models::DeleteMcubeWhitelistResponse deleteMcubeWhitelist(const Models::DeleteMcubeWhitelistRequest &request);

      /**
       * @param request DeleteMdsWhitelistContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMdsWhitelistContentResponse
       */
      Models::DeleteMdsWhitelistContentResponse deleteMdsWhitelistContentWithOptions(const Models::DeleteMdsWhitelistContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMdsWhitelistContentRequest
       * @return DeleteMdsWhitelistContentResponse
       */
      Models::DeleteMdsWhitelistContentResponse deleteMdsWhitelistContent(const Models::DeleteMdsWhitelistContentRequest &request);

      /**
       * @summary 删除模版
       *
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模版
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @param request ExistMcubeRsaKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExistMcubeRsaKeyResponse
       */
      Models::ExistMcubeRsaKeyResponse existMcubeRsaKeyWithOptions(const Models::ExistMcubeRsaKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExistMcubeRsaKeyRequest
       * @return ExistMcubeRsaKeyResponse
       */
      Models::ExistMcubeRsaKeyResponse existMcubeRsaKey(const Models::ExistMcubeRsaKeyRequest &request);

      /**
       * @param request GetMcubeFileTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcubeFileTokenResponse
       */
      Models::GetMcubeFileTokenResponse getMcubeFileTokenWithOptions(const Models::GetMcubeFileTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMcubeFileTokenRequest
       * @return GetMcubeFileTokenResponse
       */
      Models::GetMcubeFileTokenResponse getMcubeFileToken(const Models::GetMcubeFileTokenRequest &request);

      /**
       * @param request GetMcubeNebulaResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcubeNebulaResourceResponse
       */
      Models::GetMcubeNebulaResourceResponse getMcubeNebulaResourceWithOptions(const Models::GetMcubeNebulaResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMcubeNebulaResourceRequest
       * @return GetMcubeNebulaResourceResponse
       */
      Models::GetMcubeNebulaResourceResponse getMcubeNebulaResource(const Models::GetMcubeNebulaResourceRequest &request);

      /**
       * @param request GetMcubeNebulaTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcubeNebulaTaskDetailResponse
       */
      Models::GetMcubeNebulaTaskDetailResponse getMcubeNebulaTaskDetailWithOptions(const Models::GetMcubeNebulaTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMcubeNebulaTaskDetailRequest
       * @return GetMcubeNebulaTaskDetailResponse
       */
      Models::GetMcubeNebulaTaskDetailResponse getMcubeNebulaTaskDetail(const Models::GetMcubeNebulaTaskDetailRequest &request);

      /**
       * @param request GetMcubeUpgradePackageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcubeUpgradePackageInfoResponse
       */
      Models::GetMcubeUpgradePackageInfoResponse getMcubeUpgradePackageInfoWithOptions(const Models::GetMcubeUpgradePackageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMcubeUpgradePackageInfoRequest
       * @return GetMcubeUpgradePackageInfoResponse
       */
      Models::GetMcubeUpgradePackageInfoResponse getMcubeUpgradePackageInfo(const Models::GetMcubeUpgradePackageInfoRequest &request);

      /**
       * @param request GetMcubeUpgradeTaskInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcubeUpgradeTaskInfoResponse
       */
      Models::GetMcubeUpgradeTaskInfoResponse getMcubeUpgradeTaskInfoWithOptions(const Models::GetMcubeUpgradeTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMcubeUpgradeTaskInfoRequest
       * @return GetMcubeUpgradeTaskInfoResponse
       */
      Models::GetMcubeUpgradeTaskInfoResponse getMcubeUpgradeTaskInfo(const Models::GetMcubeUpgradeTaskInfoRequest &request);

      /**
       * @summary 获取模版
       *
       * @param request GetTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const Models::GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模版
       *
       * @param request GetTemplateRequest
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const Models::GetTemplateRequest &request);

      /**
       * @summary 查询报表
       *
       * @param request ListAnalysisCoreIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnalysisCoreIndexResponse
       */
      Models::ListAnalysisCoreIndexResponse listAnalysisCoreIndexWithOptions(const Models::ListAnalysisCoreIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询报表
       *
       * @param request ListAnalysisCoreIndexRequest
       * @return ListAnalysisCoreIndexResponse
       */
      Models::ListAnalysisCoreIndexResponse listAnalysisCoreIndex(const Models::ListAnalysisCoreIndexRequest &request);

      /**
       * @param request ListMcubeMiniAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeMiniAppsResponse
       */
      Models::ListMcubeMiniAppsResponse listMcubeMiniAppsWithOptions(const Models::ListMcubeMiniAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeMiniAppsRequest
       * @return ListMcubeMiniAppsResponse
       */
      Models::ListMcubeMiniAppsResponse listMcubeMiniApps(const Models::ListMcubeMiniAppsRequest &request);

      /**
       * @param request ListMcubeMiniPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeMiniPackagesResponse
       */
      Models::ListMcubeMiniPackagesResponse listMcubeMiniPackagesWithOptions(const Models::ListMcubeMiniPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeMiniPackagesRequest
       * @return ListMcubeMiniPackagesResponse
       */
      Models::ListMcubeMiniPackagesResponse listMcubeMiniPackages(const Models::ListMcubeMiniPackagesRequest &request);

      /**
       * @param request ListMcubeMiniTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeMiniTasksResponse
       */
      Models::ListMcubeMiniTasksResponse listMcubeMiniTasksWithOptions(const Models::ListMcubeMiniTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeMiniTasksRequest
       * @return ListMcubeMiniTasksResponse
       */
      Models::ListMcubeMiniTasksResponse listMcubeMiniTasks(const Models::ListMcubeMiniTasksRequest &request);

      /**
       * @param request ListMcubeNebulaAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeNebulaAppsResponse
       */
      Models::ListMcubeNebulaAppsResponse listMcubeNebulaAppsWithOptions(const Models::ListMcubeNebulaAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeNebulaAppsRequest
       * @return ListMcubeNebulaAppsResponse
       */
      Models::ListMcubeNebulaAppsResponse listMcubeNebulaApps(const Models::ListMcubeNebulaAppsRequest &request);

      /**
       * @param request ListMcubeNebulaResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeNebulaResourcesResponse
       */
      Models::ListMcubeNebulaResourcesResponse listMcubeNebulaResourcesWithOptions(const Models::ListMcubeNebulaResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeNebulaResourcesRequest
       * @return ListMcubeNebulaResourcesResponse
       */
      Models::ListMcubeNebulaResourcesResponse listMcubeNebulaResources(const Models::ListMcubeNebulaResourcesRequest &request);

      /**
       * @param request ListMcubeNebulaTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeNebulaTasksResponse
       */
      Models::ListMcubeNebulaTasksResponse listMcubeNebulaTasksWithOptions(const Models::ListMcubeNebulaTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeNebulaTasksRequest
       * @return ListMcubeNebulaTasksResponse
       */
      Models::ListMcubeNebulaTasksResponse listMcubeNebulaTasks(const Models::ListMcubeNebulaTasksRequest &request);

      /**
       * @param request ListMcubeUpgradePackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeUpgradePackagesResponse
       */
      Models::ListMcubeUpgradePackagesResponse listMcubeUpgradePackagesWithOptions(const Models::ListMcubeUpgradePackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeUpgradePackagesRequest
       * @return ListMcubeUpgradePackagesResponse
       */
      Models::ListMcubeUpgradePackagesResponse listMcubeUpgradePackages(const Models::ListMcubeUpgradePackagesRequest &request);

      /**
       * @param request ListMcubeUpgradeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeUpgradeTasksResponse
       */
      Models::ListMcubeUpgradeTasksResponse listMcubeUpgradeTasksWithOptions(const Models::ListMcubeUpgradeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeUpgradeTasksRequest
       * @return ListMcubeUpgradeTasksResponse
       */
      Models::ListMcubeUpgradeTasksResponse listMcubeUpgradeTasks(const Models::ListMcubeUpgradeTasksRequest &request);

      /**
       * @param request ListMcubeWhitelistsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcubeWhitelistsResponse
       */
      Models::ListMcubeWhitelistsResponse listMcubeWhitelistsWithOptions(const Models::ListMcubeWhitelistsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcubeWhitelistsRequest
       * @return ListMcubeWhitelistsResponse
       */
      Models::ListMcubeWhitelistsResponse listMcubeWhitelists(const Models::ListMcubeWhitelistsRequest &request);

      /**
       * @summary 分页查询模版列表
       *
       * @param request ListTemplatePageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTemplatePageResponse
       */
      Models::ListTemplatePageResponse listTemplatePageWithOptions(const Models::ListTemplatePageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询模版列表
       *
       * @param request ListTemplatePageRequest
       * @return ListTemplatePageResponse
       */
      Models::ListTemplatePageResponse listTemplatePage(const Models::ListTemplatePageRequest &request);

      /**
       * @param tmpReq PushBroadcastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushBroadcastResponse
       */
      Models::PushBroadcastResponse pushBroadcastWithOptions(const Models::PushBroadcastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushBroadcastRequest
       * @return PushBroadcastResponse
       */
      Models::PushBroadcastResponse pushBroadcast(const Models::PushBroadcastRequest &request);

      /**
       * @param tmpReq PushMultipleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushMultipleResponse
       */
      Models::PushMultipleResponse pushMultipleWithOptions(const Models::PushMultipleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushMultipleRequest
       * @return PushMultipleResponse
       */
      Models::PushMultipleResponse pushMultiple(const Models::PushMultipleRequest &request);

      /**
       * @summary 查询设备状态信息
       *
       * @param request PushQueryDeviceStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushQueryDeviceStateResponse
       */
      Models::PushQueryDeviceStateResponse pushQueryDeviceStateWithOptions(const Models::PushQueryDeviceStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备状态信息
       *
       * @param request PushQueryDeviceStateRequest
       * @return PushQueryDeviceStateResponse
       */
      Models::PushQueryDeviceStateResponse pushQueryDeviceState(const Models::PushQueryDeviceStateRequest &request);

      /**
       * @param tmpReq PushSimpleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushSimpleResponse
       */
      Models::PushSimpleResponse pushSimpleWithOptions(const Models::PushSimpleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushSimpleRequest
       * @return PushSimpleResponse
       */
      Models::PushSimpleResponse pushSimple(const Models::PushSimpleRequest &request);

      /**
       * @param tmpReq PushTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushTemplateResponse
       */
      Models::PushTemplateResponse pushTemplateWithOptions(const Models::PushTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushTemplateRequest
       * @return PushTemplateResponse
       */
      Models::PushTemplateResponse pushTemplate(const Models::PushTemplateRequest &request);

      /**
       * @param request QueryMcubeMiniPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMcubeMiniPackageResponse
       */
      Models::QueryMcubeMiniPackageResponse queryMcubeMiniPackageWithOptions(const Models::QueryMcubeMiniPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMcubeMiniPackageRequest
       * @return QueryMcubeMiniPackageResponse
       */
      Models::QueryMcubeMiniPackageResponse queryMcubeMiniPackage(const Models::QueryMcubeMiniPackageRequest &request);

      /**
       * @param request QueryMcubeMiniTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMcubeMiniTaskResponse
       */
      Models::QueryMcubeMiniTaskResponse queryMcubeMiniTaskWithOptions(const Models::QueryMcubeMiniTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMcubeMiniTaskRequest
       * @return QueryMcubeMiniTaskResponse
       */
      Models::QueryMcubeMiniTaskResponse queryMcubeMiniTask(const Models::QueryMcubeMiniTaskRequest &request);

      /**
       * @param request QueryMcubeVhostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMcubeVhostResponse
       */
      Models::QueryMcubeVhostResponse queryMcubeVhostWithOptions(const Models::QueryMcubeVhostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMcubeVhostRequest
       * @return QueryMcubeVhostResponse
       */
      Models::QueryMcubeVhostResponse queryMcubeVhost(const Models::QueryMcubeVhostRequest &request);

      /**
       * @summary 查询定时任务列表
       *
       * @param request QueryMpsSchedulerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMpsSchedulerListResponse
       */
      Models::QueryMpsSchedulerListResponse queryMpsSchedulerListWithOptions(const Models::QueryMpsSchedulerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询定时任务列表
       *
       * @param request QueryMpsSchedulerListRequest
       * @return QueryMpsSchedulerListResponse
       */
      Models::QueryMpsSchedulerListResponse queryMpsSchedulerList(const Models::QueryMpsSchedulerListRequest &request);

      /**
       * @param request QueryPushAnalysisCoreIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushAnalysisCoreIndexResponse
       */
      Models::QueryPushAnalysisCoreIndexResponse queryPushAnalysisCoreIndexWithOptions(const Models::QueryPushAnalysisCoreIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPushAnalysisCoreIndexRequest
       * @return QueryPushAnalysisCoreIndexResponse
       */
      Models::QueryPushAnalysisCoreIndexResponse queryPushAnalysisCoreIndex(const Models::QueryPushAnalysisCoreIndexRequest &request);

      /**
       * @param request QueryPushAnalysisTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushAnalysisTaskDetailResponse
       */
      Models::QueryPushAnalysisTaskDetailResponse queryPushAnalysisTaskDetailWithOptions(const Models::QueryPushAnalysisTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPushAnalysisTaskDetailRequest
       * @return QueryPushAnalysisTaskDetailResponse
       */
      Models::QueryPushAnalysisTaskDetailResponse queryPushAnalysisTaskDetail(const Models::QueryPushAnalysisTaskDetailRequest &request);

      /**
       * @param request QueryPushAnalysisTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushAnalysisTaskListResponse
       */
      Models::QueryPushAnalysisTaskListResponse queryPushAnalysisTaskListWithOptions(const Models::QueryPushAnalysisTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPushAnalysisTaskListRequest
       * @return QueryPushAnalysisTaskListResponse
       */
      Models::QueryPushAnalysisTaskListResponse queryPushAnalysisTaskList(const Models::QueryPushAnalysisTaskListRequest &request);

      /**
       * @param request QueryPushSchedulerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPushSchedulerListResponse
       */
      Models::QueryPushSchedulerListResponse queryPushSchedulerListWithOptions(const Models::QueryPushSchedulerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPushSchedulerListRequest
       * @return QueryPushSchedulerListResponse
       */
      Models::QueryPushSchedulerListResponse queryPushSchedulerList(const Models::QueryPushSchedulerListRequest &request);

      /**
       * @param request RevokePushMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokePushMessageResponse
       */
      Models::RevokePushMessageResponse revokePushMessageWithOptions(const Models::RevokePushMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RevokePushMessageRequest
       * @return RevokePushMessageResponse
       */
      Models::RevokePushMessageResponse revokePushMessage(const Models::RevokePushMessageRequest &request);

      /**
       * @param request RevokePushTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokePushTaskResponse
       */
      Models::RevokePushTaskResponse revokePushTaskWithOptions(const Models::RevokePushTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RevokePushTaskRequest
       * @return RevokePushTaskResponse
       */
      Models::RevokePushTaskResponse revokePushTask(const Models::RevokePushTaskRequest &request);

      /**
       * @param request UpdateMcubeWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcubeWhitelistResponse
       */
      Models::UpdateMcubeWhitelistResponse updateMcubeWhitelistWithOptions(const Models::UpdateMcubeWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateMcubeWhitelistRequest
       * @return UpdateMcubeWhitelistResponse
       */
      Models::UpdateMcubeWhitelistResponse updateMcubeWhitelist(const Models::UpdateMcubeWhitelistRequest &request);

      /**
       * @param request UploadMcubeMiniPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMcubeMiniPackageResponse
       */
      Models::UploadMcubeMiniPackageResponse uploadMcubeMiniPackageWithOptions(const Models::UploadMcubeMiniPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadMcubeMiniPackageRequest
       * @return UploadMcubeMiniPackageResponse
       */
      Models::UploadMcubeMiniPackageResponse uploadMcubeMiniPackage(const Models::UploadMcubeMiniPackageRequest &request);

      /**
       * @param request UploadMcubeRsaKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMcubeRsaKeyResponse
       */
      Models::UploadMcubeRsaKeyResponse uploadMcubeRsaKeyWithOptions(const Models::UploadMcubeRsaKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadMcubeRsaKeyRequest
       * @return UploadMcubeRsaKeyResponse
       */
      Models::UploadMcubeRsaKeyResponse uploadMcubeRsaKey(const Models::UploadMcubeRsaKeyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
