// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VS20181212_HPP_
#define ALIBABACLOUD_VS20181212_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Vs20181212Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Vs20181212.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVsPullStreamInfoConfigResponse
       */
      Models::AddVsPullStreamInfoConfigResponse addVsPullStreamInfoConfigWithOptions(const Models::AddVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddVsPullStreamInfoConfigRequest
       * @return AddVsPullStreamInfoConfigResponse
       */
      Models::AddVsPullStreamInfoConfigResponse addVsPullStreamInfoConfig(const Models::AddVsPullStreamInfoConfigRequest &request);

      /**
       * @summary 云应用服务实例与项目进行关联。
       *
       * @description ## 请求说明
       * - 该接口用于将满足特定条件的实例与指定项目进行关联。
       *
       * @param tmpReq AssociateRenderingProjectInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRenderingProjectInstancesResponse
       */
      Models::AssociateRenderingProjectInstancesResponse associateRenderingProjectInstancesWithOptions(const Models::AssociateRenderingProjectInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 云应用服务实例与项目进行关联。
       *
       * @description ## 请求说明
       * - 该接口用于将满足特定条件的实例与指定项目进行关联。
       *
       * @param request AssociateRenderingProjectInstancesRequest
       * @return AssociateRenderingProjectInstancesResponse
       */
      Models::AssociateRenderingProjectInstancesResponse associateRenderingProjectInstances(const Models::AssociateRenderingProjectInstancesRequest &request);

      /**
       * @param request BatchBindDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindDirectoriesResponse
       */
      Models::BatchBindDirectoriesResponse batchBindDirectoriesWithOptions(const Models::BatchBindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchBindDirectoriesRequest
       * @return BatchBindDirectoriesResponse
       */
      Models::BatchBindDirectoriesResponse batchBindDirectories(const Models::BatchBindDirectoriesRequest &request);

      /**
       * @param request BatchBindParentPlatformDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindParentPlatformDevicesResponse
       */
      Models::BatchBindParentPlatformDevicesResponse batchBindParentPlatformDevicesWithOptions(const Models::BatchBindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchBindParentPlatformDevicesRequest
       * @return BatchBindParentPlatformDevicesResponse
       */
      Models::BatchBindParentPlatformDevicesResponse batchBindParentPlatformDevices(const Models::BatchBindParentPlatformDevicesRequest &request);

      /**
       * @param request BatchBindPurchasedDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindPurchasedDevicesResponse
       */
      Models::BatchBindPurchasedDevicesResponse batchBindPurchasedDevicesWithOptions(const Models::BatchBindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchBindPurchasedDevicesRequest
       * @return BatchBindPurchasedDevicesResponse
       */
      Models::BatchBindPurchasedDevicesResponse batchBindPurchasedDevices(const Models::BatchBindPurchasedDevicesRequest &request);

      /**
       * @param request BatchBindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindTemplateResponse
       */
      Models::BatchBindTemplateResponse batchBindTemplateWithOptions(const Models::BatchBindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchBindTemplateRequest
       * @return BatchBindTemplateResponse
       */
      Models::BatchBindTemplateResponse batchBindTemplate(const Models::BatchBindTemplateRequest &request);

      /**
       * @param request BatchBindTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindTemplatesResponse
       */
      Models::BatchBindTemplatesResponse batchBindTemplatesWithOptions(const Models::BatchBindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchBindTemplatesRequest
       * @return BatchBindTemplatesResponse
       */
      Models::BatchBindTemplatesResponse batchBindTemplates(const Models::BatchBindTemplatesRequest &request);

      /**
       * @param request BatchDeleteDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDevicesResponse
       */
      Models::BatchDeleteDevicesResponse batchDeleteDevicesWithOptions(const Models::BatchDeleteDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchDeleteDevicesRequest
       * @return BatchDeleteDevicesResponse
       */
      Models::BatchDeleteDevicesResponse batchDeleteDevices(const Models::BatchDeleteDevicesRequest &request);

      /**
       * @param request BatchDeleteVsDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteVsDomainConfigsResponse
       */
      Models::BatchDeleteVsDomainConfigsResponse batchDeleteVsDomainConfigsWithOptions(const Models::BatchDeleteVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchDeleteVsDomainConfigsRequest
       * @return BatchDeleteVsDomainConfigsResponse
       */
      Models::BatchDeleteVsDomainConfigsResponse batchDeleteVsDomainConfigs(const Models::BatchDeleteVsDomainConfigsRequest &request);

      /**
       * @param request BatchForbidVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchForbidVsStreamResponse
       */
      Models::BatchForbidVsStreamResponse batchForbidVsStreamWithOptions(const Models::BatchForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchForbidVsStreamRequest
       * @return BatchForbidVsStreamResponse
       */
      Models::BatchForbidVsStreamResponse batchForbidVsStream(const Models::BatchForbidVsStreamRequest &request);

      /**
       * @param request BatchResumeVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchResumeVsStreamResponse
       */
      Models::BatchResumeVsStreamResponse batchResumeVsStreamWithOptions(const Models::BatchResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchResumeVsStreamRequest
       * @return BatchResumeVsStreamResponse
       */
      Models::BatchResumeVsStreamResponse batchResumeVsStream(const Models::BatchResumeVsStreamRequest &request);

      /**
       * @param request BatchSetVsDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetVsDomainConfigsResponse
       */
      Models::BatchSetVsDomainConfigsResponse batchSetVsDomainConfigsWithOptions(const Models::BatchSetVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchSetVsDomainConfigsRequest
       * @return BatchSetVsDomainConfigsResponse
       */
      Models::BatchSetVsDomainConfigsResponse batchSetVsDomainConfigs(const Models::BatchSetVsDomainConfigsRequest &request);

      /**
       * @param request BatchStartDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartDevicesResponse
       */
      Models::BatchStartDevicesResponse batchStartDevicesWithOptions(const Models::BatchStartDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchStartDevicesRequest
       * @return BatchStartDevicesResponse
       */
      Models::BatchStartDevicesResponse batchStartDevices(const Models::BatchStartDevicesRequest &request);

      /**
       * @param request BatchStartStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartStreamsResponse
       */
      Models::BatchStartStreamsResponse batchStartStreamsWithOptions(const Models::BatchStartStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchStartStreamsRequest
       * @return BatchStartStreamsResponse
       */
      Models::BatchStartStreamsResponse batchStartStreams(const Models::BatchStartStreamsRequest &request);

      /**
       * @param request BatchStopDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopDevicesResponse
       */
      Models::BatchStopDevicesResponse batchStopDevicesWithOptions(const Models::BatchStopDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchStopDevicesRequest
       * @return BatchStopDevicesResponse
       */
      Models::BatchStopDevicesResponse batchStopDevices(const Models::BatchStopDevicesRequest &request);

      /**
       * @param request BatchStopStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopStreamsResponse
       */
      Models::BatchStopStreamsResponse batchStopStreamsWithOptions(const Models::BatchStopStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchStopStreamsRequest
       * @return BatchStopStreamsResponse
       */
      Models::BatchStopStreamsResponse batchStopStreams(const Models::BatchStopStreamsRequest &request);

      /**
       * @param request BatchUnbindDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindDirectoriesResponse
       */
      Models::BatchUnbindDirectoriesResponse batchUnbindDirectoriesWithOptions(const Models::BatchUnbindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchUnbindDirectoriesRequest
       * @return BatchUnbindDirectoriesResponse
       */
      Models::BatchUnbindDirectoriesResponse batchUnbindDirectories(const Models::BatchUnbindDirectoriesRequest &request);

      /**
       * @param request BatchUnbindParentPlatformDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindParentPlatformDevicesResponse
       */
      Models::BatchUnbindParentPlatformDevicesResponse batchUnbindParentPlatformDevicesWithOptions(const Models::BatchUnbindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchUnbindParentPlatformDevicesRequest
       * @return BatchUnbindParentPlatformDevicesResponse
       */
      Models::BatchUnbindParentPlatformDevicesResponse batchUnbindParentPlatformDevices(const Models::BatchUnbindParentPlatformDevicesRequest &request);

      /**
       * @param request BatchUnbindPurchasedDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindPurchasedDevicesResponse
       */
      Models::BatchUnbindPurchasedDevicesResponse batchUnbindPurchasedDevicesWithOptions(const Models::BatchUnbindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchUnbindPurchasedDevicesRequest
       * @return BatchUnbindPurchasedDevicesResponse
       */
      Models::BatchUnbindPurchasedDevicesResponse batchUnbindPurchasedDevices(const Models::BatchUnbindPurchasedDevicesRequest &request);

      /**
       * @param request BatchUnbindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindTemplateResponse
       */
      Models::BatchUnbindTemplateResponse batchUnbindTemplateWithOptions(const Models::BatchUnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchUnbindTemplateRequest
       * @return BatchUnbindTemplateResponse
       */
      Models::BatchUnbindTemplateResponse batchUnbindTemplate(const Models::BatchUnbindTemplateRequest &request);

      /**
       * @param request BatchUnbindTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindTemplatesResponse
       */
      Models::BatchUnbindTemplatesResponse batchUnbindTemplatesWithOptions(const Models::BatchUnbindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchUnbindTemplatesRequest
       * @return BatchUnbindTemplatesResponse
       */
      Models::BatchUnbindTemplatesResponse batchUnbindTemplates(const Models::BatchUnbindTemplatesRequest &request);

      /**
       * @param request BindDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDirectoryResponse
       */
      Models::BindDirectoryResponse bindDirectoryWithOptions(const Models::BindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindDirectoryRequest
       * @return BindDirectoryResponse
       */
      Models::BindDirectoryResponse bindDirectory(const Models::BindDirectoryRequest &request);

      /**
       * @param request BindParentPlatformDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindParentPlatformDeviceResponse
       */
      Models::BindParentPlatformDeviceResponse bindParentPlatformDeviceWithOptions(const Models::BindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindParentPlatformDeviceRequest
       * @return BindParentPlatformDeviceResponse
       */
      Models::BindParentPlatformDeviceResponse bindParentPlatformDevice(const Models::BindParentPlatformDeviceRequest &request);

      /**
       * @param request BindPurchasedDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPurchasedDeviceResponse
       */
      Models::BindPurchasedDeviceResponse bindPurchasedDeviceWithOptions(const Models::BindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindPurchasedDeviceRequest
       * @return BindPurchasedDeviceResponse
       */
      Models::BindPurchasedDeviceResponse bindPurchasedDevice(const Models::BindPurchasedDeviceRequest &request);

      /**
       * @param request BindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindTemplateResponse
       */
      Models::BindTemplateResponse bindTemplateWithOptions(const Models::BindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BindTemplateRequest
       * @return BindTemplateResponse
       */
      Models::BindTemplateResponse bindTemplate(const Models::BindTemplateRequest &request);

      /**
       * @param request ContinuousAdjustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuousAdjustResponse
       */
      Models::ContinuousAdjustResponse continuousAdjustWithOptions(const Models::ContinuousAdjustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ContinuousAdjustRequest
       * @return ContinuousAdjustResponse
       */
      Models::ContinuousAdjustResponse continuousAdjust(const Models::ContinuousAdjustRequest &request);

      /**
       * @param request ContinuousMoveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuousMoveResponse
       */
      Models::ContinuousMoveResponse continuousMoveWithOptions(const Models::ContinuousMoveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ContinuousMoveRequest
       * @return ContinuousMoveResponse
       */
      Models::ContinuousMoveResponse continuousMove(const Models::ContinuousMoveRequest &request);

      /**
       * @param request CreateDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeviceResponse
       */
      Models::CreateDeviceResponse createDeviceWithOptions(const Models::CreateDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDeviceRequest
       * @return CreateDeviceResponse
       */
      Models::CreateDeviceResponse createDevice(const Models::CreateDeviceRequest &request);

      /**
       * @param request CreateDeviceAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeviceAlarmResponse
       */
      Models::CreateDeviceAlarmResponse createDeviceAlarmWithOptions(const Models::CreateDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDeviceAlarmRequest
       * @return CreateDeviceAlarmResponse
       */
      Models::CreateDeviceAlarmResponse createDeviceAlarm(const Models::CreateDeviceAlarmRequest &request);

      /**
       * @param request CreateDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectoryWithOptions(const Models::CreateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateDirectoryRequest
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectory(const Models::CreateDirectoryRequest &request);

      /**
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @param request CreateParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParentPlatformResponse
       */
      Models::CreateParentPlatformResponse createParentPlatformWithOptions(const Models::CreateParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateParentPlatformRequest
       * @return CreateParentPlatformResponse
       */
      Models::CreateParentPlatformResponse createParentPlatform(const Models::CreateParentPlatformRequest &request);

      /**
       * @summary 创建云渲染数据包
       *
       * @param request CreateRenderingDataPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingDataPackageResponse
       */
      Models::CreateRenderingDataPackageResponse createRenderingDataPackageWithOptions(const Models::CreateRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建云渲染数据包
       *
       * @param request CreateRenderingDataPackageRequest
       * @return CreateRenderingDataPackageResponse
       */
      Models::CreateRenderingDataPackageResponse createRenderingDataPackage(const Models::CreateRenderingDataPackageRequest &request);

      /**
       * @summary 申请云渲染资源实例
       *
       * @param tmpReq CreateRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingInstanceResponse
       */
      Models::CreateRenderingInstanceResponse createRenderingInstanceWithOptions(const Models::CreateRenderingInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请云渲染资源实例
       *
       * @param request CreateRenderingInstanceRequest
       * @return CreateRenderingInstanceResponse
       */
      Models::CreateRenderingInstanceResponse createRenderingInstance(const Models::CreateRenderingInstanceRequest &request);

      /**
       * @summary 创建自定义网关
       *
       * @param request CreateRenderingInstanceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingInstanceGatewayResponse
       */
      Models::CreateRenderingInstanceGatewayResponse createRenderingInstanceGatewayWithOptions(const Models::CreateRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义网关
       *
       * @param request CreateRenderingInstanceGatewayRequest
       * @return CreateRenderingInstanceGatewayResponse
       */
      Models::CreateRenderingInstanceGatewayResponse createRenderingInstanceGateway(const Models::CreateRenderingInstanceGatewayRequest &request);

      /**
       * @summary 创建一个新的云应用服务项目，并设置相关属性。
       *
       * @param tmpReq CreateRenderingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingProjectResponse
       */
      Models::CreateRenderingProjectResponse createRenderingProjectWithOptions(const Models::CreateRenderingProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个新的云应用服务项目，并设置相关属性。
       *
       * @param request CreateRenderingProjectRequest
       * @return CreateRenderingProjectResponse
       */
      Models::CreateRenderingProjectResponse createRenderingProject(const Models::CreateRenderingProjectRequest &request);

      /**
       * @param request CreateStreamSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamSnapshotResponse
       */
      Models::CreateStreamSnapshotResponse createStreamSnapshotWithOptions(const Models::CreateStreamSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateStreamSnapshotRequest
       * @return CreateStreamSnapshotResponse
       */
      Models::CreateStreamSnapshotResponse createStreamSnapshot(const Models::CreateStreamSnapshotRequest &request);

      /**
       * @param request CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary 删除云应用
       *
       * @param request DeleteCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAppResponse
       */
      Models::DeleteCloudAppResponse deleteCloudAppWithOptions(const Models::DeleteCloudAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除云应用
       *
       * @param request DeleteCloudAppRequest
       * @return DeleteCloudAppResponse
       */
      Models::DeleteCloudAppResponse deleteCloudApp(const Models::DeleteCloudAppRequest &request);

      /**
       * @param request DeleteDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeviceResponse
       */
      Models::DeleteDeviceResponse deleteDeviceWithOptions(const Models::DeleteDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDeviceRequest
       * @return DeleteDeviceResponse
       */
      Models::DeleteDeviceResponse deleteDevice(const Models::DeleteDeviceRequest &request);

      /**
       * @param request DeleteDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectoryWithOptions(const Models::DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteDirectoryRequest
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectory(const Models::DeleteDirectoryRequest &request);

      /**
       * @summary 删除文件对象。
       *
       * @param request DeleteFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const Models::DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除文件对象。
       *
       * @param request DeleteFileRequest
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const Models::DeleteFileRequest &request);

      /**
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @param request DeleteParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParentPlatformResponse
       */
      Models::DeleteParentPlatformResponse deleteParentPlatformWithOptions(const Models::DeleteParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteParentPlatformRequest
       * @return DeleteParentPlatformResponse
       */
      Models::DeleteParentPlatformResponse deleteParentPlatform(const Models::DeleteParentPlatformRequest &request);

      /**
       * @param request DeletePresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePresetResponse
       */
      Models::DeletePresetResponse deletePresetWithOptions(const Models::DeletePresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeletePresetRequest
       * @return DeletePresetResponse
       */
      Models::DeletePresetResponse deletePreset(const Models::DeletePresetRequest &request);

      /**
       * @summary 删除公钥信息
       *
       * @param request DeletePublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicKeyResponse
       */
      Models::DeletePublicKeyResponse deletePublicKeyWithOptions(const Models::DeletePublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除公钥信息
       *
       * @param request DeletePublicKeyRequest
       * @return DeletePublicKeyResponse
       */
      Models::DeletePublicKeyResponse deletePublicKey(const Models::DeletePublicKeyRequest &request);

      /**
       * @summary 删除云渲染实例配置参数
       *
       * @param tmpReq DeleteRenderingInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingInstanceConfigurationResponse
       */
      Models::DeleteRenderingInstanceConfigurationResponse deleteRenderingInstanceConfigurationWithOptions(const Models::DeleteRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除云渲染实例配置参数
       *
       * @param request DeleteRenderingInstanceConfigurationRequest
       * @return DeleteRenderingInstanceConfigurationResponse
       */
      Models::DeleteRenderingInstanceConfigurationResponse deleteRenderingInstanceConfiguration(const Models::DeleteRenderingInstanceConfigurationRequest &request);

      /**
       * @summary 删除自定义网关
       *
       * @param request DeleteRenderingInstanceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingInstanceGatewayResponse
       */
      Models::DeleteRenderingInstanceGatewayResponse deleteRenderingInstanceGatewayWithOptions(const Models::DeleteRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义网关
       *
       * @param request DeleteRenderingInstanceGatewayRequest
       * @return DeleteRenderingInstanceGatewayResponse
       */
      Models::DeleteRenderingInstanceGatewayResponse deleteRenderingInstanceGateway(const Models::DeleteRenderingInstanceGatewayRequest &request);

      /**
       * @summary 清除实例设置
       *
       * @param tmpReq DeleteRenderingInstanceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingInstanceSettingsResponse
       */
      Models::DeleteRenderingInstanceSettingsResponse deleteRenderingInstanceSettingsWithOptions(const Models::DeleteRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清除实例设置
       *
       * @param request DeleteRenderingInstanceSettingsRequest
       * @return DeleteRenderingInstanceSettingsResponse
       */
      Models::DeleteRenderingInstanceSettingsResponse deleteRenderingInstanceSettings(const Models::DeleteRenderingInstanceSettingsRequest &request);

      /**
       * @summary 删除一个云应用服务项目，有在线会话等业务调度数据的项目不允许删除。
       *
       * @param request DeleteRenderingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingProjectResponse
       */
      Models::DeleteRenderingProjectResponse deleteRenderingProjectWithOptions(const Models::DeleteRenderingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个云应用服务项目，有在线会话等业务调度数据的项目不允许删除。
       *
       * @param request DeleteRenderingProjectRequest
       * @return DeleteRenderingProjectResponse
       */
      Models::DeleteRenderingProjectResponse deleteRenderingProject(const Models::DeleteRenderingProjectRequest &request);

      /**
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @param request DeleteVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVsPullStreamInfoConfigResponse
       */
      Models::DeleteVsPullStreamInfoConfigResponse deleteVsPullStreamInfoConfigWithOptions(const Models::DeleteVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteVsPullStreamInfoConfigRequest
       * @return DeleteVsPullStreamInfoConfigResponse
       */
      Models::DeleteVsPullStreamInfoConfigResponse deleteVsPullStreamInfoConfig(const Models::DeleteVsPullStreamInfoConfigRequest &request);

      /**
       * @param request DeleteVsStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVsStreamsNotifyUrlConfigResponse
       */
      Models::DeleteVsStreamsNotifyUrlConfigResponse deleteVsStreamsNotifyUrlConfigWithOptions(const Models::DeleteVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteVsStreamsNotifyUrlConfigRequest
       * @return DeleteVsStreamsNotifyUrlConfigResponse
       */
      Models::DeleteVsStreamsNotifyUrlConfigResponse deleteVsStreamsNotifyUrlConfig(const Models::DeleteVsStreamsNotifyUrlConfigRequest &request);

      /**
       * @param request DescribeAccountStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountStatResponse
       */
      Models::DescribeAccountStatResponse describeAccountStatWithOptions(const Models::DescribeAccountStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeAccountStatRequest
       * @return DescribeAccountStatResponse
       */
      Models::DescribeAccountStatResponse describeAccountStat(const Models::DescribeAccountStatRequest &request);

      /**
       * @param request DescribeDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceResponse
       */
      Models::DescribeDeviceResponse describeDeviceWithOptions(const Models::DescribeDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDeviceRequest
       * @return DescribeDeviceResponse
       */
      Models::DescribeDeviceResponse describeDevice(const Models::DescribeDeviceRequest &request);

      /**
       * @param request DescribeDeviceChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceChannelsResponse
       */
      Models::DescribeDeviceChannelsResponse describeDeviceChannelsWithOptions(const Models::DescribeDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDeviceChannelsRequest
       * @return DescribeDeviceChannelsResponse
       */
      Models::DescribeDeviceChannelsResponse describeDeviceChannels(const Models::DescribeDeviceChannelsRequest &request);

      /**
       * @param request DescribeDeviceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceGatewayResponse
       */
      Models::DescribeDeviceGatewayResponse describeDeviceGatewayWithOptions(const Models::DescribeDeviceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDeviceGatewayRequest
       * @return DescribeDeviceGatewayResponse
       */
      Models::DescribeDeviceGatewayResponse describeDeviceGateway(const Models::DescribeDeviceGatewayRequest &request);

      /**
       * @param request DescribeDeviceURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceURLResponse
       */
      Models::DescribeDeviceURLResponse describeDeviceURLWithOptions(const Models::DescribeDeviceURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDeviceURLRequest
       * @return DescribeDeviceURLResponse
       */
      Models::DescribeDeviceURLResponse describeDeviceURL(const Models::DescribeDeviceURLRequest &request);

      /**
       * @param request DescribeDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDevicesResponse
       */
      Models::DescribeDevicesResponse describeDevicesWithOptions(const Models::DescribeDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDevicesRequest
       * @return DescribeDevicesResponse
       */
      Models::DescribeDevicesResponse describeDevices(const Models::DescribeDevicesRequest &request);

      /**
       * @param request DescribeDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectoriesWithOptions(const Models::DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDirectoriesRequest
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectories(const Models::DescribeDirectoriesRequest &request);

      /**
       * @param request DescribeDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirectoryResponse
       */
      Models::DescribeDirectoryResponse describeDirectoryWithOptions(const Models::DescribeDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDirectoryRequest
       * @return DescribeDirectoryResponse
       */
      Models::DescribeDirectoryResponse describeDirectory(const Models::DescribeDirectoryRequest &request);

      /**
       * @param request DescribeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroupWithOptions(const Models::DescribeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeGroupRequest
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroup(const Models::DescribeGroupRequest &request);

      /**
       * @param request DescribeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroupsWithOptions(const Models::DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeGroupsRequest
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroups(const Models::DescribeGroupsRequest &request);

      /**
       * @param request DescribeParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentPlatformResponse
       */
      Models::DescribeParentPlatformResponse describeParentPlatformWithOptions(const Models::DescribeParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeParentPlatformRequest
       * @return DescribeParentPlatformResponse
       */
      Models::DescribeParentPlatformResponse describeParentPlatform(const Models::DescribeParentPlatformRequest &request);

      /**
       * @param request DescribeParentPlatformDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentPlatformDevicesResponse
       */
      Models::DescribeParentPlatformDevicesResponse describeParentPlatformDevicesWithOptions(const Models::DescribeParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeParentPlatformDevicesRequest
       * @return DescribeParentPlatformDevicesResponse
       */
      Models::DescribeParentPlatformDevicesResponse describeParentPlatformDevices(const Models::DescribeParentPlatformDevicesRequest &request);

      /**
       * @param request DescribeParentPlatformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentPlatformsResponse
       */
      Models::DescribeParentPlatformsResponse describeParentPlatformsWithOptions(const Models::DescribeParentPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeParentPlatformsRequest
       * @return DescribeParentPlatformsResponse
       */
      Models::DescribeParentPlatformsResponse describeParentPlatforms(const Models::DescribeParentPlatformsRequest &request);

      /**
       * @param request DescribePresetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePresetsResponse
       */
      Models::DescribePresetsResponse describePresetsWithOptions(const Models::DescribePresetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePresetsRequest
       * @return DescribePresetsResponse
       */
      Models::DescribePresetsResponse describePresets(const Models::DescribePresetsRequest &request);

      /**
       * @param request DescribePublishStreamStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePublishStreamStatusResponse
       */
      Models::DescribePublishStreamStatusResponse describePublishStreamStatusWithOptions(const Models::DescribePublishStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePublishStreamStatusRequest
       * @return DescribePublishStreamStatusResponse
       */
      Models::DescribePublishStreamStatusResponse describePublishStreamStatus(const Models::DescribePublishStreamStatusRequest &request);

      /**
       * @param request DescribePurchasedDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedDeviceResponse
       */
      Models::DescribePurchasedDeviceResponse describePurchasedDeviceWithOptions(const Models::DescribePurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePurchasedDeviceRequest
       * @return DescribePurchasedDeviceResponse
       */
      Models::DescribePurchasedDeviceResponse describePurchasedDevice(const Models::DescribePurchasedDeviceRequest &request);

      /**
       * @param request DescribePurchasedDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedDevicesResponse
       */
      Models::DescribePurchasedDevicesResponse describePurchasedDevicesWithOptions(const Models::DescribePurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribePurchasedDevicesRequest
       * @return DescribePurchasedDevicesResponse
       */
      Models::DescribePurchasedDevicesResponse describePurchasedDevices(const Models::DescribePurchasedDevicesRequest &request);

      /**
       * @param request DescribeRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordsResponse
       */
      Models::DescribeRecordsResponse describeRecordsWithOptions(const Models::DescribeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeRecordsRequest
       * @return DescribeRecordsResponse
       */
      Models::DescribeRecordsResponse describeRecords(const Models::DescribeRecordsRequest &request);

      /**
       * @summary 查询云渲染实例详细信息。
       *
       * @param request DescribeRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingInstanceResponse
       */
      Models::DescribeRenderingInstanceResponse describeRenderingInstanceWithOptions(const Models::DescribeRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云渲染实例详细信息。
       *
       * @param request DescribeRenderingInstanceRequest
       * @return DescribeRenderingInstanceResponse
       */
      Models::DescribeRenderingInstanceResponse describeRenderingInstance(const Models::DescribeRenderingInstanceRequest &request);

      /**
       * @summary 查询云渲染实例模块配置参数
       *
       * @param tmpReq DescribeRenderingInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingInstanceConfigurationResponse
       */
      Models::DescribeRenderingInstanceConfigurationResponse describeRenderingInstanceConfigurationWithOptions(const Models::DescribeRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云渲染实例模块配置参数
       *
       * @param request DescribeRenderingInstanceConfigurationRequest
       * @return DescribeRenderingInstanceConfigurationResponse
       */
      Models::DescribeRenderingInstanceConfigurationResponse describeRenderingInstanceConfiguration(const Models::DescribeRenderingInstanceConfigurationRequest &request);

      /**
       * @summary 查询实例配置
       *
       * @param tmpReq DescribeRenderingInstanceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingInstanceSettingsResponse
       */
      Models::DescribeRenderingInstanceSettingsResponse describeRenderingInstanceSettingsWithOptions(const Models::DescribeRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例配置
       *
       * @param request DescribeRenderingInstanceSettingsRequest
       * @return DescribeRenderingInstanceSettingsResponse
       */
      Models::DescribeRenderingInstanceSettingsResponse describeRenderingInstanceSettings(const Models::DescribeRenderingInstanceSettingsRequest &request);

      /**
       * @summary 输出会话的详情信息，包含关联的实例、网络出口等信息。
       *
       * @param request DescribeRenderingSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingSessionResponse
       */
      Models::DescribeRenderingSessionResponse describeRenderingSessionWithOptions(const Models::DescribeRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 输出会话的详情信息，包含关联的实例、网络出口等信息。
       *
       * @param request DescribeRenderingSessionRequest
       * @return DescribeRenderingSessionResponse
       */
      Models::DescribeRenderingSessionResponse describeRenderingSession(const Models::DescribeRenderingSessionRequest &request);

      /**
       * @param request DescribeStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamResponse
       */
      Models::DescribeStreamResponse describeStreamWithOptions(const Models::DescribeStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeStreamRequest
       * @return DescribeStreamResponse
       */
      Models::DescribeStreamResponse describeStream(const Models::DescribeStreamRequest &request);

      /**
       * @param request DescribeStreamURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamURLResponse
       */
      Models::DescribeStreamURLResponse describeStreamURLWithOptions(const Models::DescribeStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeStreamURLRequest
       * @return DescribeStreamURLResponse
       */
      Models::DescribeStreamURLResponse describeStreamURL(const Models::DescribeStreamURLRequest &request);

      /**
       * @param request DescribeStreamVodListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamVodListResponse
       */
      Models::DescribeStreamVodListResponse describeStreamVodListWithOptions(const Models::DescribeStreamVodListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeStreamVodListRequest
       * @return DescribeStreamVodListResponse
       */
      Models::DescribeStreamVodListResponse describeStreamVodList(const Models::DescribeStreamVodListRequest &request);

      /**
       * @param request DescribeStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamsResponse
       */
      Models::DescribeStreamsResponse describeStreamsWithOptions(const Models::DescribeStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeStreamsRequest
       * @return DescribeStreamsResponse
       */
      Models::DescribeStreamsResponse describeStreams(const Models::DescribeStreamsRequest &request);

      /**
       * @param request DescribeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateResponse
       */
      Models::DescribeTemplateResponse describeTemplateWithOptions(const Models::DescribeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTemplateRequest
       * @return DescribeTemplateResponse
       */
      Models::DescribeTemplateResponse describeTemplate(const Models::DescribeTemplateRequest &request);

      /**
       * @param request DescribeTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const Models::DescribeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeTemplatesRequest
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const Models::DescribeTemplatesRequest &request);

      /**
       * @param request DescribeVodStreamURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodStreamURLResponse
       */
      Models::DescribeVodStreamURLResponse describeVodStreamURLWithOptions(const Models::DescribeVodStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVodStreamURLRequest
       * @return DescribeVodStreamURLResponse
       */
      Models::DescribeVodStreamURLResponse describeVodStreamURL(const Models::DescribeVodStreamURLRequest &request);

      /**
       * @param request DescribeVsCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsCertificateDetailResponse
       */
      Models::DescribeVsCertificateDetailResponse describeVsCertificateDetailWithOptions(const Models::DescribeVsCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsCertificateDetailRequest
       * @return DescribeVsCertificateDetailResponse
       */
      Models::DescribeVsCertificateDetailResponse describeVsCertificateDetail(const Models::DescribeVsCertificateDetailRequest &request);

      /**
       * @param request DescribeVsCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsCertificateListResponse
       */
      Models::DescribeVsCertificateListResponse describeVsCertificateListWithOptions(const Models::DescribeVsCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsCertificateListRequest
       * @return DescribeVsCertificateListResponse
       */
      Models::DescribeVsCertificateListResponse describeVsCertificateList(const Models::DescribeVsCertificateListRequest &request);

      /**
       * @param request DescribeVsDevicesDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDevicesDataResponse
       */
      Models::DescribeVsDevicesDataResponse describeVsDevicesDataWithOptions(const Models::DescribeVsDevicesDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDevicesDataRequest
       * @return DescribeVsDevicesDataResponse
       */
      Models::DescribeVsDevicesDataResponse describeVsDevicesData(const Models::DescribeVsDevicesDataRequest &request);

      /**
       * @param request DescribeVsDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainBpsDataResponse
       */
      Models::DescribeVsDomainBpsDataResponse describeVsDomainBpsDataWithOptions(const Models::DescribeVsDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainBpsDataRequest
       * @return DescribeVsDomainBpsDataResponse
       */
      Models::DescribeVsDomainBpsDataResponse describeVsDomainBpsData(const Models::DescribeVsDomainBpsDataRequest &request);

      /**
       * @param request DescribeVsDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainCertificateInfoResponse
       */
      Models::DescribeVsDomainCertificateInfoResponse describeVsDomainCertificateInfoWithOptions(const Models::DescribeVsDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainCertificateInfoRequest
       * @return DescribeVsDomainCertificateInfoResponse
       */
      Models::DescribeVsDomainCertificateInfoResponse describeVsDomainCertificateInfo(const Models::DescribeVsDomainCertificateInfoRequest &request);

      /**
       * @param request DescribeVsDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainConfigsResponse
       */
      Models::DescribeVsDomainConfigsResponse describeVsDomainConfigsWithOptions(const Models::DescribeVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainConfigsRequest
       * @return DescribeVsDomainConfigsResponse
       */
      Models::DescribeVsDomainConfigsResponse describeVsDomainConfigs(const Models::DescribeVsDomainConfigsRequest &request);

      /**
       * @param request DescribeVsDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainDetailResponse
       */
      Models::DescribeVsDomainDetailResponse describeVsDomainDetailWithOptions(const Models::DescribeVsDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainDetailRequest
       * @return DescribeVsDomainDetailResponse
       */
      Models::DescribeVsDomainDetailResponse describeVsDomainDetail(const Models::DescribeVsDomainDetailRequest &request);

      /**
       * @param request DescribeVsDomainPvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainPvDataResponse
       */
      Models::DescribeVsDomainPvDataResponse describeVsDomainPvDataWithOptions(const Models::DescribeVsDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainPvDataRequest
       * @return DescribeVsDomainPvDataResponse
       */
      Models::DescribeVsDomainPvDataResponse describeVsDomainPvData(const Models::DescribeVsDomainPvDataRequest &request);

      /**
       * @param request DescribeVsDomainPvUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainPvUvDataResponse
       */
      Models::DescribeVsDomainPvUvDataResponse describeVsDomainPvUvDataWithOptions(const Models::DescribeVsDomainPvUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainPvUvDataRequest
       * @return DescribeVsDomainPvUvDataResponse
       */
      Models::DescribeVsDomainPvUvDataResponse describeVsDomainPvUvData(const Models::DescribeVsDomainPvUvDataRequest &request);

      /**
       * @param request DescribeVsDomainRecordDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainRecordDataResponse
       */
      Models::DescribeVsDomainRecordDataResponse describeVsDomainRecordDataWithOptions(const Models::DescribeVsDomainRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainRecordDataRequest
       * @return DescribeVsDomainRecordDataResponse
       */
      Models::DescribeVsDomainRecordDataResponse describeVsDomainRecordData(const Models::DescribeVsDomainRecordDataRequest &request);

      /**
       * @param request DescribeVsDomainRegionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainRegionDataResponse
       */
      Models::DescribeVsDomainRegionDataResponse describeVsDomainRegionDataWithOptions(const Models::DescribeVsDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainRegionDataRequest
       * @return DescribeVsDomainRegionDataResponse
       */
      Models::DescribeVsDomainRegionDataResponse describeVsDomainRegionData(const Models::DescribeVsDomainRegionDataRequest &request);

      /**
       * @param request DescribeVsDomainReqBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainReqBpsDataResponse
       */
      Models::DescribeVsDomainReqBpsDataResponse describeVsDomainReqBpsDataWithOptions(const Models::DescribeVsDomainReqBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainReqBpsDataRequest
       * @return DescribeVsDomainReqBpsDataResponse
       */
      Models::DescribeVsDomainReqBpsDataResponse describeVsDomainReqBpsData(const Models::DescribeVsDomainReqBpsDataRequest &request);

      /**
       * @param request DescribeVsDomainReqTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainReqTrafficDataResponse
       */
      Models::DescribeVsDomainReqTrafficDataResponse describeVsDomainReqTrafficDataWithOptions(const Models::DescribeVsDomainReqTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainReqTrafficDataRequest
       * @return DescribeVsDomainReqTrafficDataResponse
       */
      Models::DescribeVsDomainReqTrafficDataResponse describeVsDomainReqTrafficData(const Models::DescribeVsDomainReqTrafficDataRequest &request);

      /**
       * @param request DescribeVsDomainSnapshotDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainSnapshotDataResponse
       */
      Models::DescribeVsDomainSnapshotDataResponse describeVsDomainSnapshotDataWithOptions(const Models::DescribeVsDomainSnapshotDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainSnapshotDataRequest
       * @return DescribeVsDomainSnapshotDataResponse
       */
      Models::DescribeVsDomainSnapshotDataResponse describeVsDomainSnapshotData(const Models::DescribeVsDomainSnapshotDataRequest &request);

      /**
       * @param request DescribeVsDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainTrafficDataResponse
       */
      Models::DescribeVsDomainTrafficDataResponse describeVsDomainTrafficDataWithOptions(const Models::DescribeVsDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainTrafficDataRequest
       * @return DescribeVsDomainTrafficDataResponse
       */
      Models::DescribeVsDomainTrafficDataResponse describeVsDomainTrafficData(const Models::DescribeVsDomainTrafficDataRequest &request);

      /**
       * @param request DescribeVsDomainUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainUvDataResponse
       */
      Models::DescribeVsDomainUvDataResponse describeVsDomainUvDataWithOptions(const Models::DescribeVsDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsDomainUvDataRequest
       * @return DescribeVsDomainUvDataResponse
       */
      Models::DescribeVsDomainUvDataResponse describeVsDomainUvData(const Models::DescribeVsDomainUvDataRequest &request);

      /**
       * @param request DescribeVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsPullStreamInfoConfigResponse
       */
      Models::DescribeVsPullStreamInfoConfigResponse describeVsPullStreamInfoConfigWithOptions(const Models::DescribeVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsPullStreamInfoConfigRequest
       * @return DescribeVsPullStreamInfoConfigResponse
       */
      Models::DescribeVsPullStreamInfoConfigResponse describeVsPullStreamInfoConfig(const Models::DescribeVsPullStreamInfoConfigRequest &request);

      /**
       * @param request DescribeVsStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsStreamsNotifyUrlConfigResponse
       */
      Models::DescribeVsStreamsNotifyUrlConfigResponse describeVsStreamsNotifyUrlConfigWithOptions(const Models::DescribeVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsStreamsNotifyUrlConfigRequest
       * @return DescribeVsStreamsNotifyUrlConfigResponse
       */
      Models::DescribeVsStreamsNotifyUrlConfigResponse describeVsStreamsNotifyUrlConfig(const Models::DescribeVsStreamsNotifyUrlConfigRequest &request);

      /**
       * @param request DescribeVsStreamsOnlineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsStreamsOnlineListResponse
       */
      Models::DescribeVsStreamsOnlineListResponse describeVsStreamsOnlineListWithOptions(const Models::DescribeVsStreamsOnlineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsStreamsOnlineListRequest
       * @return DescribeVsStreamsOnlineListResponse
       */
      Models::DescribeVsStreamsOnlineListResponse describeVsStreamsOnlineList(const Models::DescribeVsStreamsOnlineListRequest &request);

      /**
       * @param request DescribeVsStreamsPublishListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsStreamsPublishListResponse
       */
      Models::DescribeVsStreamsPublishListResponse describeVsStreamsPublishListWithOptions(const Models::DescribeVsStreamsPublishListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsStreamsPublishListRequest
       * @return DescribeVsStreamsPublishListResponse
       */
      Models::DescribeVsStreamsPublishListResponse describeVsStreamsPublishList(const Models::DescribeVsStreamsPublishListRequest &request);

      /**
       * @param request DescribeVsTopDomainsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsTopDomainsByFlowResponse
       */
      Models::DescribeVsTopDomainsByFlowResponse describeVsTopDomainsByFlowWithOptions(const Models::DescribeVsTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsTopDomainsByFlowRequest
       * @return DescribeVsTopDomainsByFlowResponse
       */
      Models::DescribeVsTopDomainsByFlowResponse describeVsTopDomainsByFlow(const Models::DescribeVsTopDomainsByFlowRequest &request);

      /**
       * @param request DescribeVsUpPeakPublishStreamDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsUpPeakPublishStreamDataResponse
       */
      Models::DescribeVsUpPeakPublishStreamDataResponse describeVsUpPeakPublishStreamDataWithOptions(const Models::DescribeVsUpPeakPublishStreamDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsUpPeakPublishStreamDataRequest
       * @return DescribeVsUpPeakPublishStreamDataResponse
       */
      Models::DescribeVsUpPeakPublishStreamDataResponse describeVsUpPeakPublishStreamData(const Models::DescribeVsUpPeakPublishStreamDataRequest &request);

      /**
       * @param request DescribeVsUserResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsUserResourcePackageResponse
       */
      Models::DescribeVsUserResourcePackageResponse describeVsUserResourcePackageWithOptions(const Models::DescribeVsUserResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsUserResourcePackageRequest
       * @return DescribeVsUserResourcePackageResponse
       */
      Models::DescribeVsUserResourcePackageResponse describeVsUserResourcePackage(const Models::DescribeVsUserResourcePackageRequest &request);

      /**
       * @param request DescribeVsVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsVerifyContentResponse
       */
      Models::DescribeVsVerifyContentResponse describeVsVerifyContentWithOptions(const Models::DescribeVsVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeVsVerifyContentRequest
       * @return DescribeVsVerifyContentResponse
       */
      Models::DescribeVsVerifyContentResponse describeVsVerifyContent(const Models::DescribeVsVerifyContentRequest &request);

      /**
       * @summary 云应用服务实例与项目解除关联
       *
       * @param tmpReq DisassociateRenderingProjectInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateRenderingProjectInstancesResponse
       */
      Models::DisassociateRenderingProjectInstancesResponse disassociateRenderingProjectInstancesWithOptions(const Models::DisassociateRenderingProjectInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 云应用服务实例与项目解除关联
       *
       * @param request DisassociateRenderingProjectInstancesRequest
       * @return DisassociateRenderingProjectInstancesResponse
       */
      Models::DisassociateRenderingProjectInstancesResponse disassociateRenderingProjectInstances(const Models::DisassociateRenderingProjectInstancesRequest &request);

      /**
       * @param request ForbidVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbidVsStreamResponse
       */
      Models::ForbidVsStreamResponse forbidVsStreamWithOptions(const Models::ForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ForbidVsStreamRequest
       * @return ForbidVsStreamResponse
       */
      Models::ForbidVsStreamResponse forbidVsStream(const Models::ForbidVsStreamRequest &request);

      /**
       * @summary 查询命令的执行状态与结果。
       *
       * @param request GetRenderingInstanceCommandsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenderingInstanceCommandsStatusResponse
       */
      Models::GetRenderingInstanceCommandsStatusResponse getRenderingInstanceCommandsStatusWithOptions(const Models::GetRenderingInstanceCommandsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询命令的执行状态与结果。
       *
       * @param request GetRenderingInstanceCommandsStatusRequest
       * @return GetRenderingInstanceCommandsStatusResponse
       */
      Models::GetRenderingInstanceCommandsStatusResponse getRenderingInstanceCommandsStatus(const Models::GetRenderingInstanceCommandsStatusRequest &request);

      /**
       * @summary 获取云渲染实例流连接信息，每次流化建联前都需要调用此接口获取最新连接信息
       *
       * @param request GetRenderingInstanceStreamingInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenderingInstanceStreamingInfoResponse
       */
      Models::GetRenderingInstanceStreamingInfoResponse getRenderingInstanceStreamingInfoWithOptions(const Models::GetRenderingInstanceStreamingInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云渲染实例流连接信息，每次流化建联前都需要调用此接口获取最新连接信息
       *
       * @param request GetRenderingInstanceStreamingInfoRequest
       * @return GetRenderingInstanceStreamingInfoResponse
       */
      Models::GetRenderingInstanceStreamingInfoResponse getRenderingInstanceStreamingInfo(const Models::GetRenderingInstanceStreamingInfoRequest &request);

      /**
       * @summary 输出满足特定条件的资源各状态数据量统计值。
       *
       * @param request GetRenderingProjectInstanceStateMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenderingProjectInstanceStateMetricsResponse
       */
      Models::GetRenderingProjectInstanceStateMetricsResponse getRenderingProjectInstanceStateMetricsWithOptions(const Models::GetRenderingProjectInstanceStateMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 输出满足特定条件的资源各状态数据量统计值。
       *
       * @param request GetRenderingProjectInstanceStateMetricsRequest
       * @return GetRenderingProjectInstanceStateMetricsResponse
       */
      Models::GetRenderingProjectInstanceStateMetricsResponse getRenderingProjectInstanceStateMetrics(const Models::GetRenderingProjectInstanceStateMetricsRequest &request);

      /**
       * @param request GotoPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GotoPresetResponse
       */
      Models::GotoPresetResponse gotoPresetWithOptions(const Models::GotoPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GotoPresetRequest
       * @return GotoPresetResponse
       */
      Models::GotoPresetResponse gotoPreset(const Models::GotoPresetRequest &request);

      /**
       * @summary 安装云应用
       *
       * @param tmpReq InstallCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudAppResponse
       */
      Models::InstallCloudAppResponse installCloudAppWithOptions(const Models::InstallCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 安装云应用
       *
       * @param request InstallCloudAppRequest
       * @return InstallCloudAppResponse
       */
      Models::InstallCloudAppResponse installCloudApp(const Models::InstallCloudAppRequest &request);

      /**
       * @summary 查询云应用安装信息列表
       *
       * @param request ListCloudAppInstallationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAppInstallationsResponse
       */
      Models::ListCloudAppInstallationsResponse listCloudAppInstallationsWithOptions(const Models::ListCloudAppInstallationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云应用安装信息列表
       *
       * @param request ListCloudAppInstallationsRequest
       * @return ListCloudAppInstallationsResponse
       */
      Models::ListCloudAppInstallationsResponse listCloudAppInstallations(const Models::ListCloudAppInstallationsRequest &request);

      /**
       * @summary 查询一个云应用的Patch列表。
       *
       * @param request ListCloudAppPatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAppPatchesResponse
       */
      Models::ListCloudAppPatchesResponse listCloudAppPatchesWithOptions(const Models::ListCloudAppPatchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个云应用的Patch列表。
       *
       * @param request ListCloudAppPatchesRequest
       * @return ListCloudAppPatchesResponse
       */
      Models::ListCloudAppPatchesResponse listCloudAppPatches(const Models::ListCloudAppPatchesRequest &request);

      /**
       * @summary 查询云应用列表
       *
       * @param request ListCloudAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAppsResponse
       */
      Models::ListCloudAppsResponse listCloudAppsWithOptions(const Models::ListCloudAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云应用列表
       *
       * @param request ListCloudAppsRequest
       * @return ListCloudAppsResponse
       */
      Models::ListCloudAppsResponse listCloudApps(const Models::ListCloudAppsRequest &request);

      /**
       * @summary 查询文件的实例推送状态信息列表。
       *
       * @param request ListFilePushStatusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilePushStatusesResponse
       */
      Models::ListFilePushStatusesResponse listFilePushStatusesWithOptions(const Models::ListFilePushStatusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询文件的实例推送状态信息列表。
       *
       * @param request ListFilePushStatusesRequest
       * @return ListFilePushStatusesResponse
       */
      Models::ListFilePushStatusesResponse listFilePushStatuses(const Models::ListFilePushStatusesRequest &request);

      /**
       * @summary 查询可用文件列表。
       *
       * @param request ListFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFilesWithOptions(const Models::ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询可用文件列表。
       *
       * @param request ListFilesRequest
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFiles(const Models::ListFilesRequest &request);

      /**
       * @summary 查询公钥信息
       *
       * @param request ListPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicKeysResponse
       */
      Models::ListPublicKeysResponse listPublicKeysWithOptions(const Models::ListPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询公钥信息
       *
       * @param request ListPublicKeysRequest
       * @return ListPublicKeysResponse
       */
      Models::ListPublicKeysResponse listPublicKeys(const Models::ListPublicKeysRequest &request);

      /**
       * @summary 查询所有云应用数据包信息，支持分页查询。
       *
       * @param request ListRenderingDataPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingDataPackagesResponse
       */
      Models::ListRenderingDataPackagesResponse listRenderingDataPackagesWithOptions(const Models::ListRenderingDataPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有云应用数据包信息，支持分页查询。
       *
       * @param request ListRenderingDataPackagesRequest
       * @return ListRenderingDataPackagesResponse
       */
      Models::ListRenderingDataPackagesResponse listRenderingDataPackages(const Models::ListRenderingDataPackagesRequest &request);

      /**
       * @summary 查询自定义网关
       *
       * @param request ListRenderingInstanceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingInstanceGatewayResponse
       */
      Models::ListRenderingInstanceGatewayResponse listRenderingInstanceGatewayWithOptions(const Models::ListRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询自定义网关
       *
       * @param request ListRenderingInstanceGatewayRequest
       * @return ListRenderingInstanceGatewayResponse
       */
      Models::ListRenderingInstanceGatewayResponse listRenderingInstanceGateway(const Models::ListRenderingInstanceGatewayRequest &request);

      /**
       * @summary 查询所有云渲染实例信息，支持分页查询。
       *
       * @param request ListRenderingInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingInstancesResponse
       */
      Models::ListRenderingInstancesResponse listRenderingInstancesWithOptions(const Models::ListRenderingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有云渲染实例信息，支持分页查询。
       *
       * @param request ListRenderingInstancesRequest
       * @return ListRenderingInstancesResponse
       */
      Models::ListRenderingInstancesResponse listRenderingInstances(const Models::ListRenderingInstancesRequest &request);

      /**
       * @summary 分页查询项目关联的云应用服务实例列表。
       *
       * @description ## 请求说明
       * - 该接口支持通过多种筛选条件（如状态、实例ID等）来查询指定项目下的云应用服务实例。
       *
       * @param request ListRenderingProjectInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingProjectInstancesResponse
       */
      Models::ListRenderingProjectInstancesResponse listRenderingProjectInstancesWithOptions(const Models::ListRenderingProjectInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询项目关联的云应用服务实例列表。
       *
       * @description ## 请求说明
       * - 该接口支持通过多种筛选条件（如状态、实例ID等）来查询指定项目下的云应用服务实例。
       *
       * @param request ListRenderingProjectInstancesRequest
       * @return ListRenderingProjectInstancesResponse
       */
      Models::ListRenderingProjectInstancesResponse listRenderingProjectInstances(const Models::ListRenderingProjectInstancesRequest &request);

      /**
       * @summary 分页查询用户下的云应用服务项目基本信息列表。
       *
       * @description ## 请求说明
       * - 该接口用于分页查询指定用户下的渲染项目基本信息列表。
       * - 可通过 `ProjectId` 和 `ProjectName` 进行过滤查询。
       *
       * @param request ListRenderingProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingProjectsResponse
       */
      Models::ListRenderingProjectsResponse listRenderingProjectsWithOptions(const Models::ListRenderingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询用户下的云应用服务项目基本信息列表。
       *
       * @description ## 请求说明
       * - 该接口用于分页查询指定用户下的渲染项目基本信息列表。
       * - 可通过 `ProjectId` 和 `ProjectName` 进行过滤查询。
       *
       * @param request ListRenderingProjectsRequest
       * @return ListRenderingProjectsResponse
       */
      Models::ListRenderingProjectsResponse listRenderingProjects(const Models::ListRenderingProjectsRequest &request);

      /**
       * @summary 分页查询指定条件下的渲染会话列表。
       *
       * @description ## 请求说明
       * - 该接口支持通过多种参数组合来过滤和分页查询用户的渲染会话列表。
       * - `SessionId` 和 `ClientId` 参数至少需要提供一个，但两者都不是必选的。如果同时提供了两个参数，则将根据这两个参数进行更精确的匹配。
       *
       * @param request ListRenderingSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingSessionsResponse
       */
      Models::ListRenderingSessionsResponse listRenderingSessionsWithOptions(const Models::ListRenderingSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询指定条件下的渲染会话列表。
       *
       * @description ## 请求说明
       * - 该接口支持通过多种参数组合来过滤和分页查询用户的渲染会话列表。
       * - `SessionId` 和 `ClientId` 参数至少需要提供一个，但两者都不是必选的。如果同时提供了两个参数，则将根据这两个参数进行更精确的匹配。
       *
       * @param request ListRenderingSessionsRequest
       * @return ListRenderingSessionsResponse
       */
      Models::ListRenderingSessionsResponse listRenderingSessions(const Models::ListRenderingSessionsRequest &request);

      /**
       * @summary 安全登陆管理
       *
       * @param request ManageLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageLoginResponse
       */
      Models::ManageLoginResponse manageLoginWithOptions(const Models::ManageLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 安全登陆管理
       *
       * @param request ManageLoginRequest
       * @return ManageLoginResponse
       */
      Models::ManageLoginResponse manageLogin(const Models::ManageLoginRequest &request);

      /**
       * @param request ModifyDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceResponse
       */
      Models::ModifyDeviceResponse modifyDeviceWithOptions(const Models::ModifyDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDeviceRequest
       * @return ModifyDeviceResponse
       */
      Models::ModifyDeviceResponse modifyDevice(const Models::ModifyDeviceRequest &request);

      /**
       * @param request ModifyDeviceAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceAlarmResponse
       */
      Models::ModifyDeviceAlarmResponse modifyDeviceAlarmWithOptions(const Models::ModifyDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDeviceAlarmRequest
       * @return ModifyDeviceAlarmResponse
       */
      Models::ModifyDeviceAlarmResponse modifyDeviceAlarm(const Models::ModifyDeviceAlarmRequest &request);

      /**
       * @param request ModifyDeviceCaptureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceCaptureResponse
       */
      Models::ModifyDeviceCaptureResponse modifyDeviceCaptureWithOptions(const Models::ModifyDeviceCaptureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDeviceCaptureRequest
       * @return ModifyDeviceCaptureResponse
       */
      Models::ModifyDeviceCaptureResponse modifyDeviceCapture(const Models::ModifyDeviceCaptureRequest &request);

      /**
       * @param request ModifyDeviceChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceChannelsResponse
       */
      Models::ModifyDeviceChannelsResponse modifyDeviceChannelsWithOptions(const Models::ModifyDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDeviceChannelsRequest
       * @return ModifyDeviceChannelsResponse
       */
      Models::ModifyDeviceChannelsResponse modifyDeviceChannels(const Models::ModifyDeviceChannelsRequest &request);

      /**
       * @param request ModifyDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDirectoryResponse
       */
      Models::ModifyDirectoryResponse modifyDirectoryWithOptions(const Models::ModifyDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyDirectoryRequest
       * @return ModifyDirectoryResponse
       */
      Models::ModifyDirectoryResponse modifyDirectory(const Models::ModifyDirectoryRequest &request);

      /**
       * @param request ModifyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroupWithOptions(const Models::ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyGroupRequest
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroup(const Models::ModifyGroupRequest &request);

      /**
       * @param request ModifyParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParentPlatformResponse
       */
      Models::ModifyParentPlatformResponse modifyParentPlatformWithOptions(const Models::ModifyParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyParentPlatformRequest
       * @return ModifyParentPlatformResponse
       */
      Models::ModifyParentPlatformResponse modifyParentPlatform(const Models::ModifyParentPlatformRequest &request);

      /**
       * @summary 变配云渲染资源实例付费类型
       *
       * @param request ModifyRenderingChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingChargeTypeResponse
       */
      Models::ModifyRenderingChargeTypeResponse modifyRenderingChargeTypeWithOptions(const Models::ModifyRenderingChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变配云渲染资源实例付费类型
       *
       * @param request ModifyRenderingChargeTypeRequest
       * @return ModifyRenderingChargeTypeResponse
       */
      Models::ModifyRenderingChargeTypeResponse modifyRenderingChargeType(const Models::ModifyRenderingChargeTypeRequest &request);

      /**
       * @summary 变配云渲染资源实例
       *
       * @param request ModifyRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingInstanceResponse
       */
      Models::ModifyRenderingInstanceResponse modifyRenderingInstanceWithOptions(const Models::ModifyRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变配云渲染资源实例
       *
       * @param request ModifyRenderingInstanceRequest
       * @return ModifyRenderingInstanceResponse
       */
      Models::ModifyRenderingInstanceResponse modifyRenderingInstance(const Models::ModifyRenderingInstanceRequest &request);

      /**
       * @summary 修改云应用服务实例密码
       *
       * @param request ModifyRenderingInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingInstanceAttributeResponse
       */
      Models::ModifyRenderingInstanceAttributeResponse modifyRenderingInstanceAttributeWithOptions(const Models::ModifyRenderingInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改云应用服务实例密码
       *
       * @param request ModifyRenderingInstanceAttributeRequest
       * @return ModifyRenderingInstanceAttributeResponse
       */
      Models::ModifyRenderingInstanceAttributeResponse modifyRenderingInstanceAttribute(const Models::ModifyRenderingInstanceAttributeRequest &request);

      /**
       * @summary 修改云渲染实例限速带宽
       *
       * @param request ModifyRenderingInstanceBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingInstanceBandwidthResponse
       */
      Models::ModifyRenderingInstanceBandwidthResponse modifyRenderingInstanceBandwidthWithOptions(const Models::ModifyRenderingInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改云渲染实例限速带宽
       *
       * @param request ModifyRenderingInstanceBandwidthRequest
       * @return ModifyRenderingInstanceBandwidthResponse
       */
      Models::ModifyRenderingInstanceBandwidthResponse modifyRenderingInstanceBandwidth(const Models::ModifyRenderingInstanceBandwidthRequest &request);

      /**
       * @param request ModifyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateResponse
       */
      Models::ModifyTemplateResponse modifyTemplateWithOptions(const Models::ModifyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyTemplateRequest
       * @return ModifyTemplateResponse
       */
      Models::ModifyTemplateResponse modifyTemplate(const Models::ModifyTemplateRequest &request);

      /**
       * @param request OpenVsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenVsServiceResponse
       */
      Models::OpenVsServiceResponse openVsServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return OpenVsServiceResponse
       */
      Models::OpenVsServiceResponse openVsService();

      /**
       * @summary 预推文件到云渲染实例。
       *
       * @param request PushFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushFileResponse
       */
      Models::PushFileResponse pushFileWithOptions(const Models::PushFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预推文件到云渲染实例。
       *
       * @param request PushFileRequest
       * @return PushFileResponse
       */
      Models::PushFileResponse pushFile(const Models::PushFileRequest &request);

      /**
       * @summary 重启云渲染实例
       *
       * @param request RebootRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRenderingInstanceResponse
       */
      Models::RebootRenderingInstanceResponse rebootRenderingInstanceWithOptions(const Models::RebootRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启云渲染实例
       *
       * @param request RebootRenderingInstanceRequest
       * @return RebootRenderingInstanceResponse
       */
      Models::RebootRenderingInstanceResponse rebootRenderingInstance(const Models::RebootRenderingInstanceRequest &request);

      /**
       * @summary 云应用服务实例主机重启
       *
       * @param tmpReq RebootRenderingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRenderingServerResponse
       */
      Models::RebootRenderingServerResponse rebootRenderingServerWithOptions(const Models::RebootRenderingServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 云应用服务实例主机重启
       *
       * @param request RebootRenderingServerRequest
       * @return RebootRenderingServerResponse
       */
      Models::RebootRenderingServerResponse rebootRenderingServer(const Models::RebootRenderingServerRequest &request);

      /**
       * @summary 恢复数据到云渲染实例
       *
       * @param request RecoverRenderingDataPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverRenderingDataPackageResponse
       */
      Models::RecoverRenderingDataPackageResponse recoverRenderingDataPackageWithOptions(const Models::RecoverRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复数据到云渲染实例
       *
       * @param request RecoverRenderingDataPackageRequest
       * @return RecoverRenderingDataPackageResponse
       */
      Models::RecoverRenderingDataPackageResponse recoverRenderingDataPackage(const Models::RecoverRenderingDataPackageRequest &request);

      /**
       * @summary 更新实例流连接信息
       *
       * @param tmpReq RefreshRenderingInstanceStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshRenderingInstanceStreamingResponse
       */
      Models::RefreshRenderingInstanceStreamingResponse refreshRenderingInstanceStreamingWithOptions(const Models::RefreshRenderingInstanceStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例流连接信息
       *
       * @param request RefreshRenderingInstanceStreamingRequest
       * @return RefreshRenderingInstanceStreamingResponse
       */
      Models::RefreshRenderingInstanceStreamingResponse refreshRenderingInstanceStreaming(const Models::RefreshRenderingInstanceStreamingRequest &request);

      /**
       * @summary 释放云渲染数据包
       *
       * @param request ReleaseRenderingDataPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseRenderingDataPackageResponse
       */
      Models::ReleaseRenderingDataPackageResponse releaseRenderingDataPackageWithOptions(const Models::ReleaseRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放云渲染数据包
       *
       * @param request ReleaseRenderingDataPackageRequest
       * @return ReleaseRenderingDataPackageResponse
       */
      Models::ReleaseRenderingDataPackageResponse releaseRenderingDataPackage(const Models::ReleaseRenderingDataPackageRequest &request);

      /**
       * @summary 释放云渲染实例
       *
       * @param request ReleaseRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseRenderingInstanceResponse
       */
      Models::ReleaseRenderingInstanceResponse releaseRenderingInstanceWithOptions(const Models::ReleaseRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放云渲染实例
       *
       * @param request ReleaseRenderingInstanceRequest
       * @return ReleaseRenderingInstanceResponse
       */
      Models::ReleaseRenderingInstanceResponse releaseRenderingInstance(const Models::ReleaseRenderingInstanceRequest &request);

      /**
       * @summary 续费云渲染资源实例
       *
       * @param request RenewRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewRenderingInstanceResponse
       */
      Models::RenewRenderingInstanceResponse renewRenderingInstanceWithOptions(const Models::RenewRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续费云渲染资源实例
       *
       * @param request RenewRenderingInstanceRequest
       * @return RenewRenderingInstanceResponse
       */
      Models::RenewRenderingInstanceResponse renewRenderingInstance(const Models::RenewRenderingInstanceRequest &request);

      /**
       * @summary 重置云渲染实例
       *
       * @param request ResetRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetRenderingInstanceResponse
       */
      Models::ResetRenderingInstanceResponse resetRenderingInstanceWithOptions(const Models::ResetRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置云渲染实例
       *
       * @param request ResetRenderingInstanceRequest
       * @return ResetRenderingInstanceResponse
       */
      Models::ResetRenderingInstanceResponse resetRenderingInstance(const Models::ResetRenderingInstanceRequest &request);

      /**
       * @param request ResumeVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeVsStreamResponse
       */
      Models::ResumeVsStreamResponse resumeVsStreamWithOptions(const Models::ResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ResumeVsStreamRequest
       * @return ResumeVsStreamResponse
       */
      Models::ResumeVsStreamResponse resumeVsStream(const Models::ResumeVsStreamRequest &request);

      /**
       * @summary 下发shell命令，支持同步/异步响应命令。
       *
       * @param request SendRenderingInstanceCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendRenderingInstanceCommandsResponse
       */
      Models::SendRenderingInstanceCommandsResponse sendRenderingInstanceCommandsWithOptions(const Models::SendRenderingInstanceCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下发shell命令，支持同步/异步响应命令。
       *
       * @param request SendRenderingInstanceCommandsRequest
       * @return SendRenderingInstanceCommandsResponse
       */
      Models::SendRenderingInstanceCommandsResponse sendRenderingInstanceCommands(const Models::SendRenderingInstanceCommandsRequest &request);

      /**
       * @param request SetPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPresetResponse
       */
      Models::SetPresetResponse setPresetWithOptions(const Models::SetPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetPresetRequest
       * @return SetPresetResponse
       */
      Models::SetPresetResponse setPreset(const Models::SetPresetRequest &request);

      /**
       * @param request SetVsDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVsDomainCertificateResponse
       */
      Models::SetVsDomainCertificateResponse setVsDomainCertificateWithOptions(const Models::SetVsDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetVsDomainCertificateRequest
       * @return SetVsDomainCertificateResponse
       */
      Models::SetVsDomainCertificateResponse setVsDomainCertificate(const Models::SetVsDomainCertificateRequest &request);

      /**
       * @param request SetVsStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVsStreamsNotifyUrlConfigResponse
       */
      Models::SetVsStreamsNotifyUrlConfigResponse setVsStreamsNotifyUrlConfigWithOptions(const Models::SetVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetVsStreamsNotifyUrlConfigRequest
       * @return SetVsStreamsNotifyUrlConfigResponse
       */
      Models::SetVsStreamsNotifyUrlConfigResponse setVsStreamsNotifyUrlConfig(const Models::SetVsStreamsNotifyUrlConfigRequest &request);

      /**
       * @param request StartDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDeviceResponse
       */
      Models::StartDeviceResponse startDeviceWithOptions(const Models::StartDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartDeviceRequest
       * @return StartDeviceResponse
       */
      Models::StartDeviceResponse startDevice(const Models::StartDeviceRequest &request);

      /**
       * @param request StartParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartParentPlatformResponse
       */
      Models::StartParentPlatformResponse startParentPlatformWithOptions(const Models::StartParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartParentPlatformRequest
       * @return StartParentPlatformResponse
       */
      Models::StartParentPlatformResponse startParentPlatform(const Models::StartParentPlatformRequest &request);

      /**
       * @param request StartPublishStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartPublishStreamResponse
       */
      Models::StartPublishStreamResponse startPublishStreamWithOptions(const Models::StartPublishStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartPublishStreamRequest
       * @return StartPublishStreamResponse
       */
      Models::StartPublishStreamResponse startPublishStream(const Models::StartPublishStreamRequest &request);

      /**
       * @param request StartRecordStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRecordStreamResponse
       */
      Models::StartRecordStreamResponse startRecordStreamWithOptions(const Models::StartRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartRecordStreamRequest
       * @return StartRecordStreamResponse
       */
      Models::StartRecordStreamResponse startRecordStream(const Models::StartRecordStreamRequest &request);

      /**
       * @summary 调度一个空闲云应用服务实例，并完成服务启动。
       *
       * @param tmpReq StartRenderingSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRenderingSessionResponse
       */
      Models::StartRenderingSessionResponse startRenderingSessionWithOptions(const Models::StartRenderingSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调度一个空闲云应用服务实例，并完成服务启动。
       *
       * @param request StartRenderingSessionRequest
       * @return StartRenderingSessionResponse
       */
      Models::StartRenderingSessionResponse startRenderingSession(const Models::StartRenderingSessionRequest &request);

      /**
       * @param request StartStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartStreamResponse
       */
      Models::StartStreamResponse startStreamWithOptions(const Models::StartStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartStreamRequest
       * @return StartStreamResponse
       */
      Models::StartStreamResponse startStream(const Models::StartStreamRequest &request);

      /**
       * @param request StartTransferStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTransferStreamResponse
       */
      Models::StartTransferStreamResponse startTransferStreamWithOptions(const Models::StartTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StartTransferStreamRequest
       * @return StartTransferStreamResponse
       */
      Models::StartTransferStreamResponse startTransferStream(const Models::StartTransferStreamRequest &request);

      /**
       * @param request StopAdjustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAdjustResponse
       */
      Models::StopAdjustResponse stopAdjustWithOptions(const Models::StopAdjustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopAdjustRequest
       * @return StopAdjustResponse
       */
      Models::StopAdjustResponse stopAdjust(const Models::StopAdjustRequest &request);

      /**
       * @param request StopDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDeviceResponse
       */
      Models::StopDeviceResponse stopDeviceWithOptions(const Models::StopDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopDeviceRequest
       * @return StopDeviceResponse
       */
      Models::StopDeviceResponse stopDevice(const Models::StopDeviceRequest &request);

      /**
       * @param request StopMoveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMoveResponse
       */
      Models::StopMoveResponse stopMoveWithOptions(const Models::StopMoveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopMoveRequest
       * @return StopMoveResponse
       */
      Models::StopMoveResponse stopMove(const Models::StopMoveRequest &request);

      /**
       * @param request StopPublishStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopPublishStreamResponse
       */
      Models::StopPublishStreamResponse stopPublishStreamWithOptions(const Models::StopPublishStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopPublishStreamRequest
       * @return StopPublishStreamResponse
       */
      Models::StopPublishStreamResponse stopPublishStream(const Models::StopPublishStreamRequest &request);

      /**
       * @param request StopRecordStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRecordStreamResponse
       */
      Models::StopRecordStreamResponse stopRecordStreamWithOptions(const Models::StopRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopRecordStreamRequest
       * @return StopRecordStreamResponse
       */
      Models::StopRecordStreamResponse stopRecordStream(const Models::StopRecordStreamRequest &request);

      /**
       * @summary 关闭指定的云应用服务会话并回收相关实例资源。
       *
       * @description ## 请求说明
       *
       * @param request StopRenderingSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRenderingSessionResponse
       */
      Models::StopRenderingSessionResponse stopRenderingSessionWithOptions(const Models::StopRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭指定的云应用服务会话并回收相关实例资源。
       *
       * @description ## 请求说明
       *
       * @param request StopRenderingSessionRequest
       * @return StopRenderingSessionResponse
       */
      Models::StopRenderingSessionResponse stopRenderingSession(const Models::StopRenderingSessionRequest &request);

      /**
       * @param request StopStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopStreamResponse
       */
      Models::StopStreamResponse stopStreamWithOptions(const Models::StopStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopStreamRequest
       * @return StopStreamResponse
       */
      Models::StopStreamResponse stopStream(const Models::StopStreamRequest &request);

      /**
       * @param request StopTransferStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTransferStreamResponse
       */
      Models::StopTransferStreamResponse stopTransferStreamWithOptions(const Models::StopTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request StopTransferStreamRequest
       * @return StopTransferStreamResponse
       */
      Models::StopTransferStreamResponse stopTransferStream(const Models::StopTransferStreamRequest &request);

      /**
       * @param request SyncCatalogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncCatalogsResponse
       */
      Models::SyncCatalogsResponse syncCatalogsWithOptions(const Models::SyncCatalogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SyncCatalogsRequest
       * @return SyncCatalogsResponse
       */
      Models::SyncCatalogsResponse syncCatalogs(const Models::SyncCatalogsRequest &request);

      /**
       * @param request UnbindDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDirectoryResponse
       */
      Models::UnbindDirectoryResponse unbindDirectoryWithOptions(const Models::UnbindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnbindDirectoryRequest
       * @return UnbindDirectoryResponse
       */
      Models::UnbindDirectoryResponse unbindDirectory(const Models::UnbindDirectoryRequest &request);

      /**
       * @param request UnbindParentPlatformDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindParentPlatformDeviceResponse
       */
      Models::UnbindParentPlatformDeviceResponse unbindParentPlatformDeviceWithOptions(const Models::UnbindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnbindParentPlatformDeviceRequest
       * @return UnbindParentPlatformDeviceResponse
       */
      Models::UnbindParentPlatformDeviceResponse unbindParentPlatformDevice(const Models::UnbindParentPlatformDeviceRequest &request);

      /**
       * @param request UnbindPurchasedDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPurchasedDeviceResponse
       */
      Models::UnbindPurchasedDeviceResponse unbindPurchasedDeviceWithOptions(const Models::UnbindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnbindPurchasedDeviceRequest
       * @return UnbindPurchasedDeviceResponse
       */
      Models::UnbindPurchasedDeviceResponse unbindPurchasedDevice(const Models::UnbindPurchasedDeviceRequest &request);

      /**
       * @param request UnbindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindTemplateResponse
       */
      Models::UnbindTemplateResponse unbindTemplateWithOptions(const Models::UnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnbindTemplateRequest
       * @return UnbindTemplateResponse
       */
      Models::UnbindTemplateResponse unbindTemplate(const Models::UnbindTemplateRequest &request);

      /**
       * @summary 卸载云应用
       *
       * @param tmpReq UninstallCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallCloudAppResponse
       */
      Models::UninstallCloudAppResponse uninstallCloudAppWithOptions(const Models::UninstallCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 卸载云应用
       *
       * @param request UninstallCloudAppRequest
       * @return UninstallCloudAppResponse
       */
      Models::UninstallCloudAppResponse uninstallCloudApp(const Models::UninstallCloudAppRequest &request);

      /**
       * @param request UnlockDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockDeviceResponse
       */
      Models::UnlockDeviceResponse unlockDeviceWithOptions(const Models::UnlockDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UnlockDeviceRequest
       * @return UnlockDeviceResponse
       */
      Models::UnlockDeviceResponse unlockDevice(const Models::UnlockDeviceRequest &request);

      /**
       * @summary 更新云应用信息
       *
       * @param tmpReq UpdateCloudAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAppInfoResponse
       */
      Models::UpdateCloudAppInfoResponse updateCloudAppInfoWithOptions(const Models::UpdateCloudAppInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新云应用信息
       *
       * @param request UpdateCloudAppInfoRequest
       * @return UpdateCloudAppInfoResponse
       */
      Models::UpdateCloudAppInfoResponse updateCloudAppInfo(const Models::UpdateCloudAppInfoRequest &request);

      /**
       * @summary 更新文件信息。
       *
       * @param request UpdateFileInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileInfoResponse
       */
      Models::UpdateFileInfoResponse updateFileInfoWithOptions(const Models::UpdateFileInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新文件信息。
       *
       * @param request UpdateFileInfoRequest
       * @return UpdateFileInfoResponse
       */
      Models::UpdateFileInfoResponse updateFileInfo(const Models::UpdateFileInfoRequest &request);

      /**
       * @summary 更新云渲染实例配置参数
       *
       * @param tmpReq UpdateRenderingInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRenderingInstanceConfigurationResponse
       */
      Models::UpdateRenderingInstanceConfigurationResponse updateRenderingInstanceConfigurationWithOptions(const Models::UpdateRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新云渲染实例配置参数
       *
       * @param request UpdateRenderingInstanceConfigurationRequest
       * @return UpdateRenderingInstanceConfigurationResponse
       */
      Models::UpdateRenderingInstanceConfigurationResponse updateRenderingInstanceConfiguration(const Models::UpdateRenderingInstanceConfigurationRequest &request);

      /**
       * @summary 更新实例设置
       *
       * @param tmpReq UpdateRenderingInstanceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRenderingInstanceSettingsResponse
       */
      Models::UpdateRenderingInstanceSettingsResponse updateRenderingInstanceSettingsWithOptions(const Models::UpdateRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例设置
       *
       * @param request UpdateRenderingInstanceSettingsRequest
       * @return UpdateRenderingInstanceSettingsResponse
       */
      Models::UpdateRenderingInstanceSettingsResponse updateRenderingInstanceSettings(const Models::UpdateRenderingInstanceSettingsRequest &request);

      /**
       * @summary 更新一个项目的属性信息
       *
       * @param tmpReq UpdateRenderingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRenderingProjectResponse
       */
      Models::UpdateRenderingProjectResponse updateRenderingProjectWithOptions(const Models::UpdateRenderingProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个项目的属性信息
       *
       * @param request UpdateRenderingProjectRequest
       * @return UpdateRenderingProjectResponse
       */
      Models::UpdateRenderingProjectResponse updateRenderingProject(const Models::UpdateRenderingProjectRequest &request);

      /**
       * @param request UpdateVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVsPullStreamInfoConfigResponse
       */
      Models::UpdateVsPullStreamInfoConfigResponse updateVsPullStreamInfoConfigWithOptions(const Models::UpdateVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateVsPullStreamInfoConfigRequest
       * @return UpdateVsPullStreamInfoConfigResponse
       */
      Models::UpdateVsPullStreamInfoConfigResponse updateVsPullStreamInfoConfig(const Models::UpdateVsPullStreamInfoConfigRequest &request);

      /**
       * @summary 应用上架
       *
       * @param tmpReq UploadCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadCloudAppResponse
       */
      Models::UploadCloudAppResponse uploadCloudAppWithOptions(const Models::UploadCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 应用上架
       *
       * @param request UploadCloudAppRequest
       * @return UploadCloudAppResponse
       */
      Models::UploadCloudAppResponse uploadCloudApp(const Models::UploadCloudAppRequest &request);

      /**
       * @summary 文件上传
       *
       * @param request UploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFileWithOptions(const Models::UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文件上传
       *
       * @param request UploadFileRequest
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFile(const Models::UploadFileRequest &request);

      /**
       * @summary 上传公钥，用于安全登陆鉴权。
       *
       * @param request UploadPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadPublicKeyResponse
       */
      Models::UploadPublicKeyResponse uploadPublicKeyWithOptions(const Models::UploadPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传公钥，用于安全登陆鉴权。
       *
       * @param request UploadPublicKeyRequest
       * @return UploadPublicKeyResponse
       */
      Models::UploadPublicKeyResponse uploadPublicKey(const Models::UploadPublicKeyRequest &request);

      /**
       * @param request VerifyVsDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyVsDomainOwnerResponse
       */
      Models::VerifyVsDomainOwnerResponse verifyVsDomainOwnerWithOptions(const Models::VerifyVsDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request VerifyVsDomainOwnerRequest
       * @return VerifyVsDomainOwnerResponse
       */
      Models::VerifyVsDomainOwnerResponse verifyVsDomainOwner(const Models::VerifyVsDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
