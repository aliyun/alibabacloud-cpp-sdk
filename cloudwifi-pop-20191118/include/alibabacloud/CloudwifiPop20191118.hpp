// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDWIFIPOP20191118_HPP_
#define ALIBABACLOUD_CLOUDWIFIPOP20191118_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudwifiPop20191118Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudwifiPop20191118.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param tmpReq AddApListToApgroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddApListToApgroupResponse
       */
      Models::AddApListToApgroupResponse addApListToApgroupWithOptions(const Models::AddApListToApgroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddApListToApgroupRequest
       * @return AddApListToApgroupResponse
       */
      Models::AddApListToApgroupResponse addApListToApgroup(const Models::AddApListToApgroupRequest &request);

      /**
       * @summary 删除设备的三方app
       *
       * @param request DelApThirdAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelApThirdAppResponse
       */
      Models::DelApThirdAppResponse delApThirdAppWithOptions(const Models::DelApThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除设备的三方app
       *
       * @param request DelApThirdAppRequest
       * @return DelApThirdAppResponse
       */
      Models::DelApThirdAppResponse delApThirdApp(const Models::DelApThirdAppRequest &request);

      /**
       * @param request DeleteApSsidConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApSsidConfigResponse
       */
      Models::DeleteApSsidConfigResponse deleteApSsidConfigWithOptions(const Models::DeleteApSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteApSsidConfigRequest
       * @return DeleteApSsidConfigResponse
       */
      Models::DeleteApSsidConfigResponse deleteApSsidConfig(const Models::DeleteApSsidConfigRequest &request);

      /**
       * @param request DeleteApgroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApgroupConfigResponse
       */
      Models::DeleteApgroupConfigResponse deleteApgroupConfigWithOptions(const Models::DeleteApgroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteApgroupConfigRequest
       * @return DeleteApgroupConfigResponse
       */
      Models::DeleteApgroupConfigResponse deleteApgroupConfig(const Models::DeleteApgroupConfigRequest &request);

      /**
       * @summary 删除AP组上的SSID
       *
       * @param request DeleteApgroupSsidConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApgroupSsidConfigResponse
       */
      Models::DeleteApgroupSsidConfigResponse deleteApgroupSsidConfigWithOptions(const Models::DeleteApgroupSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除AP组上的SSID
       *
       * @param request DeleteApgroupSsidConfigRequest
       * @return DeleteApgroupSsidConfigResponse
       */
      Models::DeleteApgroupSsidConfigResponse deleteApgroupSsidConfig(const Models::DeleteApgroupSsidConfigRequest &request);

      /**
       * @summary 删除设备组的三方app
       *
       * @param request DeleteApgroupThirdAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApgroupThirdAppResponse
       */
      Models::DeleteApgroupThirdAppResponse deleteApgroupThirdAppWithOptions(const Models::DeleteApgroupThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除设备组的三方app
       *
       * @param request DeleteApgroupThirdAppRequest
       * @return DeleteApgroupThirdAppResponse
       */
      Models::DeleteApgroupThirdAppResponse deleteApgroupThirdApp(const Models::DeleteApgroupThirdAppRequest &request);

      /**
       * @param request DeleteNetDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetDeviceInfoResponse
       */
      Models::DeleteNetDeviceInfoResponse deleteNetDeviceInfoWithOptions(const Models::DeleteNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteNetDeviceInfoRequest
       * @return DeleteNetDeviceInfoResponse
       */
      Models::DeleteNetDeviceInfoResponse deleteNetDeviceInfo(const Models::DeleteNetDeviceInfoRequest &request);

      /**
       * @summary 配置设备组的三方app
       *
       * @param request EditApgroupThirdAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditApgroupThirdAppResponse
       */
      Models::EditApgroupThirdAppResponse editApgroupThirdAppWithOptions(const Models::EditApgroupThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置设备组的三方app
       *
       * @param request EditApgroupThirdAppRequest
       * @return EditApgroupThirdAppResponse
       */
      Models::EditApgroupThirdAppResponse editApgroupThirdApp(const Models::EditApgroupThirdAppRequest &request);

      /**
       * @param request EffectApConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EffectApConfigResponse
       */
      Models::EffectApConfigResponse effectApConfigWithOptions(const Models::EffectApConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EffectApConfigRequest
       * @return EffectApConfigResponse
       */
      Models::EffectApConfigResponse effectApConfig(const Models::EffectApConfigRequest &request);

      /**
       * @param request EffectApgroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EffectApgroupConfigResponse
       */
      Models::EffectApgroupConfigResponse effectApgroupConfigWithOptions(const Models::EffectApgroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EffectApgroupConfigRequest
       * @return EffectApgroupConfigResponse
       */
      Models::EffectApgroupConfigResponse effectApgroupConfig(const Models::EffectApgroupConfigRequest &request);

      /**
       * @summary 查询蚂蚁环境终端状态
       *
       * @param request GetAntStaStatusByMacRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAntStaStatusByMacResponse
       */
      Models::GetAntStaStatusByMacResponse getAntStaStatusByMacWithOptions(const Models::GetAntStaStatusByMacRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询蚂蚁环境终端状态
       *
       * @param request GetAntStaStatusByMacRequest
       * @return GetAntStaStatusByMacResponse
       */
      Models::GetAntStaStatusByMacResponse getAntStaStatusByMac(const Models::GetAntStaStatusByMacRequest &request);

      /**
       * @param request GetApAddressByMacRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApAddressByMacResponse
       */
      Models::GetApAddressByMacResponse getApAddressByMacWithOptions(const Models::GetApAddressByMacRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApAddressByMacRequest
       * @return GetApAddressByMacResponse
       */
      Models::GetApAddressByMacResponse getApAddressByMac(const Models::GetApAddressByMacRequest &request);

      /**
       * @param request GetApAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApAssetResponse
       */
      Models::GetApAssetResponse getApAssetWithOptions(const Models::GetApAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApAssetRequest
       * @return GetApAssetResponse
       */
      Models::GetApAssetResponse getApAsset(const Models::GetApAssetRequest &request);

      /**
       * @param request GetApDetailStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApDetailStatusResponse
       */
      Models::GetApDetailStatusResponse getApDetailStatusWithOptions(const Models::GetApDetailStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApDetailStatusRequest
       * @return GetApDetailStatusResponse
       */
      Models::GetApDetailStatusResponse getApDetailStatus(const Models::GetApDetailStatusRequest &request);

      /**
       * @param request GetApDetailedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApDetailedConfigResponse
       */
      Models::GetApDetailedConfigResponse getApDetailedConfigWithOptions(const Models::GetApDetailedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApDetailedConfigRequest
       * @return GetApDetailedConfigResponse
       */
      Models::GetApDetailedConfigResponse getApDetailedConfig(const Models::GetApDetailedConfigRequest &request);

      /**
       * @param request GetApInfoFromPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApInfoFromPoolResponse
       */
      Models::GetApInfoFromPoolResponse getApInfoFromPoolWithOptions(const Models::GetApInfoFromPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApInfoFromPoolRequest
       * @return GetApInfoFromPoolResponse
       */
      Models::GetApInfoFromPoolResponse getApInfoFromPool(const Models::GetApInfoFromPoolRequest &request);

      /**
       * @param request GetApRunHistoryTimeSerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApRunHistoryTimeSerResponse
       */
      Models::GetApRunHistoryTimeSerResponse getApRunHistoryTimeSerWithOptions(const Models::GetApRunHistoryTimeSerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApRunHistoryTimeSerRequest
       * @return GetApRunHistoryTimeSerResponse
       */
      Models::GetApRunHistoryTimeSerResponse getApRunHistoryTimeSer(const Models::GetApRunHistoryTimeSerRequest &request);

      /**
       * @param request GetApStatusByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApStatusByGroupIdResponse
       */
      Models::GetApStatusByGroupIdResponse getApStatusByGroupIdWithOptions(const Models::GetApStatusByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApStatusByGroupIdRequest
       * @return GetApStatusByGroupIdResponse
       */
      Models::GetApStatusByGroupIdResponse getApStatusByGroupId(const Models::GetApStatusByGroupIdRequest &request);

      /**
       * @summary 根据组id查组的基本信息（名称之类）
       *
       * @param request GetApgroupConfigByIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApgroupConfigByIdentityResponse
       */
      Models::GetApgroupConfigByIdentityResponse getApgroupConfigByIdentityWithOptions(const Models::GetApgroupConfigByIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据组id查组的基本信息（名称之类）
       *
       * @param request GetApgroupConfigByIdentityRequest
       * @return GetApgroupConfigByIdentityResponse
       */
      Models::GetApgroupConfigByIdentityResponse getApgroupConfigByIdentity(const Models::GetApgroupConfigByIdentityRequest &request);

      /**
       * @summary 查询设备组的完整配置(含ssid、portal等）
       *
       * @param request GetApgroupDetailedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApgroupDetailedConfigResponse
       */
      Models::GetApgroupDetailedConfigResponse getApgroupDetailedConfigWithOptions(const Models::GetApgroupDetailedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询设备组的完整配置(含ssid、portal等）
       *
       * @param request GetApgroupDetailedConfigRequest
       * @return GetApgroupDetailedConfigResponse
       */
      Models::GetApgroupDetailedConfigResponse getApgroupDetailedConfig(const Models::GetApgroupDetailedConfigRequest &request);

      /**
       * @param request GetApgroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApgroupIdResponse
       */
      Models::GetApgroupIdResponse getApgroupIdWithOptions(const Models::GetApgroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApgroupIdRequest
       * @return GetApgroupIdResponse
       */
      Models::GetApgroupIdResponse getApgroupId(const Models::GetApgroupIdRequest &request);

      /**
       * @param request GetApgroupSsidConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApgroupSsidConfigResponse
       */
      Models::GetApgroupSsidConfigResponse getApgroupSsidConfigWithOptions(const Models::GetApgroupSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetApgroupSsidConfigRequest
       * @return GetApgroupSsidConfigResponse
       */
      Models::GetApgroupSsidConfigResponse getApgroupSsidConfig(const Models::GetApgroupSsidConfigRequest &request);

      /**
       * @summary 查询批量任务的执行进度
       *
       * @param request GetBatchTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchTaskProgressResponse
       */
      Models::GetBatchTaskProgressResponse getBatchTaskProgressWithOptions(const Models::GetBatchTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询批量任务的执行进度
       *
       * @param request GetBatchTaskProgressRequest
       * @return GetBatchTaskProgressResponse
       */
      Models::GetBatchTaskProgressResponse getBatchTaskProgress(const Models::GetBatchTaskProgressRequest &request);

      /**
       * @param request GetGroupMiscAggTimeSerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupMiscAggTimeSerResponse
       */
      Models::GetGroupMiscAggTimeSerResponse getGroupMiscAggTimeSerWithOptions(const Models::GetGroupMiscAggTimeSerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetGroupMiscAggTimeSerRequest
       * @return GetGroupMiscAggTimeSerResponse
       */
      Models::GetGroupMiscAggTimeSerResponse getGroupMiscAggTimeSer(const Models::GetGroupMiscAggTimeSerRequest &request);

      /**
       * @param request GetNetDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetDeviceInfoResponse
       */
      Models::GetNetDeviceInfoResponse getNetDeviceInfoWithOptions(const Models::GetNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetNetDeviceInfoRequest
       * @return GetNetDeviceInfoResponse
       */
      Models::GetNetDeviceInfoResponse getNetDeviceInfo(const Models::GetNetDeviceInfoRequest &request);

      /**
       * @param request GetNetDeviceInfoWithSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetDeviceInfoWithSizeResponse
       */
      Models::GetNetDeviceInfoWithSizeResponse getNetDeviceInfoWithSizeWithOptions(const Models::GetNetDeviceInfoWithSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetNetDeviceInfoWithSizeRequest
       * @return GetNetDeviceInfoWithSizeResponse
       */
      Models::GetNetDeviceInfoWithSizeResponse getNetDeviceInfoWithSize(const Models::GetNetDeviceInfoWithSizeRequest &request);

      /**
       * @summary 获取体验加PV/UV信息
       *
       * @param request GetPageVisitDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPageVisitDataResponse
       */
      Models::GetPageVisitDataResponse getPageVisitDataWithOptions(const Models::GetPageVisitDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取体验加PV/UV信息
       *
       * @param request GetPageVisitDataRequest
       * @return GetPageVisitDataResponse
       */
      Models::GetPageVisitDataResponse getPageVisitData(const Models::GetPageVisitDataRequest &request);

      /**
       * @param request GetRadioRunHistoryTimeSerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRadioRunHistoryTimeSerResponse
       */
      Models::GetRadioRunHistoryTimeSerResponse getRadioRunHistoryTimeSerWithOptions(const Models::GetRadioRunHistoryTimeSerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRadioRunHistoryTimeSerRequest
       * @return GetRadioRunHistoryTimeSerResponse
       */
      Models::GetRadioRunHistoryTimeSerResponse getRadioRunHistoryTimeSer(const Models::GetRadioRunHistoryTimeSerRequest &request);

      /**
       * @summary 查询终端设备的详细状态
       *
       * @param request GetStaDetailedStatusByMacRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStaDetailedStatusByMacResponse
       */
      Models::GetStaDetailedStatusByMacResponse getStaDetailedStatusByMacWithOptions(const Models::GetStaDetailedStatusByMacRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询终端设备的详细状态
       *
       * @param request GetStaDetailedStatusByMacRequest
       * @return GetStaDetailedStatusByMacResponse
       */
      Models::GetStaDetailedStatusByMacResponse getStaDetailedStatusByMac(const Models::GetStaDetailedStatusByMacRequest &request);

      /**
       * @param request GetStaStatusListByApRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStaStatusListByApResponse
       */
      Models::GetStaStatusListByApResponse getStaStatusListByApWithOptions(const Models::GetStaStatusListByApRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetStaStatusListByApRequest
       * @return GetStaStatusListByApResponse
       */
      Models::GetStaStatusListByApResponse getStaStatusListByAp(const Models::GetStaStatusListByApRequest &request);

      /**
       * @summary 判断是否刑天的业务
       *
       * @param request JudgeXingTianBusinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JudgeXingTianBusinessResponse
       */
      Models::JudgeXingTianBusinessResponse judgeXingTianBusinessWithOptions(const Models::JudgeXingTianBusinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 判断是否刑天的业务
       *
       * @param request JudgeXingTianBusinessRequest
       * @return JudgeXingTianBusinessResponse
       */
      Models::JudgeXingTianBusinessResponse judgeXingTianBusiness(const Models::JudgeXingTianBusinessRequest &request);

      /**
       * @summary 踢除蚂蚁环境的终端
       *
       * @param request KickAntStaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KickAntStaResponse
       */
      Models::KickAntStaResponse kickAntStaWithOptions(const Models::KickAntStaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 踢除蚂蚁环境的终端
       *
       * @param request KickAntStaRequest
       * @return KickAntStaResponse
       */
      Models::KickAntStaResponse kickAntSta(const Models::KickAntStaRequest &request);

      /**
       * @param request KickStaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KickStaResponse
       */
      Models::KickStaResponse kickStaWithOptions(const Models::KickStaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request KickStaRequest
       * @return KickStaResponse
       */
      Models::KickStaResponse kickSta(const Models::KickStaRequest &request);

      /**
       * @summary 根据组id查组内第一级子组
       *
       * @param request ListApgroupDescendantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApgroupDescendantResponse
       */
      Models::ListApgroupDescendantResponse listApgroupDescendantWithOptions(const Models::ListApgroupDescendantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据组id查组内第一级子组
       *
       * @param request ListApgroupDescendantRequest
       * @return ListApgroupDescendantResponse
       */
      Models::ListApgroupDescendantResponse listApgroupDescendant(const Models::ListApgroupDescendantRequest &request);

      /**
       * @param request ListJobOrdersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobOrdersResponse
       */
      Models::ListJobOrdersResponse listJobOrdersWithOptions(const Models::ListJobOrdersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListJobOrdersRequest
       * @return ListJobOrdersResponse
       */
      Models::ListJobOrdersResponse listJobOrders(const Models::ListJobOrdersRequest &request);

      /**
       * @param request ListJobOrdersWithSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobOrdersWithSizeResponse
       */
      Models::ListJobOrdersWithSizeResponse listJobOrdersWithSizeWithOptions(const Models::ListJobOrdersWithSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListJobOrdersWithSizeRequest
       * @return ListJobOrdersWithSizeResponse
       */
      Models::ListJobOrdersWithSizeResponse listJobOrdersWithSize(const Models::ListJobOrdersWithSizeRequest &request);

      /**
       * @param request NewApgroupConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NewApgroupConfigResponse
       */
      Models::NewApgroupConfigResponse newApgroupConfigWithOptions(const Models::NewApgroupConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request NewApgroupConfigRequest
       * @return NewApgroupConfigResponse
       */
      Models::NewApgroupConfigResponse newApgroupConfig(const Models::NewApgroupConfigRequest &request);

      /**
       * @param tmpReq NewJobOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NewJobOrderResponse
       */
      Models::NewJobOrderResponse newJobOrderWithOptions(const Models::NewJobOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request NewJobOrderRequest
       * @return NewJobOrderResponse
       */
      Models::NewJobOrderResponse newJobOrder(const Models::NewJobOrderRequest &request);

      /**
       * @param request NewNetDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return NewNetDeviceInfoResponse
       */
      Models::NewNetDeviceInfoResponse newNetDeviceInfoWithOptions(const Models::NewNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request NewNetDeviceInfoRequest
       * @return NewNetDeviceInfoResponse
       */
      Models::NewNetDeviceInfoResponse newNetDeviceInfo(const Models::NewNetDeviceInfoRequest &request);

      /**
       * @param request PutAppConfigAndSaveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutAppConfigAndSaveResponse
       */
      Models::PutAppConfigAndSaveResponse putAppConfigAndSaveWithOptions(const Models::PutAppConfigAndSaveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PutAppConfigAndSaveRequest
       * @return PutAppConfigAndSaveResponse
       */
      Models::PutAppConfigAndSaveResponse putAppConfigAndSave(const Models::PutAppConfigAndSaveRequest &request);

      /**
       * @param request QueryJobOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryJobOrderResponse
       */
      Models::QueryJobOrderResponse queryJobOrderWithOptions(const Models::QueryJobOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryJobOrderRequest
       * @return QueryJobOrderResponse
       */
      Models::QueryJobOrderResponse queryJobOrder(const Models::QueryJobOrderRequest &request);

      /**
       * @param request RebootApRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootApResponse
       */
      Models::RebootApResponse rebootApWithOptions(const Models::RebootApRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RebootApRequest
       * @return RebootApResponse
       */
      Models::RebootApResponse rebootAp(const Models::RebootApRequest &request);

      /**
       * @param request RegisterApAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterApAssetResponse
       */
      Models::RegisterApAssetResponse registerApAssetWithOptions(const Models::RegisterApAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RegisterApAssetRequest
       * @return RegisterApAssetResponse
       */
      Models::RegisterApAssetResponse registerApAsset(const Models::RegisterApAssetRequest &request);

      /**
       * @param request RepairApRadioRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RepairApRadioResponse
       */
      Models::RepairApRadioResponse repairApRadioWithOptions(const Models::RepairApRadioRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RepairApRadioRequest
       * @return RepairApRadioResponse
       */
      Models::RepairApRadioResponse repairApRadio(const Models::RepairApRadioRequest &request);

      /**
       * @summary 保存设备的基本配置
       *
       * @param request SaveApBasicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApBasicConfigResponse
       */
      Models::SaveApBasicConfigResponse saveApBasicConfigWithOptions(const Models::SaveApBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存设备的基本配置
       *
       * @param request SaveApBasicConfigRequest
       * @return SaveApBasicConfigResponse
       */
      Models::SaveApBasicConfigResponse saveApBasicConfig(const Models::SaveApBasicConfigRequest &request);

      /**
       * @summary 配置设备的portal
       *
       * @param tmpReq SaveApPortalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApPortalConfigResponse
       */
      Models::SaveApPortalConfigResponse saveApPortalConfigWithOptions(const Models::SaveApPortalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置设备的portal
       *
       * @param request SaveApPortalConfigRequest
       * @return SaveApPortalConfigResponse
       */
      Models::SaveApPortalConfigResponse saveApPortalConfig(const Models::SaveApPortalConfigRequest &request);

      /**
       * @param request SaveApRadioConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApRadioConfigResponse
       */
      Models::SaveApRadioConfigResponse saveApRadioConfigWithOptions(const Models::SaveApRadioConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveApRadioConfigRequest
       * @return SaveApRadioConfigResponse
       */
      Models::SaveApRadioConfigResponse saveApRadioConfig(const Models::SaveApRadioConfigRequest &request);

      /**
       * @param request SaveApSsidConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApSsidConfigResponse
       */
      Models::SaveApSsidConfigResponse saveApSsidConfigWithOptions(const Models::SaveApSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveApSsidConfigRequest
       * @return SaveApSsidConfigResponse
       */
      Models::SaveApSsidConfigResponse saveApSsidConfig(const Models::SaveApSsidConfigRequest &request);

      /**
       * @summary 配置设备的三方app
       *
       * @param request SaveApThirdAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApThirdAppResponse
       */
      Models::SaveApThirdAppResponse saveApThirdAppWithOptions(const Models::SaveApThirdAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置设备的三方app
       *
       * @param request SaveApThirdAppRequest
       * @return SaveApThirdAppResponse
       */
      Models::SaveApThirdAppResponse saveApThirdApp(const Models::SaveApThirdAppRequest &request);

      /**
       * @summary 保存设备组的基本配置
       *
       * @param request SaveApgroupBasicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApgroupBasicConfigResponse
       */
      Models::SaveApgroupBasicConfigResponse saveApgroupBasicConfigWithOptions(const Models::SaveApgroupBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 保存设备组的基本配置
       *
       * @param request SaveApgroupBasicConfigRequest
       * @return SaveApgroupBasicConfigResponse
       */
      Models::SaveApgroupBasicConfigResponse saveApgroupBasicConfig(const Models::SaveApgroupBasicConfigRequest &request);

      /**
       * @summary 配置设备组的portal
       *
       * @param tmpReq SaveApgroupPortalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApgroupPortalConfigResponse
       */
      Models::SaveApgroupPortalConfigResponse saveApgroupPortalConfigWithOptions(const Models::SaveApgroupPortalConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置设备组的portal
       *
       * @param request SaveApgroupPortalConfigRequest
       * @return SaveApgroupPortalConfigResponse
       */
      Models::SaveApgroupPortalConfigResponse saveApgroupPortalConfig(const Models::SaveApgroupPortalConfigRequest &request);

      /**
       * @param request SaveApgroupSsidConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveApgroupSsidConfigResponse
       */
      Models::SaveApgroupSsidConfigResponse saveApgroupSsidConfigWithOptions(const Models::SaveApgroupSsidConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SaveApgroupSsidConfigRequest
       * @return SaveApgroupSsidConfigResponse
       */
      Models::SaveApgroupSsidConfigResponse saveApgroupSsidConfig(const Models::SaveApgroupSsidConfigRequest &request);

      /**
       * @param request SetApAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApAddressResponse
       */
      Models::SetApAddressResponse setApAddressWithOptions(const Models::SetApAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetApAddressRequest
       * @return SetApAddressResponse
       */
      Models::SetApAddressResponse setApAddress(const Models::SetApAddressRequest &request);

      /**
       * @param request SetApNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApNameResponse
       */
      Models::SetApNameResponse setApNameWithOptions(const Models::SetApNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetApNameRequest
       * @return SetApNameResponse
       */
      Models::SetApNameResponse setApName(const Models::SetApNameRequest &request);

      /**
       * @summary 注销AP设备
       *
       * @param request UnRegisterApAssetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnRegisterApAssetResponse
       */
      Models::UnRegisterApAssetResponse unRegisterApAssetWithOptions(const Models::UnRegisterApAssetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 注销AP设备
       *
       * @param request UnRegisterApAssetRequest
       * @return UnRegisterApAssetResponse
       */
      Models::UnRegisterApAssetResponse unRegisterApAsset(const Models::UnRegisterApAssetRequest &request);

      /**
       * @param request UpdateNetDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetDeviceInfoResponse
       */
      Models::UpdateNetDeviceInfoResponse updateNetDeviceInfoWithOptions(const Models::UpdateNetDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateNetDeviceInfoRequest
       * @return UpdateNetDeviceInfoResponse
       */
      Models::UpdateNetDeviceInfoResponse updateNetDeviceInfo(const Models::UpdateNetDeviceInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
