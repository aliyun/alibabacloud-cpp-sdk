// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VOD20170321_HPP_
#define ALIBABACLOUD_VOD20170321_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Vod20170321Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Vod20170321.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds an AI template for automated review and smart thumbnail tasks.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   Before you add an AI template for automated review and smart thumbnail tasks, make sure that [automated review](https://ai.aliyun.com/vi/censor) and [smart thumbnail](https://ai.aliyun.com/vi/cover) are enabled.
       *
       * @param request AddAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAITemplateResponse
       */
      Models::AddAITemplateResponse addAITemplateWithOptions(const Models::AddAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AI template for automated review and smart thumbnail tasks.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   Before you add an AI template for automated review and smart thumbnail tasks, make sure that [automated review](https://ai.aliyun.com/vi/censor) and [smart thumbnail](https://ai.aliyun.com/vi/cover) are enabled.
       *
       * @param request AddAITemplateRequest
       * @return AddAITemplateResponse
       */
      Models::AddAITemplateResponse addAITemplate(const Models::AddAITemplateRequest &request);

      /**
       * @summary Creates a video category. You can call this operation to categorize media assets including audio or video files, images, and short video materials in ApsaraVideo VOD. This simplifies the query and management of media assets.
       *
       * @description *   You can create a maximum of 3 levels of categories for audio, video, and image files and 2 levels of categories for short video materials. Each category level can contain a maximum of 100 subcategories. To create categories for audio and video files, set `Type` to `default`. To create categories for short video materials, set `Type` to `material`.
       * *   After you create a category, you can categorize media resources during upload or categorize the uploaded media resources. For more information, see [Manage video categories](https://help.aliyun.com/document_detail/86070.html).
       *
       * @param request AddCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategoryWithOptions(const Models::AddCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a video category. You can call this operation to categorize media assets including audio or video files, images, and short video materials in ApsaraVideo VOD. This simplifies the query and management of media assets.
       *
       * @description *   You can create a maximum of 3 levels of categories for audio, video, and image files and 2 levels of categories for short video materials. Each category level can contain a maximum of 100 subcategories. To create categories for audio and video files, set `Type` to `default`. To create categories for short video materials, set `Type` to `material`.
       * *   After you create a category, you can categorize media resources during upload or categorize the uploaded media resources. For more information, see [Manage video categories](https://help.aliyun.com/document_detail/86070.html).
       *
       * @param request AddCategoryRequest
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategory(const Models::AddCategoryRequest &request);

      /**
       * @summary Creates an online editing project.
       *
       * @description *   For more information about the online editing feature, see [Overview](https://help.aliyun.com/document_detail/95482.html).
       *
       * @param request AddEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEditingProjectResponse
       */
      Models::AddEditingProjectResponse addEditingProjectWithOptions(const Models::AddEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an online editing project.
       *
       * @description *   For more information about the online editing feature, see [Overview](https://help.aliyun.com/document_detail/95482.html).
       *
       * @param request AddEditingProjectRequest
       * @return AddEditingProjectResponse
       */
      Models::AddEditingProjectResponse addEditingProject(const Models::AddEditingProjectRequest &request);

      /**
       * @summary Adds one or more materials to an editing project.
       *
       * @param request AddEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEditingProjectMaterialsResponse
       */
      Models::AddEditingProjectMaterialsResponse addEditingProjectMaterialsWithOptions(const Models::AddEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more materials to an editing project.
       *
       * @param request AddEditingProjectMaterialsRequest
       * @return AddEditingProjectMaterialsResponse
       */
      Models::AddEditingProjectMaterialsResponse addEditingProjectMaterials(const Models::AddEditingProjectMaterialsRequest &request);

      /**
       * @summary Creates a transcoding template group or adds transcoding templates to a transcoding template group.
       *
       * @description *   You cannot perform custom operations on transcoding template groups that are **locked** in the ApsaraVideo VOD console. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the information about a transcoding template group and check whether the transcoding template group is locked based on the value of the Locked parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock a transcoding template group if it is locked. Then, you can perform custom operations on the transcoding template group.
       * *   An Object Storage Service (OSS) bucket is required to store files that are used for transcoding. You cannot create a transcoding template group if no bucket is available. To activate a bucket, perform the following operations: Log on to the ApsaraVideo VOD console. In the left-side navigation pane, choose **Configuration Management > Media Management > Storage**. On the **Storage** page, activate the bucket that is allocated by ApsaraVideo VOD.
       * *   You cannot add transcoding templates to the **No Transcoding** template group.
       * *   You can create a maximum of 20 transcoding template groups.
       * *   You can add a maximum of 20 transcoding templates to a transcoding template group.
       * *   If you want to generate a URL for adaptive bitrate streaming, you can add video packaging templates to a transcoding template group. You can add a maximum of 10 video packaging templates to a transcoding template group. If you add more than 10 video packaging templates, URLs of the video transcoded based on the video packaging templates are generated but the URL for adaptive bitrate streaming is not generated.
       * ### QPS limits
       * You can call this operation up to five times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request AddTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTranscodeTemplateGroupResponse
       */
      Models::AddTranscodeTemplateGroupResponse addTranscodeTemplateGroupWithOptions(const Models::AddTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a transcoding template group or adds transcoding templates to a transcoding template group.
       *
       * @description *   You cannot perform custom operations on transcoding template groups that are **locked** in the ApsaraVideo VOD console. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the information about a transcoding template group and check whether the transcoding template group is locked based on the value of the Locked parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock a transcoding template group if it is locked. Then, you can perform custom operations on the transcoding template group.
       * *   An Object Storage Service (OSS) bucket is required to store files that are used for transcoding. You cannot create a transcoding template group if no bucket is available. To activate a bucket, perform the following operations: Log on to the ApsaraVideo VOD console. In the left-side navigation pane, choose **Configuration Management > Media Management > Storage**. On the **Storage** page, activate the bucket that is allocated by ApsaraVideo VOD.
       * *   You cannot add transcoding templates to the **No Transcoding** template group.
       * *   You can create a maximum of 20 transcoding template groups.
       * *   You can add a maximum of 20 transcoding templates to a transcoding template group.
       * *   If you want to generate a URL for adaptive bitrate streaming, you can add video packaging templates to a transcoding template group. You can add a maximum of 10 video packaging templates to a transcoding template group. If you add more than 10 video packaging templates, URLs of the video transcoded based on the video packaging templates are generated but the URL for adaptive bitrate streaming is not generated.
       * ### QPS limits
       * You can call this operation up to five times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request AddTranscodeTemplateGroupRequest
       * @return AddTranscodeTemplateGroupResponse
       */
      Models::AddTranscodeTemplateGroupResponse addTranscodeTemplateGroup(const Models::AddTranscodeTemplateGroupRequest &request);

      /**
       * @summary Adds a domain name to accelerate in ApsaraVideo VOD.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   Before you add a domain name to accelerate, you must activate ApsaraVideo VOD and apply for an Internet content provider (ICP) filing for the domain name. For more information about how to activate ApsaraVideo VOD, see [Activate ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html).
       * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed by Alibaba Cloud. The review will be complete by the end of the next business day after you submit an application.
       * *   You can add only one domain name to accelerate in a request. You can add a maximum of 20 accelerated domain names within an Alibaba Cloud account.
       *
       * @param request AddVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVodDomainResponse
       */
      Models::AddVodDomainResponse addVodDomainWithOptions(const Models::AddVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to accelerate in ApsaraVideo VOD.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   Before you add a domain name to accelerate, you must activate ApsaraVideo VOD and apply for an Internet content provider (ICP) filing for the domain name. For more information about how to activate ApsaraVideo VOD, see [Activate ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html).
       * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed by Alibaba Cloud. The review will be complete by the end of the next business day after you submit an application.
       * *   You can add only one domain name to accelerate in a request. You can add a maximum of 20 accelerated domain names within an Alibaba Cloud account.
       *
       * @param request AddVodDomainRequest
       * @return AddVodDomainResponse
       */
      Models::AddVodDomainResponse addVodDomain(const Models::AddVodDomainRequest &request);

      /**
       * @summary Binds a storage bucket to one or more applications in ApsaraVideo VOD.
       *
       * @description You can call this operation to add a buckets to an ApsaraVideo VOD applications.
       * > You can add only one ApsaraVideo VOD bucket for each application. If you specify an AppId that does not exist or the ID of an application for which an VOD bucket is enabled, an error is returned.
       *
       * @param request AddVodStorageForAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVodStorageForAppResponse
       */
      Models::AddVodStorageForAppResponse addVodStorageForAppWithOptions(const Models::AddVodStorageForAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a storage bucket to one or more applications in ApsaraVideo VOD.
       *
       * @description You can call this operation to add a buckets to an ApsaraVideo VOD applications.
       * > You can add only one ApsaraVideo VOD bucket for each application. If you specify an AppId that does not exist or the ID of an application for which an VOD bucket is enabled, an error is returned.
       *
       * @param request AddVodStorageForAppRequest
       * @return AddVodStorageForAppResponse
       */
      Models::AddVodStorageForAppResponse addVodStorageForApp(const Models::AddVodStorageForAppRequest &request);

      /**
       * @summary Adds a snapshot template or frame animation template.
       *
       * @description *   After you add a snapshot template, you can call the [SubmitSnapshotJob](https://help.aliyun.com/document_detail/72213.html) operation and specify the template ID to submit a snapshot job.
       * *   You can use the HTTP (HTTPS compatible) callback or MNS callback method to receive the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request AddVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVodTemplateResponse
       */
      Models::AddVodTemplateResponse addVodTemplateWithOptions(const Models::AddVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a snapshot template or frame animation template.
       *
       * @description *   After you add a snapshot template, you can call the [SubmitSnapshotJob](https://help.aliyun.com/document_detail/72213.html) operation and specify the template ID to submit a snapshot job.
       * *   You can use the HTTP (HTTPS compatible) callback or MNS callback method to receive the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request AddVodTemplateRequest
       * @return AddVodTemplateResponse
       */
      Models::AddVodTemplateResponse addVodTemplate(const Models::AddVodTemplateRequest &request);

      /**
       * @summary Creates an image or text watermark. ApsaraVideo VOD allows you to create watermark templates to reuse your parameter configurations such as watermark position, size, font, and color. Each watermark template is assigned a unique ID. This simplifies the progress of creating watermark tasks.
       *
       * @description *   You can call this operation to create an `Image` watermark template or a `Text` watermark template. You can use static images in the PNG format or dynamic images in the GIF, APNG, and MOV formats as image watermarks.
       * *   After you call this operation to create a watermark template, you must call the [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to associate the watermark template with a transcoding template group. This way, you can add watermarks to videos during transcoding.
       * *   For more information, see [Video watermarks](https://help.aliyun.com/document_detail/99369.html).
       *
       * @param request AddWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWatermarkResponse
       */
      Models::AddWatermarkResponse addWatermarkWithOptions(const Models::AddWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image or text watermark. ApsaraVideo VOD allows you to create watermark templates to reuse your parameter configurations such as watermark position, size, font, and color. Each watermark template is assigned a unique ID. This simplifies the progress of creating watermark tasks.
       *
       * @description *   You can call this operation to create an `Image` watermark template or a `Text` watermark template. You can use static images in the PNG format or dynamic images in the GIF, APNG, and MOV formats as image watermarks.
       * *   After you call this operation to create a watermark template, you must call the [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to associate the watermark template with a transcoding template group. This way, you can add watermarks to videos during transcoding.
       * *   For more information, see [Video watermarks](https://help.aliyun.com/document_detail/99369.html).
       *
       * @param request AddWatermarkRequest
       * @return AddWatermarkResponse
       */
      Models::AddWatermarkResponse addWatermark(const Models::AddWatermarkRequest &request);

      /**
       * @summary Grants a RAM user or RAM role permissions to access ApsaraVideo VOD applications.
       *
       * @description > You can grant a RAM user or RAM role permissions to access up to 10 applications.
       *
       * @param request AttachAppPolicyToIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAppPolicyToIdentityResponse
       */
      Models::AttachAppPolicyToIdentityResponse attachAppPolicyToIdentityWithOptions(const Models::AttachAppPolicyToIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants a RAM user or RAM role permissions to access ApsaraVideo VOD applications.
       *
       * @description > You can grant a RAM user or RAM role permissions to access up to 10 applications.
       *
       * @param request AttachAppPolicyToIdentityRequest
       * @return AttachAppPolicyToIdentityResponse
       */
      Models::AttachAppPolicyToIdentityResponse attachAppPolicyToIdentity(const Models::AttachAppPolicyToIdentityRequest &request);

      /**
       * @summary Obtains the basic information and source file information of multiple media assets.
       *
       * @description *   You can specify up to 20 audio or video file IDs in each request.
       * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request BatchGetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfosWithOptions(const Models::BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the basic information and source file information of multiple media assets.
       *
       * @description *   You can specify up to 20 audio or video file IDs in each request.
       * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request BatchGetMediaInfosRequest
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfos(const Models::BatchGetMediaInfosRequest &request);

      /**
       * @summary Configures one or more domain names for CDN.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request BatchSetVodDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetVodDomainConfigsResponse
       */
      Models::BatchSetVodDomainConfigsResponse batchSetVodDomainConfigsWithOptions(const Models::BatchSetVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures one or more domain names for CDN.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request BatchSetVodDomainConfigsRequest
       * @return BatchSetVodDomainConfigsResponse
       */
      Models::BatchSetVodDomainConfigsResponse batchSetVodDomainConfigs(const Models::BatchSetVodDomainConfigsRequest &request);

      /**
       * @summary Enables accelerated domain names that are in the disabled state.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If the domain name that you want to enable is invalid or your Alibaba Cloud account has overdue payments, you cannot call this operation to enable the domain name.
       *
       * @param request BatchStartVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartVodDomainResponse
       */
      Models::BatchStartVodDomainResponse batchStartVodDomainWithOptions(const Models::BatchStartVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables accelerated domain names that are in the disabled state.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If the domain name that you want to enable is invalid or your Alibaba Cloud account has overdue payments, you cannot call this operation to enable the domain name.
       *
       * @param request BatchStartVodDomainRequest
       * @return BatchStartVodDomainResponse
       */
      Models::BatchStartVodDomainResponse batchStartVodDomain(const Models::BatchStartVodDomainRequest &request);

      /**
       * @summary Disables accelerated domain names.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   After you disable an accelerated domain name, the information about the domain name is retained. The system automatically reroutes all the requests that are destined for the domain name to the origin server.
       *
       * @param request BatchStopVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopVodDomainResponse
       */
      Models::BatchStopVodDomainResponse batchStopVodDomainWithOptions(const Models::BatchStopVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables accelerated domain names.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   After you disable an accelerated domain name, the information about the domain name is retained. The system automatically reroutes all the requests that are destined for the domain name to the origin server.
       *
       * @param request BatchStopVodDomainRequest
       * @return BatchStopVodDomainResponse
       */
      Models::BatchStopVodDomainResponse batchStopVodDomain(const Models::BatchStopVodDomainRequest &request);

      /**
       * @summary Cancels URL-based upload jobs in the queue.
       *
       * @description *   You can cancel only URL-based upload jobs in the **Pending** state. You can query the status of a URL-based upload job by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
       * *   You cannot cancel an upload job that already starts.
       * *   You must specify either JobIds or UploadUrls. If you specify both parameters, only JobIds takes effect.
       *
       * @param request CancelUrlUploadJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelUrlUploadJobsResponse
       */
      Models::CancelUrlUploadJobsResponse cancelUrlUploadJobsWithOptions(const Models::CancelUrlUploadJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels URL-based upload jobs in the queue.
       *
       * @description *   You can cancel only URL-based upload jobs in the **Pending** state. You can query the status of a URL-based upload job by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
       * *   You cannot cancel an upload job that already starts.
       * *   You must specify either JobIds or UploadUrls. If you specify both parameters, only JobIds takes effect.
       *
       * @param request CancelUrlUploadJobsRequest
       * @return CancelUrlUploadJobsResponse
       */
      Models::CancelUrlUploadJobsResponse cancelUrlUploadJobs(const Models::CancelUrlUploadJobsRequest &request);

      /**
       * @summary Transfers a resource to a specified resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers a resource to a specified resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates an application.
       *
       * @description You can create up to 10 applications within an Alibaba Cloud account. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
       * ### QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VOD](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request CreateAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInfoResponse
       */
      Models::CreateAppInfoResponse createAppInfoWithOptions(const Models::CreateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @description You can create up to 10 applications within an Alibaba Cloud account. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
       * ### QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VOD](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request CreateAppInfoRequest
       * @return CreateAppInfoResponse
       */
      Models::CreateAppInfoResponse createAppInfo(const Models::CreateAppInfoRequest &request);

      /**
       * @summary Performs manual review on media files, such as audio and video files.
       *
       * @param request CreateAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuditResponse
       */
      Models::CreateAuditResponse createAuditWithOptions(const Models::CreateAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs manual review on media files, such as audio and video files.
       *
       * @param request CreateAuditRequest
       * @return CreateAuditResponse
       */
      Models::CreateAuditResponse createAudit(const Models::CreateAuditRequest &request);

      /**
       * @summary Obtains an upload URL and an upload credential for an auxiliary media asset such as a watermark image, subtitle file, or material and generates the media ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
       *
       * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
       * *   If the upload credential expires after 3,000 seconds, you can call the CreateUploadAttachedMedia operation again to obtain a new upload URL and a new upload credential.
       * *   You can configure a callback to receive an [AttachedMediaUploadComplete](https://help.aliyun.com/document_detail/103250.html) event notification to determine whether the upload is successful.
       * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadAttachedMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadAttachedMediaResponse
       */
      Models::CreateUploadAttachedMediaResponse createUploadAttachedMediaWithOptions(const Models::CreateUploadAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an upload URL and an upload credential for an auxiliary media asset such as a watermark image, subtitle file, or material and generates the media ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
       *
       * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
       * *   If the upload credential expires after 3,000 seconds, you can call the CreateUploadAttachedMedia operation again to obtain a new upload URL and a new upload credential.
       * *   You can configure a callback to receive an [AttachedMediaUploadComplete](https://help.aliyun.com/document_detail/103250.html) event notification to determine whether the upload is successful.
       * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadAttachedMediaRequest
       * @return CreateUploadAttachedMediaResponse
       */
      Models::CreateUploadAttachedMediaResponse createUploadAttachedMedia(const Models::CreateUploadAttachedMediaRequest &request);

      /**
       * @summary Queries a URL and a credential for uploading an image.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   You must obtain a URL and a credential before you upload an image to ApsaraVideo VOD. ApsaraVideo VOD provides multiple upload methods. You can upload files by using server upload SDKs, client upload SDKs, URLs, Object Storage Service (OSS) API, or OSS SDKs. Each upload method has different requirements for obtaining upload URLs and credentials. For more information, see the "Usage notes" section of the [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html) topic.
       * *   You cannot refresh the upload URL or credential when you upload images. If the image upload credential expires, you can call this operation to obtain a new upload URL and credential. By default, the validity period of an image upload credential is 3,000 seconds.
       * *   You can call the [CreateUploadAttachedMedia](https://help.aliyun.com/document_detail/98467.html) operation to upload image watermarks.
       * *   You can configure a callback for [ImageUploadComplete](https://help.aliyun.com/document_detail/91968.html) to receive notifications about the image upload status.
       *
       * @param request CreateUploadImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadImageResponse
       */
      Models::CreateUploadImageResponse createUploadImageWithOptions(const Models::CreateUploadImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a URL and a credential for uploading an image.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   You must obtain a URL and a credential before you upload an image to ApsaraVideo VOD. ApsaraVideo VOD provides multiple upload methods. You can upload files by using server upload SDKs, client upload SDKs, URLs, Object Storage Service (OSS) API, or OSS SDKs. Each upload method has different requirements for obtaining upload URLs and credentials. For more information, see the "Usage notes" section of the [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html) topic.
       * *   You cannot refresh the upload URL or credential when you upload images. If the image upload credential expires, you can call this operation to obtain a new upload URL and credential. By default, the validity period of an image upload credential is 3,000 seconds.
       * *   You can call the [CreateUploadAttachedMedia](https://help.aliyun.com/document_detail/98467.html) operation to upload image watermarks.
       * *   You can configure a callback for [ImageUploadComplete](https://help.aliyun.com/document_detail/91968.html) to receive notifications about the image upload status.
       *
       * @param request CreateUploadImageRequest
       * @return CreateUploadImageResponse
       */
      Models::CreateUploadImageResponse createUploadImage(const Models::CreateUploadImageRequest &request);

      /**
       * @summary Obtains an upload URL and an upload credential for uploading an audio or video file and generates the audio or video ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs, video IDs, and image IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
       *
       * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   You can call this operation to obtain upload URLs and credentials for video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
       * *   If the upload credential expires, call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential. The default validity period of an upload credential is 3,000 seconds.
       * *   You can configure a callback to receive an event notification when an audio or video file is uploaded. Alternatively, after you upload an audio or video file, you can call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to determine whether the upload is successful. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html).
       * *   The value of the VideoId parameter that is returned after you call this operation can be used for media processing or the lifecycle management of media assets.
       * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadVideoResponse
       */
      Models::CreateUploadVideoResponse createUploadVideoWithOptions(const Models::CreateUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an upload URL and an upload credential for uploading an audio or video file and generates the audio or video ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs, video IDs, and image IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
       *
       * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   You can call this operation to obtain upload URLs and credentials for video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
       * *   If the upload credential expires, call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential. The default validity period of an upload credential is 3,000 seconds.
       * *   You can configure a callback to receive an event notification when an audio or video file is uploaded. Alternatively, after you upload an audio or video file, you can call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to determine whether the upload is successful. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html).
       * *   The value of the VideoId parameter that is returned after you call this operation can be used for media processing or the lifecycle management of media assets.
       * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadVideoRequest
       * @return CreateUploadVideoResponse
       */
      Models::CreateUploadVideoResponse createUploadVideo(const Models::CreateUploadVideoRequest &request);

      /**
       * @summary Decrypts the ciphertext specified by CiphertextBlob in the Key Management Service (KMS) data key.
       *
       * @param request DecryptKMSDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptKMSDataKeyResponse
       */
      Models::DecryptKMSDataKeyResponse decryptKMSDataKeyWithOptions(const Models::DecryptKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts the ciphertext specified by CiphertextBlob in the Key Management Service (KMS) data key.
       *
       * @param request DecryptKMSDataKeyRequest
       * @return DecryptKMSDataKeyResponse
       */
      Models::DecryptKMSDataKeyResponse decryptKMSDataKey(const Models::DecryptKMSDataKeyRequest &request);

      /**
       * @summary Deletes the information about one or more images that are submitted for AI processing.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   This operation deletes only information about images that are submitted for AI processing. The image files are not deleted.
       *
       * @param request DeleteAIImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIImageInfosResponse
       */
      Models::DeleteAIImageInfosResponse deleteAIImageInfosWithOptions(const Models::DeleteAIImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the information about one or more images that are submitted for AI processing.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   This operation deletes only information about images that are submitted for AI processing. The image files are not deleted.
       *
       * @param request DeleteAIImageInfosRequest
       * @return DeleteAIImageInfosResponse
       */
      Models::DeleteAIImageInfosResponse deleteAIImageInfos(const Models::DeleteAIImageInfosRequest &request);

      /**
       * @summary Deletes an AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You cannot delete an AI template that is set as the default template.
       *
       * @param request DeleteAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAITemplateResponse
       */
      Models::DeleteAITemplateResponse deleteAITemplateWithOptions(const Models::DeleteAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You cannot delete an AI template that is set as the default template.
       *
       * @param request DeleteAITemplateRequest
       * @return DeleteAITemplateResponse
       */
      Models::DeleteAITemplateResponse deleteAITemplate(const Models::DeleteAITemplateRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @description Application with resources can not be deleted.
       *
       * @param request DeleteAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInfoResponse
       */
      Models::DeleteAppInfoResponse deleteAppInfoWithOptions(const Models::DeleteAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @description Application with resources can not be deleted.
       *
       * @param request DeleteAppInfoRequest
       * @return DeleteAppInfoResponse
       */
      Models::DeleteAppInfoResponse deleteAppInfo(const Models::DeleteAppInfoRequest &request);

      /**
       * @summary Deletes auxiliary media assets from ApsaraVideo VOD. You can delete multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch.
       *
       * @description *   **This operation physically deletes auxiliary media assets. You cannot recover the auxiliary media assets that you deleted. Exercise caution when you call this operation.**
       * *   You can delete a maximum of 20 auxiliary media assets in one request.
       *
       * @param request DeleteAttachedMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAttachedMediaResponse
       */
      Models::DeleteAttachedMediaResponse deleteAttachedMediaWithOptions(const Models::DeleteAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes auxiliary media assets from ApsaraVideo VOD. You can delete multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch.
       *
       * @description *   **This operation physically deletes auxiliary media assets. You cannot recover the auxiliary media assets that you deleted. Exercise caution when you call this operation.**
       * *   You can delete a maximum of 20 auxiliary media assets in one request.
       *
       * @param request DeleteAttachedMediaRequest
       * @return DeleteAttachedMediaResponse
       */
      Models::DeleteAttachedMediaResponse deleteAttachedMedia(const Models::DeleteAttachedMediaRequest &request);

      /**
       * @summary Deletes a category and its subcategories.
       *
       * @description *   **After you call this operation to delete a category, all subcategories including level 2 and level 3 categories are deleted at the same time. Exercise caution when you call this operation.**
       * *   If you have classified specific media resources to a category, the category names labeled on these media resources are automatically deleted when you delete the category.
       *
       * @param request DeleteCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const Models::DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a category and its subcategories.
       *
       * @description *   **After you call this operation to delete a category, all subcategories including level 2 and level 3 categories are deleted at the same time. Exercise caution when you call this operation.**
       * *   If you have classified specific media resources to a category, the category names labeled on these media resources are automatically deleted when you delete the category.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes the information about animated stickers.
       *
       * @description > This operation deletes only the information about animated stickers, but not the animated stickers themselves.
       *
       * @param request DeleteDynamicImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDynamicImageResponse
       */
      Models::DeleteDynamicImageResponse deleteDynamicImageWithOptions(const Models::DeleteDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the information about animated stickers.
       *
       * @description > This operation deletes only the information about animated stickers, but not the animated stickers themselves.
       *
       * @param request DeleteDynamicImageRequest
       * @return DeleteDynamicImageResponse
       */
      Models::DeleteDynamicImageResponse deleteDynamicImage(const Models::DeleteDynamicImageRequest &request);

      /**
       * @summary Deletes online editing projects.
       *
       * @description *   You can call this operation to delete multiple online editing projects at a time.
       *
       * @param request DeleteEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEditingProjectResponse
       */
      Models::DeleteEditingProjectResponse deleteEditingProjectWithOptions(const Models::DeleteEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes online editing projects.
       *
       * @description *   You can call this operation to delete multiple online editing projects at a time.
       *
       * @param request DeleteEditingProjectRequest
       * @return DeleteEditingProjectResponse
       */
      Models::DeleteEditingProjectResponse deleteEditingProject(const Models::DeleteEditingProjectRequest &request);

      /**
       * @summary 删除剪辑资源
       *
       * @param request DeleteEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEditingProjectMaterialsResponse
       */
      Models::DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterialsWithOptions(const Models::DeleteEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除剪辑资源
       *
       * @param request DeleteEditingProjectMaterialsRequest
       * @return DeleteEditingProjectMaterialsResponse
       */
      Models::DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterials(const Models::DeleteEditingProjectMaterialsRequest &request);

      /**
       * @summary Deletes uploaded images and video snapshots that are automatically captured.
       *
       * @description *   **After you call this operation to delete an image, the source file is permanently deleted and cannot be recovered. Exercise caution when you call this operation.**
       * *   If some images are cached on Alibaba Cloud CDN points of presence (POPs), the image URLs do not immediately become invalid.
       * *   You can call this operation to delete uploaded images and video snapshots.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes uploaded images and video snapshots that are automatically captured.
       *
       * @description *   **After you call this operation to delete an image, the source file is permanently deleted and cannot be recovered. Exercise caution when you call this operation.**
       * *   If some images are cached on Alibaba Cloud CDN points of presence (POPs), the image URLs do not immediately become invalid.
       * *   You can call this operation to delete uploaded images and video snapshots.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes the callback method, callback URL, and event type of an event notification.
       *
       * @description > For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request DeleteMessageCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageCallbackResponse
       */
      Models::DeleteMessageCallbackResponse deleteMessageCallbackWithOptions(const Models::DeleteMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the callback method, callback URL, and event type of an event notification.
       *
       * @description > For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request DeleteMessageCallbackRequest
       * @return DeleteMessageCallbackResponse
       */
      Models::DeleteMessageCallbackResponse deleteMessageCallback(const Models::DeleteMessageCallbackRequest &request);

      /**
       * @summary Deletes one or more source files at a time.
       *
       * @description All media processing operations in ApsaraVideo VOD, such as transcoding, snapshot capture, and content moderation, are performed based on source files. If you delete the source files, you cannot perform media processing operations. Exercise caution when you call this operation.
       *
       * @param request DeleteMezzaninesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMezzaninesResponse
       */
      Models::DeleteMezzaninesResponse deleteMezzaninesWithOptions(const Models::DeleteMezzaninesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more source files at a time.
       *
       * @description All media processing operations in ApsaraVideo VOD, such as transcoding, snapshot capture, and content moderation, are performed based on source files. If you delete the source files, you cannot perform media processing operations. Exercise caution when you call this operation.
       *
       * @param request DeleteMezzaninesRequest
       * @return DeleteMezzaninesResponse
       */
      Models::DeleteMezzaninesResponse deleteMezzanines(const Models::DeleteMezzaninesRequest &request);

      /**
       * @summary Deletes the parts generated during an upload.
       *
       * @description *   During multipart upload, useless parts may be retained if the upload fails. These useless parts are automatically deleted after 7 days. You can call this operation to delete the generated parts after the upload is successful or fails.
       * *   This operation does not delete the source file or transcoded file, but deletes only the parts generated during the upload.
       * *   If you call the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation, the entire video file is deleted, including the generated parts.
       *
       * @param request DeleteMultipartUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultipartUploadResponse
       */
      Models::DeleteMultipartUploadResponse deleteMultipartUploadWithOptions(const Models::DeleteMultipartUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the parts generated during an upload.
       *
       * @description *   During multipart upload, useless parts may be retained if the upload fails. These useless parts are automatically deleted after 7 days. You can call this operation to delete the generated parts after the upload is successful or fails.
       * *   This operation does not delete the source file or transcoded file, but deletes only the parts generated during the upload.
       * *   If you call the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation, the entire video file is deleted, including the generated parts.
       *
       * @param request DeleteMultipartUploadRequest
       * @return DeleteMultipartUploadResponse
       */
      Models::DeleteMultipartUploadResponse deleteMultipartUpload(const Models::DeleteMultipartUploadRequest &request);

      /**
       * @summary Deletes one or more video or audio streams and their storage files at a time.
       *
       * @param request DeleteStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamResponse
       */
      Models::DeleteStreamResponse deleteStreamWithOptions(const Models::DeleteStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more video or audio streams and their storage files at a time.
       *
       * @param request DeleteStreamRequest
       * @return DeleteStreamResponse
       */
      Models::DeleteStreamResponse deleteStream(const Models::DeleteStreamRequest &request);

      /**
       * @summary Deletes one or more transcoding templates from a transcoding template group or forcibly deletes a transcoding template group.
       *
       * @description *   You cannot call this operation to delete the default transcoding template. You can delete the transcoding template when it is no longer specified as the default one.
       * *   For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. To check whether a transcoding template group is locked, call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation and obtain the Locked parameter from the response. To modify transcoding templates within a locked transcoding template group, you must call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the transcoding template group first.
       *
       * @param request DeleteTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTranscodeTemplateGroupResponse
       */
      Models::DeleteTranscodeTemplateGroupResponse deleteTranscodeTemplateGroupWithOptions(const Models::DeleteTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more transcoding templates from a transcoding template group or forcibly deletes a transcoding template group.
       *
       * @description *   You cannot call this operation to delete the default transcoding template. You can delete the transcoding template when it is no longer specified as the default one.
       * *   For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. To check whether a transcoding template group is locked, call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation and obtain the Locked parameter from the response. To modify transcoding templates within a locked transcoding template group, you must call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the transcoding template group first.
       *
       * @param request DeleteTranscodeTemplateGroupRequest
       * @return DeleteTranscodeTemplateGroupResponse
       */
      Models::DeleteTranscodeTemplateGroupResponse deleteTranscodeTemplateGroup(const Models::DeleteTranscodeTemplateGroupRequest &request);

      /**
       * @summary Deletes one or more videos at a time, including their mezzanine files, transcoded stream files, and thumbnail snapshots.
       *
       * @description *   This operation physically deletes videos. Deleted videos cannot be recovered. Exercise caution when you call this operation.
       * *   You can call this operation to delete multiple videos at a time.
       * *   When you delete a video, its source file, transcoded stream file, and thumbnail screenshot are also deleted. However, the Alibaba Cloud Content Delivery Network (CDN) cache is not refreshed simultaneously. You can use the refresh feature in the ApsaraVideo VOD console to clear garbage data on CDN nodes. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html).
       *
       * @param request DeleteVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVideoResponse
       */
      Models::DeleteVideoResponse deleteVideoWithOptions(const Models::DeleteVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more videos at a time, including their mezzanine files, transcoded stream files, and thumbnail snapshots.
       *
       * @description *   This operation physically deletes videos. Deleted videos cannot be recovered. Exercise caution when you call this operation.
       * *   You can call this operation to delete multiple videos at a time.
       * *   When you delete a video, its source file, transcoded stream file, and thumbnail screenshot are also deleted. However, the Alibaba Cloud Content Delivery Network (CDN) cache is not refreshed simultaneously. You can use the refresh feature in the ApsaraVideo VOD console to clear garbage data on CDN nodes. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html).
       *
       * @param request DeleteVideoRequest
       * @return DeleteVideoResponse
       */
      Models::DeleteVideoResponse deleteVideo(const Models::DeleteVideoRequest &request);

      /**
       * @summary Removes a domain name for CDN from ApsaraVideo VOD.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   After a domain name for CDN is removed from ApsaraVideo VOD, the domain name becomes unavailable. Proceed with caution. We recommend that you restore the A record at your DNS service provider before you remove the domain name for CDN.
       * > *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodDomainResponse
       */
      Models::DeleteVodDomainResponse deleteVodDomainWithOptions(const Models::DeleteVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a domain name for CDN from ApsaraVideo VOD.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   After a domain name for CDN is removed from ApsaraVideo VOD, the domain name becomes unavailable. Proceed with caution. We recommend that you restore the A record at your DNS service provider before you remove the domain name for CDN.
       * > *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodDomainRequest
       * @return DeleteVodDomainResponse
       */
      Models::DeleteVodDomainResponse deleteVodDomain(const Models::DeleteVodDomainRequest &request);

      /**
       * @summary Deletes the configurations of a domain name for CDN.
       *
       * @description > 
       * *   This operation is available only in the **China (Shanghai)** region.
       * *   After the configurations of a domain name for CDN are deleted, the domain name becomes unavailable. We recommend that you restore the A record at your DNS service provider before you delete the configurations of the domain name for CDN.
       * *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodSpecificConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodSpecificConfigResponse
       */
      Models::DeleteVodSpecificConfigResponse deleteVodSpecificConfigWithOptions(const Models::DeleteVodSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configurations of a domain name for CDN.
       *
       * @description > 
       * *   This operation is available only in the **China (Shanghai)** region.
       * *   After the configurations of a domain name for CDN are deleted, the domain name becomes unavailable. We recommend that you restore the A record at your DNS service provider before you delete the configurations of the domain name for CDN.
       * *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodSpecificConfigRequest
       * @return DeleteVodSpecificConfigResponse
       */
      Models::DeleteVodSpecificConfigResponse deleteVodSpecificConfig(const Models::DeleteVodSpecificConfigRequest &request);

      /**
       * @summary Deletes a snapshot template.
       *
       * @param request DeleteVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodTemplateResponse
       */
      Models::DeleteVodTemplateResponse deleteVodTemplateWithOptions(const Models::DeleteVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a snapshot template.
       *
       * @param request DeleteVodTemplateRequest
       * @return DeleteVodTemplateResponse
       */
      Models::DeleteVodTemplateResponse deleteVodTemplate(const Models::DeleteVodTemplateRequest &request);

      /**
       * @summary Deletes an image watermark or text watermark template.
       *
       * @description *   **After you delete an image watermark template, the source watermark file is physically deleted and cannot be restored. Exercise caution when you call this operation.**
       * *   You cannot delete the default watermark template. To delete a default watermark template, call the [SetDefaultWatermark](~~SetDefaultWatermark~~) operation to set another watermark template as the default one.
       *
       * @param request DeleteWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWatermarkResponse
       */
      Models::DeleteWatermarkResponse deleteWatermarkWithOptions(const Models::DeleteWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image watermark or text watermark template.
       *
       * @description *   **After you delete an image watermark template, the source watermark file is physically deleted and cannot be restored. Exercise caution when you call this operation.**
       * *   You cannot delete the default watermark template. To delete a default watermark template, call the [SetDefaultWatermark](~~SetDefaultWatermark~~) operation to set another watermark template as the default one.
       *
       * @param request DeleteWatermarkRequest
       * @return DeleteWatermarkResponse
       */
      Models::DeleteWatermarkResponse deleteWatermark(const Models::DeleteWatermarkRequest &request);

      /**
       * @summary Queries the distribution of media asset data by time. The maximum time range to query is 6 months.
       *
       * @description *   This operation is available only in the China (Shanghai) region.
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the previous 7 days. If you set both the parameters, the request returns the data collected within the specified time range.
       *
       * @param request DescribeMediaDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMediaDistributionResponse
       */
      Models::DescribeMediaDistributionResponse describeMediaDistributionWithOptions(const Models::DescribeMediaDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of media asset data by time. The maximum time range to query is 6 months.
       *
       * @description *   This operation is available only in the China (Shanghai) region.
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the previous 7 days. If you set both the parameters, the request returns the data collected within the specified time range.
       *
       * @param request DescribeMediaDistributionRequest
       * @return DescribeMediaDistributionResponse
       */
      Models::DescribeMediaDistributionResponse describeMediaDistribution(const Models::DescribeMediaDistributionRequest &request);

      /**
       * @summary Queries daily playback statistics on top videos, including video views, unique visitors, and total playback duration.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can query playback statistics on top 1,000 videos at most on a specified day. By default, top videos are sorted in descending order based on video views.
       * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
       * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayTopVideosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayTopVideosResponse
       */
      Models::DescribePlayTopVideosResponse describePlayTopVideosWithOptions(const Models::DescribePlayTopVideosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries daily playback statistics on top videos, including video views, unique visitors, and total playback duration.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can query playback statistics on top 1,000 videos at most on a specified day. By default, top videos are sorted in descending order based on video views.
       * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
       * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayTopVideosRequest
       * @return DescribePlayTopVideosResponse
       */
      Models::DescribePlayTopVideosResponse describePlayTopVideos(const Models::DescribePlayTopVideosRequest &request);

      /**
       * @summary Queries the statistics on average playback each day in a specified time range.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * > *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
       * > *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayUserAvgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayUserAvgResponse
       */
      Models::DescribePlayUserAvgResponse describePlayUserAvgWithOptions(const Models::DescribePlayUserAvgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on average playback each day in a specified time range.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * > *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
       * > *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayUserAvgRequest
       * @return DescribePlayUserAvgResponse
       */
      Models::DescribePlayUserAvgResponse describePlayUserAvg(const Models::DescribePlayUserAvgRequest &request);

      /**
       * @summary Queries the daily playback statistics in a specified time range. The playback statistics include the total number of views, total number of viewers, total playback duration, and playback duration distribution.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
       * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayUserTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayUserTotalResponse
       */
      Models::DescribePlayUserTotalResponse describePlayUserTotalWithOptions(const Models::DescribePlayUserTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily playback statistics in a specified time range. The playback statistics include the total number of views, total number of viewers, total playback duration, and playback duration distribution.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
       * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayUserTotalRequest
       * @return DescribePlayUserTotalResponse
       */
      Models::DescribePlayUserTotalResponse describePlayUserTotal(const Models::DescribePlayUserTotalRequest &request);

      /**
       * @summary Queries daily playback statistics on a video in the specified time range.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
       * *   You can query only data in the last 730 days. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayVideoStatisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayVideoStatisResponse
       */
      Models::DescribePlayVideoStatisResponse describePlayVideoStatisWithOptions(const Models::DescribePlayVideoStatisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries daily playback statistics on a video in the specified time range.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
       * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
       * *   You can query only data in the last 730 days. The maximum time range to query is 180 days.
       *
       * @param request DescribePlayVideoStatisRequest
       * @return DescribePlayVideoStatisResponse
       */
      Models::DescribePlayVideoStatisResponse describePlayVideoStatis(const Models::DescribePlayVideoStatisRequest &request);

      /**
       * @summary Queries the statistics on video AI of different types, such as automated review and media fingerprinting.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
       *
       * @param request DescribeVodAIDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodAIDataResponse
       */
      Models::DescribeVodAIDataResponse describeVodAIDataWithOptions(const Models::DescribeVodAIDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on video AI of different types, such as automated review and media fingerprinting.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
       *
       * @param request DescribeVodAIDataRequest
       * @return DescribeVodAIDataResponse
       */
      Models::DescribeVodAIDataResponse describeVodAIData(const Models::DescribeVodAIDataRequest &request);

      /**
       * @summary Queries the certificates of a specified domain name for CDN or all the domain names for CDN within your Alibaba Cloud account.
       *
       * @description >  This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodCertificateListResponse
       */
      Models::DescribeVodCertificateListResponse describeVodCertificateListWithOptions(const Models::DescribeVodCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates of a specified domain name for CDN or all the domain names for CDN within your Alibaba Cloud account.
       *
       * @description >  This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodCertificateListRequest
       * @return DescribeVodCertificateListResponse
       */
      Models::DescribeVodCertificateListResponse describeVodCertificateList(const Models::DescribeVodCertificateListRequest &request);

      /**
       * @summary Queries the bandwidth for one or more specified domain names for CDN.
       *
       * @description If you specify neither the StartTime parameter nor the EndTime parameter, the data in the last 24 hours is queried. Alternatively, you can specify both the StartTime and EndTime parameters to query data that is generated in the specified duration. You can query data for the last 90 days at most.
       *
       * @param request DescribeVodDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainBpsDataResponse
       */
      Models::DescribeVodDomainBpsDataResponse describeVodDomainBpsDataWithOptions(const Models::DescribeVodDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth for one or more specified domain names for CDN.
       *
       * @description If you specify neither the StartTime parameter nor the EndTime parameter, the data in the last 24 hours is queried. Alternatively, you can specify both the StartTime and EndTime parameters to query data that is generated in the specified duration. You can query data for the last 90 days at most.
       *
       * @param request DescribeVodDomainBpsDataRequest
       * @return DescribeVodDomainBpsDataResponse
       */
      Models::DescribeVodDomainBpsDataResponse describeVodDomainBpsData(const Models::DescribeVodDomainBpsDataRequest &request);

      /**
       * @summary Queries the bandwidth data by protocol.
       *
       * @description You can call this API operation up to 20 times per second per account. If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. Time granularity
       * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |15 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|3 to 4 hours|
       * |1 day|90 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainBpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainBpsDataByLayerResponse
       */
      Models::DescribeVodDomainBpsDataByLayerResponse describeVodDomainBpsDataByLayerWithOptions(const Models::DescribeVodDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data by protocol.
       *
       * @description You can call this API operation up to 20 times per second per account. If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. Time granularity
       * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |15 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|3 to 4 hours|
       * |1 day|90 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainBpsDataByLayerRequest
       * @return DescribeVodDomainBpsDataByLayerResponse
       */
      Models::DescribeVodDomainBpsDataByLayerResponse describeVodDomainBpsDataByLayer(const Models::DescribeVodDomainBpsDataByLayerRequest &request);

      /**
       * @summary Queries the certificate information about an accelerated domain name.
       *
       * @description This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainCertificateInfoResponse
       */
      Models::DescribeVodDomainCertificateInfoResponse describeVodDomainCertificateInfoWithOptions(const Models::DescribeVodDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate information about an accelerated domain name.
       *
       * @description This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodDomainCertificateInfoRequest
       * @return DescribeVodDomainCertificateInfoResponse
       */
      Models::DescribeVodDomainCertificateInfoResponse describeVodDomainCertificateInfo(const Models::DescribeVodDomainCertificateInfoRequest &request);

      /**
       * @summary Queries the configurations of a domain name for CDN. You can query the configurations of multiple features at a time.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainConfigsResponse
       */
      Models::DescribeVodDomainConfigsResponse describeVodDomainConfigsWithOptions(const Models::DescribeVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a domain name for CDN. You can query the configurations of multiple features at a time.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodDomainConfigsRequest
       * @return DescribeVodDomainConfigsResponse
       */
      Models::DescribeVodDomainConfigsResponse describeVodDomainConfigs(const Models::DescribeVodDomainConfigsRequest &request);

      /**
       * @summary Queries the basic information about a specified domain name for CDN.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainDetailResponse
       */
      Models::DescribeVodDomainDetailResponse describeVodDomainDetailWithOptions(const Models::DescribeVodDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a specified domain name for CDN.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodDomainDetailRequest
       * @return DescribeVodDomainDetailResponse
       */
      Models::DescribeVodDomainDetailResponse describeVodDomainDetail(const Models::DescribeVodDomainDetailRequest &request);

      /**
       * @summary Queries the byte hit ratios of accelerated domain names. Byte hit ratios are measured in percentage.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainHitRateDataResponse
       */
      Models::DescribeVodDomainHitRateDataResponse describeVodDomainHitRateDataWithOptions(const Models::DescribeVodDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the byte hit ratios of accelerated domain names. Byte hit ratios are measured in percentage.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainHitRateDataRequest
       * @return DescribeVodDomainHitRateDataResponse
       */
      Models::DescribeVodDomainHitRateDataResponse describeVodDomainHitRateData(const Models::DescribeVodDomainHitRateDataRequest &request);

      /**
       * @summary Queries the information about the CDN access logs for a domain name, including the log path.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   For more information about the log format and latency, see [Download logs](https://help.aliyun.com/document_detail/86099.html).
       * *   If you specify neither the StartTime parameter nor the EndTime parameter, the log data in the last 24 hours is queried.
       * *   You can specify both the StartTime and EndTime parameters to query the log data that is generated in the specified time range.
       *
       * @param request DescribeVodDomainLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainLogResponse
       */
      Models::DescribeVodDomainLogResponse describeVodDomainLogWithOptions(const Models::DescribeVodDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the CDN access logs for a domain name, including the log path.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   For more information about the log format and latency, see [Download logs](https://help.aliyun.com/document_detail/86099.html).
       * *   If you specify neither the StartTime parameter nor the EndTime parameter, the log data in the last 24 hours is queried.
       * *   You can specify both the StartTime and EndTime parameters to query the log data that is generated in the specified time range.
       *
       * @param request DescribeVodDomainLogRequest
       * @return DescribeVodDomainLogResponse
       */
      Models::DescribeVodDomainLogResponse describeVodDomainLog(const Models::DescribeVodDomainLogRequest &request);

      /**
       * @summary Queries the 95th percentile bandwidth data of an accelerated domain name.
       *
       * @param request DescribeVodDomainMax95BpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainMax95BpsDataResponse
       */
      Models::DescribeVodDomainMax95BpsDataResponse describeVodDomainMax95BpsDataWithOptions(const Models::DescribeVodDomainMax95BpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the 95th percentile bandwidth data of an accelerated domain name.
       *
       * @param request DescribeVodDomainMax95BpsDataRequest
       * @return DescribeVodDomainMax95BpsDataResponse
       */
      Models::DescribeVodDomainMax95BpsDataResponse describeVodDomainMax95BpsData(const Models::DescribeVodDomainMax95BpsDataRequest &request);

      /**
       * @summary Queries the number of queries per second (QPS) for one or more accelerated domain names. Data is collected every 5 minutes. You can query data collected in the last 90 days.
       *
       * @description * This operation is available only in the China (Shanghai) region.
       * * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|3 to 4 hours|
       * |1 day|366 days|366 days|4 to 24 hours|
       * ---
       *
       * @param request DescribeVodDomainQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainQpsDataResponse
       */
      Models::DescribeVodDomainQpsDataResponse describeVodDomainQpsDataWithOptions(const Models::DescribeVodDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of queries per second (QPS) for one or more accelerated domain names. Data is collected every 5 minutes. You can query data collected in the last 90 days.
       *
       * @description * This operation is available only in the China (Shanghai) region.
       * * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|3 to 4 hours|
       * |1 day|366 days|366 days|4 to 24 hours|
       * ---
       *
       * @param request DescribeVodDomainQpsDataRequest
       * @return DescribeVodDomainQpsDataResponse
       */
      Models::DescribeVodDomainQpsDataResponse describeVodDomainQpsData(const Models::DescribeVodDomainQpsDataRequest &request);

      /**
       * @summary Queries the bandwidth data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainBpsData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeBpsDataResponse
       */
      Models::DescribeVodDomainRealTimeBpsDataResponse describeVodDomainRealTimeBpsDataWithOptions(const Models::DescribeVodDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainBpsData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeBpsDataRequest
       * @return DescribeVodDomainRealTimeBpsDataResponse
       */
      Models::DescribeVodDomainRealTimeBpsDataResponse describeVodDomainRealTimeBpsData(const Models::DescribeVodDomainRealTimeBpsDataRequest &request);

      /**
       * @summary Queries the byte hit ratio for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeByteHitRateDataResponse describeVodDomainRealTimeByteHitRateDataWithOptions(const Models::DescribeVodDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the byte hit ratio for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
       * @return DescribeVodDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeByteHitRateDataResponse describeVodDomainRealTimeByteHitRateData(const Models::DescribeVodDomainRealTimeByteHitRateDataRequest &request);

      /**
       * @summary Queries real-time monitoring data of one or more accelerated domain names.
       *
       * @description You can query data within the last seven days. Data is collected every minute. You can call this API operation up to 10 times per second per account.
       *
       * @param request DescribeVodDomainRealTimeDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeDetailDataResponse
       */
      Models::DescribeVodDomainRealTimeDetailDataResponse describeVodDomainRealTimeDetailDataWithOptions(const Models::DescribeVodDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries real-time monitoring data of one or more accelerated domain names.
       *
       * @description You can query data within the last seven days. Data is collected every minute. You can call this API operation up to 10 times per second per account.
       *
       * @param request DescribeVodDomainRealTimeDetailDataRequest
       * @return DescribeVodDomainRealTimeDetailDataResponse
       */
      Models::DescribeVodDomainRealTimeDetailDataResponse describeVodDomainRealTimeDetailData(const Models::DescribeVodDomainRealTimeDetailDataRequest &request);

      /**
       * @summary Queries the total number of HTTP status codes and proportion of each HTTP status code for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available (days)|Data latency|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeVodDomainRealTimeHttpCodeDataResponse describeVodDomainRealTimeHttpCodeDataWithOptions(const Models::DescribeVodDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number of HTTP status codes and proportion of each HTTP status code for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available (days)|Data latency|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
       * @return DescribeVodDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeVodDomainRealTimeHttpCodeDataResponse describeVodDomainRealTimeHttpCodeData(const Models::DescribeVodDomainRealTimeHttpCodeDataRequest &request);

      /**
       * @summary Queries the number of queries per second (QPS) for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeQpsDataResponse
       */
      Models::DescribeVodDomainRealTimeQpsDataResponse describeVodDomainRealTimeQpsDataWithOptions(const Models::DescribeVodDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of queries per second (QPS) for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeQpsDataRequest
       * @return DescribeVodDomainRealTimeQpsDataResponse
       */
      Models::DescribeVodDomainRealTimeQpsDataResponse describeVodDomainRealTimeQpsData(const Models::DescribeVodDomainRealTimeQpsDataRequest &request);

      /**
       * @summary Queries the request hit ratio data for one or more accelerated domain names. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * * By default, the POST method is used for Go. To use the FET method, you must declare `request.Method="GET"`.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeReqHitRateDataResponse describeVodDomainRealTimeReqHitRateDataWithOptions(const Models::DescribeVodDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit ratio data for one or more accelerated domain names. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * * By default, the POST method is used for Go. To use the FET method, you must declare `request.Method="GET"`.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
       * @return DescribeVodDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeReqHitRateDataResponse describeVodDomainRealTimeReqHitRateData(const Models::DescribeVodDomainRealTimeReqHitRateDataRequest &request);

      /**
       * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainTrafficData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeTrafficDataResponse
       */
      Models::DescribeVodDomainRealTimeTrafficDataResponse describeVodDomainRealTimeTrafficDataWithOptions(const Models::DescribeVodDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainTrafficData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 100 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
       * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
       * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeVodDomainRealTimeTrafficDataRequest
       * @return DescribeVodDomainRealTimeTrafficDataResponse
       */
      Models::DescribeVodDomainRealTimeTrafficDataResponse describeVodDomainRealTimeTrafficData(const Models::DescribeVodDomainRealTimeTrafficDataRequest &request);

      /**
       * @summary Queries the byte hit ratio for one or more accelerated domains. Request hit ratios are measured in percentage.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time range per query ≤ 90 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainReqHitRateDataResponse
       */
      Models::DescribeVodDomainReqHitRateDataResponse describeVodDomainReqHitRateDataWithOptions(const Models::DescribeVodDomainReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the byte hit ratio for one or more accelerated domains. Request hit ratios are measured in percentage.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time range per query ≤ 90 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainReqHitRateDataRequest
       * @return DescribeVodDomainReqHitRateDataResponse
       */
      Models::DescribeVodDomainReqHitRateDataResponse describeVodDomainReqHitRateData(const Models::DescribeVodDomainReqHitRateDataRequest &request);

      /**
       * @summary Queries the bandwidth data during back-to-origin routing for one or more accelerated domain names.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainSrcBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainSrcBpsDataResponse
       */
      Models::DescribeVodDomainSrcBpsDataResponse describeVodDomainSrcBpsDataWithOptions(const Models::DescribeVodDomainSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data during back-to-origin routing for one or more accelerated domain names.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainSrcBpsDataRequest
       * @return DescribeVodDomainSrcBpsDataResponse
       */
      Models::DescribeVodDomainSrcBpsDataResponse describeVodDomainSrcBpsData(const Models::DescribeVodDomainSrcBpsDataRequest &request);

      /**
       * @summary Queries origin traffic data for accelerated domain names in ApsaraVideo VOD. The traffic is measured in bytes.
       *
       * @description * This operation is available only in the **China (Shanghai)** region.
       * * ApsaraVideo VOD stores the origin traffic data for 90 days before the data is deleted.
       * * If you do not set the `StartTime` or `EndTime` parameter, the request returns the data collected in the last 24 hours. If you set both the `StartTime` and `EndTime` parameters, the request returns the data collected within the specified time range.
       * * You can specify a maximum of 500 domain names in a request. Separate multiple domain names with commas (,). If you specify multiple domain names in a request, aggregation results are returned.
       * ### Time granularity
       * The time granularity supported by the Interval parameter varies based on the time range per query specified by using `StartTime` and `EndTime`. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query (days)|Historical data available (days)|Data delay|
       * |---|---|---|---|
       * |5 minutes|(0, 3\\]|93|15 minutes|
       * |1 hour|(3, 31\\]|186|4 hours|
       * |1 day|(31, 366\\]|366|04:00 on the next day|
       *
       * @param request DescribeVodDomainSrcTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainSrcTrafficDataResponse
       */
      Models::DescribeVodDomainSrcTrafficDataResponse describeVodDomainSrcTrafficDataWithOptions(const Models::DescribeVodDomainSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries origin traffic data for accelerated domain names in ApsaraVideo VOD. The traffic is measured in bytes.
       *
       * @description * This operation is available only in the **China (Shanghai)** region.
       * * ApsaraVideo VOD stores the origin traffic data for 90 days before the data is deleted.
       * * If you do not set the `StartTime` or `EndTime` parameter, the request returns the data collected in the last 24 hours. If you set both the `StartTime` and `EndTime` parameters, the request returns the data collected within the specified time range.
       * * You can specify a maximum of 500 domain names in a request. Separate multiple domain names with commas (,). If you specify multiple domain names in a request, aggregation results are returned.
       * ### Time granularity
       * The time granularity supported by the Interval parameter varies based on the time range per query specified by using `StartTime` and `EndTime`. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Time range per query (days)|Historical data available (days)|Data delay|
       * |---|---|---|---|
       * |5 minutes|(0, 3\\]|93|15 minutes|
       * |1 hour|(3, 31\\]|186|4 hours|
       * |1 day|(31, 366\\]|366|04:00 on the next day|
       *
       * @param request DescribeVodDomainSrcTrafficDataRequest
       * @return DescribeVodDomainSrcTrafficDataResponse
       */
      Models::DescribeVodDomainSrcTrafficDataResponse describeVodDomainSrcTrafficData(const Models::DescribeVodDomainSrcTrafficDataRequest &request);

      /**
       * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 5 minutes. You can query data in the last 366 days. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation provides a greater time granularity, higher data latency, but allows you to query historical data within a longer time period.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time range per query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainTrafficDataResponse
       */
      Models::DescribeVodDomainTrafficDataResponse describeVodDomainTrafficDataWithOptions(const Models::DescribeVodDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 5 minutes. You can query data in the last 366 days. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation provides a greater time granularity, higher data latency, but allows you to query historical data within a longer time period.
       *
       * @description * This operation is supported only in the **China (Shanghai)** region.
       * * You can specify a maximum of 500 accelerated domain names.
       * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
       * |Time granularity|Time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
       * |1 day|31 days ≤ Time range per query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
       *
       * @param request DescribeVodDomainTrafficDataRequest
       * @return DescribeVodDomainTrafficDataResponse
       */
      Models::DescribeVodDomainTrafficDataResponse describeVodDomainTrafficData(const Models::DescribeVodDomainTrafficDataRequest &request);

      /**
       * @summary Queries the traffic or bandwidth data of one or more accelerated domain names.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can specify up to 100 accelerated domain names in a request. Separate multiple domain names with commas (,). If you do not specify an accelerated domain name, the data of all accelerated domain names within your Alibaba Cloud account is returned.
       * *   You can query data in the last year. The maximum time range that can be queried is three months. If you specify a time range of one to three days, the system returns data on an hourly basis. If you specify a time range of four days or more, the system returns data on a daily basis.
       *
       * @param request DescribeVodDomainUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainUsageDataResponse
       */
      Models::DescribeVodDomainUsageDataResponse describeVodDomainUsageDataWithOptions(const Models::DescribeVodDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic or bandwidth data of one or more accelerated domain names.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can specify up to 100 accelerated domain names in a request. Separate multiple domain names with commas (,). If you do not specify an accelerated domain name, the data of all accelerated domain names within your Alibaba Cloud account is returned.
       * *   You can query data in the last year. The maximum time range that can be queried is three months. If you specify a time range of one to three days, the system returns data on an hourly basis. If you specify a time range of four days or more, the system returns data on a daily basis.
       *
       * @param request DescribeVodDomainUsageDataRequest
       * @return DescribeVodDomainUsageDataResponse
       */
      Models::DescribeVodDomainUsageDataResponse describeVodDomainUsageData(const Models::DescribeVodDomainUsageDataRequest &request);

      /**
       * @summary 点播云剪辑用量查询
       *
       * @param request DescribeVodEditingUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodEditingUsageDataResponse
       */
      Models::DescribeVodEditingUsageDataResponse describeVodEditingUsageDataWithOptions(const Models::DescribeVodEditingUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 点播云剪辑用量查询
       *
       * @param request DescribeVodEditingUsageDataRequest
       * @return DescribeVodEditingUsageDataResponse
       */
      Models::DescribeVodEditingUsageDataResponse describeVodEditingUsageData(const Models::DescribeVodEditingUsageDataRequest &request);

      /**
       * @summary Queries the playback statistics based on the media ID. You can call this operation to query information such as the number of visits, average video views per viewer, total number of views, average playback duration per viewer, and total playback duration.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   Only playback data in ApsaraVideo Player SDK is collected.
       * *   You can query only data within the last 30 days.
       * *   Before you call this operation, make sure that the following requirements are met:
       *     *   ApsaraVideo Player SDK for Android or iOS
       *         *   ApsaraVideo Player SDK for Android or iOS V5.4.9.2 or later is used.
       *         *   A license for ApsaraVideo Player SDK is obtained. For more information, see [Manage licenses](https://help.aliyun.com/document_detail/469166.html).
       *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs. For more information, see [Integrate ApsaraVideo Player SDK for Android](~~311525#section-dc4-gp6-xk2~~) and [Integrate ApsaraVideo Player SDK for iOS](~~313855#section-cmf-k7d-jg5~~).
       *     *   ApsaraVideo Player SDK for Web
       *         *   ApsaraVideo Player SDK for Web V2.16.0 or later is used.
       *         *   A license for **playback quality monitoring** is obtained. To apply for the license, [submit a request on Yida to enable value-added features for ApsaraVideo Player SDK for Web](https://yida.alibaba-inc.com/o/webplayer#/). For more information, see the description of the `license` parameter in the [API operations](~~125572#section-3ty-gwp-6pa~~) topic.
       *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs.
       *
       * @param request DescribeVodMediaPlayDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodMediaPlayDataResponse
       */
      Models::DescribeVodMediaPlayDataResponse describeVodMediaPlayDataWithOptions(const Models::DescribeVodMediaPlayDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the playback statistics based on the media ID. You can call this operation to query information such as the number of visits, average video views per viewer, total number of views, average playback duration per viewer, and total playback duration.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   Only playback data in ApsaraVideo Player SDK is collected.
       * *   You can query only data within the last 30 days.
       * *   Before you call this operation, make sure that the following requirements are met:
       *     *   ApsaraVideo Player SDK for Android or iOS
       *         *   ApsaraVideo Player SDK for Android or iOS V5.4.9.2 or later is used.
       *         *   A license for ApsaraVideo Player SDK is obtained. For more information, see [Manage licenses](https://help.aliyun.com/document_detail/469166.html).
       *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs. For more information, see [Integrate ApsaraVideo Player SDK for Android](~~311525#section-dc4-gp6-xk2~~) and [Integrate ApsaraVideo Player SDK for iOS](~~313855#section-cmf-k7d-jg5~~).
       *     *   ApsaraVideo Player SDK for Web
       *         *   ApsaraVideo Player SDK for Web V2.16.0 or later is used.
       *         *   A license for **playback quality monitoring** is obtained. To apply for the license, [submit a request on Yida to enable value-added features for ApsaraVideo Player SDK for Web](https://yida.alibaba-inc.com/o/webplayer#/). For more information, see the description of the `license` parameter in the [API operations](~~125572#section-3ty-gwp-6pa~~) topic.
       *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs.
       *
       * @param request DescribeVodMediaPlayDataRequest
       * @return DescribeVodMediaPlayDataResponse
       */
      Models::DescribeVodMediaPlayDataResponse describeVodMediaPlayData(const Models::DescribeVodMediaPlayDataRequest &request);

      /**
       * @summary 查询播放器指标数据
       *
       * @param request DescribeVodPlayerCollectDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodPlayerCollectDataResponse
       */
      Models::DescribeVodPlayerCollectDataResponse describeVodPlayerCollectDataWithOptions(const Models::DescribeVodPlayerCollectDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询播放器指标数据
       *
       * @param request DescribeVodPlayerCollectDataRequest
       * @return DescribeVodPlayerCollectDataResponse
       */
      Models::DescribeVodPlayerCollectDataResponse describeVodPlayerCollectData(const Models::DescribeVodPlayerCollectDataRequest &request);

      /**
       * @summary 查询播放器指标数据
       *
       * @param request DescribeVodPlayerDimensionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodPlayerDimensionDataResponse
       */
      Models::DescribeVodPlayerDimensionDataResponse describeVodPlayerDimensionDataWithOptions(const Models::DescribeVodPlayerDimensionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询播放器指标数据
       *
       * @param request DescribeVodPlayerDimensionDataRequest
       * @return DescribeVodPlayerDimensionDataResponse
       */
      Models::DescribeVodPlayerDimensionDataResponse describeVodPlayerDimensionData(const Models::DescribeVodPlayerDimensionDataRequest &request);

      /**
       * @summary 查询播放器指标数据
       *
       * @param request DescribeVodPlayerMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodPlayerMetricDataResponse
       */
      Models::DescribeVodPlayerMetricDataResponse describeVodPlayerMetricDataWithOptions(const Models::DescribeVodPlayerMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询播放器指标数据
       *
       * @param request DescribeVodPlayerMetricDataRequest
       * @return DescribeVodPlayerMetricDataResponse
       */
      Models::DescribeVodPlayerMetricDataResponse describeVodPlayerMetricData(const Models::DescribeVodPlayerMetricDataRequest &request);

      /**
       * @summary Queries the bandwidth data by Internet service provider (ISP) and region.
       *
       * @description The data is collected every 5 minutes. You can call this API operation up to 20 times per second per account. Time granularity
       * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|1 hour|93 days|15 minutes|
       *
       * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodRangeDataByLocateAndIspServiceResponse
       */
      Models::DescribeVodRangeDataByLocateAndIspServiceResponse describeVodRangeDataByLocateAndIspServiceWithOptions(const Models::DescribeVodRangeDataByLocateAndIspServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data by Internet service provider (ISP) and region.
       *
       * @description The data is collected every 5 minutes. You can call this API operation up to 20 times per second per account. Time granularity
       * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|1 hour|93 days|15 minutes|
       *
       * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
       * @return DescribeVodRangeDataByLocateAndIspServiceResponse
       */
      Models::DescribeVodRangeDataByLocateAndIspServiceResponse describeVodRangeDataByLocateAndIspService(const Models::DescribeVodRangeDataByLocateAndIspServiceRequest &request);

      /**
       * @summary Queries the maximum number and remaining number of requests to refresh or prefetch files on the current day. You can prefetch files based on URLs and refresh files based on URLs or directories.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
       *
       * @param request DescribeVodRefreshQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodRefreshQuotaResponse
       */
      Models::DescribeVodRefreshQuotaResponse describeVodRefreshQuotaWithOptions(const Models::DescribeVodRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum number and remaining number of requests to refresh or prefetch files on the current day. You can prefetch files based on URLs and refresh files based on URLs or directories.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
       *
       * @param request DescribeVodRefreshQuotaRequest
       * @return DescribeVodRefreshQuotaResponse
       */
      Models::DescribeVodRefreshQuotaResponse describeVodRefreshQuota(const Models::DescribeVodRefreshQuotaRequest &request);

      /**
       * @summary Queries the information about one or more refresh or prefetch tasks.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If you do not specify the TaskId or ObjectPath parameter, the data in the last three days is returned on the first page. By default, one page displays a maximum of 20 entries. You can specify the TaskId and ObjectPath parameters at the same time.
       *
       * @param request DescribeVodRefreshTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodRefreshTasksResponse
       */
      Models::DescribeVodRefreshTasksResponse describeVodRefreshTasksWithOptions(const Models::DescribeVodRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more refresh or prefetch tasks.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If you do not specify the TaskId or ObjectPath parameter, the data in the last three days is returned on the first page. By default, one page displays a maximum of 20 entries. You can specify the TaskId and ObjectPath parameters at the same time.
       *
       * @param request DescribeVodRefreshTasksRequest
       * @return DescribeVodRefreshTasksResponse
       */
      Models::DescribeVodRefreshTasksResponse describeVodRefreshTasks(const Models::DescribeVodRefreshTasksRequest &request);

      /**
       * @summary Queries the certificates by domain name.
       *
       * @param request DescribeVodSSLCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodSSLCertificateListResponse
       */
      Models::DescribeVodSSLCertificateListResponse describeVodSSLCertificateListWithOptions(const Models::DescribeVodSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates by domain name.
       *
       * @param request DescribeVodSSLCertificateListRequest
       * @return DescribeVodSSLCertificateListResponse
       */
      Models::DescribeVodSSLCertificateListResponse describeVodSSLCertificateList(const Models::DescribeVodSSLCertificateListRequest &request);

      /**
       * @summary Queries the usage of storage-related resources, including the storage volume and outbound traffic.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
       *
       * @param request DescribeVodStorageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodStorageDataResponse
       */
      Models::DescribeVodStorageDataResponse describeVodStorageDataWithOptions(const Models::DescribeVodStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of storage-related resources, including the storage volume and outbound traffic.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
       *
       * @param request DescribeVodStorageDataRequest
       * @return DescribeVodStorageDataResponse
       */
      Models::DescribeVodStorageDataResponse describeVodStorageData(const Models::DescribeVodStorageDataRequest &request);

      /**
       * @summary Queries the usage of tiered storage for media assets.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
       *
       * @param request DescribeVodTieringStorageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodTieringStorageDataResponse
       */
      Models::DescribeVodTieringStorageDataResponse describeVodTieringStorageDataWithOptions(const Models::DescribeVodTieringStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of tiered storage for media assets.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
       *
       * @param request DescribeVodTieringStorageDataRequest
       * @return DescribeVodTieringStorageDataResponse
       */
      Models::DescribeVodTieringStorageDataResponse describeVodTieringStorageData(const Models::DescribeVodTieringStorageDataRequest &request);

      /**
       * @summary Queries the data retrieval from tiered storage.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
       *
       * @param request DescribeVodTieringStorageRetrievalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodTieringStorageRetrievalDataResponse
       */
      Models::DescribeVodTieringStorageRetrievalDataResponse describeVodTieringStorageRetrievalDataWithOptions(const Models::DescribeVodTieringStorageRetrievalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data retrieval from tiered storage.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
       *
       * @param request DescribeVodTieringStorageRetrievalDataRequest
       * @return DescribeVodTieringStorageRetrievalDataResponse
       */
      Models::DescribeVodTieringStorageRetrievalDataResponse describeVodTieringStorageRetrievalData(const Models::DescribeVodTieringStorageRetrievalDataRequest &request);

      /**
       * @summary Queries the transcoding statistics.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
       *
       * @param request DescribeVodTranscodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodTranscodeDataResponse
       */
      Models::DescribeVodTranscodeDataResponse describeVodTranscodeDataWithOptions(const Models::DescribeVodTranscodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the transcoding statistics.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
       *
       * @param request DescribeVodTranscodeDataRequest
       * @return DescribeVodTranscodeDataResponse
       */
      Models::DescribeVodTranscodeDataResponse describeVodTranscodeData(const Models::DescribeVodTranscodeDataRequest &request);

      /**
       * @summary Queries the domain names for CDN within your Alibaba Cloud account.
       *
       * @description *   You can filter domain names by name and status. Fuzzy match is supported for domain name-based query.
       * *   This operation is available only in the China (Shanghai) region.
       *
       * @param request DescribeVodUserDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodUserDomainsResponse
       */
      Models::DescribeVodUserDomainsResponse describeVodUserDomainsWithOptions(const Models::DescribeVodUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names for CDN within your Alibaba Cloud account.
       *
       * @description *   You can filter domain names by name and status. Fuzzy match is supported for domain name-based query.
       * *   This operation is available only in the China (Shanghai) region.
       *
       * @param request DescribeVodUserDomainsRequest
       * @return DescribeVodUserDomainsResponse
       */
      Models::DescribeVodUserDomainsResponse describeVodUserDomains(const Models::DescribeVodUserDomainsRequest &request);

      /**
       * @summary 获取域名Vip
       *
       * @param request DescribeVodUserVipsByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodUserVipsByDomainResponse
       */
      Models::DescribeVodUserVipsByDomainResponse describeVodUserVipsByDomainWithOptions(const Models::DescribeVodUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取域名Vip
       *
       * @param request DescribeVodUserVipsByDomainRequest
       * @return DescribeVodUserVipsByDomainResponse
       */
      Models::DescribeVodUserVipsByDomainResponse describeVodUserVipsByDomain(const Models::DescribeVodUserVipsByDomainRequest &request);

      /**
       * @summary Queries the ownership verification content.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodVerifyContentResponse
       */
      Models::DescribeVodVerifyContentResponse describeVodVerifyContentWithOptions(const Models::DescribeVodVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ownership verification content.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodVerifyContentRequest
       * @return DescribeVodVerifyContentResponse
       */
      Models::DescribeVodVerifyContentResponse describeVodVerifyContent(const Models::DescribeVodVerifyContentRequest &request);

      /**
       * @summary Revokes application permissions from the specified identity. The identity may a RAM user or RAM role.
       *
       * @description >  You can grant a maximum of 10 application permissions to a RAM user or RAM role.
       *
       * @param request DetachAppPolicyFromIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachAppPolicyFromIdentityResponse
       */
      Models::DetachAppPolicyFromIdentityResponse detachAppPolicyFromIdentityWithOptions(const Models::DetachAppPolicyFromIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes application permissions from the specified identity. The identity may a RAM user or RAM role.
       *
       * @description >  You can grant a maximum of 10 application permissions to a RAM user or RAM role.
       *
       * @param request DetachAppPolicyFromIdentityRequest
       * @return DetachAppPolicyFromIdentityResponse
       */
      Models::DetachAppPolicyFromIdentityResponse detachAppPolicyFromIdentity(const Models::DetachAppPolicyFromIdentityRequest &request);

      /**
       * @summary Generates a key for secure download. ApsaraVideo Player SDK provides the secure download feature. Videos that are downloaded to your local device in this mode are encrypted. You can play the encrypted videos only by using the key file generated from the app that you specified. Secure download protects your videos from malicious playback or distribution.
       *
       * @description *   To use the secure download feature, you must enable the download feature in the ApsaraVideo VOD console and set the download method to secure download. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html).
       * *   After you generate a key for secure download, you must configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
       *
       * @param request GenerateDownloadSecretKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDownloadSecretKeyResponse
       */
      Models::GenerateDownloadSecretKeyResponse generateDownloadSecretKeyWithOptions(const Models::GenerateDownloadSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a key for secure download. ApsaraVideo Player SDK provides the secure download feature. Videos that are downloaded to your local device in this mode are encrypted. You can play the encrypted videos only by using the key file generated from the app that you specified. Secure download protects your videos from malicious playback or distribution.
       *
       * @description *   To use the secure download feature, you must enable the download feature in the ApsaraVideo VOD console and set the download method to secure download. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html).
       * *   After you generate a key for secure download, you must configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
       *
       * @param request GenerateDownloadSecretKeyRequest
       * @return GenerateDownloadSecretKeyResponse
       */
      Models::GenerateDownloadSecretKeyResponse generateDownloadSecretKey(const Models::GenerateDownloadSecretKeyRequest &request);

      /**
       * @summary Generates a random Key Management Service (KMS) data key used for HLS encryption in ApsaraVideo VOD.
       *
       * @param request GenerateKMSDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKeyWithOptions(const Models::GenerateKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a random Key Management Service (KMS) data key used for HLS encryption in ApsaraVideo VOD.
       *
       * @param request GenerateKMSDataKeyRequest
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKey(const Models::GenerateKMSDataKeyRequest &request);

      /**
       * @summary Queries jobs of image AI processing.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   Call the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation to submit image AI processing jobs before you call this operation to query image AI processing jobs.
       * *   You can query a maximum of 10 jobs of image AI processing in one request.
       *
       * @param request GetAIImageJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIImageJobsResponse
       */
      Models::GetAIImageJobsResponse getAIImageJobsWithOptions(const Models::GetAIImageJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries jobs of image AI processing.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   Call the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation to submit image AI processing jobs before you call this operation to query image AI processing jobs.
       * *   You can query a maximum of 10 jobs of image AI processing in one request.
       *
       * @param request GetAIImageJobsRequest
       * @return GetAIImageJobsResponse
       */
      Models::GetAIImageJobsResponse getAIImageJobs(const Models::GetAIImageJobsRequest &request);

      /**
       * @summary Queries the information about an intelligent review job. After the job is submitted, it is processed asynchronously. You can call this operation to query the job information in real time.
       *
       * @description ApsaraVideo VOD stores the snapshots of the intelligent review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
       *
       * @param request GetAIMediaAuditJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIMediaAuditJobResponse
       */
      Models::GetAIMediaAuditJobResponse getAIMediaAuditJobWithOptions(const Models::GetAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an intelligent review job. After the job is submitted, it is processed asynchronously. You can call this operation to query the job information in real time.
       *
       * @description ApsaraVideo VOD stores the snapshots of the intelligent review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
       *
       * @param request GetAIMediaAuditJobRequest
       * @return GetAIMediaAuditJobResponse
       */
      Models::GetAIMediaAuditJobResponse getAIMediaAuditJob(const Models::GetAIMediaAuditJobRequest &request);

      /**
       * @summary Queries the details of an AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   Before you call this operation to query details of an AI template, you must obtain the ID of the AI template.
       *
       * @param request GetAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITemplateResponse
       */
      Models::GetAITemplateResponse getAITemplateWithOptions(const Models::GetAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   Before you call this operation to query details of an AI template, you must obtain the ID of the AI template.
       *
       * @param request GetAITemplateRequest
       * @return GetAITemplateResponse
       */
      Models::GetAITemplateResponse getAITemplate(const Models::GetAITemplateRequest &request);

      /**
       * @summary Queries the results of smart tagging jobs.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can obtain the smart tagging results by using the video ID.
       *
       * @param request GetAIVideoTagResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIVideoTagResultResponse
       */
      Models::GetAIVideoTagResultResponse getAIVideoTagResultWithOptions(const Models::GetAIVideoTagResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of smart tagging jobs.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can obtain the smart tagging results by using the video ID.
       *
       * @param request GetAIVideoTagResultRequest
       * @return GetAIVideoTagResultResponse
       */
      Models::GetAIVideoTagResultResponse getAIVideoTagResult(const Models::GetAIVideoTagResultRequest &request);

      /**
       * @summary Queries the information about one or more applications based on application IDs.
       *
       * @description You can specify multiple accelerated domain names in a request.
       *
       * @param request GetAppInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInfosResponse
       */
      Models::GetAppInfosResponse getAppInfosWithOptions(const Models::GetAppInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more applications based on application IDs.
       *
       * @description You can specify multiple accelerated domain names in a request.
       *
       * @param request GetAppInfosRequest
       * @return GetAppInfosResponse
       */
      Models::GetAppInfosResponse getAppInfos(const Models::GetAppInfosRequest &request);

      /**
       * @summary 获取应用播放密钥
       *
       * @param request GetAppPlayKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppPlayKeyResponse
       */
      Models::GetAppPlayKeyResponse getAppPlayKeyWithOptions(const Models::GetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用播放密钥
       *
       * @param request GetAppPlayKeyRequest
       * @return GetAppPlayKeyResponse
       */
      Models::GetAppPlayKeyResponse getAppPlayKey(const Models::GetAppPlayKeyRequest &request);

      /**
       * @summary Queries the URL and basic information about one or more auxiliary media assets such as watermark images, subtitle files, and materials based on IDs.
       *
       * @description You can query information about up to 20 auxiliary media assets in a request.
       *
       * @param request GetAttachedMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttachedMediaInfoResponse
       */
      Models::GetAttachedMediaInfoResponse getAttachedMediaInfoWithOptions(const Models::GetAttachedMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the URL and basic information about one or more auxiliary media assets such as watermark images, subtitle files, and materials based on IDs.
       *
       * @description You can query information about up to 20 auxiliary media assets in a request.
       *
       * @param request GetAttachedMediaInfoRequest
       * @return GetAttachedMediaInfoResponse
       */
      Models::GetAttachedMediaInfoResponse getAttachedMediaInfo(const Models::GetAttachedMediaInfoRequest &request);

      /**
       * @summary Queries the manual review history.
       *
       * @param request GetAuditHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditHistoryResponse
       */
      Models::GetAuditHistoryResponse getAuditHistoryWithOptions(const Models::GetAuditHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the manual review history.
       *
       * @param request GetAuditHistoryRequest
       * @return GetAuditHistoryResponse
       */
      Models::GetAuditHistoryResponse getAuditHistory(const Models::GetAuditHistoryRequest &request);

      /**
       * @summary Queries the information about a specific category and its subcategories based on the ID or type of the category.
       *
       * @param request GetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategoriesWithOptions(const Models::GetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specific category and its subcategories based on the ID or type of the category.
       *
       * @param request GetCategoriesRequest
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategories(const Models::GetCategoriesRequest &request);

      /**
       * @summary 支持区域化媒资ID级别播放数据查询
       *
       * @param request GetDailyPlayRegionStatisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDailyPlayRegionStatisResponse
       */
      Models::GetDailyPlayRegionStatisResponse getDailyPlayRegionStatisWithOptions(const Models::GetDailyPlayRegionStatisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 支持区域化媒资ID级别播放数据查询
       *
       * @param request GetDailyPlayRegionStatisRequest
       * @return GetDailyPlayRegionStatisResponse
       */
      Models::GetDailyPlayRegionStatisResponse getDailyPlayRegionStatis(const Models::GetDailyPlayRegionStatisRequest &request);

      /**
       * @summary Queries information about the default AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can query information only about the default AI template for automated review.
       *
       * @param request GetDefaultAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultAITemplateResponse
       */
      Models::GetDefaultAITemplateResponse getDefaultAITemplateWithOptions(const Models::GetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the default AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can query information only about the default AI template for automated review.
       *
       * @param request GetDefaultAITemplateRequest
       * @return GetDefaultAITemplateResponse
       */
      Models::GetDefaultAITemplateResponse getDefaultAITemplate(const Models::GetDefaultAITemplateRequest &request);

      /**
       * @summary Queries the results of a digital watermark extraction job. You can call this operation to obtain information such as the job status and the content of the copyright or user-tracing watermark.
       *
       * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       * *   You can call this operation to query the watermark content after you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright or user-tracing watermark in a video.
       * *   You can query watermark content extracted only from watermark extraction jobs that are submitted in the last 2 years.
       *
       * @param request GetDigitalWatermarkExtractResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDigitalWatermarkExtractResultResponse
       */
      Models::GetDigitalWatermarkExtractResultResponse getDigitalWatermarkExtractResultWithOptions(const Models::GetDigitalWatermarkExtractResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of a digital watermark extraction job. You can call this operation to obtain information such as the job status and the content of the copyright or user-tracing watermark.
       *
       * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
       * *   You can call this operation to query the watermark content after you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright or user-tracing watermark in a video.
       * *   You can query watermark content extracted only from watermark extraction jobs that are submitted in the last 2 years.
       *
       * @param request GetDigitalWatermarkExtractResultRequest
       * @return GetDigitalWatermarkExtractResultResponse
       */
      Models::GetDigitalWatermarkExtractResultResponse getDigitalWatermarkExtractResult(const Models::GetDigitalWatermarkExtractResultRequest &request);

      /**
       * @summary 获取剪辑工程
       *
       * @param request GetEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectResponse
       */
      Models::GetEditingProjectResponse getEditingProjectWithOptions(const Models::GetEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取剪辑工程
       *
       * @param request GetEditingProjectRequest
       * @return GetEditingProjectResponse
       */
      Models::GetEditingProjectResponse getEditingProject(const Models::GetEditingProjectRequest &request);

      /**
       * @summary Queries materials to be edited for an online editing project.
       *
       * @description During editing, you can add materials to the timeline, but some of them may not be used.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterialsWithOptions(const Models::GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries materials to be edited for an online editing project.
       *
       * @description During editing, you can add materials to the timeline, but some of them may not be used.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterials(const Models::GetEditingProjectMaterialsRequest &request);

      /**
       * @summary Queries the basic information and access URL of an image based on the image ID.
       *
       * @param request GetImageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageInfoResponse
       */
      Models::GetImageInfoResponse getImageInfoWithOptions(const Models::GetImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information and access URL of an image based on the image ID.
       *
       * @param request GetImageInfoRequest
       * @return GetImageInfoResponse
       */
      Models::GetImageInfoResponse getImageInfo(const Models::GetImageInfoRequest &request);

      /**
       * @summary Queries the basic information about multiple images at a time.
       *
       * @description *   You can call the [CreateUploadImage](~~CreateUploadImage~~) operation to upload images to ApsaraVideo VOD and call this operation to query the basic information about multiple images at a time.
       * *   To query information about video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
       * *   You can specify up to 20 image IDs in one call.
       *
       * @param request GetImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageInfosResponse
       */
      Models::GetImageInfosResponse getImageInfosWithOptions(const Models::GetImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about multiple images at a time.
       *
       * @description *   You can call the [CreateUploadImage](~~CreateUploadImage~~) operation to upload images to ApsaraVideo VOD and call this operation to query the basic information about multiple images at a time.
       * *   To query information about video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
       * *   You can specify up to 20 image IDs in one call.
       *
       * @param request GetImageInfosRequest
       * @return GetImageInfosResponse
       */
      Models::GetImageInfosResponse getImageInfos(const Models::GetImageInfosRequest &request);

      /**
       * @summary Queries the details of an asynchronous task based on jobId.
       *
       * @description ****
       * You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
       * **QPS limit**
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDetailResponse
       */
      Models::GetJobDetailResponse getJobDetailWithOptions(const Models::GetJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an asynchronous task based on jobId.
       *
       * @description ****
       * You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
       * **QPS limit**
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetJobDetailRequest
       * @return GetJobDetailResponse
       */
      Models::GetJobDetailResponse getJobDetail(const Models::GetJobDetailRequest &request);

      /**
       * @summary Queries the details of audio review results.
       *
       * @description If notifications for the [CreateAuditComplete](https://help.aliyun.com/document_detail/89576.html) event are configured, event notifications are sent to the callback URL after automated review is complete. You can call this operation to query the details of audio review results.
       *
       * @param request GetMediaAuditAudioResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditAudioResultDetailResponse
       */
      Models::GetMediaAuditAudioResultDetailResponse getMediaAuditAudioResultDetailWithOptions(const Models::GetMediaAuditAudioResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of audio review results.
       *
       * @description If notifications for the [CreateAuditComplete](https://help.aliyun.com/document_detail/89576.html) event are configured, event notifications are sent to the callback URL after automated review is complete. You can call this operation to query the details of audio review results.
       *
       * @param request GetMediaAuditAudioResultDetailRequest
       * @return GetMediaAuditAudioResultDetailResponse
       */
      Models::GetMediaAuditAudioResultDetailResponse getMediaAuditAudioResultDetail(const Models::GetMediaAuditAudioResultDetailRequest &request);

      /**
       * @summary Queries the summary of automated review results.
       *
       * @param request GetMediaAuditResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditResultResponse
       */
      Models::GetMediaAuditResultResponse getMediaAuditResultWithOptions(const Models::GetMediaAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary of automated review results.
       *
       * @param request GetMediaAuditResultRequest
       * @return GetMediaAuditResultResponse
       */
      Models::GetMediaAuditResultResponse getMediaAuditResult(const Models::GetMediaAuditResultRequest &request);

      /**
       * @summary Queries the details of automated review results. You can call this operation to query the details of review results in real time.
       *
       * @description *   By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
       * *   ApsaraVideo VOD stores the snapshots in the automated review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
       * *   This operation is available only in the Singapore region.
       *
       * @param request GetMediaAuditResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditResultDetailResponse
       */
      Models::GetMediaAuditResultDetailResponse getMediaAuditResultDetailWithOptions(const Models::GetMediaAuditResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of automated review results. You can call this operation to query the details of review results in real time.
       *
       * @description *   By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
       * *   ApsaraVideo VOD stores the snapshots in the automated review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
       * *   This operation is available only in the Singapore region.
       *
       * @param request GetMediaAuditResultDetailRequest
       * @return GetMediaAuditResultDetailResponse
       */
      Models::GetMediaAuditResultDetailResponse getMediaAuditResultDetail(const Models::GetMediaAuditResultDetailRequest &request);

      /**
       * @summary Queries the timelines of all snapshots that violate content regulations.
       *
       * @description >  By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
       * This operation is available only in the Singapore region.
       *
       * @param request GetMediaAuditResultTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditResultTimelineResponse
       */
      Models::GetMediaAuditResultTimelineResponse getMediaAuditResultTimelineWithOptions(const Models::GetMediaAuditResultTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the timelines of all snapshots that violate content regulations.
       *
       * @description >  By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
       * This operation is available only in the Singapore region.
       *
       * @param request GetMediaAuditResultTimelineRequest
       * @return GetMediaAuditResultTimelineResponse
       */
      Models::GetMediaAuditResultTimelineResponse getMediaAuditResultTimeline(const Models::GetMediaAuditResultTimelineRequest &request);

      /**
       * @summary Queries a media fingerprinting result. After a media fingerprinting job is complete, you can call this operation to query the media fingerprinting result.
       *
       * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request GetMediaDNAResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaDNAResultResponse
       */
      Models::GetMediaDNAResultResponse getMediaDNAResultWithOptions(const Models::GetMediaDNAResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a media fingerprinting result. After a media fingerprinting job is complete, you can call this operation to query the media fingerprinting result.
       *
       * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request GetMediaDNAResultRequest
       * @return GetMediaDNAResultResponse
       */
      Models::GetMediaDNAResultResponse getMediaDNAResult(const Models::GetMediaDNAResultRequest &request);

      /**
       * @summary Queries the information about media refresh or prefetch jobs, such as the job status and filtering conditions.
       *
       * @description You can query the information about all media files or a specific media file in a refresh or prefetch job.
       * ### QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VoD](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetMediaRefreshJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaRefreshJobsResponse
       */
      Models::GetMediaRefreshJobsResponse getMediaRefreshJobsWithOptions(const Models::GetMediaRefreshJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about media refresh or prefetch jobs, such as the job status and filtering conditions.
       *
       * @description You can query the information about all media files or a specific media file in a refresh or prefetch job.
       * ### QPS limits
       * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VoD](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetMediaRefreshJobsRequest
       * @return GetMediaRefreshJobsResponse
       */
      Models::GetMediaRefreshJobsResponse getMediaRefreshJobs(const Models::GetMediaRefreshJobsRequest &request);

      /**
       * @summary Queries the callback method, callback URL, and event type for event notifications.
       *
       * @description > For more information, see [Event notification](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetMessageCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageCallbackResponse
       */
      Models::GetMessageCallbackResponse getMessageCallbackWithOptions(const Models::GetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback method, callback URL, and event type for event notifications.
       *
       * @description > For more information, see [Event notification](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetMessageCallbackRequest
       * @return GetMessageCallbackResponse
       */
      Models::GetMessageCallbackResponse getMessageCallback(const Models::GetMessageCallbackRequest &request);

      /**
       * @summary Queries the information about the mezzanine file of an audio or video. The information includes the mezzanine file URL, resolution, and bitrate of the audio or video.
       *
       * @description You can obtain complete information about the source file only after a stream is transcoded.
       *
       * @param request GetMezzanineInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMezzanineInfoResponse
       */
      Models::GetMezzanineInfoResponse getMezzanineInfoWithOptions(const Models::GetMezzanineInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the mezzanine file of an audio or video. The information includes the mezzanine file URL, resolution, and bitrate of the audio or video.
       *
       * @description You can obtain complete information about the source file only after a stream is transcoded.
       *
       * @param request GetMezzanineInfoRequest
       * @return GetMezzanineInfoResponse
       */
      Models::GetMezzanineInfoResponse getMezzanineInfo(const Models::GetMezzanineInfoRequest &request);

      /**
       * @summary Obtains the playback URL by the audio or video ID. Then, you can use ApsaraVideo Player or a third-party player, such as a system player, open source player, orself-developed player, to play the audio or video.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for outbound traffic when you download or play videos based on URLs in ApsaraVideo VOD. For more information about billing of outbound traffic, see [Billing of outbound traffic](~~188308#section-rwh-e88-f7j~~). If you have configured an accelerated domain name, see [Billing of the acceleration service](~~188308#section-c5t-oq9-15e~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   Only videos whose Status is Normal can be played. For more information, see [Overview](https://help.aliyun.com/document_detail/57290.html).
       * *   If video playback fails, you can call the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the video source information is correct.
       *
       * @param request GetPlayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfoWithOptions(const Models::GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the playback URL by the audio or video ID. Then, you can use ApsaraVideo Player or a third-party player, such as a system player, open source player, orself-developed player, to play the audio or video.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for outbound traffic when you download or play videos based on URLs in ApsaraVideo VOD. For more information about billing of outbound traffic, see [Billing of outbound traffic](~~188308#section-rwh-e88-f7j~~). If you have configured an accelerated domain name, see [Billing of the acceleration service](~~188308#section-c5t-oq9-15e~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   Only videos whose Status is Normal can be played. For more information, see [Overview](https://help.aliyun.com/document_detail/57290.html).
       * *   If video playback fails, you can call the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the video source information is correct.
       *
       * @param request GetPlayInfoRequest
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfo(const Models::GetPlayInfoRequest &request);

      /**
       * @summary Queries transcoding summaries of audio and video files based on the file ID. A transcoding summary includes the status and progress of transcoding.
       *
       * @description *   An audio or video file may be transcoded multiple times. This operation returns only the latest transcoding summary.
       * *   You can query transcoding summaries for a maximum of 10 audio and video files in one request.
       * *   You can call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation to query historical transcoding tasks.
       * *   **You can call this operation to query information only about transcoding tasks created within the past year.
       *
       * @param request GetTranscodeSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeSummaryResponse
       */
      Models::GetTranscodeSummaryResponse getTranscodeSummaryWithOptions(const Models::GetTranscodeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding summaries of audio and video files based on the file ID. A transcoding summary includes the status and progress of transcoding.
       *
       * @description *   An audio or video file may be transcoded multiple times. This operation returns only the latest transcoding summary.
       * *   You can query transcoding summaries for a maximum of 10 audio and video files in one request.
       * *   You can call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation to query historical transcoding tasks.
       * *   **You can call this operation to query information only about transcoding tasks created within the past year.
       *
       * @param request GetTranscodeSummaryRequest
       * @return GetTranscodeSummaryResponse
       */
      Models::GetTranscodeSummaryResponse getTranscodeSummary(const Models::GetTranscodeSummaryRequest &request);

      /**
       * @summary Queries details about transcoding jobs based on the transcoding task ID.
       *
       * @description You can call this operation to query only transcoding tasks created within the past year.
       *
       * @param request GetTranscodeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeTaskResponse
       */
      Models::GetTranscodeTaskResponse getTranscodeTaskWithOptions(const Models::GetTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about transcoding jobs based on the transcoding task ID.
       *
       * @description You can call this operation to query only transcoding tasks created within the past year.
       *
       * @param request GetTranscodeTaskRequest
       * @return GetTranscodeTaskResponse
       */
      Models::GetTranscodeTaskResponse getTranscodeTask(const Models::GetTranscodeTaskRequest &request);

      /**
       * @summary Queries the details of a transcoding template group based on the template group ID.
       *
       * @description This operation returns information about the specified transcoding template group and the configurations of all the transcoding templates in the group.
       *
       * @param request GetTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeTemplateGroupResponse
       */
      Models::GetTranscodeTemplateGroupResponse getTranscodeTemplateGroupWithOptions(const Models::GetTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a transcoding template group based on the template group ID.
       *
       * @description This operation returns information about the specified transcoding template group and the configurations of all the transcoding templates in the group.
       *
       * @param request GetTranscodeTemplateGroupRequest
       * @return GetTranscodeTemplateGroupResponse
       */
      Models::GetTranscodeTemplateGroupResponse getTranscodeTemplateGroup(const Models::GetTranscodeTemplateGroupRequest &request);

      /**
       * @summary Queries the information about URL-based upload jobs.
       *
       * @description You can query the information about a URL-based upload job by specifying the upload URL or using the job ID returned when you upload media files. The information includes the status of the upload job, custom configurations, the time when the job was created, and the time when the job was complete.
       * If the upload fails, you can view the error code and error message. If the upload is successful, you can obtain the video ID.
       *
       * @param request GetURLUploadInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetURLUploadInfosResponse
       */
      Models::GetURLUploadInfosResponse getURLUploadInfosWithOptions(const Models::GetURLUploadInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about URL-based upload jobs.
       *
       * @description You can query the information about a URL-based upload job by specifying the upload URL or using the job ID returned when you upload media files. The information includes the status of the upload job, custom configurations, the time when the job was created, and the time when the job was complete.
       * If the upload fails, you can view the error code and error message. If the upload is successful, you can obtain the video ID.
       *
       * @param request GetURLUploadInfosRequest
       * @return GetURLUploadInfosResponse
       */
      Models::GetURLUploadInfosResponse getURLUploadInfos(const Models::GetURLUploadInfosRequest &request);

      /**
       * @summary Queries the upload details, such as the upload time, upload ratio, and upload source, about one or more media files based on the media IDs.
       *
       * @description *   You can call this operation to obtain the upload details only about audio and video files.
       * *   If you use the ApsaraVideo VOD console to upload audio and video files, you can call this operation to query information such as the upload ratio. If you use an upload SDK to upload audio and video files, make sure that the version of the [upload SDK](https://help.aliyun.com/document_detail/52200.html) meets one of the following requirements:
       *     *   The version of the upload SDK for Java is 1.4.4 or later.
       *     *   The version of the upload SDK for C++ is 1.0.0 or later.
       *     *   The version of the upload SDK for PHP is 1.0.2 or later.
       *     *   The version of the upload SDK for Python is 1.3.0 or later.
       *     *   The version of the upload SDK for JavaScript is 1.4.0 or later.
       *     *   The version of the upload SDK for Android is 1.5.0 or later.
       *     *   The version of the upload SDK for iOS is 1.5.0 or later.
       *
       * @param request GetUploadDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadDetailsResponse
       */
      Models::GetUploadDetailsResponse getUploadDetailsWithOptions(const Models::GetUploadDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the upload details, such as the upload time, upload ratio, and upload source, about one or more media files based on the media IDs.
       *
       * @description *   You can call this operation to obtain the upload details only about audio and video files.
       * *   If you use the ApsaraVideo VOD console to upload audio and video files, you can call this operation to query information such as the upload ratio. If you use an upload SDK to upload audio and video files, make sure that the version of the [upload SDK](https://help.aliyun.com/document_detail/52200.html) meets one of the following requirements:
       *     *   The version of the upload SDK for Java is 1.4.4 or later.
       *     *   The version of the upload SDK for C++ is 1.0.0 or later.
       *     *   The version of the upload SDK for PHP is 1.0.2 or later.
       *     *   The version of the upload SDK for Python is 1.3.0 or later.
       *     *   The version of the upload SDK for JavaScript is 1.4.0 or later.
       *     *   The version of the upload SDK for Android is 1.5.0 or later.
       *     *   The version of the upload SDK for iOS is 1.5.0 or later.
       *
       * @param request GetUploadDetailsRequest
       * @return GetUploadDetailsResponse
       */
      Models::GetUploadDetailsResponse getUploadDetails(const Models::GetUploadDetailsRequest &request);

      /**
       * @summary Obtains the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags of a media file based on the file ID.
       *
       * @description After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetVideoInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoInfoResponse
       */
      Models::GetVideoInfoResponse getVideoInfoWithOptions(const Models::GetVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags of a media file based on the file ID.
       *
       * @description After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetVideoInfoRequest
       * @return GetVideoInfoResponse
       */
      Models::GetVideoInfoResponse getVideoInfo(const Models::GetVideoInfoRequest &request);

      /**
       * @summary Queries information such as the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags about multiple audio or video files based on IDs.
       *
       * @description *   You can specify up to 20 audio or video file IDs in each request.
       * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetVideoInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoInfosResponse
       */
      Models::GetVideoInfosResponse getVideoInfosWithOptions(const Models::GetVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information such as the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags about multiple audio or video files based on IDs.
       *
       * @description *   You can specify up to 20 audio or video file IDs in each request.
       * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetVideoInfosRequest
       * @return GetVideoInfosResponse
       */
      Models::GetVideoInfosResponse getVideoInfos(const Models::GetVideoInfosRequest &request);

      /**
       * @summary Queries information about media files.
       *
       * @description You can call this operation to query information about media files based on the filter conditions that you specify, such as video status and category ID. Information about a maximum of **5,000** media files can be returned for each request. We recommend that you set the StartTime and EndTime parameters to specify a time range for each request. For more information about how to query information about more media files or even all media files, see [SearchMedia](https://help.aliyun.com/document_detail/86044.html).
       *
       * @param request GetVideoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoListWithOptions(const Models::GetVideoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about media files.
       *
       * @description You can call this operation to query information about media files based on the filter conditions that you specify, such as video status and category ID. Information about a maximum of **5,000** media files can be returned for each request. We recommend that you set the StartTime and EndTime parameters to specify a time range for each request. For more information about how to query information about more media files or even all media files, see [SearchMedia](https://help.aliyun.com/document_detail/86044.html).
       *
       * @param request GetVideoListRequest
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoList(const Models::GetVideoListRequest &request);

      /**
       * @summary Queries the credential required for media playback. ApsaraVideo Player SDK automatically obtains the playback URL based on the playback credential. Each playback credential can be used to obtain the playback URL only for a specific video in a specific period of time. You cannot obtain the playback URL if the credential expires or is incorrect. You can use PlayAuth-based playback when you require high security for audio and video playback.
       *
       * @description *   You can call this operation to obtain a playback credential when you use ApsaraVideo Player SDK to play a media file based on PlayAuth. The credential is used to obtain the playback URL. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
       * *   You cannot obtain the playback URL of a video by using a credential that has expired. A new credential is required.
       *
       * @param request GetVideoPlayAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoPlayAuthResponse
       */
      Models::GetVideoPlayAuthResponse getVideoPlayAuthWithOptions(const Models::GetVideoPlayAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential required for media playback. ApsaraVideo Player SDK automatically obtains the playback URL based on the playback credential. Each playback credential can be used to obtain the playback URL only for a specific video in a specific period of time. You cannot obtain the playback URL if the credential expires or is incorrect. You can use PlayAuth-based playback when you require high security for audio and video playback.
       *
       * @description *   You can call this operation to obtain a playback credential when you use ApsaraVideo Player SDK to play a media file based on PlayAuth. The credential is used to obtain the playback URL. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
       * *   You cannot obtain the playback URL of a video by using a credential that has expired. A new credential is required.
       *
       * @param request GetVideoPlayAuthRequest
       * @return GetVideoPlayAuthResponse
       */
      Models::GetVideoPlayAuthResponse getVideoPlayAuth(const Models::GetVideoPlayAuthRequest &request);

      /**
       * @summary Queries a single snapshot template.
       *
       * @param request GetVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVodTemplateResponse
       */
      Models::GetVodTemplateResponse getVodTemplateWithOptions(const Models::GetVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a single snapshot template.
       *
       * @param request GetVodTemplateRequest
       * @return GetVodTemplateResponse
       */
      Models::GetVodTemplateResponse getVodTemplate(const Models::GetVodTemplateRequest &request);

      /**
       * @summary Queries the information about an image or text watermark based on the watermark template ID. You can call this operation to obtain information such as the position, size, and display time of an image watermark or the content, position, font, and font color of a text watermark.
       *
       * @param request GetWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWatermarkResponse
       */
      Models::GetWatermarkResponse getWatermarkWithOptions(const Models::GetWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an image or text watermark based on the watermark template ID. You can call this operation to obtain information such as the position, size, and display time of an image watermark or the content, position, font, and font color of a text watermark.
       *
       * @param request GetWatermarkRequest
       * @return GetWatermarkResponse
       */
      Models::GetWatermarkResponse getWatermark(const Models::GetWatermarkRequest &request);

      /**
       * @summary Queries the AI processing results about the images of a specified video.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   You can call this operation to query AI processing results about images of a specified video. Images of different videos cannot be queried in one request.
       *
       * @param request ListAIImageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIImageInfoResponse
       */
      Models::ListAIImageInfoResponse listAIImageInfoWithOptions(const Models::ListAIImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AI processing results about the images of a specified video.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   You can call this operation to query AI processing results about images of a specified video. Images of different videos cannot be queried in one request.
       *
       * @param request ListAIImageInfoRequest
       * @return ListAIImageInfoResponse
       */
      Models::ListAIImageInfoResponse listAIImageInfo(const Models::ListAIImageInfoRequest &request);

      /**
       * @summary Queries AI jobs. After a job is submitted, ApsaraVideo VOD asynchronously processes the job. You can call this operation to query the job information in real time.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can call this operation to query video fingerprinting jobs and smart tagging jobs.
       *
       * @param request ListAIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIJobResponse
       */
      Models::ListAIJobResponse listAIJobWithOptions(const Models::ListAIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AI jobs. After a job is submitted, ApsaraVideo VOD asynchronously processes the job. You can call this operation to query the job information in real time.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can call this operation to query video fingerprinting jobs and smart tagging jobs.
       *
       * @param request ListAIJobRequest
       * @return ListAIJobResponse
       */
      Models::ListAIJobResponse listAIJob(const Models::ListAIJobRequest &request);

      /**
       * @summary Queries AI templates.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can call this operation to query AI templates of a specified type.
       *
       * @param request ListAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAITemplateResponse
       */
      Models::ListAITemplateResponse listAITemplateWithOptions(const Models::ListAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AI templates.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   You can call this operation to query AI templates of a specified type.
       *
       * @param request ListAITemplateRequest
       * @return ListAITemplateResponse
       */
      Models::ListAITemplateResponse listAITemplate(const Models::ListAITemplateRequest &request);

      /**
       * @summary Queries the applications that you are authorized to manage based on query conditions.
       *
       * @description ### [](#)Usage notes
       * You can query applications based on states.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInfoResponse
       */
      Models::ListAppInfoResponse listAppInfoWithOptions(const Models::ListAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that you are authorized to manage based on query conditions.
       *
       * @description ### [](#)Usage notes
       * You can query applications based on states.
       * ### [](#qps-)QPS limit
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListAppInfoRequest
       * @return ListAppInfoResponse
       */
      Models::ListAppInfoResponse listAppInfo(const Models::ListAppInfoRequest &request);

      /**
       * @summary Queries the application policies that are attached to the specified identity. The identity may be a RAM user or RAM role.
       *
       * @description > The IdentityType and IdentityName parameters take effect only when an identity assumes the application administrator role to call this operation. Otherwise, only application policies that are attached to the current identity are returned.
       *
       * @param request ListAppPoliciesForIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPoliciesForIdentityResponse
       */
      Models::ListAppPoliciesForIdentityResponse listAppPoliciesForIdentityWithOptions(const Models::ListAppPoliciesForIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the application policies that are attached to the specified identity. The identity may be a RAM user or RAM role.
       *
       * @description > The IdentityType and IdentityName parameters take effect only when an identity assumes the application administrator role to call this operation. Otherwise, only application policies that are attached to the current identity are returned.
       *
       * @param request ListAppPoliciesForIdentityRequest
       * @return ListAppPoliciesForIdentityResponse
       */
      Models::ListAppPoliciesForIdentityResponse listAppPoliciesForIdentity(const Models::ListAppPoliciesForIdentityRequest &request);

      /**
       * @summary Queries the IP addresses in a review security group.
       *
       * @param request ListAuditSecurityIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditSecurityIpResponse
       */
      Models::ListAuditSecurityIpResponse listAuditSecurityIpWithOptions(const Models::ListAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses in a review security group.
       *
       * @param request ListAuditSecurityIpRequest
       * @return ListAuditSecurityIpResponse
       */
      Models::ListAuditSecurityIpResponse listAuditSecurityIp(const Models::ListAuditSecurityIpRequest &request);

      /**
       * @summary Queries the information about animated stickers of a video based on the video ID.
       *
       * @param request ListDynamicImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicImageResponse
       */
      Models::ListDynamicImageResponse listDynamicImageWithOptions(const Models::ListDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about animated stickers of a video based on the video ID.
       *
       * @param request ListDynamicImageRequest
       * @return ListDynamicImageResponse
       */
      Models::ListDynamicImageResponse listDynamicImage(const Models::ListDynamicImageRequest &request);

      /**
       * @summary Queries historical tasks based on the media asset ID.
       *
       * @description ****
       * *   You can call the [GetJobDetail](https://apiworkbench.aliyun-inc.com/document/vod/2017-03-21/GetJobDetail?spm=openapi-amp.newDocPublishment.0.0.616a281fSegn0e) operation to query detailed information about the tasks.
       * *   You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
       * **QPS limits**
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListJobInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobInfoResponse
       */
      Models::ListJobInfoResponse listJobInfoWithOptions(const Models::ListJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries historical tasks based on the media asset ID.
       *
       * @description ****
       * *   You can call the [GetJobDetail](https://apiworkbench.aliyun-inc.com/document/vod/2017-03-21/GetJobDetail?spm=openapi-amp.newDocPublishment.0.0.616a281fSegn0e) operation to query detailed information about the tasks.
       * *   You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
       * **QPS limits**
       * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListJobInfoRequest
       * @return ListJobInfoResponse
       */
      Models::ListJobInfoResponse listJobInfo(const Models::ListJobInfoRequest &request);

      /**
       * @summary Queries live-to-VOD videos.
       *
       * @description You can query up to 5,000 videos based on the specified filter condition.
       *
       * @param request ListLiveRecordVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRecordVideoResponse
       */
      Models::ListLiveRecordVideoResponse listLiveRecordVideoWithOptions(const Models::ListLiveRecordVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries live-to-VOD videos.
       *
       * @description You can query up to 5,000 videos based on the specified filter condition.
       *
       * @param request ListLiveRecordVideoRequest
       * @return ListLiveRecordVideoResponse
       */
      Models::ListLiveRecordVideoResponse listLiveRecordVideo(const Models::ListLiveRecordVideoRequest &request);

      /**
       * @summary Queries the snapshots that are captured by submitting snapshot jobs or snapshots that are generated by the system when you upload the video.
       *
       * @description If multiple snapshots exist for a video, you can call this operation to query information about the latest snapshot.
       *
       * @param request ListSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const Models::ListSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the snapshots that are captured by submitting snapshot jobs or snapshots that are generated by the system when you upload the video.
       *
       * @description If multiple snapshots exist for a video, you can call this operation to query information about the latest snapshot.
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const Models::ListSnapshotsRequest &request);

      /**
       * @summary Queries transcoding tasks based on the media ID. This operation does not return specific job information.
       *
       * @description *   You can call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation to query details about transcoding jobs.
       * *   **You can call this operation to query only transcoding tasks created within the past year.**
       *
       * @param request ListTranscodeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscodeTaskResponse
       */
      Models::ListTranscodeTaskResponse listTranscodeTaskWithOptions(const Models::ListTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding tasks based on the media ID. This operation does not return specific job information.
       *
       * @description *   You can call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation to query details about transcoding jobs.
       * *   **You can call this operation to query only transcoding tasks created within the past year.**
       *
       * @param request ListTranscodeTaskRequest
       * @return ListTranscodeTaskResponse
       */
      Models::ListTranscodeTaskResponse listTranscodeTask(const Models::ListTranscodeTaskRequest &request);

      /**
       * @summary Queries transcoding template groups.
       *
       * @description > This operation does not return the configurations of transcoding templates in each transcoding template group. To query the configurations of transcoding templates in a specific transcoding template group, call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation.
       *
       * @param request ListTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscodeTemplateGroupResponse
       */
      Models::ListTranscodeTemplateGroupResponse listTranscodeTemplateGroupWithOptions(const Models::ListTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding template groups.
       *
       * @description > This operation does not return the configurations of transcoding templates in each transcoding template group. To query the configurations of transcoding templates in a specific transcoding template group, call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation.
       *
       * @param request ListTranscodeTemplateGroupRequest
       * @return ListTranscodeTemplateGroupResponse
       */
      Models::ListTranscodeTemplateGroupResponse listTranscodeTemplateGroup(const Models::ListTranscodeTemplateGroupRequest &request);

      /**
       * @summary Queries snapshot templates.
       *
       * @param request ListVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodTemplateResponse
       */
      Models::ListVodTemplateResponse listVodTemplateWithOptions(const Models::ListVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries snapshot templates.
       *
       * @param request ListVodTemplateRequest
       * @return ListVodTemplateResponse
       */
      Models::ListVodTemplateResponse listVodTemplate(const Models::ListVodTemplateRequest &request);

      /**
       * @summary Queries the configuration information about all image and text watermark templates in a region. You can call this operation to obtain information such as the position, size, and display time of image watermarks or the content, position, font, and font color of text watermarks.
       *
       * @param request ListWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWatermarkResponse
       */
      Models::ListWatermarkResponse listWatermarkWithOptions(const Models::ListWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information about all image and text watermark templates in a region. You can call this operation to obtain information such as the position, size, and display time of image watermarks or the content, position, font, and font color of text watermarks.
       *
       * @param request ListWatermarkRequest
       * @return ListWatermarkResponse
       */
      Models::ListWatermarkResponse listWatermark(const Models::ListWatermarkRequest &request);

      /**
       * @summary Migrates resources between applications. The application administrator can directly migrate resources between applications. Resource Access Management (RAM) users or RAM roles must obtain the write permissions on the source and destination applications before they migrate resources between applications. Multiple resources can be migrated at a time.
       *
       * @param request MoveAppResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveAppResourceResponse
       */
      Models::MoveAppResourceResponse moveAppResourceWithOptions(const Models::MoveAppResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates resources between applications. The application administrator can directly migrate resources between applications. Resource Access Management (RAM) users or RAM roles must obtain the write permissions on the source and destination applications before they migrate resources between applications. Multiple resources can be migrated at a time.
       *
       * @param request MoveAppResourceRequest
       * @return MoveAppResourceResponse
       */
      Models::MoveAppResourceResponse moveAppResource(const Models::MoveAppResourceRequest &request);

      /**
       * @summary Prefetches resources from an origin server to L2 nodes. Users can directly hit the cache upon their first visits. This way, workloads on the origin server can be reduced.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   You can submit a maximum of 500 requests to prefetch resources based on URLs each day by using an Alibaba Cloud account. You cannot prefetch resources based on directories.
       * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.htmll) operation to prefetch content.
       *
       * @param request PreloadVodObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadVodObjectCachesResponse
       */
      Models::PreloadVodObjectCachesResponse preloadVodObjectCachesWithOptions(const Models::PreloadVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches resources from an origin server to L2 nodes. Users can directly hit the cache upon their first visits. This way, workloads on the origin server can be reduced.
       *
       * @description > *   This operation is available only in the **China (Shanghai)** region.
       * > *   You can submit a maximum of 500 requests to prefetch resources based on URLs each day by using an Alibaba Cloud account. You cannot prefetch resources based on directories.
       * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.htmll) operation to prefetch content.
       *
       * @param request PreloadVodObjectCachesRequest
       * @return PreloadVodObjectCachesResponse
       */
      Models::PreloadVodObjectCachesResponse preloadVodObjectCaches(const Models::PreloadVodObjectCachesRequest &request);

      /**
       * @summary Produces a video from one or more source files. You can directly specify source files by configuring the Timeline parameter. Alternatively, you can specify source files after you create an online editing project.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the online editing feature. For more information, see [Billing](~~188310#section-pyv-b8h-bo7~~).**
       * *   This operation returns only the submission result of a video production task. When the submission result is returned, video production may still be in progress. After a video production task is submitted, the task is queued in the background for asynchronous processing.
       * *   The source files that are used in the timeline of an online editing project can be materials directly uploaded to the online project or selected from the media asset library. Only media assets that are in the Normal state can be used in the project.
       * *   Videos are produced based on ProjectId and Timeline. The following content describes the parameter configurations:
       *     *   You must specify ProjectId or Timeline. If you leave both parameters empty, the video cannot be produced.
       *     *   If you specify Timeline and leave ProjectId empty, the system automatically creates an online editing project based on Timeline and adds the materials specified in the Timeline to the project to produce videos.
       *     *   If you specify ProjectId and leave Timeline empty, the system automatically uses the latest timeline information of the project to produce videos.
       *     *   If you specify both ProjectId and Timeline, the system automatically uses the timeline information that you specified to produce videos and updates the project timeline and materials. You can also specify other parameters to update the corresponding information about the online editing project.
       * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
       * *   The total size of material files cannot exceed 1 TB.
       * *   The buckets in which the materials reside and where the exported videos are stored must be in the same region as the region where ApsaraVideo VOD is activated.
       * *   The exported videos must meet the following requirements:
       *     *   The width and height of the video image cannot be less than 128 pixels.
       *     *   The width and height of the video image cannot exceed 4,096 pixels.
       *     *   The width cannot exceed 2,160 pixels.
       * *   After a video is produced, the video is automatically uploaded to ApsaraVideo VOD. Then, the **ProduceMediaComplete** and **FileUploadComplete** event notifications are sent to you. After the produced video is transcoded, the **StreamTranscodeComplete** and **TranscodeComplete** event notifications are sent to you.
       * *   You can add special effects to the video. For more information, see [Special effects](https://help.aliyun.com/document_detail/69082.html).
       *
       * @param request ProduceEditingProjectVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProduceEditingProjectVideoResponse
       */
      Models::ProduceEditingProjectVideoResponse produceEditingProjectVideoWithOptions(const Models::ProduceEditingProjectVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Produces a video from one or more source files. You can directly specify source files by configuring the Timeline parameter. Alternatively, you can specify source files after you create an online editing project.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the online editing feature. For more information, see [Billing](~~188310#section-pyv-b8h-bo7~~).**
       * *   This operation returns only the submission result of a video production task. When the submission result is returned, video production may still be in progress. After a video production task is submitted, the task is queued in the background for asynchronous processing.
       * *   The source files that are used in the timeline of an online editing project can be materials directly uploaded to the online project or selected from the media asset library. Only media assets that are in the Normal state can be used in the project.
       * *   Videos are produced based on ProjectId and Timeline. The following content describes the parameter configurations:
       *     *   You must specify ProjectId or Timeline. If you leave both parameters empty, the video cannot be produced.
       *     *   If you specify Timeline and leave ProjectId empty, the system automatically creates an online editing project based on Timeline and adds the materials specified in the Timeline to the project to produce videos.
       *     *   If you specify ProjectId and leave Timeline empty, the system automatically uses the latest timeline information of the project to produce videos.
       *     *   If you specify both ProjectId and Timeline, the system automatically uses the timeline information that you specified to produce videos and updates the project timeline and materials. You can also specify other parameters to update the corresponding information about the online editing project.
       * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
       * *   The total size of material files cannot exceed 1 TB.
       * *   The buckets in which the materials reside and where the exported videos are stored must be in the same region as the region where ApsaraVideo VOD is activated.
       * *   The exported videos must meet the following requirements:
       *     *   The width and height of the video image cannot be less than 128 pixels.
       *     *   The width and height of the video image cannot exceed 4,096 pixels.
       *     *   The width cannot exceed 2,160 pixels.
       * *   After a video is produced, the video is automatically uploaded to ApsaraVideo VOD. Then, the **ProduceMediaComplete** and **FileUploadComplete** event notifications are sent to you. After the produced video is transcoded, the **StreamTranscodeComplete** and **TranscodeComplete** event notifications are sent to you.
       * *   You can add special effects to the video. For more information, see [Special effects](https://help.aliyun.com/document_detail/69082.html).
       *
       * @param request ProduceEditingProjectVideoRequest
       * @return ProduceEditingProjectVideoResponse
       */
      Models::ProduceEditingProjectVideoResponse produceEditingProjectVideo(const Models::ProduceEditingProjectVideoRequest &request);

      /**
       * @summary Submits media refresh or prefetch tasks based on the media IDs.
       *
       * @description *   ApsaraVideo VOD allows you to purge and prefetch resources. The purge feature forces the point of presence (POP) to clear cached resources and retrieve the latest resources from origin servers. The prefetch feature allows the POP to retrieve frequently accessed resources from origin servers during off-peak hours. This increases the cache hit ratio.
       * *   You can call this operation to submit purge or prefetch tasks based on the media ID. You can also specify the format and resolution of the media streams to purge or prefetch based on your business requirements.
       * *   You can submit a maximum of 20 purge or prefetch tasks at a time.
       *
       * @param request RefreshMediaPlayUrlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshMediaPlayUrlsResponse
       */
      Models::RefreshMediaPlayUrlsResponse refreshMediaPlayUrlsWithOptions(const Models::RefreshMediaPlayUrlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits media refresh or prefetch tasks based on the media IDs.
       *
       * @description *   ApsaraVideo VOD allows you to purge and prefetch resources. The purge feature forces the point of presence (POP) to clear cached resources and retrieve the latest resources from origin servers. The prefetch feature allows the POP to retrieve frequently accessed resources from origin servers during off-peak hours. This increases the cache hit ratio.
       * *   You can call this operation to submit purge or prefetch tasks based on the media ID. You can also specify the format and resolution of the media streams to purge or prefetch based on your business requirements.
       * *   You can submit a maximum of 20 purge or prefetch tasks at a time.
       *
       * @param request RefreshMediaPlayUrlsRequest
       * @return RefreshMediaPlayUrlsResponse
       */
      Models::RefreshMediaPlayUrlsResponse refreshMediaPlayUrls(const Models::RefreshMediaPlayUrlsRequest &request);

      /**
       * @summary Obtains a new upload credential after a file failed to be uploaded.
       *
       * @description You can also call this operation to overwrite the source file of an audio or video file. After you call this operation, the system obtains the upload URL and uploads a new source file without changing the ID of the audio or video file. If you have configured transcoding or snapshot capture for the upload, the transcoding or snapshot capture job is automatically triggered. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request RefreshUploadVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshUploadVideoResponse
       */
      Models::RefreshUploadVideoResponse refreshUploadVideoWithOptions(const Models::RefreshUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a new upload credential after a file failed to be uploaded.
       *
       * @description You can also call this operation to overwrite the source file of an audio or video file. After you call this operation, the system obtains the upload URL and uploads a new source file without changing the ID of the audio or video file. If you have configured transcoding or snapshot capture for the upload, the transcoding or snapshot capture job is automatically triggered. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request RefreshUploadVideoRequest
       * @return RefreshUploadVideoResponse
       */
      Models::RefreshUploadVideoResponse refreshUploadVideo(const Models::RefreshUploadVideoRequest &request);

      /**
       * @summary Refreshes files on Alibaba Cloud CDN nodes. You can refresh multiple files at a time based on URLs.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can submit a maximum of 2,000 requests to refresh resources based on URLs and 100 requests to refresh resources based on directories each day by using an Alibaba Cloud account.
       * *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
       *
       * @param request RefreshVodObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshVodObjectCachesResponse
       */
      Models::RefreshVodObjectCachesResponse refreshVodObjectCachesWithOptions(const Models::RefreshVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes files on Alibaba Cloud CDN nodes. You can refresh multiple files at a time based on URLs.
       *
       * @description *   This operation is available only in the **China (Shanghai)** region.
       * *   You can submit a maximum of 2,000 requests to refresh resources based on URLs and 100 requests to refresh resources based on directories each day by using an Alibaba Cloud account.
       * *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
       *
       * @param request RefreshVodObjectCachesRequest
       * @return RefreshVodObjectCachesResponse
       */
      Models::RefreshVodObjectCachesResponse refreshVodObjectCaches(const Models::RefreshVodObjectCachesRequest &request);

      /**
       * @summary Registers media files. After you add an Object Storage Service (OSS) bucket to ApsaraVideo VOD, you must register the media files in the bucket to generate the required information before you use features such as transcoding and snapshot capture on the media files.
       *
       * @description *   After you add an OSS bucket to ApsaraVideo VOD, you must register media files in the OSS bucket to generate the required information. Then, you can use media IDs for features such as transcoding, snapshot capture, and AI processing.use features such as xxx on media files by specifying their IDs?
       * *   You can register up to 10 media files in an OSS bucket in a request. The media files must be stored in the same bucket.
       * *   If you do not specify a transcoding template group ID when you upload a media file to ApsaraVideo VOD, the media file is automatically transcoded based on the default template group. If you do not specify a transcoding template group ID after you register a media file, the media file is not automatically transcoded. The registered media files are automatically transcoded only if you specify a transcoding template group ID.
       * *   If the media file that you want to register has been registered, this operation returns only the unique media ID that is associated with the media file. No further operation is performed.
       * *   Make sure that the media file that you want to register has a valid suffix. Otherwise, the registration fails.
       *
       * @param request RegisterMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterMediaResponse
       */
      Models::RegisterMediaResponse registerMediaWithOptions(const Models::RegisterMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers media files. After you add an Object Storage Service (OSS) bucket to ApsaraVideo VOD, you must register the media files in the bucket to generate the required information before you use features such as transcoding and snapshot capture on the media files.
       *
       * @description *   After you add an OSS bucket to ApsaraVideo VOD, you must register media files in the OSS bucket to generate the required information. Then, you can use media IDs for features such as transcoding, snapshot capture, and AI processing.use features such as xxx on media files by specifying their IDs?
       * *   You can register up to 10 media files in an OSS bucket in a request. The media files must be stored in the same bucket.
       * *   If you do not specify a transcoding template group ID when you upload a media file to ApsaraVideo VOD, the media file is automatically transcoded based on the default template group. If you do not specify a transcoding template group ID after you register a media file, the media file is not automatically transcoded. The registered media files are automatically transcoded only if you specify a transcoding template group ID.
       * *   If the media file that you want to register has been registered, this operation returns only the unique media ID that is associated with the media file. No further operation is performed.
       * *   Make sure that the media file that you want to register has a valid suffix. Otherwise, the registration fails.
       *
       * @param request RegisterMediaRequest
       * @return RegisterMediaResponse
       */
      Models::RegisterMediaResponse registerMedia(const Models::RegisterMediaRequest &request);

      /**
       * @summary Restores media assets.
       *
       * @description You can call this operation to restore only Archive and Cold Archive audio and video files. You can access the audio and video files after the files are restored. You cannot change the storage class of an audio or video file that is being restored. You are charged for the retrieval traffic generated during restoration. After a Cold Archive audio or video file is restored, a Standard replica of the file is generated for access. You are charged for the storage of the replica before the file returns to the frozen state.
       *
       * @param request RestoreMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreMediaResponse
       */
      Models::RestoreMediaResponse restoreMediaWithOptions(const Models::RestoreMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores media assets.
       *
       * @description You can call this operation to restore only Archive and Cold Archive audio and video files. You can access the audio and video files after the files are restored. You cannot change the storage class of an audio or video file that is being restored. You are charged for the retrieval traffic generated during restoration. After a Cold Archive audio or video file is restored, a Standard replica of the file is generated for access. You are charged for the storage of the replica before the file returns to the frozen state.
       *
       * @param request RestoreMediaRequest
       * @return RestoreMediaResponse
       */
      Models::RestoreMediaResponse restoreMedia(const Models::RestoreMediaRequest &request);

      /**
       * @summary Queries online editing projects.
       *
       * @param request SearchEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchEditingProjectResponse
       */
      Models::SearchEditingProjectResponse searchEditingProjectWithOptions(const Models::SearchEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries online editing projects.
       *
       * @param request SearchEditingProjectRequest
       * @return SearchEditingProjectResponse
       */
      Models::SearchEditingProjectResponse searchEditingProject(const Models::SearchEditingProjectRequest &request);

      /**
       * @summary Queries information about videos, audio, images, and auxiliary media assets. You can call this operation and specify the search protocol to query media assets based on the return fields, fields used for exact match, fields used for fuzzy match, fields used for a multi-value query, fields used for a range query, and sort fields.
       *
       * @description The maximum number of data records that you can query varies based on the method used to query the data. You can use the following methods to query data:
       * *   Method 1: Traverse data by page
       *     You can use the PageNo and PageSize parameters to traverse up to 5,000 data records that meet the specified filter condition. PageNo specifies the page number and PageSize specifies the number of data records displayed on a page. If the number of data records that meet the specified filter condition exceeds 5,000, change the filter conditions to narrow down the results. You cannot use this method to traverse all data records. If you want to traverse more data records, use Method 2.
       * *   Method 2: Traverse all data (available only for audio and video files)
       *     You can use this method to traverse up to 2 million data records related to audio and video files. If the number of data records that meet the specified filter condition exceeds 2 million, change the filter conditions to narrow down the results. To traverse data page by page, you must set the PageNo, PageSize, and ScrollToken parameters. The total number of data records from the current page to the target page cannot exceed 100. For example, you set PageSize to 20. The following content describes the traverse logic:
       *     *   When the PageNo parameter is set to 1, you can traverse data records from page 1 to page 5.
       *     *   When the PageNo parameter is set to 2, you can traverse data records from page 2 to page 6.
       * Make sure that you set the appropriate page number and page size, and use a traverse method based on the number of results that meet your filter condition.
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about videos, audio, images, and auxiliary media assets. You can call this operation and specify the search protocol to query media assets based on the return fields, fields used for exact match, fields used for fuzzy match, fields used for a multi-value query, fields used for a range query, and sort fields.
       *
       * @description The maximum number of data records that you can query varies based on the method used to query the data. You can use the following methods to query data:
       * *   Method 1: Traverse data by page
       *     You can use the PageNo and PageSize parameters to traverse up to 5,000 data records that meet the specified filter condition. PageNo specifies the page number and PageSize specifies the number of data records displayed on a page. If the number of data records that meet the specified filter condition exceeds 5,000, change the filter conditions to narrow down the results. You cannot use this method to traverse all data records. If you want to traverse more data records, use Method 2.
       * *   Method 2: Traverse all data (available only for audio and video files)
       *     You can use this method to traverse up to 2 million data records related to audio and video files. If the number of data records that meet the specified filter condition exceeds 2 million, change the filter conditions to narrow down the results. To traverse data page by page, you must set the PageNo, PageSize, and ScrollToken parameters. The total number of data records from the current page to the target page cannot exceed 100. For example, you set PageSize to 20. The following content describes the traverse logic:
       *     *   When the PageNo parameter is set to 1, you can traverse data records from page 1 to page 5.
       *     *   When the PageNo parameter is set to 2, you can traverse data records from page 2 to page 6.
       * Make sure that you set the appropriate page number and page size, and use a traverse method based on the number of results that meet your filter condition.
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary 设置应用播放密钥
       *
       * @param request SetAppPlayKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAppPlayKeyResponse
       */
      Models::SetAppPlayKeyResponse setAppPlayKeyWithOptions(const Models::SetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置应用播放密钥
       *
       * @param request SetAppPlayKeyRequest
       * @return SetAppPlayKeyResponse
       */
      Models::SetAppPlayKeyResponse setAppPlayKey(const Models::SetAppPlayKeyRequest &request);

      /**
       * @summary Manages the IP addresses in review security groups.
       *
       * @description You can play videos in the Checking or Blocked state only from the IP addresses that are added to review security groups.
       *
       * @param request SetAuditSecurityIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAuditSecurityIpResponse
       */
      Models::SetAuditSecurityIpResponse setAuditSecurityIpWithOptions(const Models::SetAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages the IP addresses in review security groups.
       *
       * @description You can play videos in the Checking or Blocked state only from the IP addresses that are added to review security groups.
       *
       * @param request SetAuditSecurityIpRequest
       * @return SetAuditSecurityIpResponse
       */
      Models::SetAuditSecurityIpResponse setAuditSecurityIp(const Models::SetAuditSecurityIpRequest &request);

      /**
       * @summary Updates the cross-domain policy file crossdomain.xml.
       *
       * @description > After you use the cross-domain policy file to update the resources on the origin server, you must refresh the resources that are cached on Alibaba Cloud CDN nodes. You can use the ApsaraVideo VOD console to refresh resources. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html). Alternatively, you can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh resources.
       *
       * @param request SetCrossdomainContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCrossdomainContentResponse
       */
      Models::SetCrossdomainContentResponse setCrossdomainContentWithOptions(const Models::SetCrossdomainContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the cross-domain policy file crossdomain.xml.
       *
       * @description > After you use the cross-domain policy file to update the resources on the origin server, you must refresh the resources that are cached on Alibaba Cloud CDN nodes. You can use the ApsaraVideo VOD console to refresh resources. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html). Alternatively, you can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh resources.
       *
       * @param request SetCrossdomainContentRequest
       * @return SetCrossdomainContentResponse
       */
      Models::SetCrossdomainContentResponse setCrossdomainContent(const Models::SetCrossdomainContentRequest &request);

      /**
       * @summary Specifies an AI template as the default template.
       *
       * @description Specifies an AI template as the default template.
       *
       * @param request SetDefaultAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultAITemplateResponse
       */
      Models::SetDefaultAITemplateResponse setDefaultAITemplateWithOptions(const Models::SetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies an AI template as the default template.
       *
       * @description Specifies an AI template as the default template.
       *
       * @param request SetDefaultAITemplateRequest
       * @return SetDefaultAITemplateResponse
       */
      Models::SetDefaultAITemplateResponse setDefaultAITemplate(const Models::SetDefaultAITemplateRequest &request);

      /**
       * @summary Specifies a transcoding template group as the default one.
       *
       * @param request SetDefaultTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultTranscodeTemplateGroupResponse
       */
      Models::SetDefaultTranscodeTemplateGroupResponse setDefaultTranscodeTemplateGroupWithOptions(const Models::SetDefaultTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a transcoding template group as the default one.
       *
       * @param request SetDefaultTranscodeTemplateGroupRequest
       * @return SetDefaultTranscodeTemplateGroupResponse
       */
      Models::SetDefaultTranscodeTemplateGroupResponse setDefaultTranscodeTemplateGroup(const Models::SetDefaultTranscodeTemplateGroupRequest &request);

      /**
       * @summary Sets a watermark template as the default one.
       *
       * @param request SetDefaultWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultWatermarkResponse
       */
      Models::SetDefaultWatermarkResponse setDefaultWatermarkWithOptions(const Models::SetDefaultWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a watermark template as the default one.
       *
       * @param request SetDefaultWatermarkRequest
       * @return SetDefaultWatermarkResponse
       */
      Models::SetDefaultWatermarkResponse setDefaultWatermark(const Models::SetDefaultWatermarkRequest &request);

      /**
       * @summary Specifies the media assets that you want to edit in an online editing project.
       *
       * @param request SetEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetEditingProjectMaterialsResponse
       */
      Models::SetEditingProjectMaterialsResponse setEditingProjectMaterialsWithOptions(const Models::SetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the media assets that you want to edit in an online editing project.
       *
       * @param request SetEditingProjectMaterialsRequest
       * @return SetEditingProjectMaterialsResponse
       */
      Models::SetEditingProjectMaterialsResponse setEditingProjectMaterials(const Models::SetEditingProjectMaterialsRequest &request);

      /**
       * @summary Sets the callback method, callback URL, and event type of an event notification.
       *
       * @description HTTP callbacks and MNS callbacks are supported. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request SetMessageCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMessageCallbackResponse
       */
      Models::SetMessageCallbackResponse setMessageCallbackWithOptions(const Models::SetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the callback method, callback URL, and event type of an event notification.
       *
       * @description HTTP callbacks and MNS callbacks are supported. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request SetMessageCallbackRequest
       * @return SetMessageCallbackResponse
       */
      Models::SetMessageCallbackResponse setMessageCallback(const Models::SetMessageCallbackRequest &request);

      /**
       * @summary Enables or disables the certificate of a domain name and modifies the certificate information.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request SetVodDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVodDomainCertificateResponse
       */
      Models::SetVodDomainCertificateResponse setVodDomainCertificateWithOptions(const Models::SetVodDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the certificate of a domain name and modifies the certificate information.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request SetVodDomainCertificateRequest
       * @return SetVodDomainCertificateResponse
       */
      Models::SetVodDomainCertificateResponse setVodDomainCertificate(const Models::SetVodDomainCertificateRequest &request);

      /**
       * @summary Enables or disables the SSL certificate of a domain name and updates the certificate information.
       *
       * @param request SetVodDomainSSLCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVodDomainSSLCertificateResponse
       */
      Models::SetVodDomainSSLCertificateResponse setVodDomainSSLCertificateWithOptions(const Models::SetVodDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the SSL certificate of a domain name and updates the certificate information.
       *
       * @param request SetVodDomainSSLCertificateRequest
       * @return SetVodDomainSSLCertificateResponse
       */
      Models::SetVodDomainSSLCertificateResponse setVodDomainSSLCertificate(const Models::SetVodDomainSSLCertificateRequest &request);

      /**
       * @summary Submits an automated review job for an image. After the job is submitted, the job is processed in an asynchronous manner. The operation may return a response before the job is complete.
       *
       * @description This operation is available only in the Singapore region.
       *
       * @param request SubmitAIImageAuditJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIImageAuditJobResponse
       */
      Models::SubmitAIImageAuditJobResponse submitAIImageAuditJobWithOptions(const Models::SubmitAIImageAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an automated review job for an image. After the job is submitted, the job is processed in an asynchronous manner. The operation may return a response before the job is complete.
       *
       * @description This operation is available only in the Singapore region.
       *
       * @param request SubmitAIImageAuditJobRequest
       * @return SubmitAIImageAuditJobResponse
       */
      Models::SubmitAIImageAuditJobResponse submitAIImageAuditJob(const Models::SubmitAIImageAuditJobRequest &request);

      /**
       * @summary Submits jobs of image AI processing.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   After you call this operation, you can call the [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) operation to query the job execution result.
       *
       * @param request SubmitAIImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIImageJobResponse
       */
      Models::SubmitAIImageJobResponse submitAIImageJobWithOptions(const Models::SubmitAIImageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits jobs of image AI processing.
       *
       * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
       * *   After you call this operation, you can call the [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) operation to query the job execution result.
       *
       * @param request SubmitAIImageJobRequest
       * @return SubmitAIImageJobResponse
       */
      Models::SubmitAIImageJobResponse submitAIImageJob(const Models::SubmitAIImageJobRequest &request);

      /**
       * @summary Submits a smart tagging or video fingerprinting job.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the smart tagging and video fingerprinting features. For more information, see [Billing of video AI](~~188310#section-g7l-s3o-9ng~~).**
       * *   Regions that support the video fingerprinting feature: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions that support the smart tagging feature: **China (Beijing)** and **China (Shanghai)**.
       * *   You need to enable the video fingerprinting feature or the smart tagging feature before you can call this operation to submit jobs. For more information, see [Overview](https://help.aliyun.com/document_detail/101148.html).
       * *   If this is the first time you use the video fingerprinting feature, you must submit a ticket to apply for using the media fingerprint library for free. Otherwise, the video fingerprinting feature will be affected. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
       * *   After you submit an AI job, ApsaraVideo VOD asynchronously processes the job. The operation may return a response before the job is complete. You can configure the [Event Notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **AI Processing Completed**. After you receive the event notification, you can query the execution result of the AI job.
       *
       * @param request SubmitAIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIJobResponse
       */
      Models::SubmitAIJobResponse submitAIJobWithOptions(const Models::SubmitAIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a smart tagging or video fingerprinting job.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the smart tagging and video fingerprinting features. For more information, see [Billing of video AI](~~188310#section-g7l-s3o-9ng~~).**
       * *   Regions that support the video fingerprinting feature: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions that support the smart tagging feature: **China (Beijing)** and **China (Shanghai)**.
       * *   You need to enable the video fingerprinting feature or the smart tagging feature before you can call this operation to submit jobs. For more information, see [Overview](https://help.aliyun.com/document_detail/101148.html).
       * *   If this is the first time you use the video fingerprinting feature, you must submit a ticket to apply for using the media fingerprint library for free. Otherwise, the video fingerprinting feature will be affected. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
       * *   After you submit an AI job, ApsaraVideo VOD asynchronously processes the job. The operation may return a response before the job is complete. You can configure the [Event Notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **AI Processing Completed**. After you receive the event notification, you can query the execution result of the AI job.
       *
       * @param request SubmitAIJobRequest
       * @return SubmitAIJobResponse
       */
      Models::SubmitAIJobResponse submitAIJob(const Models::SubmitAIJobRequest &request);

      /**
       * @summary Submits an automated review job for a media file. After the job is submitted, ApsaraVideo VOD asynchronously processes the job. Therefore, the operation may return a response before the job is complete.
       *
       * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for using the automated review feature. For more information about billing, submit a ticket or contact your account manager.**
       * *   You can call this operation only in the **China (Shanghai)**, **China (Beijing)**, and **Singapore** regions.
       * *   For more information, see [Automated review](https://help.aliyun.com/document_detail/101148.html).
       * *   After an automated review job is complete, the images generated during the review are stored in the VOD bucket for two weeks free of charge. The images are automatically deleted after two weeks.
       *
       * @param request SubmitAIMediaAuditJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIMediaAuditJobResponse
       */
      Models::SubmitAIMediaAuditJobResponse submitAIMediaAuditJobWithOptions(const Models::SubmitAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an automated review job for a media file. After the job is submitted, ApsaraVideo VOD asynchronously processes the job. Therefore, the operation may return a response before the job is complete.
       *
       * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for using the automated review feature. For more information about billing, submit a ticket or contact your account manager.**
       * *   You can call this operation only in the **China (Shanghai)**, **China (Beijing)**, and **Singapore** regions.
       * *   For more information, see [Automated review](https://help.aliyun.com/document_detail/101148.html).
       * *   After an automated review job is complete, the images generated during the review are stored in the VOD bucket for two weeks free of charge. The images are automatically deleted after two weeks.
       *
       * @param request SubmitAIMediaAuditJobRequest
       * @return SubmitAIMediaAuditJobResponse
       */
      Models::SubmitAIMediaAuditJobResponse submitAIMediaAuditJob(const Models::SubmitAIMediaAuditJobRequest &request);

      /**
       * @summary Submits a digital watermark extraction job. You can call this operation to asynchronously extract a copyright watermark or user-tracing watermark.
       *
       * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for generating and extracting digital watermarks. For more information, see [Billing](~~188310#62b9c940403se~~).**
       * *   This operation is supported only in the **China (Shanghai)** and **China (Beijing)** regions.
       * *   Before you submit a digital watermark extraction job, make sure that the following conditions are met:
       *     *   The video from which you want to extract the watermark is uploaded to the ApsaraVideo VOD.
       *     *   The video from which you want to extract the watermark is longer than 6 minutes.
       *
       * @param request SubmitDigitalWatermarkExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDigitalWatermarkExtractJobResponse
       */
      Models::SubmitDigitalWatermarkExtractJobResponse submitDigitalWatermarkExtractJobWithOptions(const Models::SubmitDigitalWatermarkExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a digital watermark extraction job. You can call this operation to asynchronously extract a copyright watermark or user-tracing watermark.
       *
       * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for generating and extracting digital watermarks. For more information, see [Billing](~~188310#62b9c940403se~~).**
       * *   This operation is supported only in the **China (Shanghai)** and **China (Beijing)** regions.
       * *   Before you submit a digital watermark extraction job, make sure that the following conditions are met:
       *     *   The video from which you want to extract the watermark is uploaded to the ApsaraVideo VOD.
       *     *   The video from which you want to extract the watermark is longer than 6 minutes.
       *
       * @param request SubmitDigitalWatermarkExtractJobRequest
       * @return SubmitDigitalWatermarkExtractJobResponse
       */
      Models::SubmitDigitalWatermarkExtractJobResponse submitDigitalWatermarkExtractJob(const Models::SubmitDigitalWatermarkExtractJobRequest &request);

      /**
       * @summary Submits a frame animation job and starts asynchronous processing.
       *
       * @description *   You can capture a part of a video and generate animated images only when the video is in the **Uploaded**, **Transcoding**, **Normal**, **Reviewing**, or **Flagged** state.
       * *   The fees for frame animation are included in your video transcoding bill. You are charged based on the output resolution and the duration. For more information, see [Billing of basic services](https://help.aliyun.com/document_detail/188308.html).
       * ### QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on API operations](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SubmitDynamicImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJobWithOptions(const Models::SubmitDynamicImageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a frame animation job and starts asynchronous processing.
       *
       * @description *   You can capture a part of a video and generate animated images only when the video is in the **Uploaded**, **Transcoding**, **Normal**, **Reviewing**, or **Flagged** state.
       * *   The fees for frame animation are included in your video transcoding bill. You are charged based on the output resolution and the duration. For more information, see [Billing of basic services](https://help.aliyun.com/document_detail/188308.html).
       * ### QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on API operations](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SubmitDynamicImageJobRequest
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJob(const Models::SubmitDynamicImageJobRequest &request);

      /**
       * @summary Deletes a video fingerprinting job.
       *
       * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request SubmitMediaDNADeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaDNADeleteJobResponse
       */
      Models::SubmitMediaDNADeleteJobResponse submitMediaDNADeleteJobWithOptions(const Models::SubmitMediaDNADeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a video fingerprinting job.
       *
       * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request SubmitMediaDNADeleteJobRequest
       * @return SubmitMediaDNADeleteJobResponse
       */
      Models::SubmitMediaDNADeleteJobResponse submitMediaDNADeleteJob(const Models::SubmitMediaDNADeleteJobRequest &request);

      /**
       * @summary Transcodes a video by using the production studio.
       *
       * @description *   During video preprocessing, videos are transcoded to meet the playback requirements of the production studio. Therefore, **you are charged for video preprocessing**. For more information about billing, see [Billing of production studios](https://help.aliyun.com/document_detail/64531.html).
       * *   You can obtain the preprocessing result in the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) event notification. If **Preprocess=true** is returned in the event notification, the video is transcoded.
       *
       * @param request SubmitPreprocessJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPreprocessJobsResponse
       */
      Models::SubmitPreprocessJobsResponse submitPreprocessJobsWithOptions(const Models::SubmitPreprocessJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transcodes a video by using the production studio.
       *
       * @description *   During video preprocessing, videos are transcoded to meet the playback requirements of the production studio. Therefore, **you are charged for video preprocessing**. For more information about billing, see [Billing of production studios](https://help.aliyun.com/document_detail/64531.html).
       * *   You can obtain the preprocessing result in the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) event notification. If **Preprocess=true** is returned in the event notification, the video is transcoded.
       *
       * @param request SubmitPreprocessJobsRequest
       * @return SubmitPreprocessJobsResponse
       */
      Models::SubmitPreprocessJobsResponse submitPreprocessJobs(const Models::SubmitPreprocessJobsRequest &request);

      /**
       * @summary Submits a snapshot job for a video and starts asynchronous snapshot processing.
       *
       * @description *   Only snapshots in the JPG format are generated.
       * *   After a snapshot is captured, the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback is fired and EventType=SnapshotComplete, SubType=SpecifiedTime is returned.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param tmpReq SubmitSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJobWithOptions(const Models::SubmitSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a snapshot job for a video and starts asynchronous snapshot processing.
       *
       * @description *   Only snapshots in the JPG format are generated.
       * *   After a snapshot is captured, the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback is fired and EventType=SnapshotComplete, SubType=SpecifiedTime is returned.
       * ### [](#qps-)QPS limits
       * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SubmitSnapshotJobRequest
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJob(const Models::SubmitSnapshotJobRequest &request);

      /**
       * @summary Submits a transcoding job to start transcoding in an asynchronous manner.
       *
       * @description ### [](#)Usage notes
       * *   **Make sure that you understand the billing methods and prices of ApsaraVideo VOD before you call this operation. For more information about billing of the transcoding feature, see [Billing of basic services](~~188308#section-ejb-nii-nqa~~).**
       * *   You can transcode a video only in the Uploaded, Normal, or Reviewing state.
       * *   You can obtain the transcoding results from the [StreamTranscodeComplete](https://help.aliyun.com/document_detail/55636.html) or [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback.
       * *   You can call this operation to dynamically override the subtitle URL in an HTTP Live Streaming (HLS) packaging task. If the packaging task does not contain subtitles, we recommend that you specify the ID of the specific packaging template group when you upload the video instead of calling this operation.
       *
       * @param request SubmitTranscodeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTranscodeJobsResponse
       */
      Models::SubmitTranscodeJobsResponse submitTranscodeJobsWithOptions(const Models::SubmitTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a transcoding job to start transcoding in an asynchronous manner.
       *
       * @description ### [](#)Usage notes
       * *   **Make sure that you understand the billing methods and prices of ApsaraVideo VOD before you call this operation. For more information about billing of the transcoding feature, see [Billing of basic services](~~188308#section-ejb-nii-nqa~~).**
       * *   You can transcode a video only in the Uploaded, Normal, or Reviewing state.
       * *   You can obtain the transcoding results from the [StreamTranscodeComplete](https://help.aliyun.com/document_detail/55636.html) or [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback.
       * *   You can call this operation to dynamically override the subtitle URL in an HTTP Live Streaming (HLS) packaging task. If the packaging task does not contain subtitles, we recommend that you specify the ID of the specific packaging template group when you upload the video instead of calling this operation.
       *
       * @param request SubmitTranscodeJobsRequest
       * @return SubmitTranscodeJobsResponse
       */
      Models::SubmitTranscodeJobsResponse submitTranscodeJobs(const Models::SubmitTranscodeJobsRequest &request);

      /**
       * @summary Initiates a workflow to process media files.
       *
       * @description * **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. When you use workflows to process videos, you may be charged for transcoding, encryption, and automated review. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
       * * You can call this operation to initiate a VOD workflow to process media files. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
       *
       * @param request SubmitWorkflowJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitWorkflowJobResponse
       */
      Models::SubmitWorkflowJobResponse submitWorkflowJobWithOptions(const Models::SubmitWorkflowJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a workflow to process media files.
       *
       * @description * **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. When you use workflows to process videos, you may be charged for transcoding, encryption, and automated review. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
       * * You can call this operation to initiate a VOD workflow to process media files. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
       *
       * @param request SubmitWorkflowJobRequest
       * @return SubmitWorkflowJobResponse
       */
      Models::SubmitWorkflowJobResponse submitWorkflowJob(const Models::SubmitWorkflowJobRequest &request);

      /**
       * @summary Modifies an AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
       *
       * @param request UpdateAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAITemplateResponse
       */
      Models::UpdateAITemplateResponse updateAITemplateWithOptions(const Models::UpdateAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AI template.
       *
       * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * *   After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
       *
       * @param request UpdateAITemplateRequest
       * @return UpdateAITemplateResponse
       */
      Models::UpdateAITemplateResponse updateAITemplate(const Models::UpdateAITemplateRequest &request);

      /**
       * @summary Updates the information about an application.
       *
       * @description ## QPS limit
       * A single user can perform a maximum of 30 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation.
       *
       * @param request UpdateAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppInfoResponse
       */
      Models::UpdateAppInfoResponse updateAppInfoWithOptions(const Models::UpdateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about an application.
       *
       * @description ## QPS limit
       * A single user can perform a maximum of 30 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation.
       *
       * @param request UpdateAppInfoRequest
       * @return UpdateAppInfoResponse
       */
      Models::UpdateAppInfoResponse updateAppInfo(const Models::UpdateAppInfoRequest &request);

      /**
       * @summary Modifies the information about multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch based on IDs. You can modify information such as the title, description, tags, and category.
       *
       * @description You can modify the information about up to 20 auxiliary media assets at a time.
       *
       * @param request UpdateAttachedMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAttachedMediaInfosResponse
       */
      Models::UpdateAttachedMediaInfosResponse updateAttachedMediaInfosWithOptions(const Models::UpdateAttachedMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch based on IDs. You can modify information such as the title, description, tags, and category.
       *
       * @description You can modify the information about up to 20 auxiliary media assets at a time.
       *
       * @param request UpdateAttachedMediaInfosRequest
       * @return UpdateAttachedMediaInfosResponse
       */
      Models::UpdateAttachedMediaInfosResponse updateAttachedMediaInfos(const Models::UpdateAttachedMediaInfosRequest &request);

      /**
       * @summary Modifies a video category.
       *
       * @description After you create a category, you can call this operation to modify the name of the category. If you have classified specific media resources to this category, the category names that are labeled on the media resources are automatically updated.
       *
       * @param request UpdateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategoryWithOptions(const Models::UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a video category.
       *
       * @description After you create a category, you can call this operation to modify the name of the category. If you have classified specific media resources to this category, the category names that are labeled on the media resources are automatically updated.
       *
       * @param request UpdateCategoryRequest
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategory(const Models::UpdateCategoryRequest &request);

      /**
       * @summary Modifies an online editing project.
       *
       * @param request UpdateEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProjectWithOptions(const Models::UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an online editing project.
       *
       * @param request UpdateEditingProjectRequest
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProject(const Models::UpdateEditingProjectRequest &request);

      /**
       * @summary Modifies the information about one or more images at a time.
       *
       * @description *   You can call this operation to modify information such as the title, tags, description, and category about images based on image IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
       * *   You can modify the information about up to 20 images at a time.
       *
       * @param request UpdateImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageInfosResponse
       */
      Models::UpdateImageInfosResponse updateImageInfosWithOptions(const Models::UpdateImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about one or more images at a time.
       *
       * @description *   You can call this operation to modify information such as the title, tags, description, and category about images based on image IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
       * *   You can modify the information about up to 20 images at a time.
       *
       * @param request UpdateImageInfosRequest
       * @return UpdateImageInfosResponse
       */
      Models::UpdateImageInfosResponse updateImageInfos(const Models::UpdateImageInfosRequest &request);

      /**
       * @summary Modifies the storage classes of media assets.
       *
       * @description *   This operation is an asynchronous operation. You can call this operation to modify the storage classes of media assets. After the storage class is modified, a callback notification is sent.
       * *   If the storage class of the media asset is Archive or Cold Archive and you call this operation to modify the storage class of the media asset, the media asset is automatically restored before the storage class is modified. You do not need to call the RestoreMedia operation to restore the media asset. You must specify the restoration priority for Cold Archive objects. Default configuration: RestoreTier=Standard.
       * *   Media assets whose storage classes are being modified cannot be used or processed.
       * *   Non-Standard objects have minimum storage durations. If an object is stored for less than the minimum storage duration, the storage class of the object cannot be changed. The following content describes the minimum storage durations for objects in different storage classes: IA or IA storage for source files: 30 days, Archive or Archive storage for source files: 60 days, Cold Archive or Cold Archive for source files: 180 days.
       *
       * @param request UpdateMediaStorageClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaStorageClassResponse
       */
      Models::UpdateMediaStorageClassResponse updateMediaStorageClassWithOptions(const Models::UpdateMediaStorageClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the storage classes of media assets.
       *
       * @description *   This operation is an asynchronous operation. You can call this operation to modify the storage classes of media assets. After the storage class is modified, a callback notification is sent.
       * *   If the storage class of the media asset is Archive or Cold Archive and you call this operation to modify the storage class of the media asset, the media asset is automatically restored before the storage class is modified. You do not need to call the RestoreMedia operation to restore the media asset. You must specify the restoration priority for Cold Archive objects. Default configuration: RestoreTier=Standard.
       * *   Media assets whose storage classes are being modified cannot be used or processed.
       * *   Non-Standard objects have minimum storage durations. If an object is stored for less than the minimum storage duration, the storage class of the object cannot be changed. The following content describes the minimum storage durations for objects in different storage classes: IA or IA storage for source files: 30 days, Archive or Archive storage for source files: 60 days, Cold Archive or Cold Archive for source files: 180 days.
       *
       * @param request UpdateMediaStorageClassRequest
       * @return UpdateMediaStorageClassResponse
       */
      Models::UpdateMediaStorageClassResponse updateMediaStorageClass(const Models::UpdateMediaStorageClassRequest &request);

      /**
       * @summary Modifies the configurations of a transcoding template group or configurations of transcoding templates in the transcoding template group.
       *
       * @description For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the configurations of a transcoding template group, check whether the transcoding template group is locked by using the response parameter Locked, and unlock the transcoding template group before you perform operations such as add, modify, and delete transcoding templates.
       *
       * @param request UpdateTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTranscodeTemplateGroupResponse
       */
      Models::UpdateTranscodeTemplateGroupResponse updateTranscodeTemplateGroupWithOptions(const Models::UpdateTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a transcoding template group or configurations of transcoding templates in the transcoding template group.
       *
       * @description For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the configurations of a transcoding template group, check whether the transcoding template group is locked by using the response parameter Locked, and unlock the transcoding template group before you perform operations such as add, modify, and delete transcoding templates.
       *
       * @param request UpdateTranscodeTemplateGroupRequest
       * @return UpdateTranscodeTemplateGroupResponse
       */
      Models::UpdateTranscodeTemplateGroupResponse updateTranscodeTemplateGroup(const Models::UpdateTranscodeTemplateGroupRequest &request);

      /**
       * @summary Modifies the information about an audio or video file.
       *
       * @description ### [](#)
       * You can call this operation to modify information such as the title, tags, and description about audio and video files based on audio or video IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
       * ### [](#qps-)Queries per second (QPS) limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateVideoInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoInfoResponse
       */
      Models::UpdateVideoInfoResponse updateVideoInfoWithOptions(const Models::UpdateVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an audio or video file.
       *
       * @description ### [](#)
       * You can call this operation to modify information such as the title, tags, and description about audio and video files based on audio or video IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
       * ### [](#qps-)Queries per second (QPS) limit
       * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateVideoInfoRequest
       * @return UpdateVideoInfoResponse
       */
      Models::UpdateVideoInfoResponse updateVideoInfo(const Models::UpdateVideoInfoRequest &request);

      /**
       * @summary Modifies the information about multiple videos at a time.
       *
       * @description The specific parameter of a video is updated only when a new value is passed in the parameter.
       *
       * @param request UpdateVideoInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoInfosResponse
       */
      Models::UpdateVideoInfosResponse updateVideoInfosWithOptions(const Models::UpdateVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about multiple videos at a time.
       *
       * @description The specific parameter of a video is updated only when a new value is passed in the parameter.
       *
       * @param request UpdateVideoInfosRequest
       * @return UpdateVideoInfosResponse
       */
      Models::UpdateVideoInfosResponse updateVideoInfos(const Models::UpdateVideoInfosRequest &request);

      /**
       * @summary Modifies a specific accelerated domain name.
       *
       * @description UpdateVodDomain
       *
       * @param request UpdateVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVodDomainResponse
       */
      Models::UpdateVodDomainResponse updateVodDomainWithOptions(const Models::UpdateVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a specific accelerated domain name.
       *
       * @description UpdateVodDomain
       *
       * @param request UpdateVodDomainRequest
       * @return UpdateVodDomainResponse
       */
      Models::UpdateVodDomainResponse updateVodDomain(const Models::UpdateVodDomainRequest &request);

      /**
       * @summary Modifies a snapshot template.
       *
       * @param request UpdateVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVodTemplateResponse
       */
      Models::UpdateVodTemplateResponse updateVodTemplateWithOptions(const Models::UpdateVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a snapshot template.
       *
       * @param request UpdateVodTemplateRequest
       * @return UpdateVodTemplateResponse
       */
      Models::UpdateVodTemplateResponse updateVodTemplate(const Models::UpdateVodTemplateRequest &request);

      /**
       * @summary Modifies the name and configurations of a watermark template after you create a watermark template.
       *
       * @description *   You can modify the name and configurations of the watermark template after you call the [AddWatermark](~~AddWatermark~~) operation to create a watermark template.
       * *   You cannot call this operation to change the image in an image watermark template.
       *
       * @param request UpdateWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWatermarkResponse
       */
      Models::UpdateWatermarkResponse updateWatermarkWithOptions(const Models::UpdateWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and configurations of a watermark template after you create a watermark template.
       *
       * @description *   You can modify the name and configurations of the watermark template after you call the [AddWatermark](~~AddWatermark~~) operation to create a watermark template.
       * *   You cannot call this operation to change the image in an image watermark template.
       *
       * @param request UpdateWatermarkRequest
       * @return UpdateWatermarkResponse
       */
      Models::UpdateWatermarkResponse updateWatermark(const Models::UpdateWatermarkRequest &request);

      /**
       * @summary Uploads media files based on URLs.
       *
       * @description *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded based on URLs over the Internet.
       * *   The URL-based upload jobs are asynchronous. After you submit a URL-based upload job by calling this operation, it may take hours, even days to complete. If you require high timeliness, we recommend that you use the upload SDK.
       * *   If you configure callbacks, you can receive an [UploadByURLComplete](https://help.aliyun.com/document_detail/86326.html) event notification after the media file is uploaded. You can query the upload status by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
       * *   After you submit an upload job, the job is asynchronously processed on the cloud. All URL-based upload jobs that are submitted in each region are queued. The waiting time for the upload job depends on the number of queued jobs. After the upload job is complete, you can associate the playback URL included in the callback with the media ID.
       * *   You can call this operation only in the **China (Shanghai)** and **Singapore** regions.
       * *   Every time you submit a URL-based upload job, a new media ID is generated in ApsaraVideo VOD.
       *
       * @param request UploadMediaByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURLWithOptions(const Models::UploadMediaByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads media files based on URLs.
       *
       * @description *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded based on URLs over the Internet.
       * *   The URL-based upload jobs are asynchronous. After you submit a URL-based upload job by calling this operation, it may take hours, even days to complete. If you require high timeliness, we recommend that you use the upload SDK.
       * *   If you configure callbacks, you can receive an [UploadByURLComplete](https://help.aliyun.com/document_detail/86326.html) event notification after the media file is uploaded. You can query the upload status by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
       * *   After you submit an upload job, the job is asynchronously processed on the cloud. All URL-based upload jobs that are submitted in each region are queued. The waiting time for the upload job depends on the number of queued jobs. After the upload job is complete, you can associate the playback URL included in the callback with the media ID.
       * *   You can call this operation only in the **China (Shanghai)** and **Singapore** regions.
       * *   Every time you submit a URL-based upload job, a new media ID is generated in ApsaraVideo VOD.
       *
       * @param request UploadMediaByURLRequest
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURL(const Models::UploadMediaByURLRequest &request);

      /**
       * @summary Uploads transcoded streams to ApsaraVideo VOD from external storage.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   This operation is available only in the **China (Shanghai)** and **Singapore** regions.
       * *   You can call this operation to upload transcoded streams to ApsaraVideo VOD from external storage. The following HDR types of transcoded streams are supported: HDR, HDR 10, HLG, Dolby Vision, HDR Vivid, and SDR+.
       * *   You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, the callback of the [UploadByURLComplete](https://help.aliyun.com/document_detail/376427.html) event is returned.
       *
       * @param request UploadStreamByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURLWithOptions(const Models::UploadStreamByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads transcoded streams to ApsaraVideo VOD from external storage.
       *
       * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
       * *   This operation is available only in the **China (Shanghai)** and **Singapore** regions.
       * *   You can call this operation to upload transcoded streams to ApsaraVideo VOD from external storage. The following HDR types of transcoded streams are supported: HDR, HDR 10, HLG, Dolby Vision, HDR Vivid, and SDR+.
       * *   You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, the callback of the [UploadByURLComplete](https://help.aliyun.com/document_detail/376427.html) event is returned.
       *
       * @param request UploadStreamByURLRequest
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURL(const Models::UploadStreamByURLRequest &request);

      /**
       * @summary Verifies the ownership of a specified domain name.
       *
       * @description This operation is available only in the **China (Shanghai)** region.
       *
       * @param request VerifyVodDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyVodDomainOwnerResponse
       */
      Models::VerifyVodDomainOwnerResponse verifyVodDomainOwnerWithOptions(const Models::VerifyVodDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a specified domain name.
       *
       * @description This operation is available only in the **China (Shanghai)** region.
       *
       * @param request VerifyVodDomainOwnerRequest
       * @return VerifyVodDomainOwnerResponse
       */
      Models::VerifyVodDomainOwnerResponse verifyVodDomainOwner(const Models::VerifyVodDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
