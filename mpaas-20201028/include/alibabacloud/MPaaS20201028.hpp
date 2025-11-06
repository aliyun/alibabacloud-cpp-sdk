// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MPAAS20201028_HPP_
#define ALIBABACLOUD_MPAAS20201028_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MPaaS20201028Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MPaaS20201028.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddMdsMiniConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMdsMiniConfigResponse
       */
      Models::AddMdsMiniConfigResponse addMdsMiniConfigWithOptions(const Models::AddMdsMiniConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddMdsMiniConfigRequest
       * @return AddMdsMiniConfigResponse
       */
      Models::AddMdsMiniConfigResponse addMdsMiniConfig(const Models::AddMdsMiniConfigRequest &request);

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
       * @param request ChangeMdsCubeTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeMdsCubeTaskStatusResponse
       */
      Models::ChangeMdsCubeTaskStatusResponse changeMdsCubeTaskStatusWithOptions(const Models::ChangeMdsCubeTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeMdsCubeTaskStatusRequest
       * @return ChangeMdsCubeTaskStatusResponse
       */
      Models::ChangeMdsCubeTaskStatusResponse changeMdsCubeTaskStatus(const Models::ChangeMdsCubeTaskStatusRequest &request);

      /**
       * @param request CopyMcdpGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyMcdpGroupResponse
       */
      Models::CopyMcdpGroupResponse copyMcdpGroupWithOptions(const Models::CopyMcdpGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CopyMcdpGroupRequest
       * @return CopyMcdpGroupResponse
       */
      Models::CopyMcdpGroupResponse copyMcdpGroup(const Models::CopyMcdpGroupRequest &request);

      /**
       * @summary 创建短链
       *
       * @param request CreateLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLinkResponse
       */
      Models::CreateLinkResponse createLinkWithOptions(const Models::CreateLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短链
       *
       * @param request CreateLinkRequest
       * @return CreateLinkResponse
       */
      Models::CreateLinkResponse createLink(const Models::CreateLinkRequest &request);

      /**
       * @param request CreateMcdpGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcdpGroupResponse
       */
      Models::CreateMcdpGroupResponse createMcdpGroupWithOptions(const Models::CreateMcdpGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcdpGroupRequest
       * @return CreateMcdpGroupResponse
       */
      Models::CreateMcdpGroupResponse createMcdpGroup(const Models::CreateMcdpGroupRequest &request);

      /**
       * @param request CreateMcdpMaterialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcdpMaterialResponse
       */
      Models::CreateMcdpMaterialResponse createMcdpMaterialWithOptions(const Models::CreateMcdpMaterialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcdpMaterialRequest
       * @return CreateMcdpMaterialResponse
       */
      Models::CreateMcdpMaterialResponse createMcdpMaterial(const Models::CreateMcdpMaterialRequest &request);

      /**
       * @param request CreateMcdpZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcdpZoneResponse
       */
      Models::CreateMcdpZoneResponse createMcdpZoneWithOptions(const Models::CreateMcdpZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMcdpZoneRequest
       * @return CreateMcdpZoneResponse
       */
      Models::CreateMcdpZoneResponse createMcdpZone(const Models::CreateMcdpZoneRequest &request);

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
       * @param request CreateMdsCubeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMdsCubeResourceResponse
       */
      Models::CreateMdsCubeResourceResponse createMdsCubeResourceWithOptions(const Models::CreateMdsCubeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMdsCubeResourceRequest
       * @return CreateMdsCubeResourceResponse
       */
      Models::CreateMdsCubeResourceResponse createMdsCubeResource(const Models::CreateMdsCubeResourceRequest &request);

      /**
       * @param request CreateMdsCubeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMdsCubeTaskResponse
       */
      Models::CreateMdsCubeTaskResponse createMdsCubeTaskWithOptions(const Models::CreateMdsCubeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMdsCubeTaskRequest
       * @return CreateMdsCubeTaskResponse
       */
      Models::CreateMdsCubeTaskResponse createMdsCubeTask(const Models::CreateMdsCubeTaskRequest &request);

      /**
       * @param request CreateMdsCubeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMdsCubeTemplateResponse
       */
      Models::CreateMdsCubeTemplateResponse createMdsCubeTemplateWithOptions(const Models::CreateMdsCubeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMdsCubeTemplateRequest
       * @return CreateMdsCubeTemplateResponse
       */
      Models::CreateMdsCubeTemplateResponse createMdsCubeTemplate(const Models::CreateMdsCubeTemplateRequest &request);

      /**
       * @param request CreateMdsMiniprogramTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMdsMiniprogramTaskResponse
       */
      Models::CreateMdsMiniprogramTaskResponse createMdsMiniprogramTaskWithOptions(const Models::CreateMdsMiniprogramTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateMdsMiniprogramTaskRequest
       * @return CreateMdsMiniprogramTaskResponse
       */
      Models::CreateMdsMiniprogramTaskResponse createMdsMiniprogramTask(const Models::CreateMdsMiniprogramTaskRequest &request);

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
       * @param request DeleteMcdpAimRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcdpAimResponse
       */
      Models::DeleteMcdpAimResponse deleteMcdpAimWithOptions(const Models::DeleteMcdpAimRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcdpAimRequest
       * @return DeleteMcdpAimResponse
       */
      Models::DeleteMcdpAimResponse deleteMcdpAim(const Models::DeleteMcdpAimRequest &request);

      /**
       * @param request DeleteMcdpCrowdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcdpCrowdResponse
       */
      Models::DeleteMcdpCrowdResponse deleteMcdpCrowdWithOptions(const Models::DeleteMcdpCrowdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcdpCrowdRequest
       * @return DeleteMcdpCrowdResponse
       */
      Models::DeleteMcdpCrowdResponse deleteMcdpCrowd(const Models::DeleteMcdpCrowdRequest &request);

      /**
       * @param request DeleteMcdpZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcdpZoneResponse
       */
      Models::DeleteMcdpZoneResponse deleteMcdpZoneWithOptions(const Models::DeleteMcdpZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMcdpZoneRequest
       * @return DeleteMcdpZoneResponse
       */
      Models::DeleteMcdpZoneResponse deleteMcdpZone(const Models::DeleteMcdpZoneRequest &request);

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
       * @param request DeleteMdsCubeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMdsCubeTemplateResponse
       */
      Models::DeleteMdsCubeTemplateResponse deleteMdsCubeTemplateWithOptions(const Models::DeleteMdsCubeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteMdsCubeTemplateRequest
       * @return DeleteMdsCubeTemplateResponse
       */
      Models::DeleteMdsCubeTemplateResponse deleteMdsCubeTemplate(const Models::DeleteMdsCubeTemplateRequest &request);

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
       * @param request ExportMappCenterAppConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportMappCenterAppConfigResponse
       */
      Models::ExportMappCenterAppConfigResponse exportMappCenterAppConfigWithOptions(const Models::ExportMappCenterAppConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExportMappCenterAppConfigRequest
       * @return ExportMappCenterAppConfigResponse
       */
      Models::ExportMappCenterAppConfigResponse exportMappCenterAppConfig(const Models::ExportMappCenterAppConfigRequest &request);

      /**
       * @param request GetFileTokenForUploadToMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFileTokenForUploadToMsaResponse
       */
      Models::GetFileTokenForUploadToMsaResponse getFileTokenForUploadToMsaWithOptions(const Models::GetFileTokenForUploadToMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetFileTokenForUploadToMsaRequest
       * @return GetFileTokenForUploadToMsaResponse
       */
      Models::GetFileTokenForUploadToMsaResponse getFileTokenForUploadToMsa(const Models::GetFileTokenForUploadToMsaRequest &request);

      /**
       * @param request GetLogUrlInMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogUrlInMsaResponse
       */
      Models::GetLogUrlInMsaResponse getLogUrlInMsaWithOptions(const Models::GetLogUrlInMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLogUrlInMsaRequest
       * @return GetLogUrlInMsaResponse
       */
      Models::GetLogUrlInMsaResponse getLogUrlInMsa(const Models::GetLogUrlInMsaRequest &request);

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
       * @param request GetMdsMiniConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMdsMiniConfigResponse
       */
      Models::GetMdsMiniConfigResponse getMdsMiniConfigWithOptions(const Models::GetMdsMiniConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetMdsMiniConfigRequest
       * @return GetMdsMiniConfigResponse
       */
      Models::GetMdsMiniConfigResponse getMdsMiniConfig(const Models::GetMdsMiniConfigRequest &request);

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
       * @param request GetUserAppDonwloadUrlInMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAppDonwloadUrlInMsaResponse
       */
      Models::GetUserAppDonwloadUrlInMsaResponse getUserAppDonwloadUrlInMsaWithOptions(const Models::GetUserAppDonwloadUrlInMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUserAppDonwloadUrlInMsaRequest
       * @return GetUserAppDonwloadUrlInMsaResponse
       */
      Models::GetUserAppDonwloadUrlInMsaResponse getUserAppDonwloadUrlInMsa(const Models::GetUserAppDonwloadUrlInMsaRequest &request);

      /**
       * @param request GetUserAppEnhanceProcessInMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAppEnhanceProcessInMsaResponse
       */
      Models::GetUserAppEnhanceProcessInMsaResponse getUserAppEnhanceProcessInMsaWithOptions(const Models::GetUserAppEnhanceProcessInMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUserAppEnhanceProcessInMsaRequest
       * @return GetUserAppEnhanceProcessInMsaResponse
       */
      Models::GetUserAppEnhanceProcessInMsaResponse getUserAppEnhanceProcessInMsa(const Models::GetUserAppEnhanceProcessInMsaRequest &request);

      /**
       * @param request GetUserAppUploadProcessInMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAppUploadProcessInMsaResponse
       */
      Models::GetUserAppUploadProcessInMsaResponse getUserAppUploadProcessInMsaWithOptions(const Models::GetUserAppUploadProcessInMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetUserAppUploadProcessInMsaRequest
       * @return GetUserAppUploadProcessInMsaResponse
       */
      Models::GetUserAppUploadProcessInMsaResponse getUserAppUploadProcessInMsa(const Models::GetUserAppUploadProcessInMsaRequest &request);

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
       * @param request ListCubecardAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCubecardAppsResponse
       */
      Models::ListCubecardAppsResponse listCubecardAppsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListCubecardAppsResponse
       */
      Models::ListCubecardAppsResponse listCubecardApps();

      /**
       * @param request ListMappCenterAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMappCenterAppsResponse
       */
      Models::ListMappCenterAppsResponse listMappCenterAppsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListMappCenterAppsResponse
       */
      Models::ListMappCenterAppsResponse listMappCenterApps();

      /**
       * @param request ListMappCenterWorkspacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMappCenterWorkspacesResponse
       */
      Models::ListMappCenterWorkspacesResponse listMappCenterWorkspacesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListMappCenterWorkspacesResponse
       */
      Models::ListMappCenterWorkspacesResponse listMappCenterWorkspaces();

      /**
       * @param request ListMcdpAimRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcdpAimResponse
       */
      Models::ListMcdpAimResponse listMcdpAimWithOptions(const Models::ListMcdpAimRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMcdpAimRequest
       * @return ListMcdpAimResponse
       */
      Models::ListMcdpAimResponse listMcdpAim(const Models::ListMcdpAimRequest &request);

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
       * @param request ListMdsCubeResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMdsCubeResourcesResponse
       */
      Models::ListMdsCubeResourcesResponse listMdsCubeResourcesWithOptions(const Models::ListMdsCubeResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMdsCubeResourcesRequest
       * @return ListMdsCubeResourcesResponse
       */
      Models::ListMdsCubeResourcesResponse listMdsCubeResources(const Models::ListMdsCubeResourcesRequest &request);

      /**
       * @param request ListMdsCubeTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMdsCubeTasksResponse
       */
      Models::ListMdsCubeTasksResponse listMdsCubeTasksWithOptions(const Models::ListMdsCubeTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMdsCubeTasksRequest
       * @return ListMdsCubeTasksResponse
       */
      Models::ListMdsCubeTasksResponse listMdsCubeTasks(const Models::ListMdsCubeTasksRequest &request);

      /**
       * @param request ListMdsCubeTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMdsCubeTemplatesResponse
       */
      Models::ListMdsCubeTemplatesResponse listMdsCubeTemplatesWithOptions(const Models::ListMdsCubeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMdsCubeTemplatesRequest
       * @return ListMdsCubeTemplatesResponse
       */
      Models::ListMdsCubeTemplatesResponse listMdsCubeTemplates(const Models::ListMdsCubeTemplatesRequest &request);

      /**
       * @param request ListMgsApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMgsApiResponse
       */
      Models::ListMgsApiResponse listMgsApiWithOptions(const Models::ListMgsApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListMgsApiRequest
       * @return ListMgsApiResponse
       */
      Models::ListMgsApiResponse listMgsApi(const Models::ListMgsApiRequest &request);

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
       * @summary OCR通用接口
       *
       * @param request MTRSOCRServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MTRSOCRServiceResponse
       */
      Models::MTRSOCRServiceResponse mTRSOCRServiceWithOptions(const Models::MTRSOCRServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary OCR通用接口
       *
       * @param request MTRSOCRServiceRequest
       * @return MTRSOCRServiceResponse
       */
      Models::MTRSOCRServiceResponse mTRSOCRService(const Models::MTRSOCRServiceRequest &request);

      /**
       * @param request PushBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushBindResponse
       */
      Models::PushBindResponse pushBindWithOptions(const Models::PushBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushBindRequest
       * @return PushBindResponse
       */
      Models::PushBindResponse pushBind(const Models::PushBindRequest &request);

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
       * @param request PushReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushReportResponse
       */
      Models::PushReportResponse pushReportWithOptions(const Models::PushReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushReportRequest
       * @return PushReportResponse
       */
      Models::PushReportResponse pushReport(const Models::PushReportRequest &request);

      /**
       * @summary 极简推送
       *
       * @param tmpReq PushSimpleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushSimpleResponse
       */
      Models::PushSimpleResponse pushSimpleWithOptions(const Models::PushSimpleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 极简推送
       *
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
       * @param request PushUnBindRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushUnBindResponse
       */
      Models::PushUnBindResponse pushUnBindWithOptions(const Models::PushUnBindRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PushUnBindRequest
       * @return PushUnBindResponse
       */
      Models::PushUnBindResponse pushUnBind(const Models::PushUnBindRequest &request);

      /**
       * @param request QueryCubecardFiletokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCubecardFiletokenResponse
       */
      Models::QueryCubecardFiletokenResponse queryCubecardFiletokenWithOptions(const Models::QueryCubecardFiletokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryCubecardFiletokenRequest
       * @return QueryCubecardFiletokenResponse
       */
      Models::QueryCubecardFiletokenResponse queryCubecardFiletoken(const Models::QueryCubecardFiletokenRequest &request);

      /**
       * @summary 查询Device+服务的
       *
       * @param request QueryInfoFromMdpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInfoFromMdpResponse
       */
      Models::QueryInfoFromMdpResponse queryInfoFromMdpWithOptions(const Models::QueryInfoFromMdpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Device+服务的
       *
       * @param request QueryInfoFromMdpRequest
       * @return QueryInfoFromMdpResponse
       */
      Models::QueryInfoFromMdpResponse queryInfoFromMdp(const Models::QueryInfoFromMdpRequest &request);

      /**
       * @summary 查询短链
       *
       * @param request QueryLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLinkResponse
       */
      Models::QueryLinkResponse queryLinkWithOptions(const Models::QueryLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询短链
       *
       * @param request QueryLinkRequest
       * @return QueryLinkResponse
       */
      Models::QueryLinkResponse queryLink(const Models::QueryLinkRequest &request);

      /**
       * @param request QueryMappCenterAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMappCenterAppResponse
       */
      Models::QueryMappCenterAppResponse queryMappCenterAppWithOptions(const Models::QueryMappCenterAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMappCenterAppRequest
       * @return QueryMappCenterAppResponse
       */
      Models::QueryMappCenterAppResponse queryMappCenterApp(const Models::QueryMappCenterAppRequest &request);

      /**
       * @param request QueryMcdpAimRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMcdpAimResponse
       */
      Models::QueryMcdpAimResponse queryMcdpAimWithOptions(const Models::QueryMcdpAimRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMcdpAimRequest
       * @return QueryMcdpAimResponse
       */
      Models::QueryMcdpAimResponse queryMcdpAim(const Models::QueryMcdpAimRequest &request);

      /**
       * @param request QueryMcdpZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMcdpZoneResponse
       */
      Models::QueryMcdpZoneResponse queryMcdpZoneWithOptions(const Models::QueryMcdpZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMcdpZoneRequest
       * @return QueryMcdpZoneResponse
       */
      Models::QueryMcdpZoneResponse queryMcdpZone(const Models::QueryMcdpZoneRequest &request);

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
       * @param request QueryMdsUpgradeTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMdsUpgradeTaskDetailResponse
       */
      Models::QueryMdsUpgradeTaskDetailResponse queryMdsUpgradeTaskDetailWithOptions(const Models::QueryMdsUpgradeTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMdsUpgradeTaskDetailRequest
       * @return QueryMdsUpgradeTaskDetailResponse
       */
      Models::QueryMdsUpgradeTaskDetailResponse queryMdsUpgradeTaskDetail(const Models::QueryMdsUpgradeTaskDetailRequest &request);

      /**
       * @param request QueryMgsApipageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMgsApipageResponse
       */
      Models::QueryMgsApipageResponse queryMgsApipageWithOptions(const Models::QueryMgsApipageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMgsApipageRequest
       * @return QueryMgsApipageResponse
       */
      Models::QueryMgsApipageResponse queryMgsApipage(const Models::QueryMgsApipageRequest &request);

      /**
       * @param request QueryMgsApirestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMgsApirestResponse
       */
      Models::QueryMgsApirestResponse queryMgsApirestWithOptions(const Models::QueryMgsApirestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMgsApirestRequest
       * @return QueryMgsApirestResponse
       */
      Models::QueryMgsApirestResponse queryMgsApirest(const Models::QueryMgsApirestRequest &request);

      /**
       * @param request QueryMgsTestreqbodyautogenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMgsTestreqbodyautogenResponse
       */
      Models::QueryMgsTestreqbodyautogenResponse queryMgsTestreqbodyautogenWithOptions(const Models::QueryMgsTestreqbodyautogenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryMgsTestreqbodyautogenRequest
       * @return QueryMgsTestreqbodyautogenResponse
       */
      Models::QueryMgsTestreqbodyautogenResponse queryMgsTestreqbodyautogen(const Models::QueryMgsTestreqbodyautogenRequest &request);

      /**
       * @param request QueryMpsSchedulerListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMpsSchedulerListResponse
       */
      Models::QueryMpsSchedulerListResponse queryMpsSchedulerListWithOptions(const Models::QueryMpsSchedulerListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @param request RunMsaDiffRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunMsaDiffResponse
       */
      Models::RunMsaDiffResponse runMsaDiffWithOptions(const Models::RunMsaDiffRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RunMsaDiffRequest
       * @return RunMsaDiffResponse
       */
      Models::RunMsaDiffResponse runMsaDiff(const Models::RunMsaDiffRequest &request);

      /**
       * @param request SaveMgsApirestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveMgsApirestResponse
       */
      Models::SaveMgsApirestResponse saveMgsApirestWithOptions(const Models::SaveMgsApirestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveMgsApirestRequest
       * @return SaveMgsApirestResponse
       */
      Models::SaveMgsApirestResponse saveMgsApirest(const Models::SaveMgsApirestRequest &request);

      /**
       * @param request StartUserAppAsyncEnhanceInMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartUserAppAsyncEnhanceInMsaResponse
       */
      Models::StartUserAppAsyncEnhanceInMsaResponse startUserAppAsyncEnhanceInMsaWithOptions(const Models::StartUserAppAsyncEnhanceInMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartUserAppAsyncEnhanceInMsaRequest
       * @return StartUserAppAsyncEnhanceInMsaResponse
       */
      Models::StartUserAppAsyncEnhanceInMsaResponse startUserAppAsyncEnhanceInMsa(const Models::StartUserAppAsyncEnhanceInMsaRequest &request);

      /**
       * @summary 更新短链
       *
       * @param request UpdateLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLinkResponse
       */
      Models::UpdateLinkResponse updateLinkWithOptions(const Models::UpdateLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新短链
       *
       * @param request UpdateLinkRequest
       * @return UpdateLinkResponse
       */
      Models::UpdateLinkResponse updateLink(const Models::UpdateLinkRequest &request);

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
       * @param request UpdateMdsCubeResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMdsCubeResourceResponse
       */
      Models::UpdateMdsCubeResourceResponse updateMdsCubeResourceWithOptions(const Models::UpdateMdsCubeResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateMdsCubeResourceRequest
       * @return UpdateMdsCubeResourceResponse
       */
      Models::UpdateMdsCubeResourceResponse updateMdsCubeResource(const Models::UpdateMdsCubeResourceRequest &request);

      /**
       * @param request UpdateMpaasAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMpaasAppInfoResponse
       */
      Models::UpdateMpaasAppInfoResponse updateMpaasAppInfoWithOptions(const Models::UpdateMpaasAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateMpaasAppInfoRequest
       * @return UpdateMpaasAppInfoResponse
       */
      Models::UpdateMpaasAppInfoResponse updateMpaasAppInfo(const Models::UpdateMpaasAppInfoRequest &request);

      /**
       * @summary 上传字节码到msa进行加固
       *
       * @param request UploadBitcodeToMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadBitcodeToMsaResponse
       */
      Models::UploadBitcodeToMsaResponse uploadBitcodeToMsaWithOptions(const Models::UploadBitcodeToMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传字节码到msa进行加固
       *
       * @param request UploadBitcodeToMsaRequest
       * @return UploadBitcodeToMsaResponse
       */
      Models::UploadBitcodeToMsaResponse uploadBitcodeToMsa(const Models::UploadBitcodeToMsaRequest &request);

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

      /**
       * @param request UploadUserAppToMsaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadUserAppToMsaResponse
       */
      Models::UploadUserAppToMsaResponse uploadUserAppToMsaWithOptions(const Models::UploadUserAppToMsaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UploadUserAppToMsaRequest
       * @return UploadUserAppToMsaResponse
       */
      Models::UploadUserAppToMsaResponse uploadUserAppToMsa(const Models::UploadUserAppToMsaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
