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
       * @summary Adds one or more instances to a specified cluster.
       *
       * @description ## Usage notes
       * - **HiveId** is a required parameter that specifies the ID of the target cluster.
       * - **InstanceIds** is a required parameter that specifies a list of instance IDs to add.
       * - Adding an instance that already exists in the target cluster returns an error message.
       * - The response includes lists of successful and failed instances. This allows you to verify which instances were added and review the reasons for any failures.
       *
       * @param tmpReq AddHiveEdgeWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddHiveEdgeWorkersResponse
       */
      Models::AddHiveEdgeWorkersResponse addHiveEdgeWorkersWithOptions(const Models::AddHiveEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more instances to a specified cluster.
       *
       * @description ## Usage notes
       * - **HiveId** is a required parameter that specifies the ID of the target cluster.
       * - **InstanceIds** is a required parameter that specifies a list of instance IDs to add.
       * - Adding an instance that already exists in the target cluster returns an error message.
       * - The response includes lists of successful and failed instances. This allows you to verify which instances were added and review the reasons for any failures.
       *
       * @param request AddHiveEdgeWorkersRequest
       * @return AddHiveEdgeWorkersResponse
       */
      Models::AddHiveEdgeWorkersResponse addHiveEdgeWorkers(const Models::AddHiveEdgeWorkersRequest &request);

      /**
       * @summary Adds a stream pulling configuration.
       *
       * @param request AddVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVsPullStreamInfoConfigResponse
       */
      Models::AddVsPullStreamInfoConfigResponse addVsPullStreamInfoConfigWithOptions(const Models::AddVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a stream pulling configuration.
       *
       * @param request AddVsPullStreamInfoConfigRequest
       * @return AddVsPullStreamInfoConfigResponse
       */
      Models::AddVsPullStreamInfoConfigResponse addVsPullStreamInfoConfig(const Models::AddVsPullStreamInfoConfigRequest &request);

      /**
       * @summary Associates cloud application service instances with a project.
       *
       * @description ## Request description
       * - This operation associates instances that meet specific conditions with a specified project.
       *
       * @param tmpReq AssociateRenderingProjectInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateRenderingProjectInstancesResponse
       */
      Models::AssociateRenderingProjectInstancesResponse associateRenderingProjectInstancesWithOptions(const Models::AssociateRenderingProjectInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates cloud application service instances with a project.
       *
       * @description ## Request description
       * - This operation associates instances that meet specific conditions with a specified project.
       *
       * @param request AssociateRenderingProjectInstancesRequest
       * @return AssociateRenderingProjectInstancesResponse
       */
      Models::AssociateRenderingProjectInstancesResponse associateRenderingProjectInstances(const Models::AssociateRenderingProjectInstancesRequest &request);

      /**
       * @summary Binds multiple devices to directories in a single operation.
       *
       * @param request BatchBindDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindDirectoriesResponse
       */
      Models::BatchBindDirectoriesResponse batchBindDirectoriesWithOptions(const Models::BatchBindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds multiple devices to directories in a single operation.
       *
       * @param request BatchBindDirectoriesRequest
       * @return BatchBindDirectoriesResponse
       */
      Models::BatchBindDirectoriesResponse batchBindDirectories(const Models::BatchBindDirectoriesRequest &request);

      /**
       * @summary Binds multiple devices to a parent platform for push in batches.
       *
       * @param request BatchBindParentPlatformDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindParentPlatformDevicesResponse
       */
      Models::BatchBindParentPlatformDevicesResponse batchBindParentPlatformDevicesWithOptions(const Models::BatchBindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds multiple devices to a parent platform for push in batches.
       *
       * @param request BatchBindParentPlatformDevicesRequest
       * @return BatchBindParentPlatformDevicesResponse
       */
      Models::BatchBindParentPlatformDevicesResponse batchBindParentPlatformDevices(const Models::BatchBindParentPlatformDevicesRequest &request);

      /**
       * @summary Binds multiple purchased devices.
       *
       * @param request BatchBindPurchasedDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindPurchasedDevicesResponse
       */
      Models::BatchBindPurchasedDevicesResponse batchBindPurchasedDevicesWithOptions(const Models::BatchBindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds multiple purchased devices.
       *
       * @param request BatchBindPurchasedDevicesRequest
       * @return BatchBindPurchasedDevicesResponse
       */
      Models::BatchBindPurchasedDevicesResponse batchBindPurchasedDevices(const Models::BatchBindPurchasedDevicesRequest &request);

      /**
       * @summary Bind templates to multiple specified instances, such as instances bound to spaces and streams.
       *
       * @param request BatchBindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindTemplateResponse
       */
      Models::BatchBindTemplateResponse batchBindTemplateWithOptions(const Models::BatchBindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Bind templates to multiple specified instances, such as instances bound to spaces and streams.
       *
       * @param request BatchBindTemplateRequest
       * @return BatchBindTemplateResponse
       */
      Models::BatchBindTemplateResponse batchBindTemplate(const Models::BatchBindTemplateRequest &request);

      /**
       * @summary Binds multiple templates in a single operation.
       *
       * @param request BatchBindTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchBindTemplatesResponse
       */
      Models::BatchBindTemplatesResponse batchBindTemplatesWithOptions(const Models::BatchBindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds multiple templates in a single operation.
       *
       * @param request BatchBindTemplatesRequest
       * @return BatchBindTemplatesResponse
       */
      Models::BatchBindTemplatesResponse batchBindTemplates(const Models::BatchBindTemplatesRequest &request);

      /**
       * @summary Retrieves screenshots of cloud application service instances.
       *
       * @description ## Request description
       * - **Authentication**: Requests must include the `AliUid` parameter for identity verification.
       * - **Instance specification**: Use `RenderingInstanceIds` to specify the instances to capture screenshots from.
       * - **Screenshot quality**: Use the `Quality` parameter to set the image quality of screenshots. The default value is 75 (if not configured). Valid values: 1 to 100.
       * - **Response handling**: The response contains lists of successful and failed instances with related information, including download URLs and screenshot completion times.
       *
       * @param tmpReq BatchCaptureRenderingInstanceScreenshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCaptureRenderingInstanceScreenshotResponse
       */
      Models::BatchCaptureRenderingInstanceScreenshotResponse batchCaptureRenderingInstanceScreenshotWithOptions(const Models::BatchCaptureRenderingInstanceScreenshotRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves screenshots of cloud application service instances.
       *
       * @description ## Request description
       * - **Authentication**: Requests must include the `AliUid` parameter for identity verification.
       * - **Instance specification**: Use `RenderingInstanceIds` to specify the instances to capture screenshots from.
       * - **Screenshot quality**: Use the `Quality` parameter to set the image quality of screenshots. The default value is 75 (if not configured). Valid values: 1 to 100.
       * - **Response handling**: The response contains lists of successful and failed instances with related information, including download URLs and screenshot completion times.
       *
       * @param request BatchCaptureRenderingInstanceScreenshotRequest
       * @return BatchCaptureRenderingInstanceScreenshotResponse
       */
      Models::BatchCaptureRenderingInstanceScreenshotResponse batchCaptureRenderingInstanceScreenshot(const Models::BatchCaptureRenderingInstanceScreenshotRequest &request);

      /**
       * @summary Deletes multiple devices in a single operation.
       *
       * @param request BatchDeleteDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDevicesResponse
       */
      Models::BatchDeleteDevicesResponse batchDeleteDevicesWithOptions(const Models::BatchDeleteDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple devices in a single operation.
       *
       * @param request BatchDeleteDevicesRequest
       * @return BatchDeleteDevicesResponse
       */
      Models::BatchDeleteDevicesResponse batchDeleteDevices(const Models::BatchDeleteDevicesRequest &request);

      /**
       * @summary Deletes domain name configurations in a batch.
       *
       * @param request BatchDeleteVsDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteVsDomainConfigsResponse
       */
      Models::BatchDeleteVsDomainConfigsResponse batchDeleteVsDomainConfigsWithOptions(const Models::BatchDeleteVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes domain name configurations in a batch.
       *
       * @param request BatchDeleteVsDomainConfigsRequest
       * @return BatchDeleteVsDomainConfigsResponse
       */
      Models::BatchDeleteVsDomainConfigsResponse batchDeleteVsDomainConfigs(const Models::BatchDeleteVsDomainConfigsRequest &request);

      /**
       * @summary Stop stream ingest for one or more streams. You can schedule when to resume ingest.
       *
       * @param request BatchForbidVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchForbidVsStreamResponse
       */
      Models::BatchForbidVsStreamResponse batchForbidVsStreamWithOptions(const Models::BatchForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop stream ingest for one or more streams. You can schedule when to resume ingest.
       *
       * @param request BatchForbidVsStreamRequest
       * @return BatchForbidVsStreamResponse
       */
      Models::BatchForbidVsStreamResponse batchForbidVsStream(const Models::BatchForbidVsStreamRequest &request);

      /**
       * @summary Resumes stream ingest for one or more streams.
       *
       * @param request BatchResumeVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchResumeVsStreamResponse
       */
      Models::BatchResumeVsStreamResponse batchResumeVsStreamWithOptions(const Models::BatchResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes stream ingest for one or more streams.
       *
       * @param request BatchResumeVsStreamRequest
       * @return BatchResumeVsStreamResponse
       */
      Models::BatchResumeVsStreamResponse batchResumeVsStream(const Models::BatchResumeVsStreamRequest &request);

      /**
       * @summary Configure multiple domain names in batch.
       *
       * @param request BatchSetVsDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetVsDomainConfigsResponse
       */
      Models::BatchSetVsDomainConfigsResponse batchSetVsDomainConfigsWithOptions(const Models::BatchSetVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure multiple domain names in batch.
       *
       * @param request BatchSetVsDomainConfigsRequest
       * @return BatchSetVsDomainConfigsResponse
       */
      Models::BatchSetVsDomainConfigsResponse batchSetVsDomainConfigs(const Models::BatchSetVsDomainConfigsRequest &request);

      /**
       * @summary Start stream pulling for multiple devices at once.
       *
       * @param request BatchStartDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartDevicesResponse
       */
      Models::BatchStartDevicesResponse batchStartDevicesWithOptions(const Models::BatchStartDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start stream pulling for multiple devices at once.
       *
       * @param request BatchStartDevicesRequest
       * @return BatchStartDevicesResponse
       */
      Models::BatchStartDevicesResponse batchStartDevices(const Models::BatchStartDevicesRequest &request);

      /**
       * @summary Starts multiple streams.
       *
       * @param request BatchStartStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartStreamsResponse
       */
      Models::BatchStartStreamsResponse batchStartStreamsWithOptions(const Models::BatchStartStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts multiple streams.
       *
       * @param request BatchStartStreamsRequest
       * @return BatchStartStreamsResponse
       */
      Models::BatchStartStreamsResponse batchStartStreams(const Models::BatchStartStreamsRequest &request);

      /**
       * @summary Stops stream pulling for multiple devices.
       *
       * @param request BatchStopDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopDevicesResponse
       */
      Models::BatchStopDevicesResponse batchStopDevicesWithOptions(const Models::BatchStopDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops stream pulling for multiple devices.
       *
       * @param request BatchStopDevicesRequest
       * @return BatchStopDevicesResponse
       */
      Models::BatchStopDevicesResponse batchStopDevices(const Models::BatchStopDevicesRequest &request);

      /**
       * @summary Stops multiple streams in a batch.
       *
       * @param request BatchStopStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopStreamsResponse
       */
      Models::BatchStopStreamsResponse batchStopStreamsWithOptions(const Models::BatchStopStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops multiple streams in a batch.
       *
       * @param request BatchStopStreamsRequest
       * @return BatchStopStreamsResponse
       */
      Models::BatchStopStreamsResponse batchStopStreams(const Models::BatchStopStreamsRequest &request);

      /**
       * @summary Detaches multiple devices from a folder in bulk.
       *
       * @param request BatchUnbindDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindDirectoriesResponse
       */
      Models::BatchUnbindDirectoriesResponse batchUnbindDirectoriesWithOptions(const Models::BatchUnbindDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches multiple devices from a folder in bulk.
       *
       * @param request BatchUnbindDirectoriesRequest
       * @return BatchUnbindDirectoriesResponse
       */
      Models::BatchUnbindDirectoriesResponse batchUnbindDirectories(const Models::BatchUnbindDirectoriesRequest &request);

      /**
       * @summary Batch unbind multiple devices from parent platform push.
       *
       * @param request BatchUnbindParentPlatformDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindParentPlatformDevicesResponse
       */
      Models::BatchUnbindParentPlatformDevicesResponse batchUnbindParentPlatformDevicesWithOptions(const Models::BatchUnbindParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch unbind multiple devices from parent platform push.
       *
       * @param request BatchUnbindParentPlatformDevicesRequest
       * @return BatchUnbindParentPlatformDevicesResponse
       */
      Models::BatchUnbindParentPlatformDevicesResponse batchUnbindParentPlatformDevices(const Models::BatchUnbindParentPlatformDevicesRequest &request);

      /**
       * @summary Detach multiple purchased devices from a space in a single operation.
       *
       * @param request BatchUnbindPurchasedDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindPurchasedDevicesResponse
       */
      Models::BatchUnbindPurchasedDevicesResponse batchUnbindPurchasedDevicesWithOptions(const Models::BatchUnbindPurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach multiple purchased devices from a space in a single operation.
       *
       * @param request BatchUnbindPurchasedDevicesRequest
       * @return BatchUnbindPurchasedDevicesResponse
       */
      Models::BatchUnbindPurchasedDevicesResponse batchUnbindPurchasedDevices(const Models::BatchUnbindPurchasedDevicesRequest &request);

      /**
       * @summary Detach a template from multiple specified instances, such as space instances or stream instances.
       *
       * @description > Specify at least one of TemplateId or TemplateType.
       *
       * @param request BatchUnbindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindTemplateResponse
       */
      Models::BatchUnbindTemplateResponse batchUnbindTemplateWithOptions(const Models::BatchUnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach a template from multiple specified instances, such as space instances or stream instances.
       *
       * @description > Specify at least one of TemplateId or TemplateType.
       *
       * @param request BatchUnbindTemplateRequest
       * @return BatchUnbindTemplateResponse
       */
      Models::BatchUnbindTemplateResponse batchUnbindTemplate(const Models::BatchUnbindTemplateRequest &request);

      /**
       * @summary Unbind multiple templates simultaneously.
       *
       * @param request BatchUnbindTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUnbindTemplatesResponse
       */
      Models::BatchUnbindTemplatesResponse batchUnbindTemplatesWithOptions(const Models::BatchUnbindTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind multiple templates simultaneously.
       *
       * @param request BatchUnbindTemplatesRequest
       * @return BatchUnbindTemplatesResponse
       */
      Models::BatchUnbindTemplatesResponse batchUnbindTemplates(const Models::BatchUnbindTemplatesRequest &request);

      /**
       * @summary Attach a device to a folder.
       *
       * @param request BindDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindDirectoryResponse
       */
      Models::BindDirectoryResponse bindDirectoryWithOptions(const Models::BindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attach a device to a folder.
       *
       * @param request BindDirectoryRequest
       * @return BindDirectoryResponse
       */
      Models::BindDirectoryResponse bindDirectory(const Models::BindDirectoryRequest &request);

      /**
       * @summary Binds a device to push streams to a parent platform.
       *
       * @param request BindParentPlatformDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindParentPlatformDeviceResponse
       */
      Models::BindParentPlatformDeviceResponse bindParentPlatformDeviceWithOptions(const Models::BindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a device to push streams to a parent platform.
       *
       * @param request BindParentPlatformDeviceRequest
       * @return BindParentPlatformDeviceResponse
       */
      Models::BindParentPlatformDeviceResponse bindParentPlatformDevice(const Models::BindParentPlatformDeviceRequest &request);

      /**
       * @summary Attach purchased devices to a space.
       *
       * @param request BindPurchasedDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPurchasedDeviceResponse
       */
      Models::BindPurchasedDeviceResponse bindPurchasedDeviceWithOptions(const Models::BindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attach purchased devices to a space.
       *
       * @param request BindPurchasedDeviceRequest
       * @return BindPurchasedDeviceResponse
       */
      Models::BindPurchasedDeviceResponse bindPurchasedDevice(const Models::BindPurchasedDeviceRequest &request);

      /**
       * @summary Binds a template to a specified instance, such as a group or stream.
       *
       * @param request BindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindTemplateResponse
       */
      Models::BindTemplateResponse bindTemplateWithOptions(const Models::BindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a template to a specified instance, such as a group or stream.
       *
       * @param request BindTemplateRequest
       * @return BindTemplateResponse
       */
      Models::BindTemplateResponse bindTemplate(const Models::BindTemplateRequest &request);

      /**
       * @summary Cancels a Comfy task.
       *
       * @description > Stop the parent platform before canceling the task.
       *
       * @param request CancelComfyTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelComfyTaskResponse
       */
      Models::CancelComfyTaskResponse cancelComfyTaskWithOptions(const Models::CancelComfyTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a Comfy task.
       *
       * @description > Stop the parent platform before canceling the task.
       *
       * @param request CancelComfyTaskRequest
       * @return CancelComfyTaskResponse
       */
      Models::CancelComfyTaskResponse cancelComfyTask(const Models::CancelComfyTaskRequest &request);

      /**
       * @summary Continuously adjust lens parameters such as aperture and zoom.
       *
       * @param request ContinuousAdjustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuousAdjustResponse
       */
      Models::ContinuousAdjustResponse continuousAdjustWithOptions(const Models::ContinuousAdjustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Continuously adjust lens parameters such as aperture and zoom.
       *
       * @param request ContinuousAdjustRequest
       * @return ContinuousAdjustResponse
       */
      Models::ContinuousAdjustResponse continuousAdjust(const Models::ContinuousAdjustRequest &request);

      /**
       * @summary Rotate the camera continuously by panning, tilting, or zooming.
       *
       * @param request ContinuousMoveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ContinuousMoveResponse
       */
      Models::ContinuousMoveResponse continuousMoveWithOptions(const Models::ContinuousMoveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rotate the camera continuously by panning, tilting, or zooming.
       *
       * @param request ContinuousMoveRequest
       * @return ContinuousMoveResponse
       */
      Models::ContinuousMoveResponse continuousMove(const Models::ContinuousMoveRequest &request);

      /**
       * @summary Starts a Comfy task.
       *
       * @description > You must first enable the on-demand screenshot feature in the associated screenshot template.
       *
       * @param request CreateComfyTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComfyTaskResponse
       */
      Models::CreateComfyTaskResponse createComfyTaskWithOptions(const Models::CreateComfyTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Comfy task.
       *
       * @description > You must first enable the on-demand screenshot feature in the associated screenshot template.
       *
       * @param request CreateComfyTaskRequest
       * @return CreateComfyTaskResponse
       */
      Models::CreateComfyTaskResponse createComfyTask(const Models::CreateComfyTaskRequest &request);

      /**
       * @summary Creates a directory for user data.
       *
       * @description > You must specify either a template ID or a template type.
       *
       * @param request CreateComfyUserDataDirRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComfyUserDataDirResponse
       */
      Models::CreateComfyUserDataDirResponse createComfyUserDataDirWithOptions(const Models::CreateComfyUserDataDirRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory for user data.
       *
       * @description > You must specify either a template ID or a template type.
       *
       * @param request CreateComfyUserDataDirRequest
       * @return CreateComfyUserDataDirResponse
       */
      Models::CreateComfyUserDataDirResponse createComfyUserDataDir(const Models::CreateComfyUserDataDirRequest &request);

      /**
       * @summary Creates a Comfy workflow.
       *
       * @description > You must enable the on-demand screenshot feature in the associated screenshot template before calling this operation.
       *
       * @param request CreateComfyWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateComfyWorkflowResponse
       */
      Models::CreateComfyWorkflowResponse createComfyWorkflowWithOptions(const Models::CreateComfyWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Comfy workflow.
       *
       * @description > You must enable the on-demand screenshot feature in the associated screenshot template before calling this operation.
       *
       * @param request CreateComfyWorkflowRequest
       * @return CreateComfyWorkflowResponse
       */
      Models::CreateComfyWorkflowResponse createComfyWorkflow(const Models::CreateComfyWorkflowRequest &request);

      /**
       * @summary Add a new device.
       *
       * @param request CreateDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeviceResponse
       */
      Models::CreateDeviceResponse createDeviceWithOptions(const Models::CreateDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a new device.
       *
       * @param request CreateDeviceRequest
       * @return CreateDeviceResponse
       */
      Models::CreateDeviceResponse createDevice(const Models::CreateDeviceRequest &request);

      /**
       * @summary Reports a device alert.
       *
       * @param request CreateDeviceAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeviceAlarmResponse
       */
      Models::CreateDeviceAlarmResponse createDeviceAlarmWithOptions(const Models::CreateDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports a device alert.
       *
       * @param request CreateDeviceAlarmRequest
       * @return CreateDeviceAlarmResponse
       */
      Models::CreateDeviceAlarmResponse createDeviceAlarm(const Models::CreateDeviceAlarmRequest &request);

      /**
       * @summary Creates a new folder.
       *
       * @param request CreateDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectoryWithOptions(const Models::CreateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new folder.
       *
       * @param request CreateDirectoryRequest
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectory(const Models::CreateDirectoryRequest &request);

      /**
       * @summary Create a new workspace.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new workspace.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Creates a cluster.
       *
       * @description ## Description
       * - This operation creates an empty cluster to manage workloads.
       *
       * @param request CreateHiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHiveResponse
       */
      Models::CreateHiveResponse createHiveWithOptions(const Models::CreateHiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster.
       *
       * @description ## Description
       * - This operation creates an empty cluster to manage workloads.
       *
       * @param request CreateHiveRequest
       * @return CreateHiveResponse
       */
      Models::CreateHiveResponse createHive(const Models::CreateHiveRequest &request);

      /**
       * @summary Adds a new parent platform.
       *
       * @param request CreateParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateParentPlatformResponse
       */
      Models::CreateParentPlatformResponse createParentPlatformWithOptions(const Models::CreateParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a new parent platform.
       *
       * @param request CreateParentPlatformRequest
       * @return CreateParentPlatformResponse
       */
      Models::CreateParentPlatformResponse createParentPlatform(const Models::CreateParentPlatformRequest &request);

      /**
       * @summary Creates a data pack for a cloud application service.
       *
       * @param request CreateRenderingDataPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingDataPackageResponse
       */
      Models::CreateRenderingDataPackageResponse createRenderingDataPackageWithOptions(const Models::CreateRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data pack for a cloud application service.
       *
       * @param request CreateRenderingDataPackageRequest
       * @return CreateRenderingDataPackageResponse
       */
      Models::CreateRenderingDataPackageResponse createRenderingDataPackage(const Models::CreateRenderingDataPackageRequest &request);

      /**
       * @summary Call CreateRenderingInstance to create a cloud application service instance.
       *
       * @param tmpReq CreateRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingInstanceResponse
       */
      Models::CreateRenderingInstanceResponse createRenderingInstanceWithOptions(const Models::CreateRenderingInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call CreateRenderingInstance to create a cloud application service instance.
       *
       * @param request CreateRenderingInstanceRequest
       * @return CreateRenderingInstanceResponse
       */
      Models::CreateRenderingInstanceResponse createRenderingInstance(const Models::CreateRenderingInstanceRequest &request);

      /**
       * @summary Creates a custom gateway.
       *
       * @description > You can specify a template ID or a template type.
       *
       * @param request CreateRenderingInstanceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingInstanceGatewayResponse
       */
      Models::CreateRenderingInstanceGatewayResponse createRenderingInstanceGatewayWithOptions(const Models::CreateRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom gateway.
       *
       * @description > You can specify a template ID or a template type.
       *
       * @param request CreateRenderingInstanceGatewayRequest
       * @return CreateRenderingInstanceGatewayResponse
       */
      Models::CreateRenderingInstanceGatewayResponse createRenderingInstanceGateway(const Models::CreateRenderingInstanceGatewayRequest &request);

      /**
       * @summary Creates a cloud application service project and configures its properties, such as session attributes.
       *
       * @param tmpReq CreateRenderingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRenderingProjectResponse
       */
      Models::CreateRenderingProjectResponse createRenderingProjectWithOptions(const Models::CreateRenderingProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud application service project and configures its properties, such as session attributes.
       *
       * @param request CreateRenderingProjectRequest
       * @return CreateRenderingProjectResponse
       */
      Models::CreateRenderingProjectResponse createRenderingProject(const Models::CreateRenderingProjectRequest &request);

      /**
       * @summary Creates an on-demand snapshot for the specified stream.
       *
       * @description > You must first enable the on-demand snapshot feature in the attached snapshot template.
       *
       * @param request CreateStreamSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamSnapshotResponse
       */
      Models::CreateStreamSnapshotResponse createStreamSnapshotWithOptions(const Models::CreateStreamSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an on-demand snapshot for the specified stream.
       *
       * @description > You must first enable the on-demand snapshot feature in the attached snapshot template.
       *
       * @param request CreateStreamSnapshotRequest
       * @return CreateStreamSnapshotResponse
       */
      Models::CreateStreamSnapshotResponse createStreamSnapshot(const Models::CreateStreamSnapshotRequest &request);

      /**
       * @summary Create a new template.
       *
       * @param request CreateTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new template.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary 从集群删除负载
       *
       * @description ## 请求说明
       * - **HiveId** 是必填参数，表示要操作的集群ID。
       * - **InstanceIds** 是必填参数，需要提供一个负载ID列表，用于指定要从集群中解绑的负载实例。
       * - 解绑操作成功后，会返回成功和失败的负载实例列表及其相关信息。
       *
       * @param tmpReq DelHiveEdgeWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DelHiveEdgeWorkersResponse
       */
      Models::DelHiveEdgeWorkersResponse delHiveEdgeWorkersWithOptions(const Models::DelHiveEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从集群删除负载
       *
       * @description ## 请求说明
       * - **HiveId** 是必填参数，表示要操作的集群ID。
       * - **InstanceIds** 是必填参数，需要提供一个负载ID列表，用于指定要从集群中解绑的负载实例。
       * - 解绑操作成功后，会返回成功和失败的负载实例列表及其相关信息。
       *
       * @param request DelHiveEdgeWorkersRequest
       * @return DelHiveEdgeWorkersResponse
       */
      Models::DelHiveEdgeWorkersResponse delHiveEdgeWorkers(const Models::DelHiveEdgeWorkersRequest &request);

      /**
       * @summary Deletes a cloud application. You cannot delete a cloud application that is in use.
       *
       * @param request DeleteCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAppResponse
       */
      Models::DeleteCloudAppResponse deleteCloudAppWithOptions(const Models::DeleteCloudAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud application. You cannot delete a cloud application that is in use.
       *
       * @param request DeleteCloudAppRequest
       * @return DeleteCloudAppResponse
       */
      Models::DeleteCloudAppResponse deleteCloudApp(const Models::DeleteCloudAppRequest &request);

      /**
       * @summary Deleting artifacts
       *
       * @description > Stop the parent platform before you delete a production.
       *
       * @param request DeleteComfyProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComfyProductionResponse
       */
      Models::DeleteComfyProductionResponse deleteComfyProductionWithOptions(const Models::DeleteComfyProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deleting artifacts
       *
       * @description > Stop the parent platform before you delete a production.
       *
       * @param request DeleteComfyProductionRequest
       * @return DeleteComfyProductionResponse
       */
      Models::DeleteComfyProductionResponse deleteComfyProduction(const Models::DeleteComfyProductionRequest &request);

      /**
       * @summary Deletes a file or directory from user data.
       *
       * @description > You must stop the upper-level platform before performing this operation.
       *
       * @param request DeleteComfyUserDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComfyUserDataResponse
       */
      Models::DeleteComfyUserDataResponse deleteComfyUserDataWithOptions(const Models::DeleteComfyUserDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a file or directory from user data.
       *
       * @description > You must stop the upper-level platform before performing this operation.
       *
       * @param request DeleteComfyUserDataRequest
       * @return DeleteComfyUserDataResponse
       */
      Models::DeleteComfyUserDataResponse deleteComfyUserData(const Models::DeleteComfyUserDataRequest &request);

      /**
       * @summary Deletes a Comfy workflow.
       *
       * @description > You must stop the parent platform before you can delete the workflow.
       *
       * @param request DeleteComfyWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteComfyWorkflowResponse
       */
      Models::DeleteComfyWorkflowResponse deleteComfyWorkflowWithOptions(const Models::DeleteComfyWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Comfy workflow.
       *
       * @description > You must stop the parent platform before you can delete the workflow.
       *
       * @param request DeleteComfyWorkflowRequest
       * @return DeleteComfyWorkflowResponse
       */
      Models::DeleteComfyWorkflowResponse deleteComfyWorkflow(const Models::DeleteComfyWorkflowRequest &request);

      /**
       * @summary Deletes a device from a space.
       *
       * @param request DeleteDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeviceResponse
       */
      Models::DeleteDeviceResponse deleteDeviceWithOptions(const Models::DeleteDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a device from a space.
       *
       * @param request DeleteDeviceRequest
       * @return DeleteDeviceResponse
       */
      Models::DeleteDeviceResponse deleteDevice(const Models::DeleteDeviceRequest &request);

      /**
       * @summary Deletes a folder.
       *
       * @param request DeleteDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectoryWithOptions(const Models::DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a folder.
       *
       * @param request DeleteDirectoryRequest
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectory(const Models::DeleteDirectoryRequest &request);

      /**
       * @summary You cannot delete a file while it is uploading or pre-pushing. After deletion, all related push records become invalid. You can push a file with the same name again.
       *
       * @param request DeleteFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFileWithOptions(const Models::DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You cannot delete a file while it is uploading or pre-pushing. After deletion, all related push records become invalid. You can push a file with the same name again.
       *
       * @param request DeleteFileRequest
       * @return DeleteFileResponse
       */
      Models::DeleteFileResponse deleteFile(const Models::DeleteFileRequest &request);

      /**
       * @summary Delete a workspace.
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a workspace.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary 删除集群
       *
       * @description ## 请求说明
       * - 需要确保该集群内所有应用服务已清空，否则无法执行删除操作。
       * - `HiveId` 是必填参数，用于标识待删除的集群。
       *
       * @param request DeleteHiveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHiveResponse
       */
      Models::DeleteHiveResponse deleteHiveWithOptions(const Models::DeleteHiveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除集群
       *
       * @description ## 请求说明
       * - 需要确保该集群内所有应用服务已清空，否则无法执行删除操作。
       * - `HiveId` 是必填参数，用于标识待删除的集群。
       *
       * @param request DeleteHiveRequest
       * @return DeleteHiveResponse
       */
      Models::DeleteHiveResponse deleteHive(const Models::DeleteHiveRequest &request);

      /**
       * @summary Deletes a parent platform.
       *
       * @description > You must stop the parent platform before you delete it.
       *
       * @param request DeleteParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteParentPlatformResponse
       */
      Models::DeleteParentPlatformResponse deleteParentPlatformWithOptions(const Models::DeleteParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a parent platform.
       *
       * @description > You must stop the parent platform before you delete it.
       *
       * @param request DeleteParentPlatformRequest
       * @return DeleteParentPlatformResponse
       */
      Models::DeleteParentPlatformResponse deleteParentPlatform(const Models::DeleteParentPlatformRequest &request);

      /**
       * @summary Deletes a preset.
       *
       * @param request DeletePresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePresetResponse
       */
      Models::DeletePresetResponse deletePresetWithOptions(const Models::DeletePresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a preset.
       *
       * @param request DeletePresetRequest
       * @return DeletePresetResponse
       */
      Models::DeletePresetResponse deletePreset(const Models::DeletePresetRequest &request);

      /**
       * @summary Deletes a specified public key. This action automatically revokes logon authorization for all associated cloud application service instances.
       *
       * @param request DeletePublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePublicKeyResponse
       */
      Models::DeletePublicKeyResponse deletePublicKeyWithOptions(const Models::DeletePublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified public key. This action automatically revokes logon authorization for all associated cloud application service instances.
       *
       * @param request DeletePublicKeyRequest
       * @return DeletePublicKeyResponse
       */
      Models::DeletePublicKeyResponse deletePublicKey(const Models::DeletePublicKeyRequest &request);

      /**
       * @summary Deletes the configuration of a cloud application service instance. This operation deletes only module properties that are configured using the UpdateRenderingInstanceConfiguration operation.
       *
       * @param tmpReq DeleteRenderingInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingInstanceConfigurationResponse
       */
      Models::DeleteRenderingInstanceConfigurationResponse deleteRenderingInstanceConfigurationWithOptions(const Models::DeleteRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configuration of a cloud application service instance. This operation deletes only module properties that are configured using the UpdateRenderingInstanceConfiguration operation.
       *
       * @param request DeleteRenderingInstanceConfigurationRequest
       * @return DeleteRenderingInstanceConfigurationResponse
       */
      Models::DeleteRenderingInstanceConfigurationResponse deleteRenderingInstanceConfiguration(const Models::DeleteRenderingInstanceConfigurationRequest &request);

      /**
       * @summary Deletes a custom gateway.
       *
       * @description > Stop the parent platform before you delete the gateway.
       *
       * @param request DeleteRenderingInstanceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingInstanceGatewayResponse
       */
      Models::DeleteRenderingInstanceGatewayResponse deleteRenderingInstanceGatewayWithOptions(const Models::DeleteRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom gateway.
       *
       * @description > Stop the parent platform before you delete the gateway.
       *
       * @param request DeleteRenderingInstanceGatewayRequest
       * @return DeleteRenderingInstanceGatewayResponse
       */
      Models::DeleteRenderingInstanceGatewayResponse deleteRenderingInstanceGateway(const Models::DeleteRenderingInstanceGatewayRequest &request);

      /**
       * @summary You can call DeleteRenderingInstanceSettings to delete the settings of a cloud application service instance.
       *
       * @param tmpReq DeleteRenderingInstanceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingInstanceSettingsResponse
       */
      Models::DeleteRenderingInstanceSettingsResponse deleteRenderingInstanceSettingsWithOptions(const Models::DeleteRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DeleteRenderingInstanceSettings to delete the settings of a cloud application service instance.
       *
       * @param request DeleteRenderingInstanceSettingsRequest
       * @return DeleteRenderingInstanceSettingsResponse
       */
      Models::DeleteRenderingInstanceSettingsResponse deleteRenderingInstanceSettings(const Models::DeleteRenderingInstanceSettingsRequest &request);

      /**
       * @summary Delete a Data Service Project. Projects that have business scheduling data, such as active sessions, cannot be deleted.
       *
       * @param request DeleteRenderingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRenderingProjectResponse
       */
      Models::DeleteRenderingProjectResponse deleteRenderingProjectWithOptions(const Models::DeleteRenderingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a Data Service Project. Projects that have business scheduling data, such as active sessions, cannot be deleted.
       *
       * @param request DeleteRenderingProjectRequest
       * @return DeleteRenderingProjectResponse
       */
      Models::DeleteRenderingProjectResponse deleteRenderingProject(const Models::DeleteRenderingProjectRequest &request);

      /**
       * @summary Deletes a template.
       *
       * @param request DeleteTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const Models::DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a template.
       *
       * @param request DeleteTemplateRequest
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const Models::DeleteTemplateRequest &request);

      /**
       * @summary Delete stream pulling information.
       *
       * @param request DeleteVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVsPullStreamInfoConfigResponse
       */
      Models::DeleteVsPullStreamInfoConfigResponse deleteVsPullStreamInfoConfigWithOptions(const Models::DeleteVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete stream pulling information.
       *
       * @param request DeleteVsPullStreamInfoConfigRequest
       * @return DeleteVsPullStreamInfoConfigResponse
       */
      Models::DeleteVsPullStreamInfoConfigResponse deleteVsPullStreamInfoConfig(const Models::DeleteVsPullStreamInfoConfigRequest &request);

      /**
       * @summary Deletes the callback configuration for stream ingest.
       *
       * @param request DeleteVsStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVsStreamsNotifyUrlConfigResponse
       */
      Models::DeleteVsStreamsNotifyUrlConfigResponse deleteVsStreamsNotifyUrlConfigWithOptions(const Models::DeleteVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the callback configuration for stream ingest.
       *
       * @param request DeleteVsStreamsNotifyUrlConfigRequest
       * @return DeleteVsStreamsNotifyUrlConfigResponse
       */
      Models::DeleteVsStreamsNotifyUrlConfigResponse deleteVsStreamsNotifyUrlConfig(const Models::DeleteVsStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Query all resource information for an account in a specified region.
       *
       * @param request DescribeAccountStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccountStatResponse
       */
      Models::DescribeAccountStatResponse describeAccountStatWithOptions(const Models::DescribeAccountStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query all resource information for an account in a specified region.
       *
       * @param request DescribeAccountStatRequest
       * @return DescribeAccountStatResponse
       */
      Models::DescribeAccountStatResponse describeAccountStat(const Models::DescribeAccountStatRequest &request);

      /**
       * @summary Retrieves a download link for a production.
       *
       * @description > Screenshot queries do not support pagination and must be performed iteratively. To fetch the next page, use the extStartTime value from the response as the StartTime for your subsequent request.
       *
       * @param request DescribeComfyProductionDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyProductionDownloadUrlResponse
       */
      Models::DescribeComfyProductionDownloadUrlResponse describeComfyProductionDownloadUrlWithOptions(const Models::DescribeComfyProductionDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a download link for a production.
       *
       * @description > Screenshot queries do not support pagination and must be performed iteratively. To fetch the next page, use the extStartTime value from the response as the StartTime for your subsequent request.
       *
       * @param request DescribeComfyProductionDownloadUrlRequest
       * @return DescribeComfyProductionDownloadUrlResponse
       */
      Models::DescribeComfyProductionDownloadUrlResponse describeComfyProductionDownloadUrl(const Models::DescribeComfyProductionDownloadUrlRequest &request);

      /**
       * @summary Lists a user\\"s productions.
       *
       * @description > This API uses pagination. Use the PageNumber and PageSize parameters to navigate through the results.
       *
       * @param request DescribeComfyProductionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyProductionsResponse
       */
      Models::DescribeComfyProductionsResponse describeComfyProductionsWithOptions(const Models::DescribeComfyProductionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists a user\\"s productions.
       *
       * @description > This API uses pagination. Use the PageNumber and PageSize parameters to navigate through the results.
       *
       * @param request DescribeComfyProductionsRequest
       * @return DescribeComfyProductionsResponse
       */
      Models::DescribeComfyProductionsResponse describeComfyProductions(const Models::DescribeComfyProductionsRequest &request);

      /**
       * @summary Queries a list of Comfy tasks.
       *
       * @description > Querying by screenshot does not support pagination and only supports iteration. To request the next page, use the extStartTime parameter value from the response as the StartTime for the new request.
       *
       * @param request DescribeComfyTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyTasksResponse
       */
      Models::DescribeComfyTasksResponse describeComfyTasksWithOptions(const Models::DescribeComfyTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Comfy tasks.
       *
       * @description > Querying by screenshot does not support pagination and only supports iteration. To request the next page, use the extStartTime parameter value from the response as the StartTime for the new request.
       *
       * @param request DescribeComfyTasksRequest
       * @return DescribeComfyTasksResponse
       */
      Models::DescribeComfyTasksResponse describeComfyTasks(const Models::DescribeComfyTasksRequest &request);

      /**
       * @summary Gets a download URL for user data.
       *
       * @param request DescribeComfyUserDataDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyUserDataDownloadUrlResponse
       */
      Models::DescribeComfyUserDataDownloadUrlResponse describeComfyUserDataDownloadUrlWithOptions(const Models::DescribeComfyUserDataDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a download URL for user data.
       *
       * @param request DescribeComfyUserDataDownloadUrlRequest
       * @return DescribeComfyUserDataDownloadUrlResponse
       */
      Models::DescribeComfyUserDataDownloadUrlResponse describeComfyUserDataDownloadUrl(const Models::DescribeComfyUserDataDownloadUrlRequest &request);

      /**
       * @summary Retrieves a URL to upload a user file.
       *
       * @description You can upload files using the retrieved URL and the Alibaba Cloud OSS software development kit (SDK).
       *
       * @param request DescribeComfyUserDataUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyUserDataUploadUrlResponse
       */
      Models::DescribeComfyUserDataUploadUrlResponse describeComfyUserDataUploadUrlWithOptions(const Models::DescribeComfyUserDataUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a URL to upload a user file.
       *
       * @description You can upload files using the retrieved URL and the Alibaba Cloud OSS software development kit (SDK).
       *
       * @param request DescribeComfyUserDataUploadUrlRequest
       * @return DescribeComfyUserDataUploadUrlResponse
       */
      Models::DescribeComfyUserDataUploadUrlResponse describeComfyUserDataUploadUrl(const Models::DescribeComfyUserDataUploadUrlRequest &request);

      /**
       * @summary Lists all files and folders in the user data.
       *
       * @description If StartTime and EndTime are not specified, data from the last 24 hours is read by default. To query a specific time range, you must specify both StartTime and EndTime. The maximum time range for a query is 31 days.
       * - You can query multiple domain names in a batch. Separate the domain names with a comma (,).
       * - You can retrieve data from the last 90 days.
       * - The time granularity is one hour.
       *
       * @param request DescribeComfyUserDatasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyUserDatasResponse
       */
      Models::DescribeComfyUserDatasResponse describeComfyUserDatasWithOptions(const Models::DescribeComfyUserDatasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all files and folders in the user data.
       *
       * @description If StartTime and EndTime are not specified, data from the last 24 hours is read by default. To query a specific time range, you must specify both StartTime and EndTime. The maximum time range for a query is 31 days.
       * - You can query multiple domain names in a batch. Separate the domain names with a comma (,).
       * - You can retrieve data from the last 90 days.
       * - The time granularity is one hour.
       *
       * @param request DescribeComfyUserDatasRequest
       * @return DescribeComfyUserDatasResponse
       */
      Models::DescribeComfyUserDatasResponse describeComfyUserDatas(const Models::DescribeComfyUserDatasRequest &request);

      /**
       * @summary This operation retrieves a paginated list of your Comfy workflows.
       *
       * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
       *
       * @param request DescribeComfyWorkflowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeComfyWorkflowsResponse
       */
      Models::DescribeComfyWorkflowsResponse describeComfyWorkflowsWithOptions(const Models::DescribeComfyWorkflowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation retrieves a paginated list of your Comfy workflows.
       *
       * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
       *
       * @param request DescribeComfyWorkflowsRequest
       * @return DescribeComfyWorkflowsResponse
       */
      Models::DescribeComfyWorkflowsResponse describeComfyWorkflows(const Models::DescribeComfyWorkflowsRequest &request);

      /**
       * @summary Query information about a device.
       *
       * @param request DescribeDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceResponse
       */
      Models::DescribeDeviceResponse describeDeviceWithOptions(const Models::DescribeDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query information about a device.
       *
       * @param request DescribeDeviceRequest
       * @return DescribeDeviceResponse
       */
      Models::DescribeDeviceResponse describeDevice(const Models::DescribeDeviceRequest &request);

      /**
       * @summary Queries a list of device channels.
       *
       * @param request DescribeDeviceChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceChannelsResponse
       */
      Models::DescribeDeviceChannelsResponse describeDeviceChannelsWithOptions(const Models::DescribeDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of device channels.
       *
       * @param request DescribeDeviceChannelsRequest
       * @return DescribeDeviceChannelsResponse
       */
      Models::DescribeDeviceChannelsResponse describeDeviceChannels(const Models::DescribeDeviceChannelsRequest &request);

      /**
       * @summary Queries a device gateway.
       *
       * @param request DescribeDeviceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceGatewayResponse
       */
      Models::DescribeDeviceGatewayResponse describeDeviceGatewayWithOptions(const Models::DescribeDeviceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a device gateway.
       *
       * @param request DescribeDeviceGatewayRequest
       * @return DescribeDeviceGatewayResponse
       */
      Models::DescribeDeviceGatewayResponse describeDeviceGateway(const Models::DescribeDeviceGatewayRequest &request);

      /**
       * @summary Queries the URL information for a device stream.
       *
       * @param request DescribeDeviceURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceURLResponse
       */
      Models::DescribeDeviceURLResponse describeDeviceURLWithOptions(const Models::DescribeDeviceURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URL information for a device stream.
       *
       * @param request DescribeDeviceURLRequest
       * @return DescribeDeviceURLResponse
       */
      Models::DescribeDeviceURLResponse describeDeviceURL(const Models::DescribeDeviceURLRequest &request);

      /**
       * @summary Queries a list of devices.
       *
       * @param request DescribeDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDevicesResponse
       */
      Models::DescribeDevicesResponse describeDevicesWithOptions(const Models::DescribeDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of devices.
       *
       * @param request DescribeDevicesRequest
       * @return DescribeDevicesResponse
       */
      Models::DescribeDevicesResponse describeDevices(const Models::DescribeDevicesRequest &request);

      /**
       * @summary Query the list of directories.
       *
       * @param request DescribeDirectoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectoriesWithOptions(const Models::DescribeDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of directories.
       *
       * @param request DescribeDirectoriesRequest
       * @return DescribeDirectoriesResponse
       */
      Models::DescribeDirectoriesResponse describeDirectories(const Models::DescribeDirectoriesRequest &request);

      /**
       * @summary Queries a directory.
       *
       * @param request DescribeDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDirectoryResponse
       */
      Models::DescribeDirectoryResponse describeDirectoryWithOptions(const Models::DescribeDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a directory.
       *
       * @param request DescribeDirectoryRequest
       * @return DescribeDirectoryResponse
       */
      Models::DescribeDirectoryResponse describeDirectory(const Models::DescribeDirectoryRequest &request);

      /**
       * @summary Retrieves information about a space.
       *
       * @param request DescribeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroupWithOptions(const Models::DescribeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a space.
       *
       * @param request DescribeGroupRequest
       * @return DescribeGroupResponse
       */
      Models::DescribeGroupResponse describeGroup(const Models::DescribeGroupRequest &request);

      /**
       * @summary You can query the list of spaces.
       *
       * @param request DescribeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroupsWithOptions(const Models::DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can query the list of spaces.
       *
       * @param request DescribeGroupsRequest
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroups(const Models::DescribeGroupsRequest &request);

      /**
       * @summary Queries information about a parent platform.
       *
       * @param request DescribeParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentPlatformResponse
       */
      Models::DescribeParentPlatformResponse describeParentPlatformWithOptions(const Models::DescribeParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a parent platform.
       *
       * @param request DescribeParentPlatformRequest
       * @return DescribeParentPlatformResponse
       */
      Models::DescribeParentPlatformResponse describeParentPlatform(const Models::DescribeParentPlatformRequest &request);

      /**
       * @summary Queries the list of devices under a parent platform.
       *
       * @param request DescribeParentPlatformDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentPlatformDevicesResponse
       */
      Models::DescribeParentPlatformDevicesResponse describeParentPlatformDevicesWithOptions(const Models::DescribeParentPlatformDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of devices under a parent platform.
       *
       * @param request DescribeParentPlatformDevicesRequest
       * @return DescribeParentPlatformDevicesResponse
       */
      Models::DescribeParentPlatformDevicesResponse describeParentPlatformDevices(const Models::DescribeParentPlatformDevicesRequest &request);

      /**
       * @summary Query the list of parent platforms.
       *
       * @param request DescribeParentPlatformsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeParentPlatformsResponse
       */
      Models::DescribeParentPlatformsResponse describeParentPlatformsWithOptions(const Models::DescribeParentPlatformsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of parent platforms.
       *
       * @param request DescribeParentPlatformsRequest
       * @return DescribeParentPlatformsResponse
       */
      Models::DescribeParentPlatformsResponse describeParentPlatforms(const Models::DescribeParentPlatformsRequest &request);

      /**
       * @summary Retrieve the list of presets.
       *
       * @param request DescribePresetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePresetsResponse
       */
      Models::DescribePresetsResponse describePresetsWithOptions(const Models::DescribePresetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of presets.
       *
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
       * @summary Queries information about purchased devices.
       *
       * @param request DescribePurchasedDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedDeviceResponse
       */
      Models::DescribePurchasedDeviceResponse describePurchasedDeviceWithOptions(const Models::DescribePurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about purchased devices.
       *
       * @param request DescribePurchasedDeviceRequest
       * @return DescribePurchasedDeviceResponse
       */
      Models::DescribePurchasedDeviceResponse describePurchasedDevice(const Models::DescribePurchasedDeviceRequest &request);

      /**
       * @summary Queries the list of purchased devices.
       *
       * @param request DescribePurchasedDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedDevicesResponse
       */
      Models::DescribePurchasedDevicesResponse describePurchasedDevicesWithOptions(const Models::DescribePurchasedDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of purchased devices.
       *
       * @param request DescribePurchasedDevicesRequest
       * @return DescribePurchasedDevicesResponse
       */
      Models::DescribePurchasedDevicesResponse describePurchasedDevices(const Models::DescribePurchasedDevicesRequest &request);

      /**
       * @summary Queries a list of recordings.
       *
       * @description > Paging is not supported for snapshot queries. Only iteration is supported. To request the next page, use the NextStartTime value from the response as the StartTime for the new request.
       *
       * @param request DescribeRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordsResponse
       */
      Models::DescribeRecordsResponse describeRecordsWithOptions(const Models::DescribeRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of recordings.
       *
       * @description > Paging is not supported for snapshot queries. Only iteration is supported. To request the next page, use the NextStartTime value from the response as the StartTime for the new request.
       *
       * @param request DescribeRecordsRequest
       * @return DescribeRecordsResponse
       */
      Models::DescribeRecordsResponse describeRecords(const Models::DescribeRecordsRequest &request);

      /**
       * @summary Queries the details of a cloud application service instance.
       *
       * @param request DescribeRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingInstanceResponse
       */
      Models::DescribeRenderingInstanceResponse describeRenderingInstanceWithOptions(const Models::DescribeRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cloud application service instance.
       *
       * @param request DescribeRenderingInstanceRequest
       * @return DescribeRenderingInstanceResponse
       */
      Models::DescribeRenderingInstanceResponse describeRenderingInstance(const Models::DescribeRenderingInstanceRequest &request);

      /**
       * @summary Queries the real-time configuration of a cloud application service instance.
       *
       * @param tmpReq DescribeRenderingInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingInstanceConfigurationResponse
       */
      Models::DescribeRenderingInstanceConfigurationResponse describeRenderingInstanceConfigurationWithOptions(const Models::DescribeRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time configuration of a cloud application service instance.
       *
       * @param request DescribeRenderingInstanceConfigurationRequest
       * @return DescribeRenderingInstanceConfigurationResponse
       */
      Models::DescribeRenderingInstanceConfigurationResponse describeRenderingInstanceConfiguration(const Models::DescribeRenderingInstanceConfigurationRequest &request);

      /**
       * @summary DescribeRenderingInstanceSettings queries the configuration of a Cloud Application service instance.
       *
       * @param tmpReq DescribeRenderingInstanceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingInstanceSettingsResponse
       */
      Models::DescribeRenderingInstanceSettingsResponse describeRenderingInstanceSettingsWithOptions(const Models::DescribeRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeRenderingInstanceSettings queries the configuration of a Cloud Application service instance.
       *
       * @param request DescribeRenderingInstanceSettingsRequest
       * @return DescribeRenderingInstanceSettingsResponse
       */
      Models::DescribeRenderingInstanceSettingsResponse describeRenderingInstanceSettings(const Models::DescribeRenderingInstanceSettingsRequest &request);

      /**
       * @summary Retrieve details about a rendering session, including the current session state, network access IP address and port, and the location of the cloud application service instance.
       *
       * @param request DescribeRenderingSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRenderingSessionResponse
       */
      Models::DescribeRenderingSessionResponse describeRenderingSessionWithOptions(const Models::DescribeRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details about a rendering session, including the current session state, network access IP address and port, and the location of the cloud application service instance.
       *
       * @param request DescribeRenderingSessionRequest
       * @return DescribeRenderingSessionResponse
       */
      Models::DescribeRenderingSessionResponse describeRenderingSession(const Models::DescribeRenderingSessionRequest &request);

      /**
       * @summary Queries information about a stream.
       *
       * @param request DescribeStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamResponse
       */
      Models::DescribeStreamResponse describeStreamWithOptions(const Models::DescribeStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a stream.
       *
       * @param request DescribeStreamRequest
       * @return DescribeStreamResponse
       */
      Models::DescribeStreamResponse describeStream(const Models::DescribeStreamRequest &request);

      /**
       * @summary Retrieves the URL of a stream.
       *
       * @param request DescribeStreamURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamURLResponse
       */
      Models::DescribeStreamURLResponse describeStreamURLWithOptions(const Models::DescribeStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the URL of a stream.
       *
       * @param request DescribeStreamURLRequest
       * @return DescribeStreamURLResponse
       */
      Models::DescribeStreamURLResponse describeStreamURL(const Models::DescribeStreamURLRequest &request);

      /**
       * @summary Get the stream VOD record list, such as historical stream list from NVR.
       *
       * @param request DescribeStreamVodListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamVodListResponse
       */
      Models::DescribeStreamVodListResponse describeStreamVodListWithOptions(const Models::DescribeStreamVodListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the stream VOD record list, such as historical stream list from NVR.
       *
       * @param request DescribeStreamVodListRequest
       * @return DescribeStreamVodListResponse
       */
      Models::DescribeStreamVodListResponse describeStreamVodList(const Models::DescribeStreamVodListRequest &request);

      /**
       * @summary Lists video streams. You can filter the results by stream ID, name, group ID, device ID, or other criteria.
       *
       * @param request DescribeStreamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStreamsResponse
       */
      Models::DescribeStreamsResponse describeStreamsWithOptions(const Models::DescribeStreamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists video streams. You can filter the results by stream ID, name, group ID, device ID, or other criteria.
       *
       * @param request DescribeStreamsRequest
       * @return DescribeStreamsResponse
       */
      Models::DescribeStreamsResponse describeStreams(const Models::DescribeStreamsRequest &request);

      /**
       * @summary Query information about a template.
       *
       * @param request DescribeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplateResponse
       */
      Models::DescribeTemplateResponse describeTemplateWithOptions(const Models::DescribeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query information about a template.
       *
       * @param request DescribeTemplateRequest
       * @return DescribeTemplateResponse
       */
      Models::DescribeTemplateResponse describeTemplate(const Models::DescribeTemplateRequest &request);

      /**
       * @summary List templates.
       *
       * @param request DescribeTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplatesWithOptions(const Models::DescribeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List templates.
       *
       * @param request DescribeTemplatesRequest
       * @return DescribeTemplatesResponse
       */
      Models::DescribeTemplatesResponse describeTemplates(const Models::DescribeTemplatesRequest &request);

      /**
       * @summary Retrieves the URL information of a video-on-demand (VOD) stream.
       *
       * @param request DescribeVodStreamURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodStreamURLResponse
       */
      Models::DescribeVodStreamURLResponse describeVodStreamURLWithOptions(const Models::DescribeVodStreamURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the URL information of a video-on-demand (VOD) stream.
       *
       * @param request DescribeVodStreamURLRequest
       * @return DescribeVodStreamURLResponse
       */
      Models::DescribeVodStreamURLResponse describeVodStreamURL(const Models::DescribeVodStreamURLRequest &request);

      /**
       * @summary Retrieve certificate details.
       *
       * @param request DescribeVsCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsCertificateDetailResponse
       */
      Models::DescribeVsCertificateDetailResponse describeVsCertificateDetailWithOptions(const Models::DescribeVsCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve certificate details.
       *
       * @param request DescribeVsCertificateDetailRequest
       * @return DescribeVsCertificateDetailResponse
       */
      Models::DescribeVsCertificateDetailResponse describeVsCertificateDetail(const Models::DescribeVsCertificateDetailRequest &request);

      /**
       * @summary Retrieves a list of domain name certificates.
       *
       * @param request DescribeVsCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsCertificateListResponse
       */
      Models::DescribeVsCertificateListResponse describeVsCertificateListWithOptions(const Models::DescribeVsCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of domain name certificates.
       *
       * @param request DescribeVsCertificateListRequest
       * @return DescribeVsCertificateListResponse
       */
      Models::DescribeVsCertificateListResponse describeVsCertificateList(const Models::DescribeVsCertificateListRequest &request);

      /**
       * @summary Retrieves usage data for connected devices.
       *
       * @description If you do not specify \\`StartTime\\` and \\`EndTime\\`, the API retrieves data from the last 24 hours by default. To query data for a specific time range, you must specify both \\`StartTime\\` and \\`EndTime\\`. The maximum time range for a single query is 31 days.
       * - You can query multiple domain names at once. Separate the domain names with commas.
       * - You can retrieve data from the last 90 days.
       * - The time granularity is one hour.
       *
       * @param request DescribeVsDevicesDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDevicesDataResponse
       */
      Models::DescribeVsDevicesDataResponse describeVsDevicesDataWithOptions(const Models::DescribeVsDevicesDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves usage data for connected devices.
       *
       * @description If you do not specify \\`StartTime\\` and \\`EndTime\\`, the API retrieves data from the last 24 hours by default. To query data for a specific time range, you must specify both \\`StartTime\\` and \\`EndTime\\`. The maximum time range for a single query is 31 days.
       * - You can query multiple domain names at once. Separate the domain names with commas.
       * - You can retrieve data from the last 90 days.
       * - The time granularity is one hour.
       *
       * @param request DescribeVsDevicesDataRequest
       * @return DescribeVsDevicesDataResponse
       */
      Models::DescribeVsDevicesDataResponse describeVsDevicesData(const Models::DescribeVsDevicesDataRequest &request);

      /**
       * @summary Queries network bandwidth monitoring data for Domain Names.
       *
       * @param request DescribeVsDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainBpsDataResponse
       */
      Models::DescribeVsDomainBpsDataResponse describeVsDomainBpsDataWithOptions(const Models::DescribeVsDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network bandwidth monitoring data for Domain Names.
       *
       * @param request DescribeVsDomainBpsDataRequest
       * @return DescribeVsDomainBpsDataResponse
       */
      Models::DescribeVsDomainBpsDataResponse describeVsDomainBpsData(const Models::DescribeVsDomainBpsDataRequest &request);

      /**
       * @summary Retrieves the certificate information for a specified accelerated domain name.
       *
       * @param request DescribeVsDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainCertificateInfoResponse
       */
      Models::DescribeVsDomainCertificateInfoResponse describeVsDomainCertificateInfoWithOptions(const Models::DescribeVsDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the certificate information for a specified accelerated domain name.
       *
       * @param request DescribeVsDomainCertificateInfoRequest
       * @return DescribeVsDomainCertificateInfoResponse
       */
      Models::DescribeVsDomainCertificateInfoResponse describeVsDomainCertificateInfo(const Models::DescribeVsDomainCertificateInfoRequest &request);

      /**
       * @summary Queries domain name configurations. You can query the configurations of multiple features in a single request.
       *
       * @param request DescribeVsDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainConfigsResponse
       */
      Models::DescribeVsDomainConfigsResponse describeVsDomainConfigsWithOptions(const Models::DescribeVsDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain name configurations. You can query the configurations of multiple features in a single request.
       *
       * @param request DescribeVsDomainConfigsRequest
       * @return DescribeVsDomainConfigsResponse
       */
      Models::DescribeVsDomainConfigsResponse describeVsDomainConfigs(const Models::DescribeVsDomainConfigsRequest &request);

      /**
       * @summary Obtains the basic configuration information for a specified Visual Edge Computing Service domain name.
       *
       * @param request DescribeVsDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainDetailResponse
       */
      Models::DescribeVsDomainDetailResponse describeVsDomainDetailWithOptions(const Models::DescribeVsDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the basic configuration information for a specified Visual Edge Computing Service domain name.
       *
       * @param request DescribeVsDomainDetailRequest
       * @return DescribeVsDomainDetailResponse
       */
      Models::DescribeVsDomainDetailResponse describeVsDomainDetail(const Models::DescribeVsDomainDetailRequest &request);

      /**
       * @summary Queries the page view (PV) data for a domain name.
       *
       * @param request DescribeVsDomainPvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainPvDataResponse
       */
      Models::DescribeVsDomainPvDataResponse describeVsDomainPvDataWithOptions(const Models::DescribeVsDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the page view (PV) data for a domain name.
       *
       * @param request DescribeVsDomainPvDataRequest
       * @return DescribeVsDomainPvDataResponse
       */
      Models::DescribeVsDomainPvDataResponse describeVsDomainPvData(const Models::DescribeVsDomainPvDataRequest &request);

      /**
       * @summary Retrieve page view (PV) and unique visitor (UV) data for a Visual Edge Computing Service domain.
       *
       * @param request DescribeVsDomainPvUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainPvUvDataResponse
       */
      Models::DescribeVsDomainPvUvDataResponse describeVsDomainPvUvDataWithOptions(const Models::DescribeVsDomainPvUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve page view (PV) and unique visitor (UV) data for a Visual Edge Computing Service domain.
       *
       * @param request DescribeVsDomainPvUvDataRequest
       * @return DescribeVsDomainPvUvDataResponse
       */
      Models::DescribeVsDomainPvUvDataResponse describeVsDomainPvUvData(const Models::DescribeVsDomainPvUvDataRequest &request);

      /**
       * @summary Retrieve domain name record data.
       *
       * @param request DescribeVsDomainRecordDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainRecordDataResponse
       */
      Models::DescribeVsDomainRecordDataResponse describeVsDomainRecordDataWithOptions(const Models::DescribeVsDomainRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve domain name record data.
       *
       * @param request DescribeVsDomainRecordDataRequest
       * @return DescribeVsDomainRecordDataResponse
       */
      Models::DescribeVsDomainRecordDataResponse describeVsDomainRecordData(const Models::DescribeVsDomainRecordDataRequest &request);

      /**
       * @summary Retrieves domain region data.
       *
       * @param request DescribeVsDomainRegionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainRegionDataResponse
       */
      Models::DescribeVsDomainRegionDataResponse describeVsDomainRegionDataWithOptions(const Models::DescribeVsDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves domain region data.
       *
       * @param request DescribeVsDomainRegionDataRequest
       * @return DescribeVsDomainRegionDataResponse
       */
      Models::DescribeVsDomainRegionDataResponse describeVsDomainRegionData(const Models::DescribeVsDomainRegionDataRequest &request);

      /**
       * @summary Query network request monitoring data for a domain name.
       *
       * @param request DescribeVsDomainReqBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainReqBpsDataResponse
       */
      Models::DescribeVsDomainReqBpsDataResponse describeVsDomainReqBpsDataWithOptions(const Models::DescribeVsDomainReqBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query network request monitoring data for a domain name.
       *
       * @param request DescribeVsDomainReqBpsDataRequest
       * @return DescribeVsDomainReqBpsDataResponse
       */
      Models::DescribeVsDomainReqBpsDataResponse describeVsDomainReqBpsData(const Models::DescribeVsDomainReqBpsDataRequest &request);

      /**
       * @summary Obtain traffic data for domain name requests.
       *
       * @param request DescribeVsDomainReqTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainReqTrafficDataResponse
       */
      Models::DescribeVsDomainReqTrafficDataResponse describeVsDomainReqTrafficDataWithOptions(const Models::DescribeVsDomainReqTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain traffic data for domain name requests.
       *
       * @param request DescribeVsDomainReqTrafficDataRequest
       * @return DescribeVsDomainReqTrafficDataResponse
       */
      Models::DescribeVsDomainReqTrafficDataResponse describeVsDomainReqTrafficData(const Models::DescribeVsDomainReqTrafficDataRequest &request);

      /**
       * @summary Retrieves snapshot data for a domain name.
       *
       * @param request DescribeVsDomainSnapshotDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainSnapshotDataResponse
       */
      Models::DescribeVsDomainSnapshotDataResponse describeVsDomainSnapshotDataWithOptions(const Models::DescribeVsDomainSnapshotDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves snapshot data for a domain name.
       *
       * @param request DescribeVsDomainSnapshotDataRequest
       * @return DescribeVsDomainSnapshotDataResponse
       */
      Models::DescribeVsDomainSnapshotDataResponse describeVsDomainSnapshotData(const Models::DescribeVsDomainSnapshotDataRequest &request);

      /**
       * @summary Retrieve traffic data for a domain name.
       *
       * @param request DescribeVsDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainTrafficDataResponse
       */
      Models::DescribeVsDomainTrafficDataResponse describeVsDomainTrafficDataWithOptions(const Models::DescribeVsDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve traffic data for a domain name.
       *
       * @param request DescribeVsDomainTrafficDataRequest
       * @return DescribeVsDomainTrafficDataResponse
       */
      Models::DescribeVsDomainTrafficDataResponse describeVsDomainTrafficData(const Models::DescribeVsDomainTrafficDataRequest &request);

      /**
       * @summary Retrieve UV data by domain name.
       *
       * @param request DescribeVsDomainUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsDomainUvDataResponse
       */
      Models::DescribeVsDomainUvDataResponse describeVsDomainUvDataWithOptions(const Models::DescribeVsDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve UV data by domain name.
       *
       * @param request DescribeVsDomainUvDataRequest
       * @return DescribeVsDomainUvDataResponse
       */
      Models::DescribeVsDomainUvDataResponse describeVsDomainUvData(const Models::DescribeVsDomainUvDataRequest &request);

      /**
       * @summary Queries the pull stream configurations for a domain name.
       *
       * @param request DescribeVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsPullStreamInfoConfigResponse
       */
      Models::DescribeVsPullStreamInfoConfigResponse describeVsPullStreamInfoConfigWithOptions(const Models::DescribeVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pull stream configurations for a domain name.
       *
       * @param request DescribeVsPullStreamInfoConfigRequest
       * @return DescribeVsPullStreamInfoConfigResponse
       */
      Models::DescribeVsPullStreamInfoConfigResponse describeVsPullStreamInfoConfig(const Models::DescribeVsPullStreamInfoConfigRequest &request);

      /**
       * @summary Queries the stream ingest callback configuration.
       *
       * @param request DescribeVsStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsStreamsNotifyUrlConfigResponse
       */
      Models::DescribeVsStreamsNotifyUrlConfigResponse describeVsStreamsNotifyUrlConfigWithOptions(const Models::DescribeVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the stream ingest callback configuration.
       *
       * @param request DescribeVsStreamsNotifyUrlConfigRequest
       * @return DescribeVsStreamsNotifyUrlConfigResponse
       */
      Models::DescribeVsStreamsNotifyUrlConfigResponse describeVsStreamsNotifyUrlConfig(const Models::DescribeVsStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Retrieves information about all active streams for a specified domain name or application.
       *
       * @param request DescribeVsStreamsOnlineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsStreamsOnlineListResponse
       */
      Models::DescribeVsStreamsOnlineListResponse describeVsStreamsOnlineListWithOptions(const Models::DescribeVsStreamsOnlineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about all active streams for a specified domain name or application.
       *
       * @param request DescribeVsStreamsOnlineListRequest
       * @return DescribeVsStreamsOnlineListResponse
       */
      Models::DescribeVsStreamsOnlineListResponse describeVsStreamsOnlineList(const Models::DescribeVsStreamsOnlineListRequest &request);

      /**
       * @summary Retrieve stream ingest records for a domain, an application under that domain, or a specific stream within a specified time range.
       *
       * @param request DescribeVsStreamsPublishListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsStreamsPublishListResponse
       */
      Models::DescribeVsStreamsPublishListResponse describeVsStreamsPublishListWithOptions(const Models::DescribeVsStreamsPublishListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve stream ingest records for a domain, an application under that domain, or a specific stream within a specified time range.
       *
       * @param request DescribeVsStreamsPublishListRequest
       * @return DescribeVsStreamsPublishListResponse
       */
      Models::DescribeVsStreamsPublishListResponse describeVsStreamsPublishList(const Models::DescribeVsStreamsPublishListRequest &request);

      /**
       * @summary Retrieves a user\\"s domain names ranked by traffic.
       * If you do not specify StartTime and EndTime, data for the current month is retrieved by default. To query data over a specific time range, you must specify both StartTime and EndTime.
       * \\* You can retrieve data for a maximum of 90 days.
       *
       * @param request DescribeVsTopDomainsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsTopDomainsByFlowResponse
       */
      Models::DescribeVsTopDomainsByFlowResponse describeVsTopDomainsByFlowWithOptions(const Models::DescribeVsTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a user\\"s domain names ranked by traffic.
       * If you do not specify StartTime and EndTime, data for the current month is retrieved by default. To query data over a specific time range, you must specify both StartTime and EndTime.
       * \\* You can retrieve data for a maximum of 90 days.
       *
       * @param request DescribeVsTopDomainsByFlowRequest
       * @return DescribeVsTopDomainsByFlowResponse
       */
      Models::DescribeVsTopDomainsByFlowResponse describeVsTopDomainsByFlow(const Models::DescribeVsTopDomainsByFlowRequest &request);

      /**
       * @summary Queries the daily peak number of concurrent stream ingest operations.
       *
       * @param request DescribeVsUpPeakPublishStreamDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsUpPeakPublishStreamDataResponse
       */
      Models::DescribeVsUpPeakPublishStreamDataResponse describeVsUpPeakPublishStreamDataWithOptions(const Models::DescribeVsUpPeakPublishStreamDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily peak number of concurrent stream ingest operations.
       *
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
       * @summary DescribeVsVerifyContent
       *
       * @param request DescribeVsVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVsVerifyContentResponse
       */
      Models::DescribeVsVerifyContentResponse describeVsVerifyContentWithOptions(const Models::DescribeVsVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeVsVerifyContent
       *
       * @param request DescribeVsVerifyContentRequest
       * @return DescribeVsVerifyContentResponse
       */
      Models::DescribeVsVerifyContentResponse describeVsVerifyContent(const Models::DescribeVsVerifyContentRequest &request);

      /**
       * @summary Disassociate cloud application service instances from a project.
       *
       * @param tmpReq DisassociateRenderingProjectInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateRenderingProjectInstancesResponse
       */
      Models::DisassociateRenderingProjectInstancesResponse disassociateRenderingProjectInstancesWithOptions(const Models::DisassociateRenderingProjectInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociate cloud application service instances from a project.
       *
       * @param request DisassociateRenderingProjectInstancesRequest
       * @return DisassociateRenderingProjectInstancesResponse
       */
      Models::DisassociateRenderingProjectInstancesResponse disassociateRenderingProjectInstances(const Models::DisassociateRenderingProjectInstancesRequest &request);

      /**
       * @summary Forbids pushing a specific stream. You can schedule a time to resume the stream.
       *
       * @param request ForbidVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForbidVsStreamResponse
       */
      Models::ForbidVsStreamResponse forbidVsStreamWithOptions(const Models::ForbidVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Forbids pushing a specific stream. You can schedule a time to resume the stream.
       *
       * @param request ForbidVsStreamRequest
       * @return ForbidVsStreamResponse
       */
      Models::ForbidVsStreamResponse forbidVsStream(const Models::ForbidVsStreamRequest &request);

      /**
       * @summary Queries the execution status of a control command to determine whether the command was successful and to retrieve the result string.
       *
       * @param request GetRenderingInstanceCommandsStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenderingInstanceCommandsStatusResponse
       */
      Models::GetRenderingInstanceCommandsStatusResponse getRenderingInstanceCommandsStatusWithOptions(const Models::GetRenderingInstanceCommandsStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of a control command to determine whether the command was successful and to retrieve the result string.
       *
       * @param request GetRenderingInstanceCommandsStatusRequest
       * @return GetRenderingInstanceCommandsStatusResponse
       */
      Models::GetRenderingInstanceCommandsStatusResponse getRenderingInstanceCommandsStatus(const Models::GetRenderingInstanceCommandsStatusRequest &request);

      /**
       * @summary Retrieves the streaming connection information for a cloud application service instance. Call this operation before establishing each streaming connection to obtain the latest connection details.
       *
       * @param request GetRenderingInstanceStreamingInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenderingInstanceStreamingInfoResponse
       */
      Models::GetRenderingInstanceStreamingInfoResponse getRenderingInstanceStreamingInfoWithOptions(const Models::GetRenderingInstanceStreamingInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the streaming connection information for a cloud application service instance. Call this operation before establishing each streaming connection to obtain the latest connection details.
       *
       * @param request GetRenderingInstanceStreamingInfoRequest
       * @return GetRenderingInstanceStreamingInfoResponse
       */
      Models::GetRenderingInstanceStreamingInfoResponse getRenderingInstanceStreamingInfo(const Models::GetRenderingInstanceStreamingInfoRequest &request);

      /**
       * @summary Queries the data volume statistics for the states of project instances that meet specified conditions.
       *
       * @param request GetRenderingProjectInstanceStateMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRenderingProjectInstanceStateMetricsResponse
       */
      Models::GetRenderingProjectInstanceStateMetricsResponse getRenderingProjectInstanceStateMetricsWithOptions(const Models::GetRenderingProjectInstanceStateMetricsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data volume statistics for the states of project instances that meet specified conditions.
       *
       * @param request GetRenderingProjectInstanceStateMetricsRequest
       * @return GetRenderingProjectInstanceStateMetricsResponse
       */
      Models::GetRenderingProjectInstanceStateMetricsResponse getRenderingProjectInstanceStateMetrics(const Models::GetRenderingProjectInstanceStateMetricsRequest &request);

      /**
       * @summary Moves to a specified preset.
       *
       * @param request GotoPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GotoPresetResponse
       */
      Models::GotoPresetResponse gotoPresetWithOptions(const Models::GotoPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves to a specified preset.
       *
       * @param request GotoPresetRequest
       * @return GotoPresetResponse
       */
      Models::GotoPresetResponse gotoPreset(const Models::GotoPresetRequest &request);

      /**
       * @summary Installs a cloud application to a specified cloud application instance. This is an asynchronous interface. To monitor the installation progress, use the ListCloudAppInstallations interface.
       *
       * @param tmpReq InstallCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallCloudAppResponse
       */
      Models::InstallCloudAppResponse installCloudAppWithOptions(const Models::InstallCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a cloud application to a specified cloud application instance. This is an asynchronous interface. To monitor the installation progress, use the ListCloudAppInstallations interface.
       *
       * @param request InstallCloudAppRequest
       * @return InstallCloudAppResponse
       */
      Models::InstallCloudAppResponse installCloudApp(const Models::InstallCloudAppRequest &request);

      /**
       * @summary Lists cloud application installations. The response includes the installation status of cloud application service instances and supports paged queries.
       *
       * @param request ListCloudAppInstallationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAppInstallationsResponse
       */
      Models::ListCloudAppInstallationsResponse listCloudAppInstallationsWithOptions(const Models::ListCloudAppInstallationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists cloud application installations. The response includes the installation status of cloud application service instances and supports paged queries.
       *
       * @param request ListCloudAppInstallationsRequest
       * @return ListCloudAppInstallationsResponse
       */
      Models::ListCloudAppInstallationsResponse listCloudAppInstallations(const Models::ListCloudAppInstallationsRequest &request);

      /**
       * @summary Queries the list of patches for a cloud application.
       *
       * @description > Specify at least one of the template ID or the template type.
       *
       * @param request ListCloudAppPatchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAppPatchesResponse
       */
      Models::ListCloudAppPatchesResponse listCloudAppPatchesWithOptions(const Models::ListCloudAppPatchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of patches for a cloud application.
       *
       * @description > Specify at least one of the template ID or the template type.
       *
       * @param request ListCloudAppPatchesRequest
       * @return ListCloudAppPatchesResponse
       */
      Models::ListCloudAppPatchesResponse listCloudAppPatches(const Models::ListCloudAppPatchesRequest &request);

      /**
       * @summary Queries a list of cloud applications. This operation supports paged queries.
       *
       * @param request ListCloudAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAppsResponse
       */
      Models::ListCloudAppsResponse listCloudAppsWithOptions(const Models::ListCloudAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of cloud applications. This operation supports paged queries.
       *
       * @param request ListCloudAppsRequest
       * @return ListCloudAppsResponse
       */
      Models::ListCloudAppsResponse listCloudApps(const Models::ListCloudAppsRequest &request);

      /**
       * @summary Queries payload information for cloud application services. This operation supports paged queries.
       *
       * @description ## Request description
       * - This API queries payload information for cloud application services and supports filtering and paged queries using various parameters.
       * - Optional parameters include `Spec`, `Statuses`, `InstanceIds`, `PlanIds`, and `HiveIds`.
       * - For paged queries, you can use the `PageNumber` and `PageSize` parameters to control the amount of data returned. The default page size is 10 records, and the maximum is 100 records.
       * - You can specify a time range for the query using the `StartTime` and `EndTime` parameters.
       *
       * @param tmpReq ListEdgeWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEdgeWorkersResponse
       */
      Models::ListEdgeWorkersResponse listEdgeWorkersWithOptions(const Models::ListEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries payload information for cloud application services. This operation supports paged queries.
       *
       * @description ## Request description
       * - This API queries payload information for cloud application services and supports filtering and paged queries using various parameters.
       * - Optional parameters include `Spec`, `Statuses`, `InstanceIds`, `PlanIds`, and `HiveIds`.
       * - For paged queries, you can use the `PageNumber` and `PageSize` parameters to control the amount of data returned. The default page size is 10 records, and the maximum is 100 records.
       * - You can specify a time range for the query using the `StartTime` and `EndTime` parameters.
       *
       * @param request ListEdgeWorkersRequest
       * @return ListEdgeWorkersResponse
       */
      Models::ListEdgeWorkersResponse listEdgeWorkers(const Models::ListEdgeWorkersRequest &request);

      /**
       * @summary Lists the push status records for a file pushed to cloud application service instances. It supports paged query.
       *
       * @param request ListFilePushStatusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilePushStatusesResponse
       */
      Models::ListFilePushStatusesResponse listFilePushStatusesWithOptions(const Models::ListFilePushStatusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the push status records for a file pushed to cloud application service instances. It supports paged query.
       *
       * @param request ListFilePushStatusesRequest
       * @return ListFilePushStatusesResponse
       */
      Models::ListFilePushStatusesResponse listFilePushStatuses(const Models::ListFilePushStatusesRequest &request);

      /**
       * @summary Lists uploaded files. The response includes the upload status for each file and supports paged queries.
       *
       * @param request ListFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFilesWithOptions(const Models::ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists uploaded files. The response includes the upload status for each file and supports paged queries.
       *
       * @param request ListFilesRequest
       * @return ListFilesResponse
       */
      Models::ListFilesResponse listFiles(const Models::ListFilesRequest &request);

      /**
       * @summary 查询所有集群信息，支持分页查询。
       *
       * @description ## 请求说明
       * - 该 API 用于查询用户创建的所有集群信息。
       * - 支持通过 `HiveId` 和 `Name` 参数进行过滤查询。
       * - 分页参数 `PageNumber` 和 `PageSize` 可以控制返回结果的数量和页码，默认每页显示10条记录，最大支持100条。
       * - `StartTime` 和 `EndTime` 参数可用于指定时间范围内的集群信息查询，但非必填项。
       *
       * @param request ListHivesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHivesResponse
       */
      Models::ListHivesResponse listHivesWithOptions(const Models::ListHivesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询所有集群信息，支持分页查询。
       *
       * @description ## 请求说明
       * - 该 API 用于查询用户创建的所有集群信息。
       * - 支持通过 `HiveId` 和 `Name` 参数进行过滤查询。
       * - 分页参数 `PageNumber` 和 `PageSize` 可以控制返回结果的数量和页码，默认每页显示10条记录，最大支持100条。
       * - `StartTime` 和 `EndTime` 参数可用于指定时间范围内的集群信息查询，但非必填项。
       *
       * @param request ListHivesRequest
       * @return ListHivesResponse
       */
      Models::ListHivesResponse listHives(const Models::ListHivesRequest &request);

      /**
       * @summary Retrieves a list of public keys that match the specified criteria. This operation supports pagination.
       *
       * @param request ListPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublicKeysResponse
       */
      Models::ListPublicKeysResponse listPublicKeysWithOptions(const Models::ListPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of public keys that match the specified criteria. This operation supports pagination.
       *
       * @param request ListPublicKeysRequest
       * @return ListPublicKeysResponse
       */
      Models::ListPublicKeysResponse listPublicKeys(const Models::ListPublicKeysRequest &request);

      /**
       * @summary Queries information about the data packets of cloud applications. Paged queries are supported.
       *
       * @param request ListRenderingDataPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingDataPackagesResponse
       */
      Models::ListRenderingDataPackagesResponse listRenderingDataPackagesWithOptions(const Models::ListRenderingDataPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the data packets of cloud applications. Paged queries are supported.
       *
       * @param request ListRenderingDataPackagesRequest
       * @return ListRenderingDataPackagesResponse
       */
      Models::ListRenderingDataPackagesResponse listRenderingDataPackages(const Models::ListRenderingDataPackagesRequest &request);

      /**
       * @summary Queries custom gateways.
       *
       * @description > Specify at least the template ID or the template type.
       *
       * @param request ListRenderingInstanceGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingInstanceGatewayResponse
       */
      Models::ListRenderingInstanceGatewayResponse listRenderingInstanceGatewayWithOptions(const Models::ListRenderingInstanceGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom gateways.
       *
       * @description > Specify at least the template ID or the template type.
       *
       * @param request ListRenderingInstanceGatewayRequest
       * @return ListRenderingInstanceGatewayResponse
       */
      Models::ListRenderingInstanceGatewayResponse listRenderingInstanceGateway(const Models::ListRenderingInstanceGatewayRequest &request);

      /**
       * @summary Lists basic information about cloud application service instances and supports paged queries.
       *
       * @param request ListRenderingInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingInstancesResponse
       */
      Models::ListRenderingInstancesResponse listRenderingInstancesWithOptions(const Models::ListRenderingInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists basic information about cloud application service instances and supports paged queries.
       *
       * @param request ListRenderingInstancesRequest
       * @return ListRenderingInstancesResponse
       */
      Models::ListRenderingInstancesResponse listRenderingInstances(const Models::ListRenderingInstancesRequest &request);

      /**
       * @summary Retrieve a paginated list of cloud application service instances associated with a project.
       *
       * @description ## Request description
       * - This operation enables you to query cloud application service instances in a project using multiple filter conditions, such as status and instance ID.
       *
       * @param request ListRenderingProjectInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingProjectInstancesResponse
       */
      Models::ListRenderingProjectInstancesResponse listRenderingProjectInstancesWithOptions(const Models::ListRenderingProjectInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a paginated list of cloud application service instances associated with a project.
       *
       * @description ## Request description
       * - This operation enables you to query cloud application service instances in a project using multiple filter conditions, such as status and instance ID.
       *
       * @param request ListRenderingProjectInstancesRequest
       * @return ListRenderingProjectInstancesResponse
       */
      Models::ListRenderingProjectInstancesResponse listRenderingProjectInstances(const Models::ListRenderingProjectInstancesRequest &request);

      /**
       * @summary Obtain a paged list of basic information about cloud application projects for the current user.
       *
       * @description ## Request details
       * - This operation returns a paged list of basic information about rendering projects for a specified user.
       * - Filter results by `ProjectId` or `ProjectName`.
       *
       * @param request ListRenderingProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingProjectsResponse
       */
      Models::ListRenderingProjectsResponse listRenderingProjectsWithOptions(const Models::ListRenderingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain a paged list of basic information about cloud application projects for the current user.
       *
       * @description ## Request details
       * - This operation returns a paged list of basic information about rendering projects for a specified user.
       * - Filter results by `ProjectId` or `ProjectName`.
       *
       * @param request ListRenderingProjectsRequest
       * @return ListRenderingProjectsResponse
       */
      Models::ListRenderingProjectsResponse listRenderingProjects(const Models::ListRenderingProjectsRequest &request);

      /**
       * @summary Performs a paged query for the list of cloud application service sessions based on specified conditions.
       *
       * @description ## Request Description
       * - This API supports filtering and paged query of user rendering session lists with various parameter combinations.
       * - You must provide at least one of the `SessionId` or `ClientId` parameters. Neither parameter is mandatory independently. If both parameters are provided, a more precise match is performed based on these two parameters.
       *
       * @param request ListRenderingSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRenderingSessionsResponse
       */
      Models::ListRenderingSessionsResponse listRenderingSessionsWithOptions(const Models::ListRenderingSessionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for the list of cloud application service sessions based on specified conditions.
       *
       * @description ## Request Description
       * - This API supports filtering and paged query of user rendering session lists with various parameter combinations.
       * - You must provide at least one of the `SessionId` or `ClientId` parameters. Neither parameter is mandatory independently. If both parameters are provided, a more precise match is performed based on these two parameters.
       *
       * @param request ListRenderingSessionsRequest
       * @return ListRenderingSessionsResponse
       */
      Models::ListRenderingSessionsResponse listRenderingSessions(const Models::ListRenderingSessionsRequest &request);

      /**
       * @summary 查询规格信息，支持分页查询。
       *
       * @description ## 请求说明
       * - 该 API 用于查询所有可用的云应用服务规格信息。
       * - 支持通过 `Specification` 参数过滤特定规格。
       * - 分页查询时，可以通过 `PageNumber` 和 `PageSize` 参数控制返回的数据量。
       *
       * @param request ListSpecificationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSpecificationsResponse
       */
      Models::ListSpecificationsResponse listSpecificationsWithOptions(const Models::ListSpecificationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询规格信息，支持分页查询。
       *
       * @description ## 请求说明
       * - 该 API 用于查询所有可用的云应用服务规格信息。
       * - 支持通过 `Specification` 参数过滤特定规格。
       * - 分页查询时，可以通过 `PageNumber` 和 `PageSize` 参数控制返回的数据量。
       *
       * @param request ListSpecificationsRequest
       * @return ListSpecificationsResponse
       */
      Models::ListSpecificationsResponse listSpecifications(const Models::ListSpecificationsRequest &request);

      /**
       * @summary Manages secure logons.
       *
       * @param request ManageLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageLoginResponse
       */
      Models::ManageLoginResponse manageLoginWithOptions(const Models::ManageLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages secure logons.
       *
       * @param request ManageLoginRequest
       * @return ManageLoginResponse
       */
      Models::ManageLoginResponse manageLogin(const Models::ManageLoginRequest &request);

      /**
       * @summary Modifies the metadata of a specified workflow.
       *
       * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
       *
       * @param request ModifyComfyWorkflowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyComfyWorkflowResponse
       */
      Models::ModifyComfyWorkflowResponse modifyComfyWorkflowWithOptions(const Models::ModifyComfyWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the metadata of a specified workflow.
       *
       * @description \\> 截图查询目前不支持分页，仅支持按迭代方式。使用返回结果里的extStartTime参数值，作为新请求的StartTime可请求下一页。
       *
       * @param request ModifyComfyWorkflowRequest
       * @return ModifyComfyWorkflowResponse
       */
      Models::ModifyComfyWorkflowResponse modifyComfyWorkflow(const Models::ModifyComfyWorkflowRequest &request);

      /**
       * @summary Update device information.
       *
       * @param request ModifyDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceResponse
       */
      Models::ModifyDeviceResponse modifyDeviceWithOptions(const Models::ModifyDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update device information.
       *
       * @param request ModifyDeviceRequest
       * @return ModifyDeviceResponse
       */
      Models::ModifyDeviceResponse modifyDevice(const Models::ModifyDeviceRequest &request);

      /**
       * @summary Updates the alarm status of a device.
       *
       * @param request ModifyDeviceAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceAlarmResponse
       */
      Models::ModifyDeviceAlarmResponse modifyDeviceAlarmWithOptions(const Models::ModifyDeviceAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the alarm status of a device.
       *
       * @param request ModifyDeviceAlarmRequest
       * @return ModifyDeviceAlarmResponse
       */
      Models::ModifyDeviceAlarmResponse modifyDeviceAlarm(const Models::ModifyDeviceAlarmRequest &request);

      /**
       * @summary Modify the device image capture configuration.
       *
       * @param request ModifyDeviceCaptureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceCaptureResponse
       */
      Models::ModifyDeviceCaptureResponse modifyDeviceCaptureWithOptions(const Models::ModifyDeviceCaptureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the device image capture configuration.
       *
       * @param request ModifyDeviceCaptureRequest
       * @return ModifyDeviceCaptureResponse
       */
      Models::ModifyDeviceCaptureResponse modifyDeviceCapture(const Models::ModifyDeviceCaptureRequest &request);

      /**
       * @summary Updates the list of channels for a device.
       *
       * @param request ModifyDeviceChannelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDeviceChannelsResponse
       */
      Models::ModifyDeviceChannelsResponse modifyDeviceChannelsWithOptions(const Models::ModifyDeviceChannelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the list of channels for a device.
       *
       * @param request ModifyDeviceChannelsRequest
       * @return ModifyDeviceChannelsResponse
       */
      Models::ModifyDeviceChannelsResponse modifyDeviceChannels(const Models::ModifyDeviceChannelsRequest &request);

      /**
       * @summary Modifies the information of a directory.
       *
       * @param request ModifyDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDirectoryResponse
       */
      Models::ModifyDirectoryResponse modifyDirectoryWithOptions(const Models::ModifyDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a directory.
       *
       * @param request ModifyDirectoryRequest
       * @return ModifyDirectoryResponse
       */
      Models::ModifyDirectoryResponse modifyDirectory(const Models::ModifyDirectoryRequest &request);

      /**
       * @summary You can modify the details of a space.
       *
       * @param request ModifyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroupWithOptions(const Models::ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can modify the details of a space.
       *
       * @param request ModifyGroupRequest
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroup(const Models::ModifyGroupRequest &request);

      /**
       * @summary Updates the name or description of a specified cluster.
       *
       * @description ## Request
       * - This API modifies the name and/or description of an existing cluster.
       * - `HiveId` is a required parameter that identifies the cluster to modify.
       * - The `Name` and `Description` parameters are optional. You can specify either or both to update the corresponding attributes of the cluster.
       *
       * @param request ModifyHiveAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHiveAttributeResponse
       */
      Models::ModifyHiveAttributeResponse modifyHiveAttributeWithOptions(const Models::ModifyHiveAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name or description of a specified cluster.
       *
       * @description ## Request
       * - This API modifies the name and/or description of an existing cluster.
       * - `HiveId` is a required parameter that identifies the cluster to modify.
       * - The `Name` and `Description` parameters are optional. You can specify either or both to update the corresponding attributes of the cluster.
       *
       * @param request ModifyHiveAttributeRequest
       * @return ModifyHiveAttributeResponse
       */
      Models::ModifyHiveAttributeResponse modifyHiveAttribute(const Models::ModifyHiveAttributeRequest &request);

      /**
       * @summary Modifies the information of a parent platform.
       *
       * @param request ModifyParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyParentPlatformResponse
       */
      Models::ModifyParentPlatformResponse modifyParentPlatformWithOptions(const Models::ModifyParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a parent platform.
       *
       * @param request ModifyParentPlatformRequest
       * @return ModifyParentPlatformResponse
       */
      Models::ModifyParentPlatformResponse modifyParentPlatform(const Models::ModifyParentPlatformRequest &request);

      /**
       * @summary Change the billing method for a Graphic Computing Service instance.
       *
       * @param request ModifyRenderingChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingChargeTypeResponse
       */
      Models::ModifyRenderingChargeTypeResponse modifyRenderingChargeTypeWithOptions(const Models::ModifyRenderingChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the billing method for a Graphic Computing Service instance.
       *
       * @param request ModifyRenderingChargeTypeRequest
       * @return ModifyRenderingChargeTypeResponse
       */
      Models::ModifyRenderingChargeTypeResponse modifyRenderingChargeType(const Models::ModifyRenderingChargeTypeRequest &request);

      /**
       * @summary Upgrades or downgrades a cloud application service instance.
       *
       * @param request ModifyRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingInstanceResponse
       */
      Models::ModifyRenderingInstanceResponse modifyRenderingInstanceWithOptions(const Models::ModifyRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades a cloud application service instance.
       *
       * @param request ModifyRenderingInstanceRequest
       * @return ModifyRenderingInstanceResponse
       */
      Models::ModifyRenderingInstanceResponse modifyRenderingInstance(const Models::ModifyRenderingInstanceRequest &request);

      /**
       * @summary Modifies the attributes of a cloud application service instance.
       *
       * @param request ModifyRenderingInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingInstanceAttributeResponse
       */
      Models::ModifyRenderingInstanceAttributeResponse modifyRenderingInstanceAttributeWithOptions(const Models::ModifyRenderingInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a cloud application service instance.
       *
       * @param request ModifyRenderingInstanceAttributeRequest
       * @return ModifyRenderingInstanceAttributeResponse
       */
      Models::ModifyRenderingInstanceAttributeResponse modifyRenderingInstanceAttribute(const Models::ModifyRenderingInstanceAttributeRequest &request);

      /**
       * @summary Updates the rate limiting bandwidth for a cloud application service instance. You can call the DescribeRenderingInstance operation to retrieve the current rate limiting value and check the status of the rate limiting update.
       *
       * @param request ModifyRenderingInstanceBandwidthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRenderingInstanceBandwidthResponse
       */
      Models::ModifyRenderingInstanceBandwidthResponse modifyRenderingInstanceBandwidthWithOptions(const Models::ModifyRenderingInstanceBandwidthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rate limiting bandwidth for a cloud application service instance. You can call the DescribeRenderingInstance operation to retrieve the current rate limiting value and check the status of the rate limiting update.
       *
       * @param request ModifyRenderingInstanceBandwidthRequest
       * @return ModifyRenderingInstanceBandwidthResponse
       */
      Models::ModifyRenderingInstanceBandwidthResponse modifyRenderingInstanceBandwidth(const Models::ModifyRenderingInstanceBandwidthRequest &request);

      /**
       * @summary Modifies template information.
       *
       * @param request ModifyTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateResponse
       */
      Models::ModifyTemplateResponse modifyTemplateWithOptions(const Models::ModifyTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies template information.
       *
       * @param request ModifyTemplateRequest
       * @return ModifyTemplateResponse
       */
      Models::ModifyTemplateResponse modifyTemplate(const Models::ModifyTemplateRequest &request);

      /**
       * @summary Moves the specified cloud application service instances from their current cluster to the target Hive.
       *
       * @description ## Request
       * - Ensure the target Hive has sufficient resources to accommodate the instances.
       *
       * @param tmpReq MoveHiveEdgeWorkersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveHiveEdgeWorkersResponse
       */
      Models::MoveHiveEdgeWorkersResponse moveHiveEdgeWorkersWithOptions(const Models::MoveHiveEdgeWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves the specified cloud application service instances from their current cluster to the target Hive.
       *
       * @description ## Request
       * - Ensure the target Hive has sufficient resources to accommodate the instances.
       *
       * @param request MoveHiveEdgeWorkersRequest
       * @return MoveHiveEdgeWorkersResponse
       */
      Models::MoveHiveEdgeWorkersResponse moveHiveEdgeWorkers(const Models::MoveHiveEdgeWorkersRequest &request);

      /**
       * @summary Activates the service.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenVsServiceResponse
       */
      Models::OpenVsServiceResponse openVsServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the service.
       *
       * @return OpenVsServiceResponse
       */
      Models::OpenVsServiceResponse openVsService();

      /**
       * @summary Push a file to a specified cloud application service instance. This is an asynchronous operation. You can query the push progress using the ListFilePushStatuses operation.
       *
       * @param request PushFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushFileResponse
       */
      Models::PushFileResponse pushFileWithOptions(const Models::PushFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Push a file to a specified cloud application service instance. This is an asynchronous operation. You can query the push progress using the ListFilePushStatuses operation.
       *
       * @param request PushFileRequest
       * @return PushFileResponse
       */
      Models::PushFileResponse pushFile(const Models::PushFileRequest &request);

      /**
       * @summary Restarts a cloud application service instance. You can call the DescribeRenderingInstance API to monitor the restart progress.
       *
       * @param request RebootRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRenderingInstanceResponse
       */
      Models::RebootRenderingInstanceResponse rebootRenderingInstanceWithOptions(const Models::RebootRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a cloud application service instance. You can call the DescribeRenderingInstance API to monitor the restart progress.
       *
       * @param request RebootRenderingInstanceRequest
       * @return RebootRenderingInstanceResponse
       */
      Models::RebootRenderingInstanceResponse rebootRenderingInstance(const Models::RebootRenderingInstanceRequest &request);

      /**
       * @summary Restarts the host of a cloud application service instance.
       *
       * @param tmpReq RebootRenderingServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootRenderingServerResponse
       */
      Models::RebootRenderingServerResponse rebootRenderingServerWithOptions(const Models::RebootRenderingServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts the host of a cloud application service instance.
       *
       * @param request RebootRenderingServerRequest
       * @return RebootRenderingServerResponse
       */
      Models::RebootRenderingServerResponse rebootRenderingServer(const Models::RebootRenderingServerRequest &request);

      /**
       * @summary Recover data to a Graphic Computing Service instance
       *
       * @param request RecoverRenderingDataPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverRenderingDataPackageResponse
       */
      Models::RecoverRenderingDataPackageResponse recoverRenderingDataPackageWithOptions(const Models::RecoverRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recover data to a Graphic Computing Service instance
       *
       * @param request RecoverRenderingDataPackageRequest
       * @return RecoverRenderingDataPackageResponse
       */
      Models::RecoverRenderingDataPackageResponse recoverRenderingDataPackage(const Models::RecoverRenderingDataPackageRequest &request);

      /**
       * @summary Call RefreshRenderingInstanceStreaming to refresh the stream connection for a cloud application service instance.
       *
       * @description > Specify at least one of the template ID or template type.
       *
       * @param tmpReq RefreshRenderingInstanceStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshRenderingInstanceStreamingResponse
       */
      Models::RefreshRenderingInstanceStreamingResponse refreshRenderingInstanceStreamingWithOptions(const Models::RefreshRenderingInstanceStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call RefreshRenderingInstanceStreaming to refresh the stream connection for a cloud application service instance.
       *
       * @description > Specify at least one of the template ID or template type.
       *
       * @param request RefreshRenderingInstanceStreamingRequest
       * @return RefreshRenderingInstanceStreamingResponse
       */
      Models::RefreshRenderingInstanceStreamingResponse refreshRenderingInstanceStreaming(const Models::RefreshRenderingInstanceStreamingRequest &request);

      /**
       * @summary Release a cloud application service data pack
       *
       * @param request ReleaseRenderingDataPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseRenderingDataPackageResponse
       */
      Models::ReleaseRenderingDataPackageResponse releaseRenderingDataPackageWithOptions(const Models::ReleaseRenderingDataPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Release a cloud application service data pack
       *
       * @param request ReleaseRenderingDataPackageRequest
       * @return ReleaseRenderingDataPackageResponse
       */
      Models::ReleaseRenderingDataPackageResponse releaseRenderingDataPackage(const Models::ReleaseRenderingDataPackageRequest &request);

      /**
       * @summary Invoke ReleaseRenderingInstance to release a Graphic Computing Service application instance.
       *
       * @param request ReleaseRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseRenderingInstanceResponse
       */
      Models::ReleaseRenderingInstanceResponse releaseRenderingInstanceWithOptions(const Models::ReleaseRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ReleaseRenderingInstance to release a Graphic Computing Service application instance.
       *
       * @param request ReleaseRenderingInstanceRequest
       * @return ReleaseRenderingInstanceResponse
       */
      Models::ReleaseRenderingInstanceResponse releaseRenderingInstance(const Models::ReleaseRenderingInstanceRequest &request);

      /**
       * @summary Invoke RenewRenderingInstance to renew a cloud application service instance.
       *
       * @param request RenewRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewRenderingInstanceResponse
       */
      Models::RenewRenderingInstanceResponse renewRenderingInstanceWithOptions(const Models::RenewRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke RenewRenderingInstance to renew a cloud application service instance.
       *
       * @param request RenewRenderingInstanceRequest
       * @return RenewRenderingInstanceResponse
       */
      Models::RenewRenderingInstanceResponse renewRenderingInstance(const Models::RenewRenderingInstanceRequest &request);

      /**
       * @summary Resets a cloud application service instance. You can query the DescribeRenderingInstance interface to obtain the reset progress.
       *
       * @param request ResetRenderingInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetRenderingInstanceResponse
       */
      Models::ResetRenderingInstanceResponse resetRenderingInstanceWithOptions(const Models::ResetRenderingInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a cloud application service instance. You can query the DescribeRenderingInstance interface to obtain the reset progress.
       *
       * @param request ResetRenderingInstanceRequest
       * @return ResetRenderingInstanceResponse
       */
      Models::ResetRenderingInstanceResponse resetRenderingInstance(const Models::ResetRenderingInstanceRequest &request);

      /**
       * @summary Resumes pushing for a stream.
       *
       * @param request ResumeVsStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeVsStreamResponse
       */
      Models::ResumeVsStreamResponse resumeVsStreamWithOptions(const Models::ResumeVsStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes pushing for a stream.
       *
       * @param request ResumeVsStreamRequest
       * @return ResumeVsStreamResponse
       */
      Models::ResumeVsStreamResponse resumeVsStream(const Models::ResumeVsStreamRequest &request);

      /**
       * @summary Sends shell control instructions to a cloud application service instance. This operation supports both sync and asynchronous command responses. The sync scenario is not suitable for time-consuming commands. The maximum execution time cannot exceed 30 s. In an asynchronous scenario, you can call the GetRenderingInstanceCommandsStatus operation to query the execution status and result of a command.
       *
       * @param request SendRenderingInstanceCommandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendRenderingInstanceCommandsResponse
       */
      Models::SendRenderingInstanceCommandsResponse sendRenderingInstanceCommandsWithOptions(const Models::SendRenderingInstanceCommandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends shell control instructions to a cloud application service instance. This operation supports both sync and asynchronous command responses. The sync scenario is not suitable for time-consuming commands. The maximum execution time cannot exceed 30 s. In an asynchronous scenario, you can call the GetRenderingInstanceCommandsStatus operation to query the execution status and result of a command.
       *
       * @param request SendRenderingInstanceCommandsRequest
       * @return SendRenderingInstanceCommandsResponse
       */
      Models::SendRenderingInstanceCommandsResponse sendRenderingInstanceCommands(const Models::SendRenderingInstanceCommandsRequest &request);

      /**
       * @summary Set a preset position.
       *
       * @param request SetPresetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPresetResponse
       */
      Models::SetPresetResponse setPresetWithOptions(const Models::SetPresetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set a preset position.
       *
       * @param request SetPresetRequest
       * @return SetPresetResponse
       */
      Models::SetPresetResponse setPreset(const Models::SetPresetRequest &request);

      /**
       * @summary Enable or disable the certificate feature for a domain name.
       *
       * @param request SetVsDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVsDomainCertificateResponse
       */
      Models::SetVsDomainCertificateResponse setVsDomainCertificateWithOptions(const Models::SetVsDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable the certificate feature for a domain name.
       *
       * @param request SetVsDomainCertificateRequest
       * @return SetVsDomainCertificateResponse
       */
      Models::SetVsDomainCertificateResponse setVsDomainCertificate(const Models::SetVsDomainCertificateRequest &request);

      /**
       * @summary Configure stream ingest callbacks.
       *
       * @param request SetVsStreamsNotifyUrlConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVsStreamsNotifyUrlConfigResponse
       */
      Models::SetVsStreamsNotifyUrlConfigResponse setVsStreamsNotifyUrlConfigWithOptions(const Models::SetVsStreamsNotifyUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configure stream ingest callbacks.
       *
       * @param request SetVsStreamsNotifyUrlConfigRequest
       * @return SetVsStreamsNotifyUrlConfigResponse
       */
      Models::SetVsStreamsNotifyUrlConfigResponse setVsStreamsNotifyUrlConfig(const Models::SetVsStreamsNotifyUrlConfigRequest &request);

      /**
       * @summary Start stream pulling from a device. This action starts all streams on the device.
       *
       * @description Each device currently supports only one ingest endpoint. The effect is the same as StartStream.
       *
       * @param request StartDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDeviceResponse
       */
      Models::StartDeviceResponse startDeviceWithOptions(const Models::StartDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start stream pulling from a device. This action starts all streams on the device.
       *
       * @description Each device currently supports only one ingest endpoint. The effect is the same as StartStream.
       *
       * @param request StartDeviceRequest
       * @return StartDeviceResponse
       */
      Models::StartDeviceResponse startDevice(const Models::StartDeviceRequest &request);

      /**
       * @summary Starts interactions with the parent platform, such as registration and keep-alive.
       *
       * @param request StartParentPlatformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartParentPlatformResponse
       */
      Models::StartParentPlatformResponse startParentPlatformWithOptions(const Models::StartParentPlatformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts interactions with the parent platform, such as registration and keep-alive.
       *
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
       * @summary Starts on-demand recording for the specified stream.
       *
       * @description > - An on-demand record template is required. You must first attach one to the space or stream.
       * >
       * > - You can specify a stream in two ways: using its ID or its PlayDomain/App/Name.
       *
       * @param request StartRecordStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRecordStreamResponse
       */
      Models::StartRecordStreamResponse startRecordStreamWithOptions(const Models::StartRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts on-demand recording for the specified stream.
       *
       * @description > - An on-demand record template is required. You must first attach one to the space or stream.
       * >
       * > - You can specify a stream in two ways: using its ID or its PlayDomain/App/Name.
       *
       * @param request StartRecordStreamRequest
       * @return StartRecordStreamResponse
       */
      Models::StartRecordStreamResponse startRecordStream(const Models::StartRecordStreamRequest &request);

      /**
       * @summary Schedules an idle cloud application service instance for the requesting client (ClientId) and starts the service. If the requesting client (ClientId) sends another start request after a successful start and the associated session is in the SessionStartSuspended state, the session is restarted. If the session is in any other state, the session information is returned directly.
       *
       * @param tmpReq StartRenderingSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRenderingSessionResponse
       */
      Models::StartRenderingSessionResponse startRenderingSessionWithOptions(const Models::StartRenderingSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Schedules an idle cloud application service instance for the requesting client (ClientId) and starts the service. If the requesting client (ClientId) sends another start request after a successful start and the associated session is in the SessionStartSuspended state, the session is restarted. If the session is in any other state, the session information is returned directly.
       *
       * @param request StartRenderingSessionRequest
       * @return StartRenderingSessionResponse
       */
      Models::StartRenderingSessionResponse startRenderingSession(const Models::StartRenderingSessionRequest &request);

      /**
       * @summary Start a stream.
       *
       * @param request StartStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartStreamResponse
       */
      Models::StartStreamResponse startStreamWithOptions(const Models::StartStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start a stream.
       *
       * @param request StartStreamRequest
       * @return StartStreamResponse
       */
      Models::StartStreamResponse startStream(const Models::StartStreamRequest &request);

      /**
       * @summary Starts forwarding a stream to an external address.
       *
       * @param request StartTransferStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTransferStreamResponse
       */
      Models::StartTransferStreamResponse startTransferStreamWithOptions(const Models::StartTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts forwarding a stream to an external address.
       *
       * @param request StartTransferStreamRequest
       * @return StartTransferStreamResponse
       */
      Models::StartTransferStreamResponse startTransferStream(const Models::StartTransferStreamRequest &request);

      /**
       * @summary Stops lens adjustments, such as aperture or zoom changes.
       *
       * @param request StopAdjustRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAdjustResponse
       */
      Models::StopAdjustResponse stopAdjustWithOptions(const Models::StopAdjustRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops lens adjustments, such as aperture or zoom changes.
       *
       * @param request StopAdjustRequest
       * @return StopAdjustResponse
       */
      Models::StopAdjustResponse stopAdjust(const Models::StopAdjustRequest &request);

      /**
       * @summary Stops stream pulling for a device. This operation terminates all streams on that device.
       *
       * @description Stops stream pulling for a device. This operation terminates all streams on that device.
       *
       * @param request StopDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDeviceResponse
       */
      Models::StopDeviceResponse stopDeviceWithOptions(const Models::StopDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops stream pulling for a device. This operation terminates all streams on that device.
       *
       * @description Stops stream pulling for a device. This operation terminates all streams on that device.
       *
       * @param request StopDeviceRequest
       * @return StopDeviceResponse
       */
      Models::StopDeviceResponse stopDevice(const Models::StopDeviceRequest &request);

      /**
       * @summary Stops camera movement, such as panning, tilting, and zooming.
       *
       * @param request StopMoveRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopMoveResponse
       */
      Models::StopMoveResponse stopMoveWithOptions(const Models::StopMoveRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops camera movement, such as panning, tilting, and zooming.
       *
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
       * @summary Stops on-demand recording for a specified stream.
       *
       * @description > You can specify a stream by ID or by PlayDomain/App/Name.
       *
       * @param request StopRecordStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRecordStreamResponse
       */
      Models::StopRecordStreamResponse stopRecordStreamWithOptions(const Models::StopRecordStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops on-demand recording for a specified stream.
       *
       * @description > You can specify a stream by ID or by PlayDomain/App/Name.
       *
       * @param request StopRecordStreamRequest
       * @return StopRecordStreamResponse
       */
      Models::StopRecordStreamResponse stopRecordStream(const Models::StopRecordStreamRequest &request);

      /**
       * @summary Shut down the specified cloud application service session and revoke the associated instance resources.
       *
       * @description ## Request information
       *
       * @param request StopRenderingSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRenderingSessionResponse
       */
      Models::StopRenderingSessionResponse stopRenderingSessionWithOptions(const Models::StopRenderingSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shut down the specified cloud application service session and revoke the associated instance resources.
       *
       * @description ## Request information
       *
       * @param request StopRenderingSessionRequest
       * @return StopRenderingSessionResponse
       */
      Models::StopRenderingSessionResponse stopRenderingSession(const Models::StopRenderingSessionRequest &request);

      /**
       * @summary Stops a stream.
       *
       * @param request StopStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopStreamResponse
       */
      Models::StopStreamResponse stopStreamWithOptions(const Models::StopStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stream.
       *
       * @param request StopStreamRequest
       * @return StopStreamResponse
       */
      Models::StopStreamResponse stopStream(const Models::StopStreamRequest &request);

      /**
       * @summary Stops a stream.
       *
       * @param request StopTransferStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTransferStreamResponse
       */
      Models::StopTransferStreamResponse stopTransferStreamWithOptions(const Models::StopTransferStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a stream.
       *
       * @param request StopTransferStreamRequest
       * @return StopTransferStreamResponse
       */
      Models::StopTransferStreamResponse stopTransferStream(const Models::StopTransferStreamRequest &request);

      /**
       * @summary Synchronizes platform channel information.
       *
       * @param request SyncCatalogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncCatalogsResponse
       */
      Models::SyncCatalogsResponse syncCatalogsWithOptions(const Models::SyncCatalogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes platform channel information.
       *
       * @param request SyncCatalogsRequest
       * @return SyncCatalogsResponse
       */
      Models::SyncCatalogsResponse syncCatalogs(const Models::SyncCatalogsRequest &request);

      /**
       * @summary Detach a device from a folder.
       *
       * @param request UnbindDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindDirectoryResponse
       */
      Models::UnbindDirectoryResponse unbindDirectoryWithOptions(const Models::UnbindDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach a device from a folder.
       *
       * @param request UnbindDirectoryRequest
       * @return UnbindDirectoryResponse
       */
      Models::UnbindDirectoryResponse unbindDirectory(const Models::UnbindDirectoryRequest &request);

      /**
       * @summary Dissociates a device from a parent platform push configuration so that the device is no longer pushed.
       *
       * @param request UnbindParentPlatformDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindParentPlatformDeviceResponse
       */
      Models::UnbindParentPlatformDeviceResponse unbindParentPlatformDeviceWithOptions(const Models::UnbindParentPlatformDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a device from a parent platform push configuration so that the device is no longer pushed.
       *
       * @param request UnbindParentPlatformDeviceRequest
       * @return UnbindParentPlatformDeviceResponse
       */
      Models::UnbindParentPlatformDeviceResponse unbindParentPlatformDevice(const Models::UnbindParentPlatformDeviceRequest &request);

      /**
       * @summary Unbinds a purchased device from a space.
       *
       * @param request UnbindPurchasedDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPurchasedDeviceResponse
       */
      Models::UnbindPurchasedDeviceResponse unbindPurchasedDeviceWithOptions(const Models::UnbindPurchasedDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a purchased device from a space.
       *
       * @param request UnbindPurchasedDeviceRequest
       * @return UnbindPurchasedDeviceResponse
       */
      Models::UnbindPurchasedDeviceResponse unbindPurchasedDevice(const Models::UnbindPurchasedDeviceRequest &request);

      /**
       * @summary Unbind a template from a specified instance, such as a group instance or a stream.
       *
       * @description > Specify at least one of TemplateId or TemplateType.
       *
       * @param request UnbindTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindTemplateResponse
       */
      Models::UnbindTemplateResponse unbindTemplateWithOptions(const Models::UnbindTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind a template from a specified instance, such as a group instance or a stream.
       *
       * @description > Specify at least one of TemplateId or TemplateType.
       *
       * @param request UnbindTemplateRequest
       * @return UnbindTemplateResponse
       */
      Models::UnbindTemplateResponse unbindTemplate(const Models::UnbindTemplateRequest &request);

      /**
       * @summary You can uninstall a specified cloud application from a specified cloud application instance. This operation is asynchronous. You can use the ListCloudAppInstallations operation to check the uninstallation progress. After successful uninstallation, the query operation no longer returns related information.
       *
       * @param tmpReq UninstallCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallCloudAppResponse
       */
      Models::UninstallCloudAppResponse uninstallCloudAppWithOptions(const Models::UninstallCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can uninstall a specified cloud application from a specified cloud application instance. This operation is asynchronous. You can use the ListCloudAppInstallations operation to check the uninstallation progress. After successful uninstallation, the query operation no longer returns related information.
       *
       * @param request UninstallCloudAppRequest
       * @return UninstallCloudAppResponse
       */
      Models::UninstallCloudAppResponse uninstallCloudApp(const Models::UninstallCloudAppRequest &request);

      /**
       * @summary Unlock a device.
       *
       * @param request UnlockDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockDeviceResponse
       */
      Models::UnlockDeviceResponse unlockDeviceWithOptions(const Models::UnlockDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlock a device.
       *
       * @param request UnlockDeviceRequest
       * @return UnlockDeviceResponse
       */
      Models::UnlockDeviceResponse unlockDevice(const Models::UnlockDeviceRequest &request);

      /**
       * @summary Updates information for a cloud application, such as its description and tags. You can upload patch or hotfix packages and create hotfix packages for the Android cloud application marketplace. A cloud application supports up to 20 patch packages, but only one package can be in the uploading state at a time.
       *
       * @param tmpReq UpdateCloudAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAppInfoResponse
       */
      Models::UpdateCloudAppInfoResponse updateCloudAppInfoWithOptions(const Models::UpdateCloudAppInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates information for a cloud application, such as its description and tags. You can upload patch or hotfix packages and create hotfix packages for the Android cloud application marketplace. A cloud application supports up to 20 patch packages, but only one package can be in the uploading state at a time.
       *
       * @param request UpdateCloudAppInfoRequest
       * @return UpdateCloudAppInfoResponse
       */
      Models::UpdateCloudAppInfoResponse updateCloudAppInfo(const Models::UpdateCloudAppInfoRequest &request);

      /**
       * @summary Update basic information for a file, such as its description.
       *
       * @param request UpdateFileInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFileInfoResponse
       */
      Models::UpdateFileInfoResponse updateFileInfoWithOptions(const Models::UpdateFileInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update basic information for a file, such as its description.
       *
       * @param request UpdateFileInfoRequest
       * @return UpdateFileInfoResponse
       */
      Models::UpdateFileInfoResponse updateFileInfo(const Models::UpdateFileInfoRequest &request);

      /**
       * @summary This operation updates the configuration parameters of a cloud application service instance. It lets you modify various configurations of the Cloud Android system, such as prop, location, and network, to create a real device simulation.
       * You can retrieve the configured values for the real device simulation by calling the DescribeRenderingInstance API.
       * To query the configuration parameters of the real-time environment, see the DescribeRenderingInstanceConfiguration API.
       *
       * @param tmpReq UpdateRenderingInstanceConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRenderingInstanceConfigurationResponse
       */
      Models::UpdateRenderingInstanceConfigurationResponse updateRenderingInstanceConfigurationWithOptions(const Models::UpdateRenderingInstanceConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation updates the configuration parameters of a cloud application service instance. It lets you modify various configurations of the Cloud Android system, such as prop, location, and network, to create a real device simulation.
       * You can retrieve the configured values for the real device simulation by calling the DescribeRenderingInstance API.
       * To query the configuration parameters of the real-time environment, see the DescribeRenderingInstanceConfiguration API.
       *
       * @param request UpdateRenderingInstanceConfigurationRequest
       * @return UpdateRenderingInstanceConfigurationResponse
       */
      Models::UpdateRenderingInstanceConfigurationResponse updateRenderingInstanceConfiguration(const Models::UpdateRenderingInstanceConfigurationRequest &request);

      /**
       * @summary Updates the settings of a cloud application service instance.
       *
       * @param tmpReq UpdateRenderingInstanceSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRenderingInstanceSettingsResponse
       */
      Models::UpdateRenderingInstanceSettingsResponse updateRenderingInstanceSettingsWithOptions(const Models::UpdateRenderingInstanceSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the settings of a cloud application service instance.
       *
       * @param request UpdateRenderingInstanceSettingsRequest
       * @return UpdateRenderingInstanceSettingsResponse
       */
      Models::UpdateRenderingInstanceSettingsResponse updateRenderingInstanceSettings(const Models::UpdateRenderingInstanceSettingsRequest &request);

      /**
       * @summary Updates a project’s properties.
       *
       * @param tmpReq UpdateRenderingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRenderingProjectResponse
       */
      Models::UpdateRenderingProjectResponse updateRenderingProjectWithOptions(const Models::UpdateRenderingProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a project’s properties.
       *
       * @param request UpdateRenderingProjectRequest
       * @return UpdateRenderingProjectResponse
       */
      Models::UpdateRenderingProjectResponse updateRenderingProject(const Models::UpdateRenderingProjectRequest &request);

      /**
       * @summary Updates the configuration for stream pulling. You can modify the start and end times of origin server addresses in an existing stream pulling task.
       *
       * @param request UpdateVsPullStreamInfoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVsPullStreamInfoConfigResponse
       */
      Models::UpdateVsPullStreamInfoConfigResponse updateVsPullStreamInfoConfigWithOptions(const Models::UpdateVsPullStreamInfoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration for stream pulling. You can modify the start and end times of origin server addresses in an existing stream pulling task.
       *
       * @param request UpdateVsPullStreamInfoConfigRequest
       * @return UpdateVsPullStreamInfoConfigResponse
       */
      Models::UpdateVsPullStreamInfoConfigResponse updateVsPullStreamInfoConfig(const Models::UpdateVsPullStreamInfoConfigRequest &request);

      /**
       * @summary Upload or list a cloud application package. This is an asynchronous API. Use the ListCloudApps API to check upload progress.
       *
       * @param tmpReq UploadCloudAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadCloudAppResponse
       */
      Models::UploadCloudAppResponse uploadCloudAppWithOptions(const Models::UploadCloudAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload or list a cloud application package. This is an asynchronous API. Use the ListCloudApps API to check upload progress.
       *
       * @param request UploadCloudAppRequest
       * @return UploadCloudAppResponse
       */
      Models::UploadCloudAppResponse uploadCloudApp(const Models::UploadCloudAppRequest &request);

      /**
       * @summary Uploads a file from a public URL to local or cloud storage. This is an asynchronous operation. You can call the ListFiles operation to monitor the upload progress.
       *
       * @param request UploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFileWithOptions(const Models::UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a file from a public URL to local or cloud storage. This is an asynchronous operation. You can call the ListFiles operation to monitor the upload progress.
       *
       * @param request UploadFileRequest
       * @return UploadFileResponse
       */
      Models::UploadFileResponse uploadFile(const Models::UploadFileRequest &request);

      /**
       * @summary Upload a new public key.
       *
       * @param request UploadPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadPublicKeyResponse
       */
      Models::UploadPublicKeyResponse uploadPublicKeyWithOptions(const Models::UploadPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a new public key.
       *
       * @param request UploadPublicKeyRequest
       * @return UploadPublicKeyResponse
       */
      Models::UploadPublicKeyResponse uploadPublicKey(const Models::UploadPublicKeyRequest &request);

      /**
       * @summary VerifyVsDomainOwner
       *
       * @param request VerifyVsDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyVsDomainOwnerResponse
       */
      Models::VerifyVsDomainOwnerResponse verifyVsDomainOwnerWithOptions(const Models::VerifyVsDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary VerifyVsDomainOwner
       *
       * @param request VerifyVsDomainOwnerRequest
       * @return VerifyVsDomainOwnerResponse
       */
      Models::VerifyVsDomainOwnerResponse verifyVsDomainOwner(const Models::VerifyVsDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
