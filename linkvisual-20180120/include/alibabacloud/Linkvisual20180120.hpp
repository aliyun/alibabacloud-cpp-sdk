// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_LINKVISUAL20180120_HPP_
#define ALIBABACLOUD_LINKVISUAL20180120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Linkvisual20180120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Linkvisual20180120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an intelligent alert event recording plan for an IP camera.
       *
       * @param request AddEventRecordPlanDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEventRecordPlanDeviceResponse
       */
      Models::AddEventRecordPlanDeviceResponse addEventRecordPlanDeviceWithOptions(const Models::AddEventRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an intelligent alert event recording plan for an IP camera.
       *
       * @param request AddEventRecordPlanDeviceRequest
       * @return AddEventRecordPlanDeviceResponse
       */
      Models::AddEventRecordPlanDeviceResponse addEventRecordPlanDevice(const Models::AddEventRecordPlanDeviceRequest &request);

      /**
       * @summary Creates a device group for the face library.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - After you invoke this API operation, the system returns the ID of the device group (**DeviceGroupId**). Save this value locally for use when invoking other API operations.
       *
       * @param request AddFaceDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceDeviceGroupResponse
       */
      Models::AddFaceDeviceGroupResponse addFaceDeviceGroupWithOptions(const Models::AddFaceDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a device group for the face library.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - After you invoke this API operation, the system returns the ID of the device group (**DeviceGroupId**). Save this value locally for use when invoking other API operations.
       *
       * @param request AddFaceDeviceGroupRequest
       * @return AddFaceDeviceGroupResponse
       */
      Models::AddFaceDeviceGroupResponse addFaceDeviceGroup(const Models::AddFaceDeviceGroupRequest &request);

      /**
       * @summary Adds a device to a device group.
       *
       * @param request AddFaceDeviceToDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceDeviceToDeviceGroupResponse
       */
      Models::AddFaceDeviceToDeviceGroupResponse addFaceDeviceToDeviceGroupWithOptions(const Models::AddFaceDeviceToDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a device to a device group.
       *
       * @param request AddFaceDeviceToDeviceGroupRequest
       * @return AddFaceDeviceToDeviceGroupResponse
       */
      Models::AddFaceDeviceToDeviceGroupResponse addFaceDeviceToDeviceGroup(const Models::AddFaceDeviceToDeviceGroupRequest &request);

      /**
       * @summary Adds a user to the face database.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - Configure a URL for downloading the user\\"s face image in advance.
       *     > Only JPEG and JPG image formats are supported, and the image URL cannot contain Chinese characters.
       * - After you invoke this API operation, the system returns a user ID (**UserId**). Save this value locally for use when you invoke other API operations.
       *
       * @param request AddFaceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceUserResponse
       */
      Models::AddFaceUserResponse addFaceUserWithOptions(const Models::AddFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to the face database.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - Configure a URL for downloading the user\\"s face image in advance.
       *     > Only JPEG and JPG image formats are supported, and the image URL cannot contain Chinese characters.
       * - After you invoke this API operation, the system returns a user ID (**UserId**). Save this value locally for use when you invoke other API operations.
       *
       * @param request AddFaceUserRequest
       * @return AddFaceUserResponse
       */
      Models::AddFaceUserResponse addFaceUser(const Models::AddFaceUserRequest &request);

      /**
       * @summary Creates a user group.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) limit for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - After you invoke this API operation, the system returns the ID of the user group (**UserGroupId**). Save this value locally for use when you invoke other API operations.
       *
       * @param request AddFaceUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceUserGroupResponse
       */
      Models::AddFaceUserGroupResponse addFaceUserGroupWithOptions(const Models::AddFaceUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user group.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) limit for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - After you invoke this API operation, the system returns the ID of the user group (**UserGroupId**). Save this value locally for use when you invoke other API operations.
       *
       * @param request AddFaceUserGroupRequest
       * @return AddFaceUserGroupResponse
       */
      Models::AddFaceUserGroupResponse addFaceUserGroup(const Models::AddFaceUserGroupRequest &request);

      /**
       * @summary Adds a face synchronization relationship between a user group and a device group.
       *
       * @param request AddFaceUserGroupAndDeviceGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::AddFaceUserGroupAndDeviceGroupRelationResponse addFaceUserGroupAndDeviceGroupRelationWithOptions(const Models::AddFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a face synchronization relationship between a user group and a device group.
       *
       * @param request AddFaceUserGroupAndDeviceGroupRelationRequest
       * @return AddFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::AddFaceUserGroupAndDeviceGroupRelationResponse addFaceUserGroupAndDeviceGroupRelation(const Models::AddFaceUserGroupAndDeviceGroupRelationRequest &request);

      /**
       * @summary Adds a face image for a user in the face database.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - Configure a download URL for the user\\"s face image in advance.
       *     > Only images in JPEG and JPG format are supported, and the image URL cannot contain Chinese characters.
       * - After you invoke this API operation, the system returns the unique identity (**Data**) of the user\\"s face image. Save this value locally for use when you invoke other API operations.
       *
       * @param request AddFaceUserPictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceUserPictureResponse
       */
      Models::AddFaceUserPictureResponse addFaceUserPictureWithOptions(const Models::AddFaceUserPictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a face image for a user in the face database.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       * - Configure a download URL for the user\\"s face image in advance.
       *     > Only images in JPEG and JPG format are supported, and the image URL cannot contain Chinese characters.
       * - After you invoke this API operation, the system returns the unique identity (**Data**) of the user\\"s face image. Save this value locally for use when you invoke other API operations.
       *
       * @param request AddFaceUserPictureRequest
       * @return AddFaceUserPictureResponse
       */
      Models::AddFaceUserPictureResponse addFaceUserPicture(const Models::AddFaceUserPictureRequest &request);

      /**
       * @summary Adds a user to a user group.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request AddFaceUserToUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceUserToUserGroupResponse
       */
      Models::AddFaceUserToUserGroupResponse addFaceUserToUserGroupWithOptions(const Models::AddFaceUserToUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a user group.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request AddFaceUserToUserGroupRequest
       * @return AddFaceUserToUserGroupResponse
       */
      Models::AddFaceUserToUserGroupResponse addFaceUserToUserGroup(const Models::AddFaceUserToUserGroupRequest &request);

      /**
       * @summary Adds a continuous recording plan for an IPC device.
       *
       * @param request AddRecordPlanDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecordPlanDeviceResponse
       */
      Models::AddRecordPlanDeviceResponse addRecordPlanDeviceWithOptions(const Models::AddRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a continuous recording plan for an IPC device.
       *
       * @param request AddRecordPlanDeviceRequest
       * @return AddRecordPlanDeviceResponse
       */
      Models::AddRecordPlanDeviceResponse addRecordPlanDevice(const Models::AddRecordPlanDeviceRequest &request);

      /**
       * @param request BatchQueryVisionDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryVisionDeviceInfoResponse
       */
      Models::BatchQueryVisionDeviceInfoResponse batchQueryVisionDeviceInfoWithOptions(const Models::BatchQueryVisionDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchQueryVisionDeviceInfoRequest
       * @return BatchQueryVisionDeviceInfoResponse
       */
      Models::BatchQueryVisionDeviceInfoResponse batchQueryVisionDeviceInfo(const Models::BatchQueryVisionDeviceInfoRequest &request);

      /**
       * @summary Binds devices to an image search instance in batches.
       *
       * @description ## Limits
       * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the invocation failed.
       *
       * @param request BindPictureSearchAppWithDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindPictureSearchAppWithDevicesResponse
       */
      Models::BindPictureSearchAppWithDevicesResponse bindPictureSearchAppWithDevicesWithOptions(const Models::BindPictureSearchAppWithDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds devices to an image search instance in batches.
       *
       * @description ## Limits
       * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the invocation failed.
       *
       * @param request BindPictureSearchAppWithDevicesRequest
       * @return BindPictureSearchAppWithDevicesResponse
       */
      Models::BindPictureSearchAppWithDevicesResponse bindPictureSearchAppWithDevices(const Models::BindPictureSearchAppWithDevicesRequest &request);

      /**
       * @summary Checks whether the face of a specified user is successfully synchronized on the device.
       *
       * @param request CheckFaceUserDoExistOnDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckFaceUserDoExistOnDeviceResponse
       */
      Models::CheckFaceUserDoExistOnDeviceResponse checkFaceUserDoExistOnDeviceWithOptions(const Models::CheckFaceUserDoExistOnDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the face of a specified user is successfully synchronized on the device.
       *
       * @param request CheckFaceUserDoExistOnDeviceRequest
       * @return CheckFaceUserDoExistOnDeviceResponse
       */
      Models::CheckFaceUserDoExistOnDeviceResponse checkFaceUserDoExistOnDevice(const Models::CheckFaceUserDoExistOnDeviceRequest &request);

      /**
       * @summary Clears all face databases under a specified business isolation ID for a V-series edge all-in-one machine.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request ClearFaceDeviceDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearFaceDeviceDBResponse
       */
      Models::ClearFaceDeviceDBResponse clearFaceDeviceDBWithOptions(const Models::ClearFaceDeviceDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears all face databases under a specified business isolation ID for a V-series edge all-in-one machine.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request ClearFaceDeviceDBRequest
       * @return ClearFaceDeviceDBResponse
       */
      Models::ClearFaceDeviceDBResponse clearFaceDeviceDB(const Models::ClearFaceDeviceDBRequest &request);

      /**
       * @summary Creates a recording plan for intelligent alert events.
       *
       * @param request CreateEventRecordPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventRecordPlanResponse
       */
      Models::CreateEventRecordPlanResponse createEventRecordPlanWithOptions(const Models::CreateEventRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a recording plan for intelligent alert events.
       *
       * @param request CreateEventRecordPlanRequest
       * @return CreateEventRecordPlanResponse
       */
      Models::CreateEventRecordPlanResponse createEventRecordPlan(const Models::CreateEventRecordPlanRequest &request);

      /**
       * @param request CreateGbDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGbDeviceResponse
       */
      Models::CreateGbDeviceResponse createGbDeviceWithOptions(const Models::CreateGbDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateGbDeviceRequest
       * @return CreateGbDeviceResponse
       */
      Models::CreateGbDeviceResponse createGbDevice(const Models::CreateGbDeviceRequest &request);

      /**
       * @summary Creates a local video recording upload job.
       *
       * @description A single local video recording upload job supports uploading up to 200 files. The maximum number of items in the TimeSlot list is 200.
       *
       * @param request CreateLocalFileUploadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLocalFileUploadJobResponse
       */
      Models::CreateLocalFileUploadJobResponse createLocalFileUploadJobWithOptions(const Models::CreateLocalFileUploadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a local video recording upload job.
       *
       * @description A single local video recording upload job supports uploading up to 200 files. The maximum number of items in the TimeSlot list is 200.
       *
       * @param request CreateLocalFileUploadJobRequest
       * @return CreateLocalFileUploadJobResponse
       */
      Models::CreateLocalFileUploadJobResponse createLocalFileUploadJob(const Models::CreateLocalFileUploadJobRequest &request);

      /**
       * @summary Creates a task to download local video recordings by time.
       *
       * @description ## Limits
       * - The maximum duration for a single time-based download is 30 minutes.
       * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
       * - A single instance supports up to 10 concurrent downloads. Completed downloads are not counted.
       * - If the audio and video encoding parameters change, the downloaded recording defaults to the first half of the recording.
       * - Due to fluctuations in the device\\"s upstream network, the link may be abnormally disconnected or the device may actively drop data. As a result, the uploaded and downloaded recordings may be incomplete.
       * - The downloaded recording data is determined by the device\\"s stream pushing logic. If the pushed data is abnormal, the duration of the downloaded recording may not match the time period specified in the task settings.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request CreateLocalRecordDownloadByTimeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLocalRecordDownloadByTimeJobResponse
       */
      Models::CreateLocalRecordDownloadByTimeJobResponse createLocalRecordDownloadByTimeJobWithOptions(const Models::CreateLocalRecordDownloadByTimeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to download local video recordings by time.
       *
       * @description ## Limits
       * - The maximum duration for a single time-based download is 30 minutes.
       * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
       * - A single instance supports up to 10 concurrent downloads. Completed downloads are not counted.
       * - If the audio and video encoding parameters change, the downloaded recording defaults to the first half of the recording.
       * - Due to fluctuations in the device\\"s upstream network, the link may be abnormally disconnected or the device may actively drop data. As a result, the uploaded and downloaded recordings may be incomplete.
       * - The downloaded recording data is determined by the device\\"s stream pushing logic. If the pushed data is abnormal, the duration of the downloaded recording may not match the time period specified in the task settings.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request CreateLocalRecordDownloadByTimeJobRequest
       * @return CreateLocalRecordDownloadByTimeJobResponse
       */
      Models::CreateLocalRecordDownloadByTimeJobResponse createLocalRecordDownloadByTimeJob(const Models::CreateLocalRecordDownloadByTimeJobRequest &request);

      /**
       * @summary Creates an image search application instance.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       * > A Resource Access Management (RAM) user shares the quota of the Alibaba Cloud account.
       *
       * @param request CreatePictureSearchAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePictureSearchAppResponse
       */
      Models::CreatePictureSearchAppResponse createPictureSearchAppWithOptions(const Models::CreatePictureSearchAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image search application instance.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       * > A Resource Access Management (RAM) user shares the quota of the Alibaba Cloud account.
       *
       * @param request CreatePictureSearchAppRequest
       * @return CreatePictureSearchAppResponse
       */
      Models::CreatePictureSearchAppResponse createPictureSearchApp(const Models::CreatePictureSearchAppRequest &request);

      /**
       * @summary Creates an integrated image search task.
       *
       * @description Integrated image search retrieves both face and human body features simultaneously during an image search.
       * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
       *
       * @param request CreatePictureSearchJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePictureSearchJobResponse
       */
      Models::CreatePictureSearchJobResponse createPictureSearchJobWithOptions(const Models::CreatePictureSearchJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an integrated image search task.
       *
       * @description Integrated image search retrieves both face and human body features simultaneously during an image search.
       * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
       *
       * @param request CreatePictureSearchJobRequest
       * @return CreatePictureSearchJobResponse
       */
      Models::CreatePictureSearchJobResponse createPictureSearchJob(const Models::CreatePictureSearchJobRequest &request);

      /**
       * @summary Creates a task to download cloud recordings by time.
       *
       * @description ## Limits
       * - Maximum duration for a single time-based download: 30 minutes.
       * - Download time precision: The precision of the download time range is within 10 seconds. For example, if you select a 20-second data segment to download, up to 30 seconds of data may be downloaded.
       * - Maximum number of recording files for a single time-based download: 100.
       * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
       * - Maximum concurrent downloads per instance: 10. Completed downloads are not counted.
       * - If the audio and video encoding parameters change, the first half of the recording is downloaded by default.
       * - If the download time ranges of recordings overlap, the cloud deduplicates the overlapping data.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the account.
       *
       * @param request CreateRecordDownloadByTimeJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecordDownloadByTimeJobResponse
       */
      Models::CreateRecordDownloadByTimeJobResponse createRecordDownloadByTimeJobWithOptions(const Models::CreateRecordDownloadByTimeJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to download cloud recordings by time.
       *
       * @description ## Limits
       * - Maximum duration for a single time-based download: 30 minutes.
       * - Download time precision: The precision of the download time range is within 10 seconds. For example, if you select a 20-second data segment to download, up to 30 seconds of data may be downloaded.
       * - Maximum number of recording files for a single time-based download: 100.
       * - Download tasks and files are retained for up to 1 day. You can re-download them after they expire.
       * - Maximum concurrent downloads per instance: 10. Completed downloads are not counted.
       * - If the audio and video encoding parameters change, the first half of the recording is downloaded by default.
       * - If the download time ranges of recordings overlap, the cloud deduplicates the overlapping data.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the account.
       *
       * @param request CreateRecordDownloadByTimeJobRequest
       * @return CreateRecordDownloadByTimeJobResponse
       */
      Models::CreateRecordDownloadByTimeJobResponse createRecordDownloadByTimeJob(const Models::CreateRecordDownloadByTimeJobRequest &request);

      /**
       * @summary Creates a recording plan based on a time template.
       *
       * @param request CreateRecordPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRecordPlanResponse
       */
      Models::CreateRecordPlanResponse createRecordPlanWithOptions(const Models::CreateRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a recording plan based on a time template.
       *
       * @param request CreateRecordPlanRequest
       * @return CreateRecordPlanResponse
       */
      Models::CreateRecordPlanResponse createRecordPlan(const Models::CreateRecordPlanRequest &request);

      /**
       * @param request CreateRtmpDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRtmpDeviceResponse
       */
      Models::CreateRtmpDeviceResponse createRtmpDeviceWithOptions(const Models::CreateRtmpDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateRtmpDeviceRequest
       * @return CreateRtmpDeviceResponse
       */
      Models::CreateRtmpDeviceResponse createRtmpDevice(const Models::CreateRtmpDeviceRequest &request);

      /**
       * @summary Creates a video stream pushing job.
       *
       * @description ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under an Alibaba Cloud account share the quota of the account.
       *
       * @param request CreateStreamPushJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamPushJobResponse
       */
      Models::CreateStreamPushJobResponse createStreamPushJobWithOptions(const Models::CreateStreamPushJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a video stream pushing job.
       *
       * @description ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under an Alibaba Cloud account share the quota of the account.
       *
       * @param request CreateStreamPushJobRequest
       * @return CreateStreamPushJobResponse
       */
      Models::CreateStreamPushJobResponse createStreamPushJob(const Models::CreateStreamPushJobRequest &request);

      /**
       * @summary Creates a cloud snapshot task.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request CreateStreamSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStreamSnapshotJobResponse
       */
      Models::CreateStreamSnapshotJobResponse createStreamSnapshotJobWithOptions(const Models::CreateStreamSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud snapshot task.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request CreateStreamSnapshotJobRequest
       * @return CreateStreamSnapshotJobResponse
       */
      Models::CreateStreamSnapshotJobResponse createStreamSnapshotJob(const Models::CreateStreamSnapshotJobRequest &request);

      /**
       * @summary Creates a time template.
       *
       * @param request CreateTimeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTimeTemplateResponse
       */
      Models::CreateTimeTemplateResponse createTimeTemplateWithOptions(const Models::CreateTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a time template.
       *
       * @param request CreateTimeTemplateRequest
       * @return CreateTimeTemplateResponse
       */
      Models::CreateTimeTemplateResponse createTimeTemplate(const Models::CreateTimeTemplateRequest &request);

      /**
       * @summary Deletes an intelligent event recording plan.
       *
       * @param request DeleteEventRecordPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRecordPlanResponse
       */
      Models::DeleteEventRecordPlanResponse deleteEventRecordPlanWithOptions(const Models::DeleteEventRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an intelligent event recording plan.
       *
       * @param request DeleteEventRecordPlanRequest
       * @return DeleteEventRecordPlanResponse
       */
      Models::DeleteEventRecordPlanResponse deleteEventRecordPlan(const Models::DeleteEventRecordPlanRequest &request);

      /**
       * @summary Deletes the IP cameras associated with an intelligent alert event recording plan.
       *
       * @param request DeleteEventRecordPlanDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRecordPlanDeviceResponse
       */
      Models::DeleteEventRecordPlanDeviceResponse deleteEventRecordPlanDeviceWithOptions(const Models::DeleteEventRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the IP cameras associated with an intelligent alert event recording plan.
       *
       * @param request DeleteEventRecordPlanDeviceRequest
       * @return DeleteEventRecordPlanDeviceResponse
       */
      Models::DeleteEventRecordPlanDeviceResponse deleteEventRecordPlanDevice(const Models::DeleteEventRecordPlanDeviceRequest &request);

      /**
       * @summary Deletes a device group.
       *
       * @param request DeleteFaceDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceDeviceGroupResponse
       */
      Models::DeleteFaceDeviceGroupResponse deleteFaceDeviceGroupWithOptions(const Models::DeleteFaceDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a device group.
       *
       * @param request DeleteFaceDeviceGroupRequest
       * @return DeleteFaceDeviceGroupResponse
       */
      Models::DeleteFaceDeviceGroupResponse deleteFaceDeviceGroup(const Models::DeleteFaceDeviceGroupRequest &request);

      /**
       * @summary Deletes a user from the face management service.
       *
       * @param request DeleteFaceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceUserResponse
       */
      Models::DeleteFaceUserResponse deleteFaceUserWithOptions(const Models::DeleteFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user from the face management service.
       *
       * @param request DeleteFaceUserRequest
       * @return DeleteFaceUserResponse
       */
      Models::DeleteFaceUserResponse deleteFaceUser(const Models::DeleteFaceUserRequest &request);

      /**
       * @summary Deletes a specified user group.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteFaceUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceUserGroupResponse
       */
      Models::DeleteFaceUserGroupResponse deleteFaceUserGroupWithOptions(const Models::DeleteFaceUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified user group.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteFaceUserGroupRequest
       * @return DeleteFaceUserGroupResponse
       */
      Models::DeleteFaceUserGroupResponse deleteFaceUserGroup(const Models::DeleteFaceUserGroupRequest &request);

      /**
       * @summary Deletes the face synchronization relationship between a user group and a device group.
       *
       * @description ## Before you begin
       * The maximum number of queries per second (QPS) per Alibaba Cloud account for invoking this operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteFaceUserGroupAndDeviceGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::DeleteFaceUserGroupAndDeviceGroupRelationResponse deleteFaceUserGroupAndDeviceGroupRelationWithOptions(const Models::DeleteFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the face synchronization relationship between a user group and a device group.
       *
       * @description ## Before you begin
       * The maximum number of queries per second (QPS) per Alibaba Cloud account for invoking this operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteFaceUserGroupAndDeviceGroupRelationRequest
       * @return DeleteFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::DeleteFaceUserGroupAndDeviceGroupRelationResponse deleteFaceUserGroupAndDeviceGroupRelation(const Models::DeleteFaceUserGroupAndDeviceGroupRelationRequest &request);

      /**
       * @summary Deletes a specified face image from a user in the face library.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteFaceUserPictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceUserPictureResponse
       */
      Models::DeleteFaceUserPictureResponse deleteFaceUserPictureWithOptions(const Models::DeleteFaceUserPictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified face image from a user in the face library.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 100.
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteFaceUserPictureRequest
       * @return DeleteFaceUserPictureResponse
       */
      Models::DeleteFaceUserPictureResponse deleteFaceUserPicture(const Models::DeleteFaceUserPictureRequest &request);

      /**
       * @param request DeleteGbDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGbDeviceResponse
       */
      Models::DeleteGbDeviceResponse deleteGbDeviceWithOptions(const Models::DeleteGbDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteGbDeviceRequest
       * @return DeleteGbDeviceResponse
       */
      Models::DeleteGbDeviceResponse deleteGbDevice(const Models::DeleteGbDeviceRequest &request);

      /**
       * @summary Stops a local recording upload task.
       *
       * @description After you stop a local recording upload task, the recording files that have been created are not deleted.
       *
       * @param request DeleteLocalFileUploadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLocalFileUploadJobResponse
       */
      Models::DeleteLocalFileUploadJobResponse deleteLocalFileUploadJobWithOptions(const Models::DeleteLocalFileUploadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a local recording upload task.
       *
       * @description After you stop a local recording upload task, the recording files that have been created are not deleted.
       *
       * @param request DeleteLocalFileUploadJobRequest
       * @return DeleteLocalFileUploadJobResponse
       */
      Models::DeleteLocalFileUploadJobResponse deleteLocalFileUploadJob(const Models::DeleteLocalFileUploadJobRequest &request);

      /**
       * @summary Deletes multiple cloud pictures with specified picture IDs for a specified IPC device.
       *
       * @param request DeletePictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePictureResponse
       */
      Models::DeletePictureResponse deletePictureWithOptions(const Models::DeletePictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple cloud pictures with specified picture IDs for a specified IPC device.
       *
       * @param request DeletePictureRequest
       * @return DeletePictureResponse
       */
      Models::DeletePictureResponse deletePicture(const Models::DeletePictureRequest &request);

      /**
       * @summary Deletes video files stored in the cloud.
       *
       * @param request DeleteRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecordWithOptions(const Models::DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes video files stored in the cloud.
       *
       * @param request DeleteRecordRequest
       * @return DeleteRecordResponse
       */
      Models::DeleteRecordResponse deleteRecord(const Models::DeleteRecordRequest &request);

      /**
       * @summary Deletes a recording plan.
       *
       * @param request DeleteRecordPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordPlanResponse
       */
      Models::DeleteRecordPlanResponse deleteRecordPlanWithOptions(const Models::DeleteRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a recording plan.
       *
       * @param request DeleteRecordPlanRequest
       * @return DeleteRecordPlanResponse
       */
      Models::DeleteRecordPlanResponse deleteRecordPlan(const Models::DeleteRecordPlanRequest &request);

      /**
       * @summary Deletes the recording plan associated with an IPC device.
       *
       * @param request DeleteRecordPlanDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecordPlanDeviceResponse
       */
      Models::DeleteRecordPlanDeviceResponse deleteRecordPlanDeviceWithOptions(const Models::DeleteRecordPlanDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the recording plan associated with an IPC device.
       *
       * @param request DeleteRecordPlanDeviceRequest
       * @return DeleteRecordPlanDeviceResponse
       */
      Models::DeleteRecordPlanDeviceResponse deleteRecordPlanDevice(const Models::DeleteRecordPlanDeviceRequest &request);

      /**
       * @param request DeleteRtmpDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRtmpDeviceResponse
       */
      Models::DeleteRtmpDeviceResponse deleteRtmpDeviceWithOptions(const Models::DeleteRtmpDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteRtmpDeviceRequest
       * @return DeleteRtmpDeviceResponse
       */
      Models::DeleteRtmpDeviceResponse deleteRtmpDevice(const Models::DeleteRtmpDeviceRequest &request);

      /**
       * @param request DeleteRtmpKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRtmpKeyResponse
       */
      Models::DeleteRtmpKeyResponse deleteRtmpKeyWithOptions(const Models::DeleteRtmpKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteRtmpKeyRequest
       * @return DeleteRtmpKeyResponse
       */
      Models::DeleteRtmpKeyResponse deleteRtmpKey(const Models::DeleteRtmpKeyRequest &request);

      /**
       * @summary Deletes a video stream pushing job.
       *
       * @description ## QPS limit
       * A single Alibaba Cloud account can invoke this operation up to 50 times per second (QPS).
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of that account.
       *
       * @param request DeleteStreamPushJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamPushJobResponse
       */
      Models::DeleteStreamPushJobResponse deleteStreamPushJobWithOptions(const Models::DeleteStreamPushJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a video stream pushing job.
       *
       * @description ## QPS limit
       * A single Alibaba Cloud account can invoke this operation up to 50 times per second (QPS).
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of that account.
       *
       * @param request DeleteStreamPushJobRequest
       * @return DeleteStreamPushJobResponse
       */
      Models::DeleteStreamPushJobResponse deleteStreamPushJob(const Models::DeleteStreamPushJobRequest &request);

      /**
       * @summary Deletes a video snapshot task.
       *
       * @description ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteStreamSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamSnapshotJobResponse
       */
      Models::DeleteStreamSnapshotJobResponse deleteStreamSnapshotJobWithOptions(const Models::DeleteStreamSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a video snapshot task.
       *
       * @description ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request DeleteStreamSnapshotJobRequest
       * @return DeleteStreamSnapshotJobResponse
       */
      Models::DeleteStreamSnapshotJobResponse deleteStreamSnapshotJob(const Models::DeleteStreamSnapshotJobRequest &request);

      /**
       * @summary Deletes a time template.
       *
       * @param request DeleteTimeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTimeTemplateResponse
       */
      Models::DeleteTimeTemplateResponse deleteTimeTemplateWithOptions(const Models::DeleteTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a time template.
       *
       * @param request DeleteTimeTemplateRequest
       * @return DeleteTimeTemplateResponse
       */
      Models::DeleteTimeTemplateResponse deleteTimeTemplate(const Models::DeleteTimeTemplateRequest &request);

      /**
       * @param request EnableGbSubDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableGbSubDeviceResponse
       */
      Models::EnableGbSubDeviceResponse enableGbSubDeviceWithOptions(const Models::EnableGbSubDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableGbSubDeviceRequest
       * @return EnableGbSubDeviceResponse
       */
      Models::EnableGbSubDeviceResponse enableGbSubDevice(const Models::EnableGbSubDeviceRequest &request);

      /**
       * @summary Queries the status of an integrated image search task.
       *
       * @description Integrated image search retrieves both facial and body features during an image search.
       * > This feature requires the deployment of face and body detection algorithms on V-series edge all-in-one machines.
       *
       * @param request GetPictureSearchJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPictureSearchJobStatusResponse
       */
      Models::GetPictureSearchJobStatusResponse getPictureSearchJobStatusWithOptions(const Models::GetPictureSearchJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an integrated image search task.
       *
       * @description Integrated image search retrieves both facial and body features during an image search.
       * > This feature requires the deployment of face and body detection algorithms on V-series edge all-in-one machines.
       *
       * @param request GetPictureSearchJobStatusRequest
       * @return GetPictureSearchJobStatusResponse
       */
      Models::GetPictureSearchJobStatusResponse getPictureSearchJobStatus(const Models::GetPictureSearchJobStatusRequest &request);

      /**
       * @summary Starts an image search application instance to search for images.
       *
       * @param request PictureSearchPictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PictureSearchPictureResponse
       */
      Models::PictureSearchPictureResponse pictureSearchPictureWithOptions(const Models::PictureSearchPictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an image search application instance to search for images.
       *
       * @param request PictureSearchPictureRequest
       * @return PictureSearchPictureResponse
       */
      Models::PictureSearchPictureResponse pictureSearchPicture(const Models::PictureSearchPictureRequest &request);

      /**
       * @summary Queries the intelligent alert events for vehicle operations.
       *
       * @description ## Usage notes
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 10.  
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryCarProcessEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCarProcessEventsResponse
       */
      Models::QueryCarProcessEventsResponse queryCarProcessEventsWithOptions(const Models::QueryCarProcessEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the intelligent alert events for vehicle operations.
       *
       * @description ## Usage notes
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 10.  
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryCarProcessEventsRequest
       * @return QueryCarProcessEventsResponse
       */
      Models::QueryCarProcessEventsResponse queryCarProcessEvents(const Models::QueryCarProcessEventsRequest &request);

      /**
       * @summary Queries a list of intelligent alert events for an IPC device.
       *
       * @param request QueryDeviceEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceEventResponse
       */
      Models::QueryDeviceEventResponse queryDeviceEventWithOptions(const Models::QueryDeviceEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of intelligent alert events for an IPC device.
       *
       * @param request QueryDeviceEventRequest
       * @return QueryDeviceEventResponse
       */
      Models::QueryDeviceEventResponse queryDeviceEvent(const Models::QueryDeviceEventRequest &request);

      /**
       * @summary Retrieves the image captured and uploaded by an IPC device when an intelligent alert event is triggered.
       *
       * @param request QueryDeviceEventPictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceEventPictureResponse
       */
      Models::QueryDeviceEventPictureResponse queryDeviceEventPictureWithOptions(const Models::QueryDeviceEventPictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the image captured and uploaded by an IPC device when an intelligent alert event is triggered.
       *
       * @param request QueryDeviceEventPictureRequest
       * @return QueryDeviceEventPictureResponse
       */
      Models::QueryDeviceEventPictureResponse queryDeviceEventPicture(const Models::QueryDeviceEventPictureRequest &request);

      /**
       * @summary Retrieves the URL of the recording file for a specified intelligent alert event of an IP camera (IPC) device.
       *
       * @param request QueryDeviceEventRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceEventRecordResponse
       */
      Models::QueryDeviceEventRecordResponse queryDeviceEventRecordWithOptions(const Models::QueryDeviceEventRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the URL of the recording file for a specified intelligent alert event of an IP camera (IPC) device.
       *
       * @param request QueryDeviceEventRecordRequest
       * @return QueryDeviceEventRecordResponse
       */
      Models::QueryDeviceEventRecordResponse queryDeviceEventRecord(const Models::QueryDeviceEventRecordRequest &request);

      /**
       * @summary Retrieves image URLs based on a list of image IDs.
       *
       * @param request QueryDevicePictureByListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicePictureByListResponse
       */
      Models::QueryDevicePictureByListResponse queryDevicePictureByListWithOptions(const Models::QueryDevicePictureByListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves image URLs based on a list of image IDs.
       *
       * @param request QueryDevicePictureByListRequest
       * @return QueryDevicePictureByListResponse
       */
      Models::QueryDevicePictureByListResponse queryDevicePictureByList(const Models::QueryDevicePictureByListRequest &request);

      /**
       * @summary Queries the information about images captured by an IPC device.
       *
       * @param request QueryDevicePictureFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicePictureFileResponse
       */
      Models::QueryDevicePictureFileResponse queryDevicePictureFileWithOptions(const Models::QueryDevicePictureFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about images captured by an IPC device.
       *
       * @param request QueryDevicePictureFileRequest
       * @return QueryDevicePictureFileResponse
       */
      Models::QueryDevicePictureFileResponse queryDevicePictureFile(const Models::QueryDevicePictureFileRequest &request);

      /**
       * @summary Queries the cloud storage image lifecycle for an IPC device.
       *
       * @param request QueryDevicePictureLifeCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDevicePictureLifeCycleResponse
       */
      Models::QueryDevicePictureLifeCycleResponse queryDevicePictureLifeCycleWithOptions(const Models::QueryDevicePictureLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud storage image lifecycle for an IPC device.
       *
       * @param request QueryDevicePictureLifeCycleRequest
       * @return QueryDevicePictureLifeCycleResponse
       */
      Models::QueryDevicePictureLifeCycleResponse queryDevicePictureLifeCycle(const Models::QueryDevicePictureLifeCycleRequest &request);

      /**
       * @summary Retrieves the cloud storage recording lifecycle of an IPC device.
       *
       * @param request QueryDeviceRecordLifeCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceRecordLifeCycleResponse
       */
      Models::QueryDeviceRecordLifeCycleResponse queryDeviceRecordLifeCycleWithOptions(const Models::QueryDeviceRecordLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the cloud storage recording lifecycle of an IPC device.
       *
       * @param request QueryDeviceRecordLifeCycleRequest
       * @return QueryDeviceRecordLifeCycleResponse
       */
      Models::QueryDeviceRecordLifeCycleResponse queryDeviceRecordLifeCycle(const Models::QueryDeviceRecordLifeCycleRequest &request);

      /**
       * @summary Retrieves the URL of a recording file with a specified file name from the storage card of a local network video recorder or IP camera.
       *
       * @param request QueryDeviceVodUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceVodUrlResponse
       */
      Models::QueryDeviceVodUrlResponse queryDeviceVodUrlWithOptions(const Models::QueryDeviceVodUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the URL of a recording file with a specified file name from the storage card of a local network video recorder or IP camera.
       *
       * @param request QueryDeviceVodUrlRequest
       * @return QueryDeviceVodUrlResponse
       */
      Models::QueryDeviceVodUrlResponse queryDeviceVodUrl(const Models::QueryDeviceVodUrlRequest &request);

      /**
       * @summary Retrieves the playback URL of a recording file within a specified time range from the storage card of a local network video recorder (NVR) or IP camera (IPC) device.
       *
       * @description ## Limits
       * This operation is supported only in scenarios where IPC devices are directly connected to IoT Platform.
       *
       * @param request QueryDeviceVodUrlByTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDeviceVodUrlByTimeResponse
       */
      Models::QueryDeviceVodUrlByTimeResponse queryDeviceVodUrlByTimeWithOptions(const Models::QueryDeviceVodUrlByTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the playback URL of a recording file within a specified time range from the storage card of a local network video recorder (NVR) or IP camera (IPC) device.
       *
       * @description ## Limits
       * This operation is supported only in scenarios where IPC devices are directly connected to IoT Platform.
       *
       * @param request QueryDeviceVodUrlByTimeRequest
       * @return QueryDeviceVodUrlByTimeResponse
       */
      Models::QueryDeviceVodUrlByTimeResponse queryDeviceVodUrlByTime(const Models::QueryDeviceVodUrlByTimeRequest &request);

      /**
       * @summary Queries the details of an intelligent alert event recording plan.
       *
       * @param request QueryEventRecordPlanDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEventRecordPlanDetailResponse
       */
      Models::QueryEventRecordPlanDetailResponse queryEventRecordPlanDetailWithOptions(const Models::QueryEventRecordPlanDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an intelligent alert event recording plan.
       *
       * @param request QueryEventRecordPlanDetailRequest
       * @return QueryEventRecordPlanDetailResponse
       */
      Models::QueryEventRecordPlanDetailResponse queryEventRecordPlanDetail(const Models::QueryEventRecordPlanDetailRequest &request);

      /**
       * @summary Queries the intelligent alert event recording plan of an IPC device by device ID.
       *
       * @param request QueryEventRecordPlanDeviceByDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEventRecordPlanDeviceByDeviceResponse
       */
      Models::QueryEventRecordPlanDeviceByDeviceResponse queryEventRecordPlanDeviceByDeviceWithOptions(const Models::QueryEventRecordPlanDeviceByDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the intelligent alert event recording plan of an IPC device by device ID.
       *
       * @param request QueryEventRecordPlanDeviceByDeviceRequest
       * @return QueryEventRecordPlanDeviceByDeviceResponse
       */
      Models::QueryEventRecordPlanDeviceByDeviceResponse queryEventRecordPlanDeviceByDevice(const Models::QueryEventRecordPlanDeviceByDeviceRequest &request);

      /**
       * @summary Queries the list of cameras associated with an intelligent alert event recording plan.
       *
       * @param request QueryEventRecordPlanDeviceByPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEventRecordPlanDeviceByPlanResponse
       */
      Models::QueryEventRecordPlanDeviceByPlanResponse queryEventRecordPlanDeviceByPlanWithOptions(const Models::QueryEventRecordPlanDeviceByPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cameras associated with an intelligent alert event recording plan.
       *
       * @param request QueryEventRecordPlanDeviceByPlanRequest
       * @return QueryEventRecordPlanDeviceByPlanResponse
       */
      Models::QueryEventRecordPlanDeviceByPlanResponse queryEventRecordPlanDeviceByPlan(const Models::QueryEventRecordPlanDeviceByPlanRequest &request);

      /**
       * @summary Queries the list of intelligent alert event recording plans.
       *
       * @param request QueryEventRecordPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEventRecordPlansResponse
       */
      Models::QueryEventRecordPlansResponse queryEventRecordPlansWithOptions(const Models::QueryEventRecordPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of intelligent alert event recording plans.
       *
       * @param request QueryEventRecordPlansRequest
       * @return QueryEventRecordPlansResponse
       */
      Models::QueryEventRecordPlansResponse queryEventRecordPlans(const Models::QueryEventRecordPlansRequest &request);

      /**
       * @summary Queries all device groups.
       *
       * @param request QueryFaceAllDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceAllDeviceGroupResponse
       */
      Models::QueryFaceAllDeviceGroupResponse queryFaceAllDeviceGroupWithOptions(const Models::QueryFaceAllDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all device groups.
       *
       * @param request QueryFaceAllDeviceGroupRequest
       * @return QueryFaceAllDeviceGroupResponse
       */
      Models::QueryFaceAllDeviceGroupResponse queryFaceAllDeviceGroup(const Models::QueryFaceAllDeviceGroupRequest &request);

      /**
       * @summary Queries all user groups.
       *
       * @param request QueryFaceAllUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceAllUserGroupResponse
       */
      Models::QueryFaceAllUserGroupResponse queryFaceAllUserGroupWithOptions(const Models::QueryFaceAllUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all user groups.
       *
       * @param request QueryFaceAllUserGroupRequest
       * @return QueryFaceAllUserGroupResponse
       */
      Models::QueryFaceAllUserGroupResponse queryFaceAllUserGroup(const Models::QueryFaceAllUserGroupRequest &request);

      /**
       * @summary Queries the user groups and device groups with face synchronization relationships.
       *
       * @param request QueryFaceAllUserGroupAndDeviceGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceAllUserGroupAndDeviceGroupRelationResponse
       */
      Models::QueryFaceAllUserGroupAndDeviceGroupRelationResponse queryFaceAllUserGroupAndDeviceGroupRelationWithOptions(const Models::QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user groups and device groups with face synchronization relationships.
       *
       * @param request QueryFaceAllUserGroupAndDeviceGroupRelationRequest
       * @return QueryFaceAllUserGroupAndDeviceGroupRelationResponse
       */
      Models::QueryFaceAllUserGroupAndDeviceGroupRelationResponse queryFaceAllUserGroupAndDeviceGroupRelation(const Models::QueryFaceAllUserGroupAndDeviceGroupRelationRequest &request);

      /**
       * @summary Queries all users in a user group.
       *
       * @param request QueryFaceAllUserIdsByGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceAllUserIdsByGroupIdResponse
       */
      Models::QueryFaceAllUserIdsByGroupIdResponse queryFaceAllUserIdsByGroupIdWithOptions(const Models::QueryFaceAllUserIdsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all users in a user group.
       *
       * @param request QueryFaceAllUserIdsByGroupIdRequest
       * @return QueryFaceAllUserIdsByGroupIdResponse
       */
      Models::QueryFaceAllUserIdsByGroupIdResponse queryFaceAllUserIdsByGroupId(const Models::QueryFaceAllUserIdsByGroupIdRequest &request);

      /**
       * @summary Queries the user ID in the caller\\"s service based on the user ID from the face image library synchronization service.
       *
       * @param request QueryFaceCustomUserIdByUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceCustomUserIdByUserIdResponse
       */
      Models::QueryFaceCustomUserIdByUserIdResponse queryFaceCustomUserIdByUserIdWithOptions(const Models::QueryFaceCustomUserIdByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user ID in the caller\\"s service based on the user ID from the face image library synchronization service.
       *
       * @param request QueryFaceCustomUserIdByUserIdRequest
       * @return QueryFaceCustomUserIdByUserIdResponse
       */
      Models::QueryFaceCustomUserIdByUserIdResponse queryFaceCustomUserIdByUserId(const Models::QueryFaceCustomUserIdByUserIdRequest &request);

      /**
       * @summary Queries the device groups to which a device belongs.
       *
       * @param request QueryFaceDeviceGroupsByDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceDeviceGroupsByDeviceResponse
       */
      Models::QueryFaceDeviceGroupsByDeviceResponse queryFaceDeviceGroupsByDeviceWithOptions(const Models::QueryFaceDeviceGroupsByDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the device groups to which a device belongs.
       *
       * @param request QueryFaceDeviceGroupsByDeviceRequest
       * @return QueryFaceDeviceGroupsByDeviceResponse
       */
      Models::QueryFaceDeviceGroupsByDeviceResponse queryFaceDeviceGroupsByDevice(const Models::QueryFaceDeviceGroupsByDeviceRequest &request);

      /**
       * @summary Queries the details of a user.
       *
       * @param request QueryFaceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceUserResponse
       */
      Models::QueryFaceUserResponse queryFaceUserWithOptions(const Models::QueryFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a user.
       *
       * @param request QueryFaceUserRequest
       * @return QueryFaceUserResponse
       */
      Models::QueryFaceUserResponse queryFaceUser(const Models::QueryFaceUserRequest &request);

      /**
       * @summary Queries user information in batches based on a list of user IDs.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryFaceUserBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceUserBatchResponse
       */
      Models::QueryFaceUserBatchResponse queryFaceUserBatchWithOptions(const Models::QueryFaceUserBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user information in batches based on a list of user IDs.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryFaceUserBatchRequest
       * @return QueryFaceUserBatchResponse
       */
      Models::QueryFaceUserBatchResponse queryFaceUserBatch(const Models::QueryFaceUserBatchRequest &request);

      /**
       * @summary Queries face data by face name.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryFaceUserByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceUserByNameResponse
       */
      Models::QueryFaceUserByNameResponse queryFaceUserByNameWithOptions(const Models::QueryFaceUserByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries face data by face name.
       *
       * @description ## Usage notes
       * - The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryFaceUserByNameRequest
       * @return QueryFaceUserByNameResponse
       */
      Models::QueryFaceUserByNameResponse queryFaceUserByName(const Models::QueryFaceUserByNameRequest &request);

      /**
       * @summary Queries the user groups to which a user belongs.
       *
       * @param request QueryFaceUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceUserGroupResponse
       */
      Models::QueryFaceUserGroupResponse queryFaceUserGroupWithOptions(const Models::QueryFaceUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user groups to which a user belongs.
       *
       * @param request QueryFaceUserGroupRequest
       * @return QueryFaceUserGroupResponse
       */
      Models::QueryFaceUserGroupResponse queryFaceUserGroup(const Models::QueryFaceUserGroupRequest &request);

      /**
       * @summary Queries the face synchronization relationships between user groups and device groups.
       *
       * @param request QueryFaceUserGroupAndDeviceGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::QueryFaceUserGroupAndDeviceGroupRelationResponse queryFaceUserGroupAndDeviceGroupRelationWithOptions(const Models::QueryFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the face synchronization relationships between user groups and device groups.
       *
       * @param request QueryFaceUserGroupAndDeviceGroupRelationRequest
       * @return QueryFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::QueryFaceUserGroupAndDeviceGroupRelationResponse queryFaceUserGroupAndDeviceGroupRelation(const Models::QueryFaceUserGroupAndDeviceGroupRelationRequest &request);

      /**
       * @summary Queries the user ID in the face library synchronization service based on the user ID in the caller system.
       *
       * @param request QueryFaceUserIdByCustomUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceUserIdByCustomUserIdResponse
       */
      Models::QueryFaceUserIdByCustomUserIdResponse queryFaceUserIdByCustomUserIdWithOptions(const Models::QueryFaceUserIdByCustomUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user ID in the face library synchronization service based on the user ID in the caller system.
       *
       * @param request QueryFaceUserIdByCustomUserIdRequest
       * @return QueryFaceUserIdByCustomUserIdResponse
       */
      Models::QueryFaceUserIdByCustomUserIdResponse queryFaceUserIdByCustomUserId(const Models::QueryFaceUserIdByCustomUserIdRequest &request);

      /**
       * @param request QueryGbSubDeviceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGbSubDeviceListResponse
       */
      Models::QueryGbSubDeviceListResponse queryGbSubDeviceListWithOptions(const Models::QueryGbSubDeviceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryGbSubDeviceListRequest
       * @return QueryGbSubDeviceListResponse
       */
      Models::QueryGbSubDeviceListResponse queryGbSubDeviceList(const Models::QueryGbSubDeviceListRequest &request);

      /**
       * @summary Retrieves the live streaming URL of an IPC device.
       *
       * @param request QueryLiveStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLiveStreamingResponse
       */
      Models::QueryLiveStreamingResponse queryLiveStreamingWithOptions(const Models::QueryLiveStreamingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the live streaming URL of an IPC device.
       *
       * @param request QueryLiveStreamingRequest
       * @return QueryLiveStreamingResponse
       */
      Models::QueryLiveStreamingResponse queryLiveStreaming(const Models::QueryLiveStreamingRequest &request);

      /**
       * @summary Queries the task result of a local video recording upload node.
       *
       * @param request QueryLocalFileUploadJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryLocalFileUploadJobResponse
       */
      Models::QueryLocalFileUploadJobResponse queryLocalFileUploadJobWithOptions(const Models::QueryLocalFileUploadJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task result of a local video recording upload node.
       *
       * @param request QueryLocalFileUploadJobRequest
       * @return QueryLocalFileUploadJobResponse
       */
      Models::QueryLocalFileUploadJobResponse queryLocalFileUploadJob(const Models::QueryLocalFileUploadJobRequest &request);

      /**
       * @summary Queries whether an IP camera has video recordings for each day of a specified month.
       *
       * @param request QueryMonthRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMonthRecordResponse
       */
      Models::QueryMonthRecordResponse queryMonthRecordWithOptions(const Models::QueryMonthRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an IP camera has video recordings for each day of a specified month.
       *
       * @param request QueryMonthRecordRequest
       * @return QueryMonthRecordResponse
       */
      Models::QueryMonthRecordResponse queryMonthRecord(const Models::QueryMonthRecordRequest &request);

      /**
       * @summary Retrieves a list of images.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 500.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryPictureFilesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPictureFilesResponse
       */
      Models::QueryPictureFilesResponse queryPictureFilesWithOptions(const Models::QueryPictureFilesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of images.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 500.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryPictureFilesRequest
       * @return QueryPictureFilesResponse
       */
      Models::QueryPictureFilesResponse queryPictureFiles(const Models::QueryPictureFilesRequest &request);

      /**
       * @summary Queries the list of V-series edge all-in-one machines bound to an image search application instance.
       *
       * @param request QueryPictureSearchAiboxesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPictureSearchAiboxesResponse
       */
      Models::QueryPictureSearchAiboxesResponse queryPictureSearchAiboxesWithOptions(const Models::QueryPictureSearchAiboxesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of V-series edge all-in-one machines bound to an image search application instance.
       *
       * @param request QueryPictureSearchAiboxesRequest
       * @return QueryPictureSearchAiboxesResponse
       */
      Models::QueryPictureSearchAiboxesResponse queryPictureSearchAiboxes(const Models::QueryPictureSearchAiboxesRequest &request);

      /**
       * @summary Queries the list of created image search application instances.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryPictureSearchAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPictureSearchAppsResponse
       */
      Models::QueryPictureSearchAppsResponse queryPictureSearchAppsWithOptions(const Models::QueryPictureSearchAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of created image search application instances.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       * > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request QueryPictureSearchAppsRequest
       * @return QueryPictureSearchAppsResponse
       */
      Models::QueryPictureSearchAppsResponse queryPictureSearchApps(const Models::QueryPictureSearchAppsRequest &request);

      /**
       * @summary Queries the list of devices bound to an image search application instance.
       *
       * @param request QueryPictureSearchDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPictureSearchDevicesResponse
       */
      Models::QueryPictureSearchDevicesResponse queryPictureSearchDevicesWithOptions(const Models::QueryPictureSearchDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of devices bound to an image search application instance.
       *
       * @param request QueryPictureSearchDevicesRequest
       * @return QueryPictureSearchDevicesResponse
       */
      Models::QueryPictureSearchDevicesResponse queryPictureSearchDevices(const Models::QueryPictureSearchDevicesRequest &request);

      /**
       * @summary Queries the list of integrated image search jobs.
       *
       * @description Integrated image search means that both faces and human bodies are retrieved simultaneously during an image search.
       * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
       *
       * @param request QueryPictureSearchJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPictureSearchJobResponse
       */
      Models::QueryPictureSearchJobResponse queryPictureSearchJobWithOptions(const Models::QueryPictureSearchJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of integrated image search jobs.
       *
       * @description Integrated image search means that both faces and human bodies are retrieved simultaneously during an image search.
       * > This feature requires the deployment of face and human body detection algorithms on V-series edge all-in-one machines.
       *
       * @param request QueryPictureSearchJobRequest
       * @return QueryPictureSearchJobResponse
       */
      Models::QueryPictureSearchJobResponse queryPictureSearchJob(const Models::QueryPictureSearchJobRequest &request);

      /**
       * @summary Queries the image retrieval results of an integrated image search job.
       *
       * @param request QueryPictureSearchJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPictureSearchJobResultResponse
       */
      Models::QueryPictureSearchJobResultResponse queryPictureSearchJobResultWithOptions(const Models::QueryPictureSearchJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the image retrieval results of an integrated image search job.
       *
       * @param request QueryPictureSearchJobResultRequest
       * @return QueryPictureSearchJobResultResponse
       */
      Models::QueryPictureSearchJobResultResponse queryPictureSearchJobResult(const Models::QueryPictureSearchJobResultRequest &request);

      /**
       * @summary Queries the list of cloud video recordings.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 250.
       * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordResponse
       */
      Models::QueryRecordResponse queryRecordWithOptions(const Models::QueryRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cloud video recordings.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 250.
       * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryRecordRequest
       * @return QueryRecordResponse
       */
      Models::QueryRecordResponse queryRecord(const Models::QueryRecordRequest &request);

      /**
       * @summary Queries the URL of a recording file by recording file ID.
       *
       * @param request QueryRecordByRecordIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordByRecordIdResponse
       */
      Models::QueryRecordByRecordIdResponse queryRecordByRecordIdWithOptions(const Models::QueryRecordByRecordIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URL of a recording file by recording file ID.
       *
       * @param request QueryRecordByRecordIdRequest
       * @return QueryRecordByRecordIdResponse
       */
      Models::QueryRecordByRecordIdResponse queryRecordByRecordId(const Models::QueryRecordByRecordIdRequest &request);

      /**
       * @summary Queries the details of a cloud record download task by task ID, including the start time, recording progress, recording type, and download URL.
       *
       * @description ## Limits
       * The obtained recording download URL is valid for 1 hour.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryRecordDownloadJobByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordDownloadJobByIdResponse
       */
      Models::QueryRecordDownloadJobByIdResponse queryRecordDownloadJobByIdWithOptions(const Models::QueryRecordDownloadJobByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cloud record download task by task ID, including the start time, recording progress, recording type, and download URL.
       *
       * @description ## Limits
       * The obtained recording download URL is valid for 1 hour.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryRecordDownloadJobByIdRequest
       * @return QueryRecordDownloadJobByIdResponse
       */
      Models::QueryRecordDownloadJobByIdResponse queryRecordDownloadJobById(const Models::QueryRecordDownloadJobByIdRequest &request);

      /**
       * @summary Queries the list of cloud recording download tasks.
       *
       * @description ## Limits
       * The obtained recording download URL is valid for 1 hour.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryRecordDownloadJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordDownloadJobListResponse
       */
      Models::QueryRecordDownloadJobListResponse queryRecordDownloadJobListWithOptions(const Models::QueryRecordDownloadJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cloud recording download tasks.
       *
       * @description ## Limits
       * The obtained recording download URL is valid for 1 hour.
       * ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryRecordDownloadJobListRequest
       * @return QueryRecordDownloadJobListResponse
       */
      Models::QueryRecordDownloadJobListResponse queryRecordDownloadJobList(const Models::QueryRecordDownloadJobListRequest &request);

      /**
       * @summary Requests the download URL of a cloud recording file.
       *
       * @description ## Usage notes
       * Generating a cloud recording file takes a long time. You must poll this operation to obtain the progress. The download URL is generated only after the progress is complete.
       *
       * @param request QueryRecordDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordDownloadUrlResponse
       */
      Models::QueryRecordDownloadUrlResponse queryRecordDownloadUrlWithOptions(const Models::QueryRecordDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Requests the download URL of a cloud recording file.
       *
       * @description ## Usage notes
       * Generating a cloud recording file takes a long time. You must poll this operation to obtain the progress. The download URL is generated only after the progress is complete.
       *
       * @param request QueryRecordDownloadUrlRequest
       * @return QueryRecordDownloadUrlResponse
       */
      Models::QueryRecordDownloadUrlResponse queryRecordDownloadUrl(const Models::QueryRecordDownloadUrlRequest &request);

      /**
       * @summary Queries the details of a recording plan.
       *
       * @param request QueryRecordPlanDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordPlanDetailResponse
       */
      Models::QueryRecordPlanDetailResponse queryRecordPlanDetailWithOptions(const Models::QueryRecordPlanDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a recording plan.
       *
       * @param request QueryRecordPlanDetailRequest
       * @return QueryRecordPlanDetailResponse
       */
      Models::QueryRecordPlanDetailResponse queryRecordPlanDetail(const Models::QueryRecordPlanDetailRequest &request);

      /**
       * @summary Queries the recording plan of a video device based on the device ID of the IP camera (IPC).
       *
       * @param request QueryRecordPlanDeviceByDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordPlanDeviceByDeviceResponse
       */
      Models::QueryRecordPlanDeviceByDeviceResponse queryRecordPlanDeviceByDeviceWithOptions(const Models::QueryRecordPlanDeviceByDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the recording plan of a video device based on the device ID of the IP camera (IPC).
       *
       * @param request QueryRecordPlanDeviceByDeviceRequest
       * @return QueryRecordPlanDeviceByDeviceResponse
       */
      Models::QueryRecordPlanDeviceByDeviceResponse queryRecordPlanDeviceByDevice(const Models::QueryRecordPlanDeviceByDeviceRequest &request);

      /**
       * @summary Queries the devices associated with a recording plan.
       *
       * @param request QueryRecordPlanDeviceByPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordPlanDeviceByPlanResponse
       */
      Models::QueryRecordPlanDeviceByPlanResponse queryRecordPlanDeviceByPlanWithOptions(const Models::QueryRecordPlanDeviceByPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the devices associated with a recording plan.
       *
       * @param request QueryRecordPlanDeviceByPlanRequest
       * @return QueryRecordPlanDeviceByPlanResponse
       */
      Models::QueryRecordPlanDeviceByPlanResponse queryRecordPlanDeviceByPlan(const Models::QueryRecordPlanDeviceByPlanRequest &request);

      /**
       * @summary Queries a list of recording plans.
       *
       * @param request QueryRecordPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordPlansResponse
       */
      Models::QueryRecordPlansResponse queryRecordPlansWithOptions(const Models::QueryRecordPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of recording plans.
       *
       * @param request QueryRecordPlansRequest
       * @return QueryRecordPlansResponse
       */
      Models::QueryRecordPlansResponse queryRecordPlans(const Models::QueryRecordPlansRequest &request);

      /**
       * @summary Queries the playback URL of a cloud recording file.
       *
       * @param request QueryRecordUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordUrlResponse
       */
      Models::QueryRecordUrlResponse queryRecordUrlWithOptions(const Models::QueryRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the playback URL of a cloud recording file.
       *
       * @param request QueryRecordUrlRequest
       * @return QueryRecordUrlResponse
       */
      Models::QueryRecordUrlResponse queryRecordUrl(const Models::QueryRecordUrlRequest &request);

      /**
       * @summary Retrieves the playback URL for recording files within a specified time range.
       *
       * @param request QueryRecordUrlByTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRecordUrlByTimeResponse
       */
      Models::QueryRecordUrlByTimeResponse queryRecordUrlByTimeWithOptions(const Models::QueryRecordUrlByTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the playback URL for recording files within a specified time range.
       *
       * @param request QueryRecordUrlByTimeRequest
       * @return QueryRecordUrlByTimeResponse
       */
      Models::QueryRecordUrlByTimeResponse queryRecordUrlByTime(const Models::QueryRecordUrlByTimeRequest &request);

      /**
       * @param request QueryRtmpKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRtmpKeyResponse
       */
      Models::QueryRtmpKeyResponse queryRtmpKeyWithOptions(const Models::QueryRtmpKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryRtmpKeyRequest
       * @return QueryRtmpKeyResponse
       */
      Models::QueryRtmpKeyResponse queryRtmpKey(const Models::QueryRtmpKeyRequest &request);

      /**
       * @summary Queries the details of a video stream push job, such as the creation time, current push status, job type, and push URL.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
       * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryStreamPushJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStreamPushJobResponse
       */
      Models::QueryStreamPushJobResponse queryStreamPushJobWithOptions(const Models::QueryStreamPushJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a video stream push job, such as the creation time, current push status, job type, and push URL.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to call this API operation is 50.
       * > All Resource Access Management (RAM) users within a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryStreamPushJobRequest
       * @return QueryStreamPushJobResponse
       */
      Models::QueryStreamPushJobResponse queryStreamPushJob(const Models::QueryStreamPushJobRequest &request);

      /**
       * @summary Queries the list and details of video stream push jobs, including the creation time, current push status, job type, and push URL.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryStreamPushJobListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStreamPushJobListResponse
       */
      Models::QueryStreamPushJobListResponse queryStreamPushJobListWithOptions(const Models::QueryStreamPushJobListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and details of video stream push jobs, including the creation time, current push status, job type, and push URL.
       *
       * @description ## QPS limit
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryStreamPushJobListRequest
       * @return QueryStreamPushJobListResponse
       */
      Models::QueryStreamPushJobListResponse queryStreamPushJobList(const Models::QueryStreamPushJobListRequest &request);

      /**
       * @summary Queries the list and details of cloud snapshot tasks, including the snapshot interval and stream type.
       *
       * @description ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryStreamSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryStreamSnapshotJobResponse
       */
      Models::QueryStreamSnapshotJobResponse queryStreamSnapshotJobWithOptions(const Models::QueryStreamSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list and details of cloud snapshot tasks, including the snapshot interval and stream type.
       *
       * @description ## QPS limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 50.
       * > All Resource Access Management (RAM) users under a single Alibaba Cloud account share the quota of the Alibaba Cloud account.
       *
       * @param request QueryStreamSnapshotJobRequest
       * @return QueryStreamSnapshotJobResponse
       */
      Models::QueryStreamSnapshotJobResponse queryStreamSnapshotJob(const Models::QueryStreamSnapshotJobRequest &request);

      /**
       * @summary Queries the time template information of a device.
       *
       * @param request QueryTimeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTimeTemplateResponse
       */
      Models::QueryTimeTemplateResponse queryTimeTemplateWithOptions(const Models::QueryTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time template information of a device.
       *
       * @param request QueryTimeTemplateRequest
       * @return QueryTimeTemplateResponse
       */
      Models::QueryTimeTemplateResponse queryTimeTemplate(const Models::QueryTimeTemplateRequest &request);

      /**
       * @summary Queries the details of a specified time template.
       *
       * @param request QueryTimeTemplateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTimeTemplateDetailResponse
       */
      Models::QueryTimeTemplateDetailResponse queryTimeTemplateDetailWithOptions(const Models::QueryTimeTemplateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified time template.
       *
       * @param request QueryTimeTemplateDetailRequest
       * @return QueryTimeTemplateDetailResponse
       */
      Models::QueryTimeTemplateDetailResponse queryTimeTemplateDetail(const Models::QueryTimeTemplateDetailRequest &request);

      /**
       * @param request QueryVisionDeviceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVisionDeviceInfoResponse
       */
      Models::QueryVisionDeviceInfoResponse queryVisionDeviceInfoWithOptions(const Models::QueryVisionDeviceInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryVisionDeviceInfoRequest
       * @return QueryVisionDeviceInfoResponse
       */
      Models::QueryVisionDeviceInfoResponse queryVisionDeviceInfo(const Models::QueryVisionDeviceInfoRequest &request);

      /**
       * @summary Retrieves the voice intercom address of an IPC device.
       *
       * @param request QueryVoiceIntercomRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVoiceIntercomResponse
       */
      Models::QueryVoiceIntercomResponse queryVoiceIntercomWithOptions(const Models::QueryVoiceIntercomRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the voice intercom address of an IPC device.
       *
       * @param request QueryVoiceIntercomRequest
       * @return QueryVoiceIntercomResponse
       */
      Models::QueryVoiceIntercomResponse queryVoiceIntercom(const Models::QueryVoiceIntercomRequest &request);

      /**
       * @param request RefreshGbSubDeviceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshGbSubDeviceListResponse
       */
      Models::RefreshGbSubDeviceListResponse refreshGbSubDeviceListWithOptions(const Models::RefreshGbSubDeviceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RefreshGbSubDeviceListRequest
       * @return RefreshGbSubDeviceListResponse
       */
      Models::RefreshGbSubDeviceListResponse refreshGbSubDeviceList(const Models::RefreshGbSubDeviceListRequest &request);

      /**
       * @summary Removes a device from a device group.
       *
       * @param request RemoveFaceDeviceFromDeviceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveFaceDeviceFromDeviceGroupResponse
       */
      Models::RemoveFaceDeviceFromDeviceGroupResponse removeFaceDeviceFromDeviceGroupWithOptions(const Models::RemoveFaceDeviceFromDeviceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a device from a device group.
       *
       * @param request RemoveFaceDeviceFromDeviceGroupRequest
       * @return RemoveFaceDeviceFromDeviceGroupResponse
       */
      Models::RemoveFaceDeviceFromDeviceGroupResponse removeFaceDeviceFromDeviceGroup(const Models::RemoveFaceDeviceFromDeviceGroupRequest &request);

      /**
       * @summary Removes a user from a user group.
       *
       * @param request RemoveFaceUserFromUserGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveFaceUserFromUserGroupResponse
       */
      Models::RemoveFaceUserFromUserGroupResponse removeFaceUserFromUserGroupWithOptions(const Models::RemoveFaceUserFromUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from a user group.
       *
       * @param request RemoveFaceUserFromUserGroupRequest
       * @return RemoveFaceUserFromUserGroupResponse
       */
      Models::RemoveFaceUserFromUserGroupResponse removeFaceUserFromUserGroup(const Models::RemoveFaceUserFromUserGroupRequest &request);

      /**
       * @summary Sets the cloud storage image lifecycle for an IPC device.
       *
       * @description > By default, images are permanently stored in the cloud before you configure the cloud storage image lifecycle.
       *
       * @param request SetDevicePictureLifeCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDevicePictureLifeCycleResponse
       */
      Models::SetDevicePictureLifeCycleResponse setDevicePictureLifeCycleWithOptions(const Models::SetDevicePictureLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the cloud storage image lifecycle for an IPC device.
       *
       * @description > By default, images are permanently stored in the cloud before you configure the cloud storage image lifecycle.
       *
       * @param request SetDevicePictureLifeCycleRequest
       * @return SetDevicePictureLifeCycleResponse
       */
      Models::SetDevicePictureLifeCycleResponse setDevicePictureLifeCycle(const Models::SetDevicePictureLifeCycleRequest &request);

      /**
       * @summary Sets the recording lifecycle of an IPC device, which specifies the number of days that recording files are stored in the cloud.
       *
       * @param request SetDeviceRecordLifeCycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDeviceRecordLifeCycleResponse
       */
      Models::SetDeviceRecordLifeCycleResponse setDeviceRecordLifeCycleWithOptions(const Models::SetDeviceRecordLifeCycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the recording lifecycle of an IPC device, which specifies the number of days that recording files are stored in the cloud.
       *
       * @param request SetDeviceRecordLifeCycleRequest
       * @return SetDeviceRecordLifeCycleResponse
       */
      Models::SetDeviceRecordLifeCycleResponse setDeviceRecordLifeCycle(const Models::SetDeviceRecordLifeCycleRequest &request);

      /**
       * @summary Stops the live streaming of an IPC device.
       *
       * @description ## Usage notes
       * - Before you invoke this operation, you must implement the Thing Specification Language (TSL) model service for stopping live streaming with the identity **StopPushStreaming** on the IPC device. If this service is not implemented on the IPC device, or the IPC device does not return a normal response after receiving the service invocation, the IPC device will not stop pushing the stream. For more information about TSL models, see [What is a TSL model](https://help.aliyun.com/document_detail/73727.html).
       * - If no one is watching the stream on the IPC device, you do not need to invoke this operation. IoT Platform automatically triggers the device to stop pushing the stream.
       * - During the procedure of triggering a video recording event, invoking this operation causes interruptions to the video file. Use this operation with caution.
       *
       * @param request StopLiveStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLiveStreamingResponse
       */
      Models::StopLiveStreamingResponse stopLiveStreamingWithOptions(const Models::StopLiveStreamingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the live streaming of an IPC device.
       *
       * @description ## Usage notes
       * - Before you invoke this operation, you must implement the Thing Specification Language (TSL) model service for stopping live streaming with the identity **StopPushStreaming** on the IPC device. If this service is not implemented on the IPC device, or the IPC device does not return a normal response after receiving the service invocation, the IPC device will not stop pushing the stream. For more information about TSL models, see [What is a TSL model](https://help.aliyun.com/document_detail/73727.html).
       * - If no one is watching the stream on the IPC device, you do not need to invoke this operation. IoT Platform automatically triggers the device to stop pushing the stream.
       * - During the procedure of triggering a video recording event, invoking this operation causes interruptions to the video file. Use this operation with caution.
       *
       * @param request StopLiveStreamingRequest
       * @return StopLiveStreamingResponse
       */
      Models::StopLiveStreamingResponse stopLiveStreaming(const Models::StopLiveStreamingRequest &request);

      /**
       * @summary Stops an IP camera from actively triggering video recording.
       *
       * @param request StopTriggeredRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTriggeredRecordResponse
       */
      Models::StopTriggeredRecordResponse stopTriggeredRecordWithOptions(const Models::StopTriggeredRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an IP camera from actively triggering video recording.
       *
       * @param request StopTriggeredRecordRequest
       * @return StopTriggeredRecordResponse
       */
      Models::StopTriggeredRecordResponse stopTriggeredRecord(const Models::StopTriggeredRecordRequest &request);

      /**
       * @summary Transfers devices to another instance.
       *
       * @description Before you call this operation to transfer devices to another instance, contact technical support to evaluate the migration plan and prevent features from becoming unavailable after the migration.
       * **Before you begin**
       * - The devices to be transferred have the video service feature enabled.
       *     - Devices in the Enterprise instance: Log on to the IoT Platform console and click **Enterprise instance**. In the left-side navigation pane, choose **Video Service** > **Access Service**. On the **Access Service** page, click the **Product Management** tab. Check the product to which the device to be transferred belongs, and make sure that the **Enabled/Disabled Status** column displays **Enabled**.
       *     - Devices in an Enterprise Edition instance: The video service is enabled.
       * - The device distribution task is complete. For more information, see [CreateDeviceDistributeJob](https://help.aliyun.com/document_detail/199390.html) or [Device distribution](https://help.aliyun.com/document_detail/143450.html).
       * - Make sure that a picture lifecycle is configured for camera devices. If no picture lifecycle is configured for a camera device, calling this operation automatically sets the picture lifecycle to 180 days. For more information, see [SetDevicePictureLifeCycle](https://help.aliyun.com/document_detail/107880.html).
       * **Background information**
       * - If the source instance and target instance are of different types, review the Billable methods of the instances before the migration. For more information about Billable methods, see [Billing overview](https://help.aliyun.com/document_detail/124250.html).
       * - During the migration, devices go offline. The more devices you migrate, the longer the migration takes. Data generated by the devices during this period cannot be retained.
       *
       * @param request TransferDeviceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferDeviceInstanceResponse
       */
      Models::TransferDeviceInstanceResponse transferDeviceInstanceWithOptions(const Models::TransferDeviceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers devices to another instance.
       *
       * @description Before you call this operation to transfer devices to another instance, contact technical support to evaluate the migration plan and prevent features from becoming unavailable after the migration.
       * **Before you begin**
       * - The devices to be transferred have the video service feature enabled.
       *     - Devices in the Enterprise instance: Log on to the IoT Platform console and click **Enterprise instance**. In the left-side navigation pane, choose **Video Service** > **Access Service**. On the **Access Service** page, click the **Product Management** tab. Check the product to which the device to be transferred belongs, and make sure that the **Enabled/Disabled Status** column displays **Enabled**.
       *     - Devices in an Enterprise Edition instance: The video service is enabled.
       * - The device distribution task is complete. For more information, see [CreateDeviceDistributeJob](https://help.aliyun.com/document_detail/199390.html) or [Device distribution](https://help.aliyun.com/document_detail/143450.html).
       * - Make sure that a picture lifecycle is configured for camera devices. If no picture lifecycle is configured for a camera device, calling this operation automatically sets the picture lifecycle to 180 days. For more information, see [SetDevicePictureLifeCycle](https://help.aliyun.com/document_detail/107880.html).
       * **Background information**
       * - If the source instance and target instance are of different types, review the Billable methods of the instances before the migration. For more information about Billable methods, see [Billing overview](https://help.aliyun.com/document_detail/124250.html).
       * - During the migration, devices go offline. The more devices you migrate, the longer the migration takes. Data generated by the devices during this period cannot be retained.
       *
       * @param request TransferDeviceInstanceRequest
       * @return TransferDeviceInstanceResponse
       */
      Models::TransferDeviceInstanceResponse transferDeviceInstance(const Models::TransferDeviceInstanceRequest &request);

      /**
       * @summary Triggers an IPC device to capture an image and upload it to the cloud.
       *
       * @param request TriggerCapturePictureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerCapturePictureResponse
       */
      Models::TriggerCapturePictureResponse triggerCapturePictureWithOptions(const Models::TriggerCapturePictureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an IPC device to capture an image and upload it to the cloud.
       *
       * @param request TriggerCapturePictureRequest
       * @return TriggerCapturePictureResponse
       */
      Models::TriggerCapturePictureResponse triggerCapturePicture(const Models::TriggerCapturePictureRequest &request);

      /**
       * @summary Triggers the specified IPC device to start recording and uploads the recording file to the cloud.
       *
       * @param request TriggerRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TriggerRecordResponse
       */
      Models::TriggerRecordResponse triggerRecordWithOptions(const Models::TriggerRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers the specified IPC device to start recording and uploads the recording file to the cloud.
       *
       * @param request TriggerRecordRequest
       * @return TriggerRecordResponse
       */
      Models::TriggerRecordResponse triggerRecord(const Models::TriggerRecordRequest &request);

      /**
       * @summary Dissociates multiple devices from an image search application instance.
       *
       * @description ## Limits
       * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the call is failed.
       *
       * @param request UnbindPictureSearchAppWithDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindPictureSearchAppWithDevicesResponse
       */
      Models::UnbindPictureSearchAppWithDevicesResponse unbindPictureSearchAppWithDevicesWithOptions(const Models::UnbindPictureSearchAppWithDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates multiple devices from an image search application instance.
       *
       * @description ## Limits
       * If you invoke this operation on an Enterprise instance, you must specify the **IotInstanceId** request parameter. Otherwise, the call is failed.
       *
       * @param request UnbindPictureSearchAppWithDevicesRequest
       * @return UnbindPictureSearchAppWithDevicesResponse
       */
      Models::UnbindPictureSearchAppWithDevicesResponse unbindPictureSearchAppWithDevices(const Models::UnbindPictureSearchAppWithDevicesRequest &request);

      /**
       * @summary Updates the video recording plan for intelligent alert events.
       *
       * @param request UpdateEventRecordPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventRecordPlanResponse
       */
      Models::UpdateEventRecordPlanResponse updateEventRecordPlanWithOptions(const Models::UpdateEventRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the video recording plan for intelligent alert events.
       *
       * @param request UpdateEventRecordPlanRequest
       * @return UpdateEventRecordPlanResponse
       */
      Models::UpdateEventRecordPlanResponse updateEventRecordPlan(const Models::UpdateEventRecordPlanRequest &request);

      /**
       * @summary Updates user information.
       *
       * @param request UpdateFaceUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFaceUserResponse
       */
      Models::UpdateFaceUserResponse updateFaceUserWithOptions(const Models::UpdateFaceUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates user information.
       *
       * @param request UpdateFaceUserRequest
       * @return UpdateFaceUserResponse
       */
      Models::UpdateFaceUserResponse updateFaceUser(const Models::UpdateFaceUserRequest &request);

      /**
       * @summary Updates the face synchronization relationship between a user group and a device group.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request UpdateFaceUserGroupAndDeviceGroupRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::UpdateFaceUserGroupAndDeviceGroupRelationResponse updateFaceUserGroupAndDeviceGroupRelationWithOptions(const Models::UpdateFaceUserGroupAndDeviceGroupRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the face synchronization relationship between a user group and a device group.
       *
       * @description ## Limits
       * The maximum queries per second (QPS) for a single Alibaba Cloud account to invoke this API operation is 100.
       *     > Resource Access Management (RAM) users share the quota of the Alibaba Cloud account.
       *
       * @param request UpdateFaceUserGroupAndDeviceGroupRelationRequest
       * @return UpdateFaceUserGroupAndDeviceGroupRelationResponse
       */
      Models::UpdateFaceUserGroupAndDeviceGroupRelationResponse updateFaceUserGroupAndDeviceGroupRelation(const Models::UpdateFaceUserGroupAndDeviceGroupRelationRequest &request);

      /**
       * @param request UpdateGbDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGbDeviceResponse
       */
      Models::UpdateGbDeviceResponse updateGbDeviceWithOptions(const Models::UpdateGbDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateGbDeviceRequest
       * @return UpdateGbDeviceResponse
       */
      Models::UpdateGbDeviceResponse updateGbDevice(const Models::UpdateGbDeviceRequest &request);

      /**
       * @summary Sets the IP protocol version supported by an instance.
       *
       * @param request UpdateInstanceInternetProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceInternetProtocolResponse
       */
      Models::UpdateInstanceInternetProtocolResponse updateInstanceInternetProtocolWithOptions(const Models::UpdateInstanceInternetProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the IP protocol version supported by an instance.
       *
       * @param request UpdateInstanceInternetProtocolRequest
       * @return UpdateInstanceInternetProtocolResponse
       */
      Models::UpdateInstanceInternetProtocolResponse updateInstanceInternetProtocol(const Models::UpdateInstanceInternetProtocolRequest &request);

      /**
       * @summary Modifies the information of an image search application instance.
       *
       * @param request UpdatePictureSearchAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePictureSearchAppResponse
       */
      Models::UpdatePictureSearchAppResponse updatePictureSearchAppWithOptions(const Models::UpdatePictureSearchAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an image search application instance.
       *
       * @param request UpdatePictureSearchAppRequest
       * @return UpdatePictureSearchAppResponse
       */
      Models::UpdatePictureSearchAppResponse updatePictureSearchApp(const Models::UpdatePictureSearchAppRequest &request);

      /**
       * @summary Updates a recording plan.
       *
       * @param request UpdateRecordPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordPlanResponse
       */
      Models::UpdateRecordPlanResponse updateRecordPlanWithOptions(const Models::UpdateRecordPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a recording plan.
       *
       * @param request UpdateRecordPlanRequest
       * @return UpdateRecordPlanResponse
       */
      Models::UpdateRecordPlanResponse updateRecordPlan(const Models::UpdateRecordPlanRequest &request);

      /**
       * @param request UpdateRtmpKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRtmpKeyResponse
       */
      Models::UpdateRtmpKeyResponse updateRtmpKeyWithOptions(const Models::UpdateRtmpKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateRtmpKeyRequest
       * @return UpdateRtmpKeyResponse
       */
      Models::UpdateRtmpKeyResponse updateRtmpKey(const Models::UpdateRtmpKeyRequest &request);

      /**
       * @summary Updates a time template.
       *
       * @param request UpdateTimeTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTimeTemplateResponse
       */
      Models::UpdateTimeTemplateResponse updateTimeTemplateWithOptions(const Models::UpdateTimeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a time template.
       *
       * @param request UpdateTimeTemplateRequest
       * @return UpdateTimeTemplateResponse
       */
      Models::UpdateTimeTemplateResponse updateTimeTemplate(const Models::UpdateTimeTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
