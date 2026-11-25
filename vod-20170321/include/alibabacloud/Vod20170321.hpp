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
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - <props="china">Before adding an AI template for automated review and smart thumbnail tasks, make sure that you have activated [automated review](https://ai.aliyun.com/vi/censor) or [smart thumbnail](https://ai.aliyun.com/vi/cover).
       * - <props="intl">Before adding an AI template for automated review and smart thumbnail tasks, make sure that you have activated automated review or smart thumbnail.
       *
       * @param request AddAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAITemplateResponse
       */
      Models::AddAITemplateResponse addAITemplateWithOptions(const Models::AddAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AI template for automated review and smart thumbnail tasks.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - <props="china">Before adding an AI template for automated review and smart thumbnail tasks, make sure that you have activated [automated review](https://ai.aliyun.com/vi/censor) or [smart thumbnail](https://ai.aliyun.com/vi/cover).
       * - <props="intl">Before adding an AI template for automated review and smart thumbnail tasks, make sure that you have activated automated review or smart thumbnail.
       *
       * @param request AddAITemplateRequest
       * @return AddAITemplateResponse
       */
      Models::AddAITemplateResponse addAITemplate(const Models::AddAITemplateRequest &request);

      /**
       * @summary Creates a category to classify audio, video, image, and short video materials stored in ApsaraVideo VOD for efficient resource search and management.
       *
       * @description - Audio, video, and image categories (where `Type` is `default`) support up to three levels, with a maximum of 100 subcategories per level. Short video material categories (where `Type` is `material`) support up to two levels, with a maximum of 100 subcategories per level.
       * - After you create a category, you can classify media assets during or after upload. For more information, see [Media asset categories](https://help.aliyun.com/document_detail/86070.html).
       *
       * @param request AddCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategoryWithOptions(const Models::AddCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a category to classify audio, video, image, and short video materials stored in ApsaraVideo VOD for efficient resource search and management.
       *
       * @description - Audio, video, and image categories (where `Type` is `default`) support up to three levels, with a maximum of 100 subcategories per level. Short video material categories (where `Type` is `material`) support up to two levels, with a maximum of 100 subcategories per level.
       * - After you create a category, you can classify media assets during or after upload. For more information, see [Media asset categories](https://help.aliyun.com/document_detail/86070.html).
       *
       * @param request AddCategoryRequest
       * @return AddCategoryResponse
       */
      Models::AddCategoryResponse addCategory(const Models::AddCategoryRequest &request);

      /**
       * @summary Creates an online editing project (video editing task).
       *
       * @description - For more information about online editing, see [Online editing](https://help.aliyun.com/document_detail/95482.html).
       *
       * @param request AddEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEditingProjectResponse
       */
      Models::AddEditingProjectResponse addEditingProjectWithOptions(const Models::AddEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an online editing project (video editing task).
       *
       * @description - For more information about online editing, see [Online editing](https://help.aliyun.com/document_detail/95482.html).
       *
       * @param request AddEditingProjectRequest
       * @return AddEditingProjectResponse
       */
      Models::AddEditingProjectResponse addEditingProject(const Models::AddEditingProjectRequest &request);

      /**
       * @summary Adds one or more media assets to an online editing project.
       *
       * @param request AddEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEditingProjectMaterialsResponse
       */
      Models::AddEditingProjectMaterialsResponse addEditingProjectMaterialsWithOptions(const Models::AddEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more media assets to an online editing project.
       *
       * @param request AddEditingProjectMaterialsRequest
       * @return AddEditingProjectMaterialsResponse
       */
      Models::AddEditingProjectMaterialsResponse addEditingProjectMaterials(const Models::AddEditingProjectMaterialsRequest &request);

      /**
       * @summary Creates a ManifestEdit track orchestration template for the SubmitEditMediaManifestJob task to configure video, audio, and subtitle tracks based on the template.
       *
       * @description ## Request description
       * - The `Name` parameter is required and must pass the `COMPLEX_STRING_SPACE_ALLOWED` format validation.
       * - Other parameters are optional, but if provided, they must meet the corresponding format requirements.
       * - The encryption type `EncryptType` supports a combination of multiple encryption methods. For more information, see the valid values.
       * - When HLS encryption is used, `EncryptConfig` must include information such as `DecryptKeyUri`, `KeyServiceType`, `CipherText`, and `MasterKeyId`.
       *
       * @param request AddManifestEditTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddManifestEditTemplateResponse
       */
      Models::AddManifestEditTemplateResponse addManifestEditTemplateWithOptions(const Models::AddManifestEditTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ManifestEdit track orchestration template for the SubmitEditMediaManifestJob task to configure video, audio, and subtitle tracks based on the template.
       *
       * @description ## Request description
       * - The `Name` parameter is required and must pass the `COMPLEX_STRING_SPACE_ALLOWED` format validation.
       * - Other parameters are optional, but if provided, they must meet the corresponding format requirements.
       * - The encryption type `EncryptType` supports a combination of multiple encryption methods. For more information, see the valid values.
       * - When HLS encryption is used, `EncryptConfig` must include information such as `DecryptKeyUri`, `KeyServiceType`, `CipherText`, and `MasterKeyId`.
       *
       * @param request AddManifestEditTemplateRequest
       * @return AddManifestEditTemplateResponse
       */
      Models::AddManifestEditTemplateResponse addManifestEditTemplate(const Models::AddManifestEditTemplateRequest &request);

      /**
       * @summary Adds transcoding configurations. You can create a transcoding template group or add transcoding templates to a specified template group.
       *
       * @description - Transcoding template groups that are **locked** by the ApsaraVideo VOD backend do not support custom operations. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before you modify it.
       * - Because transcoding involves storage addresses of files, you cannot add a transcoding template group if no storage address is available. You can activate a **VOD system bucket** in the **ApsaraVideo VOD console > Configuration Management > Media Asset Management Configuration > Storage Management** to obtain an available storage address.
       * - You cannot add transcoding template configurations to a **No Transcoding** template group.
       * - You must specify either **TranscodeTemplateGroupId** or **Name**.
       * - You can create a maximum of 20 transcoding template groups.
       * - You can add a maximum of 20 transcoding template configurations to a transcoding template group.
       * - To generate adaptive bitrate streaming addresses through transcoding, you can add a maximum of 10 video packaging templates to a transcoding template group. If more than 10 templates are added, only individual stream addresses are generated instead of adaptive bitrate streaming addresses.
       * ### QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 5. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Manage your calls appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request AddTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTranscodeTemplateGroupResponse
       */
      Models::AddTranscodeTemplateGroupResponse addTranscodeTemplateGroupWithOptions(const Models::AddTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds transcoding configurations. You can create a transcoding template group or add transcoding templates to a specified template group.
       *
       * @description - Transcoding template groups that are **locked** by the ApsaraVideo VOD backend do not support custom operations. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before you modify it.
       * - Because transcoding involves storage addresses of files, you cannot add a transcoding template group if no storage address is available. You can activate a **VOD system bucket** in the **ApsaraVideo VOD console > Configuration Management > Media Asset Management Configuration > Storage Management** to obtain an available storage address.
       * - You cannot add transcoding template configurations to a **No Transcoding** template group.
       * - You must specify either **TranscodeTemplateGroupId** or **Name**.
       * - You can create a maximum of 20 transcoding template groups.
       * - You can add a maximum of 20 transcoding template configurations to a transcoding template group.
       * - To generate adaptive bitrate streaming addresses through transcoding, you can add a maximum of 10 video packaging templates to a transcoding template group. If more than 10 templates are added, only individual stream addresses are generated instead of adaptive bitrate streaming addresses.
       * ### QPS limit
       * The maximum number of queries per second (QPS) per user for this operation is 5. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Manage your calls appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request AddTranscodeTemplateGroupRequest
       * @return AddTranscodeTemplateGroupResponse
       */
      Models::AddTranscodeTemplateGroupResponse addTranscodeTemplateGroup(const Models::AddTranscodeTemplateGroupRequest &request);

      /**
       * @summary Adds an accelerated domain name for ApsaraVideo VOD.
       *
       * @description - Currently, the service endpoint supports only **China (Shanghai)**.
       * - Before you create an accelerated domain name, you must activate [ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html) and complete the ICP filing for the accelerated domain name. 
       * - When you add a new domain name for the first time, you must verify the ownership of the domain name. To verify the ownership by using DNS records, call the DescribeVodVerifyContent operation to obtain the record value, add a TXT record in the DNS settings of the domain name, and wait for the DNS record to take effect. Then, call this operation to add the domain name. You can also verify the ownership by using a verification file. For more information, see the domain name ownership verification documentation.
       * - Origin server content. If the content is not hosted on Alibaba Cloud, it must be reviewed. The review will be completed by the next business day.
       * - You can submit only one accelerated domain name at a time. Each user can add up to 20 domain names.
       *
       * @param request AddVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVodDomainResponse
       */
      Models::AddVodDomainResponse addVodDomainWithOptions(const Models::AddVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an accelerated domain name for ApsaraVideo VOD.
       *
       * @description - Currently, the service endpoint supports only **China (Shanghai)**.
       * - Before you create an accelerated domain name, you must activate [ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html) and complete the ICP filing for the accelerated domain name. 
       * - When you add a new domain name for the first time, you must verify the ownership of the domain name. To verify the ownership by using DNS records, call the DescribeVodVerifyContent operation to obtain the record value, add a TXT record in the DNS settings of the domain name, and wait for the DNS record to take effect. Then, call this operation to add the domain name. You can also verify the ownership by using a verification file. For more information, see the domain name ownership verification documentation.
       * - Origin server content. If the content is not hosted on Alibaba Cloud, it must be reviewed. The review will be completed by the next business day.
       * - You can submit only one accelerated domain name at a time. Each user can add up to 20 domain names.
       *
       * @param request AddVodDomainRequest
       * @return AddVodDomainResponse
       */
      Models::AddVodDomainResponse addVodDomain(const Models::AddVodDomainRequest &request);

      /**
       * @summary Associates a storage bucket with a sub-application of ApsaraVideo VOD.
       *
       * @description Calls AddVodStorageForApp to enable a VOD system bucket for a sub-application of ApsaraVideo VOD.
       * <notice>Each sub-application can have at most one VOD system bucket enabled. If the specified AppId does not exist or already has a VOD system bucket enabled, the request fails.</notice>
       * <notice>To call this operation, the caller must have the application administrator permissions (VODAppAdministratorAccess). An Alibaba Cloud account has these permissions by default. An application administrator can call AttachAppPolicyToIdentity to grant application permissions to a RAM user or role.</notice>
       *
       * @param request AddVodStorageForAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVodStorageForAppResponse
       */
      Models::AddVodStorageForAppResponse addVodStorageForAppWithOptions(const Models::AddVodStorageForAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a storage bucket with a sub-application of ApsaraVideo VOD.
       *
       * @description Calls AddVodStorageForApp to enable a VOD system bucket for a sub-application of ApsaraVideo VOD.
       * <notice>Each sub-application can have at most one VOD system bucket enabled. If the specified AppId does not exist or already has a VOD system bucket enabled, the request fails.</notice>
       * <notice>To call this operation, the caller must have the application administrator permissions (VODAppAdministratorAccess). An Alibaba Cloud account has these permissions by default. An application administrator can call AttachAppPolicyToIdentity to grant application permissions to a RAM user or role.</notice>
       *
       * @param request AddVodStorageForAppRequest
       * @return AddVodStorageForAppResponse
       */
      Models::AddVodStorageForAppResponse addVodStorageForApp(const Models::AddVodStorageForAppRequest &request);

      /**
       * @summary Creates a snapshot or animated image template.
       *
       * @description - After you create a template, you can pass the ID of the snapshot or animated image template to the [SubmitSnapshotJob](~~SubmitSnapshotJob~~) or [SubmitDynamicImageJob](~~SubmitDynamicImageJob~~) operation to initiate a snapshot or animated image job.
       * - You can receive [video snapshot completion](https://help.aliyun.com/document_detail/57337.html) and [video animated image completion](https://help.aliyun.com/document_detail/143490.html) callback messages by using HTTP callbacks (HTTPS-compatible) or MNS callbacks. For more information, see [Callback methods](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request AddVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVodTemplateResponse
       */
      Models::AddVodTemplateResponse addVodTemplateWithOptions(const Models::AddVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot or animated image template.
       *
       * @description - After you create a template, you can pass the ID of the snapshot or animated image template to the [SubmitSnapshotJob](~~SubmitSnapshotJob~~) or [SubmitDynamicImageJob](~~SubmitDynamicImageJob~~) operation to initiate a snapshot or animated image job.
       * - You can receive [video snapshot completion](https://help.aliyun.com/document_detail/57337.html) and [video animated image completion](https://help.aliyun.com/document_detail/143490.html) callback messages by using HTTP callbacks (HTTPS-compatible) or MNS callbacks. For more information, see [Callback methods](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request AddVodTemplateRequest
       * @return AddVodTemplateResponse
       */
      Models::AddVodTemplateResponse addVodTemplate(const Models::AddVodTemplateRequest &request);

      /**
       * @summary Adds an image or text watermark template. To simplify watermark processing, ApsaraVideo VOD consolidates complex watermark parameters, such as position, size, font, and color, into templates identified by unique watermark template IDs.
       *
       * @description - You can call this operation to add an image watermark template (`Image`) or a text watermark template (`Text`). Image watermark templates support the following formats: static images (PNG) and animated images (GIF, APNG, and MOV).
       * - After you add an image or text watermark template, you must call the [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to associate the watermark template with a transcoding template group for subsequent watermark transcoding.
       * - For more information about adding image and text watermarks to videos, see [Image and text watermarks](https://help.aliyun.com/document_detail/99369.html).
       *
       * @param request AddWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddWatermarkResponse
       */
      Models::AddWatermarkResponse addWatermarkWithOptions(const Models::AddWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an image or text watermark template. To simplify watermark processing, ApsaraVideo VOD consolidates complex watermark parameters, such as position, size, font, and color, into templates identified by unique watermark template IDs.
       *
       * @description - You can call this operation to add an image watermark template (`Image`) or a text watermark template (`Text`). Image watermark templates support the following formats: static images (PNG) and animated images (GIF, APNG, and MOV).
       * - After you add an image or text watermark template, you must call the [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to associate the watermark template with a transcoding template group for subsequent watermark transcoding.
       * - For more information about adding image and text watermarks to videos, see [Image and text watermarks](https://help.aliyun.com/document_detail/99369.html).
       *
       * @param request AddWatermarkRequest
       * @return AddWatermarkResponse
       */
      Models::AddWatermarkResponse addWatermark(const Models::AddWatermarkRequest &request);

      /**
       * @summary Invokes this operation to grant access permissions for ApsaraVideo VOD applications to a specified identity, such as a Resource Access Management (RAM) user or a RAM role.
       *
       * @description >Notice:  You can grant a maximum of 10 application permissions to each Resource Access Management (RAM) user or RAM role.
       * >Notice:  You must have application administrator permissions to invoke this operation. We recommend that you use your Alibaba Cloud account to invoke this operation for the first time.
       * - If the policy name is VODAppAdministratorAccess, AppId is optional. For other policies, AppId is required.
       *
       * @param request AttachAppPolicyToIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachAppPolicyToIdentityResponse
       */
      Models::AttachAppPolicyToIdentityResponse attachAppPolicyToIdentityWithOptions(const Models::AttachAppPolicyToIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to grant access permissions for ApsaraVideo VOD applications to a specified identity, such as a Resource Access Management (RAM) user or a RAM role.
       *
       * @description >Notice:  You can grant a maximum of 10 application permissions to each Resource Access Management (RAM) user or RAM role.
       * >Notice:  You must have application administrator permissions to invoke this operation. We recommend that you use your Alibaba Cloud account to invoke this operation for the first time.
       * - If the policy name is VODAppAdministratorAccess, AppId is optional. For other policies, AppId is required.
       *
       * @param request AttachAppPolicyToIdentityRequest
       * @return AttachAppPolicyToIdentityResponse
       */
      Models::AttachAppPolicyToIdentityResponse attachAppPolicyToIdentity(const Models::AttachAppPolicyToIdentityRequest &request);

      /**
       * @summary Retrieves the basic information and source file information of media assets in batches.
       *
       * @description - You can retrieve the information of up to 20 audio and video files at a time.
       * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure [event notifications](https://help.aliyun.com/document_detail/55627.html) for [Audio and Video Analysis Completed](https://help.aliyun.com/document_detail/99935.html). After receiving the [Audio and Video Analysis Completed](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio and video information.
       *
       * @param request BatchGetMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfosWithOptions(const Models::BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information and source file information of media assets in batches.
       *
       * @description - You can retrieve the information of up to 20 audio and video files at a time.
       * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure [event notifications](https://help.aliyun.com/document_detail/55627.html) for [Audio and Video Analysis Completed](https://help.aliyun.com/document_detail/99935.html). After receiving the [Audio and Video Analysis Completed](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio and video information.
       *
       * @param request BatchGetMediaInfosRequest
       * @return BatchGetMediaInfosResponse
       */
      Models::BatchGetMediaInfosResponse batchGetMediaInfos(const Models::BatchGetMediaInfosRequest &request);

      /**
       * @summary Configures multiple accelerated domain names in a batch.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - You can configure up to 50 domain names at a time.
       * - After you call this operation to configure certain features for domain names, a unique ConfigId is generated. You can use the ConfigId to update or delete domain name configurations. This operation does not return the ConfigId. To obtain the ConfigId, call the [DescribeVodDomainConfigs](~~DescribeVodDomainConfigs~~) operation.
       *
       * @param request BatchSetVodDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetVodDomainConfigsResponse
       */
      Models::BatchSetVodDomainConfigsResponse batchSetVodDomainConfigsWithOptions(const Models::BatchSetVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures multiple accelerated domain names in a batch.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - You can configure up to 50 domain names at a time.
       * - After you call this operation to configure certain features for domain names, a unique ConfigId is generated. You can use the ConfigId to update or delete domain name configurations. This operation does not return the ConfigId. To obtain the ConfigId, call the [DescribeVodDomainConfigs](~~DescribeVodDomainConfigs~~) operation.
       *
       * @param request BatchSetVodDomainConfigsRequest
       * @return BatchSetVodDomainConfigsResponse
       */
      Models::BatchSetVodDomainConfigsResponse batchSetVodDomainConfigs(const Models::BatchSetVodDomainConfigsRequest &request);

      /**
       * @summary Enables accelerated domain names that are in the Disabled state.
       *
       * @description - Currently, only the following endpoint is supported: **China (Shanghai)**.
       * - If the account to which the domain name belongs has an overdue payment or the domain name is in an invalid state, you cannot call this operation to enable the ApsaraVideo VOD domain name.
       *
       * @param request BatchStartVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartVodDomainResponse
       */
      Models::BatchStartVodDomainResponse batchStartVodDomainWithOptions(const Models::BatchStartVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables accelerated domain names that are in the Disabled state.
       *
       * @description - Currently, only the following endpoint is supported: **China (Shanghai)**.
       * - If the account to which the domain name belongs has an overdue payment or the domain name is in an invalid state, you cannot call this operation to enable the ApsaraVideo VOD domain name.
       *
       * @param request BatchStartVodDomainRequest
       * @return BatchStartVodDomainResponse
       */
      Models::BatchStartVodDomainResponse batchStartVodDomain(const Models::BatchStartVodDomainRequest &request);

      /**
       * @summary Suspends acceleration for a domain name.
       *
       * @description - The service endpoint is supported only in **China (Shanghai)**.
       * - After the accelerated domain name is disabled, the domain name information is retained. The system automatically routes requests for the accelerated domain name back to the origin.
       *
       * @param request BatchStopVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopVodDomainResponse
       */
      Models::BatchStopVodDomainResponse batchStopVodDomainWithOptions(const Models::BatchStopVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends acceleration for a domain name.
       *
       * @description - The service endpoint is supported only in **China (Shanghai)**.
       * - After the accelerated domain name is disabled, the domain name information is retained. The system automatically routes requests for the accelerated domain name back to the origin.
       *
       * @param request BatchStopVodDomainRequest
       * @return BatchStopVodDomainResponse
       */
      Models::BatchStopVodDomainResponse batchStopVodDomain(const Models::BatchStopVodDomainRequest &request);

      /**
       * @summary Cancels queued URL upload tasks.
       *
       * @description - Only URL upload nodes in the **Pending** state can be canceled. You can query the node status by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
       * - You cannot cancel upload nodes that have already started to execute.
       * - You must specify either the JobIds or UploadUrls request parameter. If both are specified, only JobIds is processed.
       *
       * @param request CancelUrlUploadJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelUrlUploadJobsResponse
       */
      Models::CancelUrlUploadJobsResponse cancelUrlUploadJobsWithOptions(const Models::CancelUrlUploadJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels queued URL upload tasks.
       *
       * @description - Only URL upload nodes in the **Pending** state can be canceled. You can query the node status by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
       * - You cannot cancel upload nodes that have already started to execute.
       * - You must specify either the JobIds or UploadUrls request parameter. If both are specified, only JobIds is processed.
       *
       * @param request CancelUrlUploadJobsRequest
       * @return CancelUrlUploadJobsResponse
       */
      Models::CancelUrlUploadJobsResponse cancelUrlUploadJobs(const Models::CancelUrlUploadJobsRequest &request);

      /**
       * @summary Transfers resources to another resource group.
       *
       * @description Transfers resources to another resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers resources to another resource group.
       *
       * @description Transfers resources to another resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates an application.
       *
       * @description Each account can create up to 10 applications. For more information, see [Multi-application development guide](https://help.aliyun.com/document_detail/113600.html).
       * ### QPS limits
       * The QPS limit per user for this API operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request CreateAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppInfoResponse
       */
      Models::CreateAppInfoResponse createAppInfoWithOptions(const Models::CreateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @description Each account can create up to 10 applications. For more information, see [Multi-application development guide](https://help.aliyun.com/document_detail/113600.html).
       * ### QPS limits
       * The QPS limit per user for this API operation is 50 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request CreateAppInfoRequest
       * @return CreateAppInfoResponse
       */
      Models::CreateAppInfoResponse createAppInfo(const Models::CreateAppInfoRequest &request);

      /**
       * @summary Submits media content such as videos and audio for manual review.
       *
       * @param request CreateAuditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuditResponse
       */
      Models::CreateAuditResponse createAuditWithOptions(const Models::CreateAuditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits media content such as videos and audio for manual review.
       *
       * @param request CreateAuditRequest
       * @return CreateAuditResponse
       */
      Models::CreateAuditResponse createAudit(const Models::CreateAuditRequest &request);

      /**
       * @summary Retrieves the upload URL and credential for auxiliary media assets. The upload URL and credential are provided by ApsaraVideo VOD to resolve authorization and security issues, prevent malicious uploads, and enable automatic creation of a media asset ID for management and processing. For auxiliary media assets such as watermarks and subtitles, invoke this operation to obtain the upload credential and create the corresponding media asset information.
       *
       * @description - **Before calling this operation, ensure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media asset files to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media asset files to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - This operation is only used to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by calling the operation, see [Upload media asset files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
       * - If the upload credential expires (valid for 3,000 seconds), call this operation again to obtain the upload URL and credential.
       * - You can configure a callback to receive the [Auxiliary media asset upload completion](https://help.aliyun.com/document_detail/103250.html) event notification to determine whether the upload is successful.
       * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and a required process for every upload operation. ApsaraVideo VOD provides various upload methods, and each method has different requirements for obtaining the upload URL and credential. For details, see the usage instructions in [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadAttachedMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadAttachedMediaResponse
       */
      Models::CreateUploadAttachedMediaResponse createUploadAttachedMediaWithOptions(const Models::CreateUploadAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the upload URL and credential for auxiliary media assets. The upload URL and credential are provided by ApsaraVideo VOD to resolve authorization and security issues, prevent malicious uploads, and enable automatic creation of a media asset ID for management and processing. For auxiliary media assets such as watermarks and subtitles, invoke this operation to obtain the upload credential and create the corresponding media asset information.
       *
       * @description - **Before calling this operation, ensure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media asset files to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media asset files to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - This operation is only used to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by calling the operation, see [Upload media asset files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
       * - If the upload credential expires (valid for 3,000 seconds), call this operation again to obtain the upload URL and credential.
       * - You can configure a callback to receive the [Auxiliary media asset upload completion](https://help.aliyun.com/document_detail/103250.html) event notification to determine whether the upload is successful.
       * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and a required process for every upload operation. ApsaraVideo VOD provides various upload methods, and each method has different requirements for obtaining the upload URL and credential. For details, see the usage instructions in [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadAttachedMediaRequest
       * @return CreateUploadAttachedMediaResponse
       */
      Models::CreateUploadAttachedMediaResponse createUploadAttachedMedia(const Models::CreateUploadAttachedMediaRequest &request);

      /**
       * @summary Issues an upload URL and an upload credential to ensure authorization and security, prevent malicious uploads, and enable automatic creation of an image ID (ImageId) for management in ApsaraVideo VOD. You can invoke this operation to obtain the required upload URL and credential, and create image information.
       *
       * @description - **Make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD before calling this operation. Uploading media assets to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media assets to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - This operation is only used to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by calling API operations, see [Upload media assets by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
       * - Refreshing the upload URL and credential is not supported for image uploads. If the upload credential for an image expires (the default validity period is 3,000 seconds), call this operation again to obtain the upload URL and credential.
       * - You can configure callbacks to receive the event notification for [image upload complete](https://help.aliyun.com/document_detail/91968.html) to determine whether the upload is successful.
       * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and a required step for every upload operation. ApsaraVideo VOD provides various upload methods, each with different requirements for obtaining the upload URL and credential. For details, see the usage notes in [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadImageResponse
       */
      Models::CreateUploadImageResponse createUploadImageWithOptions(const Models::CreateUploadImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues an upload URL and an upload credential to ensure authorization and security, prevent malicious uploads, and enable automatic creation of an image ID (ImageId) for management in ApsaraVideo VOD. You can invoke this operation to obtain the required upload URL and credential, and create image information.
       *
       * @description - **Make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD before calling this operation. Uploading media assets to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media assets to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - This operation is only used to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by calling API operations, see [Upload media assets by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
       * - Refreshing the upload URL and credential is not supported for image uploads. If the upload credential for an image expires (the default validity period is 3,000 seconds), call this operation again to obtain the upload URL and credential.
       * - You can configure callbacks to receive the event notification for [image upload complete](https://help.aliyun.com/document_detail/91968.html) to determine whether the upload is successful.
       * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and a required step for every upload operation. ApsaraVideo VOD provides various upload methods, each with different requirements for obtaining the upload URL and credential. For details, see the usage notes in [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request CreateUploadImageRequest
       * @return CreateUploadImageResponse
       */
      Models::CreateUploadImageResponse createUploadImage(const Models::CreateUploadImageRequest &request);

      /**
       * @summary Obtains the upload URL and credential for an audio or video file, and creates the media information. ApsaraVideo VOD issues the upload URL and credential to ensure authorization and security, prevent malicious uploads, and automatically create a media ID (MediaId), also known as a video ID (VideoId), for management. You can invoke this operation to obtain the required upload URL and credential, and create the audio and video information.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media assets to ApsaraVideo VOD incurs storage fees. For more information about billing, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transmission acceleration, uploading media assets to ApsaraVideo VOD also incurs upload acceleration fees. For more information about billing, see [Storage and transmission acceleration billing](~~188310#section_sta_zm2_tsv~~). Storage fees are calculated from the time when the file is uploaded. Acceleration fees are calculated when you upload files after enabling the feature. Calling this operation alone does not incur fees.**
       * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and a required step for every upload operation. ApsaraVideo VOD provides various upload methods, each with different requirements for obtaining the upload URL and credential. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       * - This operation is used only to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by calling API operations, see [Upload media asset files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
       * - This operation supports obtaining the upload URL and credential for both video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       * - If the video upload credential expires (the default validity period is 3,000 seconds), call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential.
       * - After the upload, you can configure a callback to receive [upload event notifications](https://help.aliyun.com/document_detail/55396.html) or call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to check the file status in the response to determine whether the upload is successful.
       * - The VideoId parameter returned by this operation can be used for media asset lifecycle management or media processing.
       *
       * @param request CreateUploadVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUploadVideoResponse
       */
      Models::CreateUploadVideoResponse createUploadVideoWithOptions(const Models::CreateUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the upload URL and credential for an audio or video file, and creates the media information. ApsaraVideo VOD issues the upload URL and credential to ensure authorization and security, prevent malicious uploads, and automatically create a media ID (MediaId), also known as a video ID (VideoId), for management. You can invoke this operation to obtain the required upload URL and credential, and create the audio and video information.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media assets to ApsaraVideo VOD incurs storage fees. For more information about billing, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transmission acceleration, uploading media assets to ApsaraVideo VOD also incurs upload acceleration fees. For more information about billing, see [Storage and transmission acceleration billing](~~188310#section_sta_zm2_tsv~~). Storage fees are calculated from the time when the file is uploaded. Acceleration fees are calculated when you upload files after enabling the feature. Calling this operation alone does not incur fees.**
       * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and a required step for every upload operation. ApsaraVideo VOD provides various upload methods, each with different requirements for obtaining the upload URL and credential. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       * - This operation is used only to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by calling API operations, see [Upload media asset files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
       * - This operation supports obtaining the upload URL and credential for both video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       * - If the video upload credential expires (the default validity period is 3,000 seconds), call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential.
       * - After the upload, you can configure a callback to receive [upload event notifications](https://help.aliyun.com/document_detail/55396.html) or call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to check the file status in the response to determine whether the upload is successful.
       * - The VideoId parameter returned by this operation can be used for media asset lifecycle management or media processing.
       *
       * @param request CreateUploadVideoRequest
       * @return CreateUploadVideoResponse
       */
      Models::CreateUploadVideoResponse createUploadVideo(const Models::CreateUploadVideoRequest &request);

      /**
       * @summary Invokes this operation for decryption of the CiphertextBlob ciphertext of a KMS data key (DK).
       *
       * @param request DecryptKMSDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptKMSDataKeyResponse
       */
      Models::DecryptKMSDataKeyResponse decryptKMSDataKeyWithOptions(const Models::DecryptKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation for decryption of the CiphertextBlob ciphertext of a KMS data key (DK).
       *
       * @param request DecryptKMSDataKeyRequest
       * @return DecryptKMSDataKeyResponse
       */
      Models::DecryptKMSDataKeyResponse decryptKMSDataKey(const Models::DecryptKMSDataKeyRequest &request);

      /**
       * @summary Deletes AI image information.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - **This operation only deletes AI image information and does not actually delete image files**.
       * - A maximum of 10 IDs can be deleted at a time.
       *
       * @param request DeleteAIImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAIImageInfosResponse
       */
      Models::DeleteAIImageInfosResponse deleteAIImageInfosWithOptions(const Models::DeleteAIImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes AI image information.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - **This operation only deletes AI image information and does not actually delete image files**.
       * - A maximum of 10 IDs can be deleted at a time.
       *
       * @param request DeleteAIImageInfosRequest
       * @return DeleteAIImageInfosResponse
       */
      Models::DeleteAIImageInfosResponse deleteAIImageInfos(const Models::DeleteAIImageInfosRequest &request);

      /**
       * @summary Deletes an AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - An AI template that is set as the default template cannot be deleted.
       *
       * @param request DeleteAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAITemplateResponse
       */
      Models::DeleteAITemplateResponse deleteAITemplateWithOptions(const Models::DeleteAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - An AI template that is set as the default template cannot be deleted.
       *
       * @param request DeleteAITemplateRequest
       * @return DeleteAITemplateResponse
       */
      Models::DeleteAITemplateResponse deleteAITemplate(const Models::DeleteAITemplateRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @description An application cannot be deleted if it contains resources.
       * ### QPS limits
       * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppInfoResponse
       */
      Models::DeleteAppInfoResponse deleteAppInfoWithOptions(const Models::DeleteAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @description An application cannot be deleted if it contains resources.
       * ### QPS limits
       * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteAppInfoRequest
       * @return DeleteAppInfoResponse
       */
      Models::DeleteAppInfoResponse deleteAppInfo(const Models::DeleteAppInfoRequest &request);

      /**
       * @summary Deletes one or more auxiliary media assets that have been uploaded to ApsaraVideo VOD, such as watermark images, subtitle files, and materials.
       *
       * @description - **This operation physically deletes auxiliary media assets. Once deleted, they cannot be recovered. Proceed with caution.**
       * - You can delete up to 20 auxiliary media assets at a time.
       *
       * @param request DeleteAttachedMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAttachedMediaResponse
       */
      Models::DeleteAttachedMediaResponse deleteAttachedMediaWithOptions(const Models::DeleteAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more auxiliary media assets that have been uploaded to ApsaraVideo VOD, such as watermark images, subtitle files, and materials.
       *
       * @description - **This operation physically deletes auxiliary media assets. Once deleted, they cannot be recovered. Proceed with caution.**
       * - You can delete up to 20 auxiliary media assets at a time.
       *
       * @param request DeleteAttachedMediaRequest
       * @return DeleteAttachedMediaResponse
       */
      Models::DeleteAttachedMediaResponse deleteAttachedMedia(const Models::DeleteAttachedMediaRequest &request);

      /**
       * @summary Deletes a category and its subcategories.
       *
       * @description - **This operation deletes the category and its subcategories, including level-2 and level-3 subcategories. Proceed with caution.**
       * - If a category is assigned to media assets, deleting the category also removes the category from these media assets.
       *
       * @param request DeleteCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategoryWithOptions(const Models::DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a category and its subcategories.
       *
       * @description - **This operation deletes the category and its subcategories, including level-2 and level-3 subcategories. Proceed with caution.**
       * - If a category is assigned to media assets, deleting the category also removes the category from these media assets.
       *
       * @param request DeleteCategoryRequest
       * @return DeleteCategoryResponse
       */
      Models::DeleteCategoryResponse deleteCategory(const Models::DeleteCategoryRequest &request);

      /**
       * @summary Deletes animated sticker information.
       *
       * @description - This operation only deletes the association between animated stickers and videos. It does not delete the actual animated sticker files.
       * - After the association is deleted, the deleted animated sticker information can no longer be queried by calling the [ListDynamicImage](https://help.aliyun.com/document_detail/180958.html) operation.
       * - If you do not specify **DynamicImageIds**, all animated stickers associated with the specified VideoId are deleted. However, if the video has more than 10 animated stickers, the deletion request is rejected.
       * ### QPS limit
       * The maximum queries per second (QPS) per user for this operation is 10. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteDynamicImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDynamicImageResponse
       */
      Models::DeleteDynamicImageResponse deleteDynamicImageWithOptions(const Models::DeleteDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes animated sticker information.
       *
       * @description - This operation only deletes the association between animated stickers and videos. It does not delete the actual animated sticker files.
       * - After the association is deleted, the deleted animated sticker information can no longer be queried by calling the [ListDynamicImage](https://help.aliyun.com/document_detail/180958.html) operation.
       * - If you do not specify **DynamicImageIds**, all animated stickers associated with the specified VideoId are deleted. However, if the video has more than 10 animated stickers, the deletion request is rejected.
       * ### QPS limit
       * The maximum queries per second (QPS) per user for this operation is 10. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteDynamicImageRequest
       * @return DeleteDynamicImageResponse
       */
      Models::DeleteDynamicImageResponse deleteDynamicImage(const Models::DeleteDynamicImageRequest &request);

      /**
       * @summary Deletes an online editing project.
       *
       * @description - Supports batch deletion.
       *
       * @param request DeleteEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEditingProjectResponse
       */
      Models::DeleteEditingProjectResponse deleteEditingProjectWithOptions(const Models::DeleteEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an online editing project.
       *
       * @description - Supports batch deletion.
       *
       * @param request DeleteEditingProjectRequest
       * @return DeleteEditingProjectResponse
       */
      Models::DeleteEditingProjectResponse deleteEditingProject(const Models::DeleteEditingProjectRequest &request);

      /**
       * @summary Deletes materials from an online editing project.
       *
       * @param request DeleteEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEditingProjectMaterialsResponse
       */
      Models::DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterialsWithOptions(const Models::DeleteEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes materials from an online editing project.
       *
       * @param request DeleteEditingProjectMaterialsRequest
       * @return DeleteEditingProjectMaterialsResponse
       */
      Models::DeleteEditingProjectMaterialsResponse deleteEditingProjectMaterials(const Models::DeleteEditingProjectMaterialsRequest &request);

      /**
       * @summary Deletes images uploaded by users or images generated from video snapshots.
       *
       * @description - **When you call this operation to delete images, the source files are permanently deleted. This action is irreversible. Once deleted, the images cannot be recovered. Proceed with caution.**
       * - When **DeleteImageType** is set to **VideoId**, **VideoId** and **ImageType** are available and required. 
       * - When **DeleteImageType** is set to **ImageURL**, **ImageIds** and **ImageURLs** are available and required. 
       * - After you call this operation to delete images, CDN caches may still exist in some cases, which means the image URLs may not become invalid immediately.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes images uploaded by users or images generated from video snapshots.
       *
       * @description - **When you call this operation to delete images, the source files are permanently deleted. This action is irreversible. Once deleted, the images cannot be recovered. Proceed with caution.**
       * - When **DeleteImageType** is set to **VideoId**, **VideoId** and **ImageType** are available and required. 
       * - When **DeleteImageType** is set to **ImageURL**, **ImageIds** and **ImageURLs** are available and required. 
       * - After you call this operation to delete images, CDN caches may still exist in some cases, which means the image URLs may not become invalid immediately.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes a specified ManifestEdit track orchestration template.
       *
       * @description - After deletion, the template and its track configurations cannot be recovered. Submitted jobs are not affected, but resubmitting a SubmitEditMediaManifestJob job with the deleted template ID will fail.
       * - The custom transcoding template configurations associated with the template in the MediaConvert pipeline will also be cleared (preset templates are not affected).
       *
       * @param request DeleteManifestEditTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteManifestEditTemplateResponse
       */
      Models::DeleteManifestEditTemplateResponse deleteManifestEditTemplateWithOptions(const Models::DeleteManifestEditTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified ManifestEdit track orchestration template.
       *
       * @description - After deletion, the template and its track configurations cannot be recovered. Submitted jobs are not affected, but resubmitting a SubmitEditMediaManifestJob job with the deleted template ID will fail.
       * - The custom transcoding template configurations associated with the template in the MediaConvert pipeline will also be cleared (preset templates are not affected).
       *
       * @param request DeleteManifestEditTemplateRequest
       * @return DeleteManifestEditTemplateResponse
       */
      Models::DeleteManifestEditTemplateResponse deleteManifestEditTemplate(const Models::DeleteManifestEditTemplateRequest &request);

      /**
       * @summary Deletes the callback method, callback URL, and event types of an event notification.
       *
       * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request DeleteMessageCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMessageCallbackResponse
       */
      Models::DeleteMessageCallbackResponse deleteMessageCallbackWithOptions(const Models::DeleteMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the callback method, callback URL, and event types of an event notification.
       *
       * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request DeleteMessageCallbackRequest
       * @return DeleteMessageCallbackResponse
       */
      Models::DeleteMessageCallbackResponse deleteMessageCallback(const Models::DeleteMessageCallbackRequest &request);

      /**
       * @summary Deletes the source files of multiple audio and video files at a time.
       *
       * @description Media processing operations in ApsaraVideo VOD (transcoding, snapshots, automated review, etc.) are performed on source files. Once a source file is deleted, subsequent media processing operations cannot be performed. Proceed with caution.
       *
       * @param request DeleteMezzaninesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMezzaninesResponse
       */
      Models::DeleteMezzaninesResponse deleteMezzaninesWithOptions(const Models::DeleteMezzaninesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the source files of multiple audio and video files at a time.
       *
       * @description Media processing operations in ApsaraVideo VOD (transcoding, snapshots, automated review, etc.) are performed on source files. Once a source file is deleted, subsequent media processing operations cannot be performed. Proceed with caution.
       *
       * @param request DeleteMezzaninesRequest
       * @return DeleteMezzaninesResponse
       */
      Models::DeleteMezzaninesResponse deleteMezzanines(const Models::DeleteMezzaninesRequest &request);

      /**
       * @summary Deletes fragment files generated during upload.
       *
       * @description - When you use multipart upload, fragment files may be generated if the upload fails. These fragment files are automatically cleared after 7 days. After the upload is complete or fails, you can call this operation to manually clear the fragment files.
       * - Calling this operation does not delete the original file or transcoded files. It only deletes fragment files generated during the upload process.
       * - Calling the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation deletes the complete video file, including fragment files.
       *
       * @param request DeleteMultipartUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMultipartUploadResponse
       */
      Models::DeleteMultipartUploadResponse deleteMultipartUploadWithOptions(const Models::DeleteMultipartUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes fragment files generated during upload.
       *
       * @description - When you use multipart upload, fragment files may be generated if the upload fails. These fragment files are automatically cleared after 7 days. After the upload is complete or fails, you can call this operation to manually clear the fragment files.
       * - Calling this operation does not delete the original file or transcoded files. It only deletes fragment files generated during the upload process.
       * - Calling the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation deletes the complete video file, including fragment files.
       *
       * @param request DeleteMultipartUploadRequest
       * @return DeleteMultipartUploadResponse
       */
      Models::DeleteMultipartUploadResponse deleteMultipartUpload(const Models::DeleteMultipartUploadRequest &request);

      /**
       * @summary Deletes media stream (video stream or audio stream) information and storage files.
       *
       * @description ### Usage notes
       * Batch deletion is supported.
       * ### QPS limit
       * A single user can perform a maximum of 50 queries per second (QPS). Throttling is triggered when the QPS limit is exceeded, which may affect your business. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStreamResponse
       */
      Models::DeleteStreamResponse deleteStreamWithOptions(const Models::DeleteStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media stream (video stream or audio stream) information and storage files.
       *
       * @description ### Usage notes
       * Batch deletion is supported.
       * ### QPS limit
       * A single user can perform a maximum of 50 queries per second (QPS). Throttling is triggered when the QPS limit is exceeded, which may affect your business. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteStreamRequest
       * @return DeleteStreamResponse
       */
      Models::DeleteStreamResponse deleteStream(const Models::DeleteStreamRequest &request);

      /**
       * @summary Deletes transcoding configurations. You can delete specific transcoding templates from a transcoding template group or force delete an entire transcoding template group.
       *
       * @description - Default transcoding templates cannot be deleted. Remove the default designation before deleting them.
       *  - For security protection purposes, a locked transcoding template group cannot be added to, modified, or deleted. Call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check the Locked response parameter to determine whether the template group is locked. Call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before making changes.
       *  - If the ForceDelGroup parameter is empty or set to false, the TranscodeTemplateIds parameter is required.
       *
       * @param request DeleteTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTranscodeTemplateGroupResponse
       */
      Models::DeleteTranscodeTemplateGroupResponse deleteTranscodeTemplateGroupWithOptions(const Models::DeleteTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes transcoding configurations. You can delete specific transcoding templates from a transcoding template group or force delete an entire transcoding template group.
       *
       * @description - Default transcoding templates cannot be deleted. Remove the default designation before deleting them.
       *  - For security protection purposes, a locked transcoding template group cannot be added to, modified, or deleted. Call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check the Locked response parameter to determine whether the template group is locked. Call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before making changes.
       *  - If the ForceDelGroup parameter is empty or set to false, the TranscodeTemplateIds parameter is required.
       *
       * @param request DeleteTranscodeTemplateGroupRequest
       * @return DeleteTranscodeTemplateGroupResponse
       */
      Models::DeleteTranscodeTemplateGroupResponse deleteTranscodeTemplateGroup(const Models::DeleteTranscodeTemplateGroupRequest &request);

      /**
       * @summary Deletes complete videos, including video source files, transcoded stream files, and thumbnails.
       *
       * @description ### Usage notes
       * - **This operation physically deletes videos. Deleted videos cannot be recovered. Proceed with caution.**
       * - Batch deletion is supported.
       * - When you delete a video, the source files are deleted, including the video source file, transcoded stream files, and thumbnails. However, the CDN cache is not refreshed through synchronization. If your business requires it, use the purge feature in the ApsaraVideo VOD console to clear stale data from the point of presence. Related operations: see [Purge and prefetch](https://help.aliyun.com/document_detail/86098.html).
       * ### QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVideoResponse
       */
      Models::DeleteVideoResponse deleteVideoWithOptions(const Models::DeleteVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes complete videos, including video source files, transcoded stream files, and thumbnails.
       *
       * @description ### Usage notes
       * - **This operation physically deletes videos. Deleted videos cannot be recovered. Proceed with caution.**
       * - Batch deletion is supported.
       * - When you delete a video, the source files are deleted, including the video source file, transcoded stream files, and thumbnails. However, the CDN cache is not refreshed through synchronization. If your business requires it, use the purge feature in the ApsaraVideo VOD console to clear stale data from the point of presence. Related operations: see [Purge and prefetch](https://help.aliyun.com/document_detail/86098.html).
       * ### QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request DeleteVideoRequest
       * @return DeleteVideoResponse
       */
      Models::DeleteVideoResponse deleteVideo(const Models::DeleteVideoRequest &request);

      /**
       * @summary Deletes an accelerated domain name that has been added for ApsaraVideo VOD.
       *
       * @description >- Currently, the only supported service region is **China (Shanghai)**.
       * >- This operation makes the domain name inaccessible. Proceed with caution. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
       * >- After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are deleted. If you only want to temporarily disable the domain name, use the [DisableVodDomainOffline](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodDomainResponse
       */
      Models::DeleteVodDomainResponse deleteVodDomainWithOptions(const Models::DeleteVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an accelerated domain name that has been added for ApsaraVideo VOD.
       *
       * @description >- Currently, the only supported service region is **China (Shanghai)**.
       * >- This operation makes the domain name inaccessible. Proceed with caution. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
       * >- After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are deleted. If you only want to temporarily disable the domain name, use the [DisableVodDomainOffline](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodDomainRequest
       * @return DeleteVodDomainResponse
       */
      Models::DeleteVodDomainResponse deleteVodDomain(const Models::DeleteVodDomainRequest &request);

      /**
       * @summary Deletes the configurations of a domain name for CDN acceleration in ApsaraVideo VOD.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - This operation causes the domain name to become inaccessible. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
       * - After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are removed. If you only want to temporarily disable the domain name, use the [DisableVodRealtimeLogDelivery](https://help.aliyun.com/document_detail/120208.html) operation.
       *
       * @param request DeleteVodSpecificConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVodSpecificConfigResponse
       */
      Models::DeleteVodSpecificConfigResponse deleteVodSpecificConfigWithOptions(const Models::DeleteVodSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configurations of a domain name for CDN acceleration in ApsaraVideo VOD.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - This operation causes the domain name to become inaccessible. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
       * - After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are removed. If you only want to temporarily disable the domain name, use the [DisableVodRealtimeLogDelivery](https://help.aliyun.com/document_detail/120208.html) operation.
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
       * @summary Deletes an image watermark template or text watermark template by watermark template ID.
       *
       * @description - **When you delete an image watermark template, the watermark source file is physically deleted and cannot be recovered. Proceed with caution.**
       * - A watermark template that has been set as the default watermark template cannot be deleted. To delete it, call [SetDefaultWatermark](~~SetDefaultWatermark~~) to set another watermark template as the default template to remove the default status, and then delete it.
       *
       * @param request DeleteWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWatermarkResponse
       */
      Models::DeleteWatermarkResponse deleteWatermarkWithOptions(const Models::DeleteWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image watermark template or text watermark template by watermark template ID.
       *
       * @description - **When you delete an image watermark template, the watermark source file is physically deleted and cannot be recovered. Proceed with caution.**
       * - A watermark template that has been set as the default watermark template cannot be deleted. To delete it, call [SetDefaultWatermark](~~SetDefaultWatermark~~) to set another watermark template as the default template to remove the default status, and then delete it.
       *
       * @param request DeleteWatermarkRequest
       * @return DeleteWatermarkResponse
       */
      Models::DeleteWatermarkResponse deleteWatermark(const Models::DeleteWatermarkRequest &request);

      /**
       * @summary Queries the time distribution of audio and video media asset data. The maximum time span between the start time and end time is six months.
       *
       * @description - Currently, the endpoint for this API operation supports only China (Shanghai).
       * - If you do not specify StartTime and EndTime, this API operation returns data for the past 7 days by default. If you specify StartTime and EndTime, this API operation returns data for the specified time period.
       *
       * @param request DescribeMediaDistributionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMediaDistributionResponse
       */
      Models::DescribeMediaDistributionResponse describeMediaDistributionWithOptions(const Models::DescribeMediaDistributionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time distribution of audio and video media asset data. The maximum time span between the start time and end time is six months.
       *
       * @description - Currently, the endpoint for this API operation supports only China (Shanghai).
       * - If you do not specify StartTime and EndTime, this API operation returns data for the past 7 days by default. If you specify StartTime and EndTime, this API operation returns data for the specified time period.
       *
       * @param request DescribeMediaDistributionRequest
       * @return DescribeMediaDistributionResponse
       */
      Models::DescribeMediaDistributionResponse describeMediaDistribution(const Models::DescribeMediaDistributionRequest &request);

      /**
       * @summary Retrieves daily playback statistics for top videos, including the number of views, unique viewers, and total playback duration.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - You can query playback statistics for up to the top 1000 videos per day. The top video list is sorted in descending order by the number of views by default.
       * - Only playback data collected through ApsaraVideo Player SDK is supported.
       * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
       * - You can query data generated after January 1, 2018. The maximum time range for a query is 180 days.
       *
       * @param request DescribePlayTopVideosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayTopVideosResponse
       */
      Models::DescribePlayTopVideosResponse describePlayTopVideosWithOptions(const Models::DescribePlayTopVideosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves daily playback statistics for top videos, including the number of views, unique viewers, and total playback duration.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - You can query playback statistics for up to the top 1000 videos per day. The top video list is sorted in descending order by the number of views by default.
       * - Only playback data collected through ApsaraVideo Player SDK is supported.
       * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
       * - You can query data generated after January 1, 2018. The maximum time range for a query is 180 days.
       *
       * @param request DescribePlayTopVideosRequest
       * @return DescribePlayTopVideosResponse
       */
      Models::DescribePlayTopVideosResponse describePlayTopVideos(const Models::DescribePlayTopVideosRequest &request);

      /**
       * @summary Retrieves daily average playback statistics for a specified time range, including average playback duration and average playback count.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Only playback data collected through ApsaraVideo Player SDK is supported.
       * - Playback statistics for the previous day are generated at 9:00 AM (UTC+8) each day.
       * - You can query data generated after 2018-01-01. The maximum time range between the start time and end time is 180 days.
       *
       * @param request DescribePlayUserAvgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayUserAvgResponse
       */
      Models::DescribePlayUserAvgResponse describePlayUserAvgWithOptions(const Models::DescribePlayUserAvgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves daily average playback statistics for a specified time range, including average playback duration and average playback count.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Only playback data collected through ApsaraVideo Player SDK is supported.
       * - Playback statistics for the previous day are generated at 9:00 AM (UTC+8) each day.
       * - You can query data generated after 2018-01-01. The maximum time range between the start time and end time is 180 days.
       *
       * @param request DescribePlayUserAvgRequest
       * @return DescribePlayUserAvgResponse
       */
      Models::DescribePlayUserAvgResponse describePlayUserAvg(const Models::DescribePlayUserAvgRequest &request);

      /**
       * @summary Retrieves the total daily playback statistics within a specified time range, including total play count, total unique viewers, total playback duration, and playback duration distribution.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Only playback data from ApsaraVideo Player SDK is supported.
       * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
       * - Data after 2018-01-01 can be queried. The maximum time span between the start time and end time is 180 days.
       *
       * @param request DescribePlayUserTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayUserTotalResponse
       */
      Models::DescribePlayUserTotalResponse describePlayUserTotalWithOptions(const Models::DescribePlayUserTotalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total daily playback statistics within a specified time range, including total play count, total unique viewers, total playback duration, and playback duration distribution.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Only playback data from ApsaraVideo Player SDK is supported.
       * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
       * - Data after 2018-01-01 can be queried. The maximum time span between the start time and end time is 180 days.
       *
       * @param request DescribePlayUserTotalRequest
       * @return DescribePlayUserTotalResponse
       */
      Models::DescribePlayUserTotalResponse describePlayUserTotal(const Models::DescribePlayUserTotalRequest &request);

      /**
       * @summary Queries the daily playback statistics of a specified video within a specified time range. The statistics include total playback duration, number of playbacks, number of unique viewers, and playback duration distribution.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - Only playback data of videos that use ApsaraVideo Player SDK and rank in the top 1,000 by daily playback count is supported.
       * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
       *  - Only data within the last 2 years (730 days) can be queried, and the maximum time span between the start time and end time is 180 days.
       *
       * @param request DescribePlayVideoStatisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePlayVideoStatisResponse
       */
      Models::DescribePlayVideoStatisResponse describePlayVideoStatisWithOptions(const Models::DescribePlayVideoStatisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the daily playback statistics of a specified video within a specified time range. The statistics include total playback duration, number of playbacks, number of unique viewers, and playback duration distribution.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - Only playback data of videos that use ApsaraVideo Player SDK and rank in the top 1,000 by daily playback count is supported.
       * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
       *  - Only data within the last 2 years (730 days) can be queried, and the maximum time span between the start time and end time is 180 days.
       *
       * @param request DescribePlayVideoStatisRequest
       * @return DescribePlayVideoStatisResponse
       */
      Models::DescribePlayVideoStatisResponse describePlayVideoStatis(const Models::DescribePlayVideoStatisRequest &request);

      /**
       * @summary Queries usage data of AI processing services such as automated review and media fingerprint.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodAIDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodAIDataResponse
       */
      Models::DescribeVodAIDataResponse describeVodAIDataWithOptions(const Models::DescribeVodAIDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries usage data of AI processing services such as automated review and media fingerprint.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodAIDataRequest
       * @return DescribeVodAIDataResponse
       */
      Models::DescribeVodAIDataResponse describeVodAIData(const Models::DescribeVodAIDataRequest &request);

      /**
       * @summary Retrieves the certificate list.
       *
       * @description - The service endpoint currently supports only **China (Shanghai)**.
       *
       * @param request DescribeVodCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodCertificateListResponse
       */
      Models::DescribeVodCertificateListResponse describeVodCertificateListWithOptions(const Models::DescribeVodCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the certificate list.
       *
       * @description - The service endpoint currently supports only **China (Shanghai)**.
       *
       * @param request DescribeVodCertificateListRequest
       * @return DescribeVodCertificateListResponse
       */
      Models::DescribeVodCertificateListResponse describeVodCertificateList(const Models::DescribeVodCertificateListRequest &request);

      /**
       * @summary Queries the bandwidth data of accelerated domain names. Compared with the DescribeVodDomainRealTimeBpsData operation, this operation supports a longer time range for querying historical data (up to the last 366 days), but has a larger time granularity (minimum of 5 minutes) and higher data latency.
       *
       * @description - The service endpoint for this operation supports only **China East 2 (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, the operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, the operation returns data for the specified time range.
       * **Time granularity of returned data**
       * Based on the time span specified by `StartTime` and `EndTime`, if `Interval` is not specified at the same time, the default time granularity of the returned data, the corresponding time range for querying historical data, and the data latency are as follows:
       * | Time granularity | Time range for a single query | Time range for querying historical data | Data latency |
       * | ------------- |------------   | ----------- | ----------- |
       * | 5 minutes | Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       * | 1 day | 31 days ≤ Time range for a single query ≤ 90 days | 366 days | Generally 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainBpsDataResponse
       */
      Models::DescribeVodDomainBpsDataResponse describeVodDomainBpsDataWithOptions(const Models::DescribeVodDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data of accelerated domain names. Compared with the DescribeVodDomainRealTimeBpsData operation, this operation supports a longer time range for querying historical data (up to the last 366 days), but has a larger time granularity (minimum of 5 minutes) and higher data latency.
       *
       * @description - The service endpoint for this operation supports only **China East 2 (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, the operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, the operation returns data for the specified time range.
       * **Time granularity of returned data**
       * Based on the time span specified by `StartTime` and `EndTime`, if `Interval` is not specified at the same time, the default time granularity of the returned data, the corresponding time range for querying historical data, and the data latency are as follows:
       * | Time granularity | Time range for a single query | Time range for querying historical data | Data latency |
       * | ------------- |------------   | ----------- | ----------- |
       * | 5 minutes | Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       * | 1 day | 31 days ≤ Time range for a single query ≤ 90 days | 366 days | Generally 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainBpsDataRequest
       * @return DescribeVodDomainBpsDataResponse
       */
      Models::DescribeVodDomainBpsDataResponse describeVodDomainBpsData(const Models::DescribeVodDomainBpsDataRequest &request);

      /**
       * @summary Queries bandwidth data of accelerated domain names by protocol type.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data of up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data of the last 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data of the specified time range.
       * **Time granularity of returned data**
       * If you specify `StartTime` and `EndTime` without configuring `Interval`, the default time granularity, the maximum time range for historical data queries, and the data delay are as follows:
       * |Time granularity  |Time range per query   |  Maximum time range for historical data queries  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes  | Time range per query < 3 days   |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days  |186 days  |Typically 3 to 4 hours  |
       * | 1 day | 31 days ≤ Time range per query ≤ 366 days |366 days  |Typically 4 hours, up to 24 hours  |
       *
       * @param request DescribeVodDomainBpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainBpsDataByLayerResponse
       */
      Models::DescribeVodDomainBpsDataByLayerResponse describeVodDomainBpsDataByLayerWithOptions(const Models::DescribeVodDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth data of accelerated domain names by protocol type.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data of up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data of the last 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data of the specified time range.
       * **Time granularity of returned data**
       * If you specify `StartTime` and `EndTime` without configuring `Interval`, the default time granularity, the maximum time range for historical data queries, and the data delay are as follows:
       * |Time granularity  |Time range per query   |  Maximum time range for historical data queries  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes  | Time range per query < 3 days   |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days  |186 days  |Typically 3 to 4 hours  |
       * | 1 day | 31 days ≤ Time range per query ≤ 366 days |366 days  |Typically 4 hours, up to 24 hours  |
       *
       * @param request DescribeVodDomainBpsDataByLayerRequest
       * @return DescribeVodDomainBpsDataByLayerResponse
       */
      Models::DescribeVodDomainBpsDataByLayerResponse describeVodDomainBpsDataByLayer(const Models::DescribeVodDomainBpsDataByLayerRequest &request);

      /**
       * @summary Retrieves the certificate information of a specified accelerated domain name.
       *
       * @description Currently, the only supported region is **China (Shanghai)**.
       *
       * @param request DescribeVodDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainCertificateInfoResponse
       */
      Models::DescribeVodDomainCertificateInfoResponse describeVodDomainCertificateInfoWithOptions(const Models::DescribeVodDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the certificate information of a specified accelerated domain name.
       *
       * @description Currently, the only supported region is **China (Shanghai)**.
       *
       * @param request DescribeVodDomainCertificateInfoRequest
       * @return DescribeVodDomainCertificateInfoResponse
       */
      Models::DescribeVodDomainCertificateInfoResponse describeVodDomainCertificateInfo(const Models::DescribeVodDomainCertificateInfoRequest &request);

      /**
       * @summary Queries domain name configurations. You can query multiple feature configurations in a single request.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       *
       * @param request DescribeVodDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainConfigsResponse
       */
      Models::DescribeVodDomainConfigsResponse describeVodDomainConfigsWithOptions(const Models::DescribeVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain name configurations. You can query multiple feature configurations in a single request.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       *
       * @param request DescribeVodDomainConfigsRequest
       * @return DescribeVodDomainConfigsResponse
       */
      Models::DescribeVodDomainConfigsResponse describeVodDomainConfigs(const Models::DescribeVodDomainConfigsRequest &request);

      /**
       * @summary Queries the basic configuration information of a specified ApsaraVideo VOD domain name.
       *
       * @description - Currently, the service endpoint supports only **China (Shanghai)**.
       * - DomainName must be an ApsaraVideo VOD accelerated domain name added to the current account. You can call DescribeVodUserDomains to query the accelerated domain names under the current account. When you add a new domain name for the first time, you must complete DNS or file verification based on the domain ownership verification documentation, and then call AddVodDomain to add the domain name. After the domain name is added, you can call this operation to query the domain name configuration.
       *
       * @param request DescribeVodDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainDetailResponse
       */
      Models::DescribeVodDomainDetailResponse describeVodDomainDetailWithOptions(const Models::DescribeVodDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic configuration information of a specified ApsaraVideo VOD domain name.
       *
       * @description - Currently, the service endpoint supports only **China (Shanghai)**.
       * - DomainName must be an ApsaraVideo VOD accelerated domain name added to the current account. You can call DescribeVodUserDomains to query the accelerated domain names under the current account. When you add a new domain name for the first time, you must complete DNS or file verification based on the domain ownership verification documentation, and then call AddVodDomain to add the domain name. After the domain name is added, you can call this operation to query the domain name configuration.
       *
       * @param request DescribeVodDomainDetailRequest
       * @return DescribeVodDomainDetailResponse
       */
      Models::DescribeVodDomainDetailResponse describeVodDomainDetail(const Models::DescribeVodDomainDetailRequest &request);

      /**
       * @summary Queries the byte hit ratio (percentage of hit bytes) of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, the API operation returns data for the last 24 hours by default. If you specify `StartTime` and `EndTime`, the API operation returns data for the specified time range.
       * **Time granularity of returned data**
       * Based on the time range specified by `StartTime` and `EndTime`, if `Interval` is not specified, the default time granularity of the returned data, the corresponding time range of historical data that can be queried, and the data delay are as follows:
       * | Time granularity | Time range for a single query | Time range of historical data that can be queried | Data delay |
       * |---|---|---|---|
       * | 5 minutes | Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       * | 1 day | 31 days ≤ Time range for a single query ≤ 366 days | 366 days | Generally 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainHitRateDataResponse
       */
      Models::DescribeVodDomainHitRateDataResponse describeVodDomainHitRateDataWithOptions(const Models::DescribeVodDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the byte hit ratio (percentage of hit bytes) of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, the API operation returns data for the last 24 hours by default. If you specify `StartTime` and `EndTime`, the API operation returns data for the specified time range.
       * **Time granularity of returned data**
       * Based on the time range specified by `StartTime` and `EndTime`, if `Interval` is not specified, the default time granularity of the returned data, the corresponding time range of historical data that can be queried, and the data delay are as follows:
       * | Time granularity | Time range for a single query | Time range of historical data that can be queried | Data delay |
       * |---|---|---|---|
       * | 5 minutes | Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       * | 1 day | 31 days ≤ Time range for a single query ≤ 366 days | 366 days | Generally 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainHitRateDataRequest
       * @return DescribeVodDomainHitRateDataResponse
       */
      Models::DescribeVodDomainHitRateDataResponse describeVodDomainHitRateData(const Models::DescribeVodDomainHitRateDataRequest &request);

      /**
       * @summary Retrieves the download URLs of raw CDN access logs for a specified domain name.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - For details about log formats and latency, refer to [Log Management](https://help.aliyun.com/document_detail/86099.html).
       * - If you do not specify StartTime and EndTime, log data from the past 24 hours is returned by default.
       * - StartTime and EndTime must be specified together to query logs within the specified time range.
       *
       * @param request DescribeVodDomainLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainLogResponse
       */
      Models::DescribeVodDomainLogResponse describeVodDomainLogWithOptions(const Models::DescribeVodDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URLs of raw CDN access logs for a specified domain name.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - For details about log formats and latency, refer to [Log Management](https://help.aliyun.com/document_detail/86099.html).
       * - If you do not specify StartTime and EndTime, log data from the past 24 hours is returned by default.
       * - StartTime and EndTime must be specified together to query logs within the specified time range.
       *
       * @param request DescribeVodDomainLogRequest
       * @return DescribeVodDomainLogResponse
       */
      Models::DescribeVodDomainLogResponse describeVodDomainLog(const Models::DescribeVodDomainLogRequest &request);

      /**
       * @summary Queries the monitoring data of the 95th percentile bandwidth for accelerated domain names.
       *
       * @description **Three query methods:**
       * - If both StartTime and EndTime are specified and the difference between EndTime and StartTime is within 24 hours, the 95th percentile bandwidth for the day of StartTime is queried. Otherwise, the 95th percentile bandwidth for the month of StartTime is queried.
       * - If both TimePoint and Cycle are specified, the 95th percentile bandwidth for the cycle of TimePoint is returned.
       * - If StartTime and EndTime are specified along with Cycle, the 95th percentile bandwidth for all specified cycles within the query range is returned.
       * If none of these three methods are specified, the 95th percentile bandwidth for the past 24 hours is returned by default.
       * - Maximum query time span: 90 days.
       * - Minimum query granularity: 1 day.
       * - Maximum query time range: 90 days.
       * - Rate limit per user: 100 calls per second.
       * - Data unit: bit/s.
       *
       * @param request DescribeVodDomainMax95BpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainMax95BpsDataResponse
       */
      Models::DescribeVodDomainMax95BpsDataResponse describeVodDomainMax95BpsDataWithOptions(const Models::DescribeVodDomainMax95BpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of the 95th percentile bandwidth for accelerated domain names.
       *
       * @description **Three query methods:**
       * - If both StartTime and EndTime are specified and the difference between EndTime and StartTime is within 24 hours, the 95th percentile bandwidth for the day of StartTime is queried. Otherwise, the 95th percentile bandwidth for the month of StartTime is queried.
       * - If both TimePoint and Cycle are specified, the 95th percentile bandwidth for the cycle of TimePoint is returned.
       * - If StartTime and EndTime are specified along with Cycle, the 95th percentile bandwidth for all specified cycles within the query range is returned.
       * If none of these three methods are specified, the 95th percentile bandwidth for the past 24 hours is returned by default.
       * - Maximum query time span: 90 days.
       * - Minimum query granularity: 1 day.
       * - Maximum query time range: 90 days.
       * - Rate limit per user: 100 calls per second.
       * - Data unit: bit/s.
       *
       * @param request DescribeVodDomainMax95BpsDataRequest
       * @return DescribeVodDomainMax95BpsDataResponse
       */
      Models::DescribeVodDomainMax95BpsDataResponse describeVodDomainMax95BpsData(const Models::DescribeVodDomainMax95BpsDataRequest &request);

      /**
       * @summary Queries the queries per second (QPS) of accelerated domain names at a 5-minute granularity. Data from the last 90 days is supported.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Maximum call frequency per user: 100 calls per second.
       * - If you do not specify StartTime and EndTime, this operation returns data from the last 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * **Supported time granularities**
       * The Interval request parameter supports different data time granularities based on the maximum time range per query. The following table describes the queryable historical data time range and data latency for each time granularity:
       * |Time granularity	|Maximum time range per query	|Queryable historical data time range	|Data latency
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes	|3 days	|93 days	|15 minutes
       * |1 hour	|31 days	|186 days	|Typically 3-4 hours
       * |1 day	|366 days	|366 days	|Typically 4 hours, no more than 24 hours
       * *********
       *
       * @param request DescribeVodDomainQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainQpsDataResponse
       */
      Models::DescribeVodDomainQpsDataResponse describeVodDomainQpsDataWithOptions(const Models::DescribeVodDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the queries per second (QPS) of accelerated domain names at a 5-minute granularity. Data from the last 90 days is supported.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Maximum call frequency per user: 100 calls per second.
       * - If you do not specify StartTime and EndTime, this operation returns data from the last 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * **Supported time granularities**
       * The Interval request parameter supports different data time granularities based on the maximum time range per query. The following table describes the queryable historical data time range and data latency for each time granularity:
       * |Time granularity	|Maximum time range per query	|Queryable historical data time range	|Data latency
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes	|3 days	|93 days	|15 minutes
       * |1 hour	|31 days	|186 days	|Typically 3-4 hours
       * |1 day	|366 days	|366 days	|Typically 4 hours, no more than 24 hours
       * *********
       *
       * @param request DescribeVodDomainQpsDataRequest
       * @return DescribeVodDomainQpsDataResponse
       */
      Models::DescribeVodDomainQpsDataResponse describeVodDomainQpsData(const Models::DescribeVodDomainQpsDataRequest &request);

      /**
       * @summary Invokes this operation to query the bandwidth data of an accelerated domain name. Compared with the DescribeVodDomainBpsData operation, this operation supports a smaller time granularity (minimum of 1 minute), lower data latency (minimum of 5 minutes), but a shorter historical data time range (up to 186 days).
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data time range and data latency for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data time range  |  Data latency   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Generally 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeBpsDataResponse
       */
      Models::DescribeVodDomainRealTimeBpsDataResponse describeVodDomainRealTimeBpsDataWithOptions(const Models::DescribeVodDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to query the bandwidth data of an accelerated domain name. Compared with the DescribeVodDomainBpsData operation, this operation supports a smaller time granularity (minimum of 1 minute), lower data latency (minimum of 5 minutes), but a shorter historical data time range (up to 186 days).
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data time range and data latency for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data time range  |  Data latency   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Generally 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeBpsDataRequest
       * @return DescribeVodDomainRealTimeBpsDataResponse
       */
      Models::DescribeVodDomainRealTimeBpsDataResponse describeVodDomainRealTimeBpsData(const Models::DescribeVodDomainRealTimeBpsDataRequest &request);

      /**
       * @summary Queries the byte hit rate data of accelerated domain names. This operation supports a minimum time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeByteHitRateDataResponse describeVodDomainRealTimeByteHitRateDataWithOptions(const Models::DescribeVodDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the byte hit rate data of accelerated domain names. This operation supports a minimum time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
       * @return DescribeVodDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeByteHitRateDataResponse describeVodDomainRealTimeByteHitRateData(const Models::DescribeVodDomainRealTimeByteHitRateDataRequest &request);

      /**
       * @summary Queries real-time access data for accelerated domain names, including QPS, bandwidth, and HTTP status code data within the last 7 days.
       *
       * @description - Currently, this operation is available only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 20 domain names at a time.
       * - The maximum time range per query (the time range between StartTime and EndTime) is 10 minutes, and data is returned at a time granularity of 1 minute.
       * - Only data within the last 7 days can be queried.
       *
       * @param request DescribeVodDomainRealTimeDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeDetailDataResponse
       */
      Models::DescribeVodDomainRealTimeDetailDataResponse describeVodDomainRealTimeDetailDataWithOptions(const Models::DescribeVodDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries real-time access data for accelerated domain names, including QPS, bandwidth, and HTTP status code data within the last 7 days.
       *
       * @description - Currently, this operation is available only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 20 domain names at a time.
       * - The maximum time range per query (the time range between StartTime and EndTime) is 10 minutes, and data is returned at a time granularity of 1 minute.
       * - Only data within the last 7 days can be queried.
       *
       * @param request DescribeVodDomainRealTimeDetailDataRequest
       * @return DescribeVodDomainRealTimeDetailDataResponse
       */
      Models::DescribeVodDomainRealTimeDetailDataResponse describeVodDomainRealTimeDetailData(const Models::DescribeVodDomainRealTimeDetailDataRequest &request);

      /**
       * @summary Queries the total count and proportion of HTTP status codes for accelerated domain names. This operation supports a minimum time granularity of 1 minute, a minimum data latency of 5 minutes, and a maximum query range of the last 186 days.
       *
       * @description - The endpoint for this operation currently supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of the returned data varies based on the time range specified by `StartTime` and `EndTime`. The corresponding queryable historical data range and data latency are as follows:
       * | Time granularity | Time range for a single query | Queryable historical data range | Data latency |
       * | ------------- |------------   | ----------- | ----------- |
       * | 1 minute | Time range for a single query ≤ 1 hour | 7 days | 5 minutes |
       * | 5 minutes | 1 hour < Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       *
       * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeVodDomainRealTimeHttpCodeDataResponse describeVodDomainRealTimeHttpCodeDataWithOptions(const Models::DescribeVodDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total count and proportion of HTTP status codes for accelerated domain names. This operation supports a minimum time granularity of 1 minute, a minimum data latency of 5 minutes, and a maximum query range of the last 186 days.
       *
       * @description - The endpoint for this operation currently supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of the returned data varies based on the time range specified by `StartTime` and `EndTime`. The corresponding queryable historical data range and data latency are as follows:
       * | Time granularity | Time range for a single query | Queryable historical data range | Data latency |
       * | ------------- |------------   | ----------- | ----------- |
       * | 1 minute | Time range for a single query ≤ 1 hour | 7 days | 5 minutes |
       * | 5 minutes | 1 hour < Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       *
       * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
       * @return DescribeVodDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeVodDomainRealTimeHttpCodeDataResponse describeVodDomainRealTimeHttpCodeData(const Models::DescribeVodDomainRealTimeHttpCodeDataRequest &request);

      /**
       * @summary Invoke this operation to query the queries per second (QPS) data for access to an accelerated domain name. This operation supports a minimum data time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
       *
       * @description - Currently, this operation is available only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeQpsDataResponse
       */
      Models::DescribeVodDomainRealTimeQpsDataResponse describeVodDomainRealTimeQpsDataWithOptions(const Models::DescribeVodDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke this operation to query the queries per second (QPS) data for access to an accelerated domain name. This operation supports a minimum data time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
       *
       * @description - Currently, this operation is available only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeQpsDataRequest
       * @return DescribeVodDomainRealTimeQpsDataResponse
       */
      Models::DescribeVodDomainRealTimeQpsDataResponse describeVodDomainRealTimeQpsData(const Models::DescribeVodDomainRealTimeQpsDataRequest &request);

      /**
       * @summary Queries the request hit ratio data for an accelerated domain name. The minimum time granularity for data queried by this operation is 1 minute. The data latency is at least 5 minutes. You can query data for up to the last 186 days.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last 1 hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * - The Go language uses the POST method by default. Manually change the request method to GET by declaring `request.Method="GET"`.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data latency for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data latency   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeReqHitRateDataResponse describeVodDomainRealTimeReqHitRateDataWithOptions(const Models::DescribeVodDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit ratio data for an accelerated domain name. The minimum time granularity for data queried by this operation is 1 minute. The data latency is at least 5 minutes. You can query data for up to the last 186 days.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - Batch queries are supported. You can query data for up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last 1 hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
       * - The Go language uses the POST method by default. Manually change the request method to GET by declaring `request.Method="GET"`.
       * **Time granularity of returned data**
       * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data latency for each time granularity:
       * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data latency   |
       * | ------------- |------------   | ----------- | ----------- |
       * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
       * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
       *
       * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
       * @return DescribeVodDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeVodDomainRealTimeReqHitRateDataResponse describeVodDomainRealTimeReqHitRateData(const Models::DescribeVodDomainRealTimeReqHitRateDataRequest &request);

      /**
       * @summary Queries the traffic data of accelerated domain names. Compared with the DescribeVodDomainTrafficData operation, this operation supports a finer time granularity (as fine as 1 minute) and lower data latency (as low as 5 minutes), but covers a shorter historical data time range (up to the last 186 days).
       *
       * @description - Currently, the endpoint for this operation only supports **China (Shanghai)**.
       * - Supports batch queries. You can query the data of up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns the data of the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns the data within the specified time range.
       * **Time granularity of returned data**
       * The time granularity of the returned data varies based on the time range specified by `StartTime` and `EndTime`. The corresponding historical data time range and data latency are as follows:
       * | Time granularity | Time range for a single query | Historical data time range | Data latency |
       * |---|---|---|---|
       * | 1 minute | Time range for a single query ≤ 1 hour | 7 days | 5 minutes |
       * | 5 minutes | 1 hour < Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       *
       * @param request DescribeVodDomainRealTimeTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainRealTimeTrafficDataResponse
       */
      Models::DescribeVodDomainRealTimeTrafficDataResponse describeVodDomainRealTimeTrafficDataWithOptions(const Models::DescribeVodDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data of accelerated domain names. Compared with the DescribeVodDomainTrafficData operation, this operation supports a finer time granularity (as fine as 1 minute) and lower data latency (as low as 5 minutes), but covers a shorter historical data time range (up to the last 186 days).
       *
       * @description - Currently, the endpoint for this operation only supports **China (Shanghai)**.
       * - Supports batch queries. You can query the data of up to 100 domain names at a time.
       * - If you do not specify `StartTime` and `EndTime`, this operation returns the data of the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns the data within the specified time range.
       * **Time granularity of returned data**
       * The time granularity of the returned data varies based on the time range specified by `StartTime` and `EndTime`. The corresponding historical data time range and data latency are as follows:
       * | Time granularity | Time range for a single query | Historical data time range | Data latency |
       * |---|---|---|---|
       * | 1 minute | Time range for a single query ≤ 1 hour | 7 days | 5 minutes |
       * | 5 minutes | 1 hour < Time range for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time range for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       *
       * @param request DescribeVodDomainRealTimeTrafficDataRequest
       * @return DescribeVodDomainRealTimeTrafficDataResponse
       */
      Models::DescribeVodDomainRealTimeTrafficDataResponse describeVodDomainRealTimeTrafficData(const Models::DescribeVodDomainRealTimeTrafficDataRequest &request);

      /**
       * @summary Queries the request hit ratio (percentage of hit requests) of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this API operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this API operation returns data for the specified time range.
       * **Returned data time granularity**
       * Based on the time span specified by `StartTime` and `EndTime`, if `Interval` is not specified, the default data time granularity, the corresponding time range of historical data that can be queried, and the data delay are as follows:
       * |Time granularity  |Time span for a single query   |  Time range of historical data that can be queried  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes  | Time span for a single query < 3 days   |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time span for a single query < 31 days  |186 days  |Generally 3 to 4 hours  |
       * | 1 day | 31 days ≤ Time span for a single query ≤ 90 days |366 days  |Generally 4 hours, up to 24 hours  |
       *
       * @param request DescribeVodDomainReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainReqHitRateDataResponse
       */
      Models::DescribeVodDomainReqHitRateDataResponse describeVodDomainReqHitRateDataWithOptions(const Models::DescribeVodDomainReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit ratio (percentage of hit requests) of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this API operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this API operation returns data for the specified time range.
       * **Returned data time granularity**
       * Based on the time span specified by `StartTime` and `EndTime`, if `Interval` is not specified, the default data time granularity, the corresponding time range of historical data that can be queried, and the data delay are as follows:
       * |Time granularity  |Time span for a single query   |  Time range of historical data that can be queried  |  Data delay   |
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes  | Time span for a single query < 3 days   |93 days  |15 minutes  |
       * |1 hour  | 3 days ≤ Time span for a single query < 31 days  |186 days  |Generally 3 to 4 hours  |
       * | 1 day | 31 days ≤ Time span for a single query ≤ 90 days |366 days  |Generally 4 hours, up to 24 hours  |
       *
       * @param request DescribeVodDomainReqHitRateDataRequest
       * @return DescribeVodDomainReqHitRateDataResponse
       */
      Models::DescribeVodDomainReqHitRateDataResponse describeVodDomainReqHitRateData(const Models::DescribeVodDomainReqHitRateDataRequest &request);

      /**
       * @summary Queries the back-to-origin bandwidth data of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation only supports **China (Shanghai)**.
       * - Supports batch queries. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this API operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this API operation returns data for the specified time period.
       * **Time granularity of the returned data timestamp**
       * If you do not specify the Interval Settings, the default time granularity of the returned data timestamp, the queryable time range of historical data, and the data delay vary based on the time span specified by StartTime and EndTime. The details are as follows:
       * | Time granularity | Time span for a single query | Time range of queryable historical data | Data delay |
       * | ------------- |------------ | ----------- | ----------- |
       * | 5 minutes | Time span for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time span for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       * | 1 day | 31 days ≤ Time span for a single query ≤ 366 days | 366 days | Generally 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainSrcBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainSrcBpsDataResponse
       */
      Models::DescribeVodDomainSrcBpsDataResponse describeVodDomainSrcBpsDataWithOptions(const Models::DescribeVodDomainSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin bandwidth data of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation only supports **China (Shanghai)**.
       * - Supports batch queries. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this API operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this API operation returns data for the specified time period.
       * **Time granularity of the returned data timestamp**
       * If you do not specify the Interval Settings, the default time granularity of the returned data timestamp, the queryable time range of historical data, and the data delay vary based on the time span specified by StartTime and EndTime. The details are as follows:
       * | Time granularity | Time span for a single query | Time range of queryable historical data | Data delay |
       * | ------------- |------------ | ----------- | ----------- |
       * | 5 minutes | Time span for a single query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time span for a single query < 31 days | 186 days | Generally 3 to 4 hours |
       * | 1 day | 31 days ≤ Time span for a single query ≤ 366 days | 366 days | Generally 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainSrcBpsDataRequest
       * @return DescribeVodDomainSrcBpsDataResponse
       */
      Models::DescribeVodDomainSrcBpsDataResponse describeVodDomainSrcBpsData(const Models::DescribeVodDomainSrcBpsDataRequest &request);

      /**
       * @summary Queries the back-to-origin traffic data of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this API operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this API operation returns data for the specified time range.
       * **Time granularity of returned data timestamps**
       * If you do not specify the Interval Settings, the default time granularity of the returned data timestamps, the time range of historical data that can be queried, and the data delay vary based on the time span between StartTime and EndTime. The details are as follows:
       * |Time granularity|Time span per query|Time range of queryable historical data|Data delay|
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes|Time span per query < 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time span per query < 31 days|186 days|Typically 3 to 4 hours|
       * |1 day|31 days ≤ Time span per query ≤ 366 days|366 days|Typically 4 hours, up to 24 hours|
       *
       * @param request DescribeVodDomainSrcTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainSrcTrafficDataResponse
       */
      Models::DescribeVodDomainSrcTrafficDataResponse describeVodDomainSrcTrafficDataWithOptions(const Models::DescribeVodDomainSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin traffic data of accelerated domain names.
       *
       * @description - Currently, the endpoint for this API operation supports only **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this API operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this API operation returns data for the specified time range.
       * **Time granularity of returned data timestamps**
       * If you do not specify the Interval Settings, the default time granularity of the returned data timestamps, the time range of historical data that can be queried, and the data delay vary based on the time span between StartTime and EndTime. The details are as follows:
       * |Time granularity|Time span per query|Time range of queryable historical data|Data delay|
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes|Time span per query < 3 days|93 days|15 minutes|
       * |1 hour|3 days ≤ Time span per query < 31 days|186 days|Typically 3 to 4 hours|
       * |1 day|31 days ≤ Time span per query ≤ 366 days|366 days|Typically 4 hours, up to 24 hours|
       *
       * @param request DescribeVodDomainSrcTrafficDataRequest
       * @return DescribeVodDomainSrcTrafficDataResponse
       */
      Models::DescribeVodDomainSrcTrafficDataResponse describeVodDomainSrcTrafficData(const Models::DescribeVodDomainSrcTrafficDataRequest &request);

      /**
       * @summary Queries the traffic data of accelerated domain names. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation supports a longer time range for querying historical data (up to the last 366 days), but has a larger time granularity (minimum of 5 minutes) and higher data latency.
       *
       * @description - Currently, the endpoint for this operation is supported only in **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * Based on the time span between the specified `StartTime` and `EndTime`, and when `Interval` is not specified, the default time granularity of the returned data, the corresponding time range for querying historical data, and the data latency are as follows:
       * | Time granularity | Time span per query | Time range for querying historical data | Data latency |
       * |---|---|---|---|
       * | 5 minutes | Time span per query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time span per query < 31 days | 186 days | Typically 3 to 4 hours |
       * | 1 day | 31 days ≤ Time span per query ≤ 366 days | 366 days | Typically 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainTrafficDataResponse
       */
      Models::DescribeVodDomainTrafficDataResponse describeVodDomainTrafficDataWithOptions(const Models::DescribeVodDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data of accelerated domain names. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation supports a longer time range for querying historical data (up to the last 366 days), but has a larger time granularity (minimum of 5 minutes) and higher data latency.
       *
       * @description - Currently, the endpoint for this operation is supported only in **China (Shanghai)**.
       * - Batch queries are supported. You can query data for up to 500 domain names at a time.
       * - If you do not specify StartTime and EndTime, this operation returns data for the last 24 hours by default. If you specify StartTime and EndTime, this operation returns data for the specified time range.
       * **Time granularity of returned data**
       * Based on the time span between the specified `StartTime` and `EndTime`, and when `Interval` is not specified, the default time granularity of the returned data, the corresponding time range for querying historical data, and the data latency are as follows:
       * | Time granularity | Time span per query | Time range for querying historical data | Data latency |
       * |---|---|---|---|
       * | 5 minutes | Time span per query < 3 days | 93 days | 15 minutes |
       * | 1 hour | 3 days ≤ Time span per query < 31 days | 186 days | Typically 3 to 4 hours |
       * | 1 day | 31 days ≤ Time span per query ≤ 366 days | 366 days | Typically 4 hours, up to 24 hours |
       *
       * @param request DescribeVodDomainTrafficDataRequest
       * @return DescribeVodDomainTrafficDataResponse
       */
      Models::DescribeVodDomainTrafficDataResponse describeVodDomainTrafficData(const Models::DescribeVodDomainTrafficDataRequest &request);

      /**
       * @summary Queries acceleration traffic or bandwidth usage data.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,). You can query up to 100 domain names at a time. If this parameter is left empty, data for all domain names under the account is returned.
       * - You can query data for up to the last year. The maximum time span for a single query is 3 months. If the query time range is 1 to 3 days, data is returned at hourly granularity. If the query time range is 4 days or more, data is returned at daily granularity.
       *
       * @param request DescribeVodDomainUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodDomainUsageDataResponse
       */
      Models::DescribeVodDomainUsageDataResponse describeVodDomainUsageDataWithOptions(const Models::DescribeVodDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries acceleration traffic or bandwidth usage data.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Batch domain name queries are supported. Separate multiple domain names with commas (,). You can query up to 100 domain names at a time. If this parameter is left empty, data for all domain names under the account is returned.
       * - You can query data for up to the last year. The maximum time span for a single query is 3 months. If the query time range is 1 to 3 days, data is returned at hourly granularity. If the query time range is 4 days or more, data is returned at daily granularity.
       *
       * @param request DescribeVodDomainUsageDataRequest
       * @return DescribeVodDomainUsageDataResponse
       */
      Models::DescribeVodDomainUsageDataResponse describeVodDomainUsageData(const Models::DescribeVodDomainUsageDataRequest &request);

      /**
       * @summary Queries the usage data of online editing in ApsaraVideo VOD.
       *
       * @description - Single user call frequency: 10 calls per second.
       * **Supported time granularities**:
       * The adaptive time granularity and the maximum time range for historical data queries vary based on the maximum time span per query.
       * | Time granularity          | Maximum time span per query            | Maximum time range for historical data queries    |
       * | -------------- | -------------- | ------ |
       * | 1 hour       | 7 days      |   31 days  | 
       * | 1 day  | 31 days     |    366 days  |
       *
       * @param request DescribeVodEditingUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodEditingUsageDataResponse
       */
      Models::DescribeVodEditingUsageDataResponse describeVodEditingUsageDataWithOptions(const Models::DescribeVodEditingUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of online editing in ApsaraVideo VOD.
       *
       * @description - Single user call frequency: 10 calls per second.
       * **Supported time granularities**:
       * The adaptive time granularity and the maximum time range for historical data queries vary based on the maximum time span per query.
       * | Time granularity          | Maximum time span per query            | Maximum time range for historical data queries    |
       * | -------------- | -------------- | ------ |
       * | 1 hour       | 7 days      |   31 days  | 
       * | 1 day  | 31 days     |    366 days  |
       *
       * @param request DescribeVodEditingUsageDataRequest
       * @return DescribeVodEditingUsageDataResponse
       */
      Models::DescribeVodEditingUsageDataResponse describeVodEditingUsageData(const Models::DescribeVodEditingUsageDataRequest &request);

      /**
       * @summary Retrieves playback data of an audio or video file on a specified date by media ID (audio or video ID), including the number of unique visitors, average plays per user, total plays, average play duration per user, and total play duration.
       *
       * @description - Currently, this operation is available only in the **China (Shanghai)** region.
       * - Only playback data collected by ApsaraVideo Player SDK is supported. Traffic statistics for audio-only streams are not supported.
       * - Only data within the last 30 days can be queried.
       * >Notice: - Before calling this operation, make sure that ApsaraVideo Player SDK meets the following conditions:
       *   - Android Player SDK or iOS Player SDK
       *     - The Player SDK version is 5.4.9.2 or later.
       *     - A License for the Player SDK has been obtained and integrated. For more information, see [License management](https://help.aliyun.com/document_detail/469166.html).
       *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK. For more information, see [Create a player for Android](~~311525#section-dc4-gp6-xk2~~) and [Create a player for iOS](~~313855#section-cmf-k7d-jg5~~).
       *   - Web Player SDK
       *      - The Player SDK version is 2.16.0 or later.
       *     - A License for **Playback Quality Monitoring** has been obtained and integrated. Submit the [Web Player SDK value-added service application form](https://yida.alibaba-inc.com/o/webplayer#/) to apply. For the License integration method, see the `license` property in [Web SDK API reference](~~125572#section-3ty-gwp-6pa~~).
       *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK.
       *
       * @param request DescribeVodMediaPlayDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodMediaPlayDataResponse
       */
      Models::DescribeVodMediaPlayDataResponse describeVodMediaPlayDataWithOptions(const Models::DescribeVodMediaPlayDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves playback data of an audio or video file on a specified date by media ID (audio or video ID), including the number of unique visitors, average plays per user, total plays, average play duration per user, and total play duration.
       *
       * @description - Currently, this operation is available only in the **China (Shanghai)** region.
       * - Only playback data collected by ApsaraVideo Player SDK is supported. Traffic statistics for audio-only streams are not supported.
       * - Only data within the last 30 days can be queried.
       * >Notice: - Before calling this operation, make sure that ApsaraVideo Player SDK meets the following conditions:
       *   - Android Player SDK or iOS Player SDK
       *     - The Player SDK version is 5.4.9.2 or later.
       *     - A License for the Player SDK has been obtained and integrated. For more information, see [License management](https://help.aliyun.com/document_detail/469166.html).
       *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK. For more information, see [Create a player for Android](~~311525#section-dc4-gp6-xk2~~) and [Create a player for iOS](~~313855#section-cmf-k7d-jg5~~).
       *   - Web Player SDK
       *      - The Player SDK version is 2.16.0 or later.
       *     - A License for **Playback Quality Monitoring** has been obtained and integrated. Submit the [Web Player SDK value-added service application form](https://yida.alibaba-inc.com/o/webplayer#/) to apply. For the License integration method, see the `license` property in [Web SDK API reference](~~125572#section-3ty-gwp-6pa~~).
       *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK.
       *
       * @param request DescribeVodMediaPlayDataRequest
       * @return DescribeVodMediaPlayDataResponse
       */
      Models::DescribeVodMediaPlayDataResponse describeVodMediaPlayData(const Models::DescribeVodMediaPlayDataRequest &request);

      /**
       * @summary Queries the aggregated playback data of the player.
       *
       * @param request DescribeVodPlayerCollectDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodPlayerCollectDataResponse
       */
      Models::DescribeVodPlayerCollectDataResponse describeVodPlayerCollectDataWithOptions(const Models::DescribeVodPlayerCollectDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the aggregated playback data of the player.
       *
       * @param request DescribeVodPlayerCollectDataRequest
       * @return DescribeVodPlayerCollectDataResponse
       */
      Models::DescribeVodPlayerCollectDataResponse describeVodPlayerCollectData(const Models::DescribeVodPlayerCollectDataRequest &request);

      /**
       * @summary Queries the metadata of player dimensions.
       *
       * @param request DescribeVodPlayerDimensionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodPlayerDimensionDataResponse
       */
      Models::DescribeVodPlayerDimensionDataResponse describeVodPlayerDimensionDataWithOptions(const Models::DescribeVodPlayerDimensionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of player dimensions.
       *
       * @param request DescribeVodPlayerDimensionDataRequest
       * @return DescribeVodPlayerDimensionDataResponse
       */
      Models::DescribeVodPlayerDimensionDataResponse describeVodPlayerDimensionData(const Models::DescribeVodPlayerDimensionDataRequest &request);

      /**
       * @summary Queries player metric data.
       *
       * @param request DescribeVodPlayerMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodPlayerMetricDataResponse
       */
      Models::DescribeVodPlayerMetricDataResponse describeVodPlayerMetricDataWithOptions(const Models::DescribeVodPlayerMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries player metric data.
       *
       * @param request DescribeVodPlayerMetricDataRequest
       * @return DescribeVodPlayerMetricDataResponse
       */
      Models::DescribeVodPlayerMetricDataResponse describeVodPlayerMetricData(const Models::DescribeVodPlayerMetricDataRequest &request);

      /**
       * @summary Queries access data for an accelerated domain name by ISP or region, including bandwidth, average response rate, page views, cache hit ratio, and request hit ratio.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - The maximum time range for a single query (the time range between StartTime and EndTime) is 1 hour.
       * **Supported time granularities**
       * Based on the time range specified by `StartTime` and `EndTime`, the default data timestamp granularity, queryable historical data range, and data latency are as follows:
       * |Time granularity	|Time range per query|Queryable historical data range|Data latency|
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes	|≤ 1 hour	|93 days	|15 minutes|
       *
       * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodRangeDataByLocateAndIspServiceResponse
       */
      Models::DescribeVodRangeDataByLocateAndIspServiceResponse describeVodRangeDataByLocateAndIspServiceWithOptions(const Models::DescribeVodRangeDataByLocateAndIspServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries access data for an accelerated domain name by ISP or region, including bandwidth, average response rate, page views, cache hit ratio, and request hit ratio.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       * - The maximum time range for a single query (the time range between StartTime and EndTime) is 1 hour.
       * **Supported time granularities**
       * Based on the time range specified by `StartTime` and `EndTime`, the default data timestamp granularity, queryable historical data range, and data latency are as follows:
       * |Time granularity	|Time range per query|Queryable historical data range|Data latency|
       * | ------------- |------------   | ----------- | ----------- |
       * |5 minutes	|≤ 1 hour	|93 days	|15 minutes|
       *
       * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
       * @return DescribeVodRangeDataByLocateAndIspServiceResponse
       */
      Models::DescribeVodRangeDataByLocateAndIspServiceResponse describeVodRangeDataByLocateAndIspService(const Models::DescribeVodRangeDataByLocateAndIspServiceRequest &request);

      /**
       * @summary Queries the maximum number and remaining daily quota of URLs and directories for purge and prefetch operations.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
       *
       * @param request DescribeVodRefreshQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodRefreshQuotaResponse
       */
      Models::DescribeVodRefreshQuotaResponse describeVodRefreshQuotaWithOptions(const Models::DescribeVodRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum number and remaining daily quota of URLs and directories for purge and prefetch operations.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
       *
       * @param request DescribeVodRefreshQuotaRequest
       * @return DescribeVodRefreshQuotaResponse
       */
      Models::DescribeVodRefreshQuotaResponse describeVodRefreshQuota(const Models::DescribeVodRefreshQuotaRequest &request);

      /**
       * @summary Queries whether refresh and prefetch tasks have taken effect.
       *
       * @description - Currently, the service endpoint supports only **China (Shanghai)**.
       * - If neither TaskId nor ObjectPath is specified, the system queries the first page of data (20 entries) generated within the last three days by default. You can specify both TaskId and ObjectPath at the same time.
       * - If you specify DomainName or Status, ObjectType is required.
       *
       * @param request DescribeVodRefreshTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodRefreshTasksResponse
       */
      Models::DescribeVodRefreshTasksResponse describeVodRefreshTasksWithOptions(const Models::DescribeVodRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether refresh and prefetch tasks have taken effect.
       *
       * @description - Currently, the service endpoint supports only **China (Shanghai)**.
       * - If neither TaskId nor ObjectPath is specified, the system queries the first page of data (20 entries) generated within the last three days by default. You can specify both TaskId and ObjectPath at the same time.
       * - If you specify DomainName or Status, ObjectType is required.
       *
       * @param request DescribeVodRefreshTasksRequest
       * @return DescribeVodRefreshTasksResponse
       */
      Models::DescribeVodRefreshTasksResponse describeVodRefreshTasks(const Models::DescribeVodRefreshTasksRequest &request);

      /**
       * @summary Queries certificate list information by domain name.
       *
       * @description This operation currently supports only the **China (Shanghai)** region.
       *
       * @param request DescribeVodSSLCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodSSLCertificateListResponse
       */
      Models::DescribeVodSSLCertificateListResponse describeVodSSLCertificateListWithOptions(const Models::DescribeVodSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries certificate list information by domain name.
       *
       * @description This operation currently supports only the **China (Shanghai)** region.
       *
       * @param request DescribeVodSSLCertificateListRequest
       * @return DescribeVodSSLCertificateListResponse
       */
      Models::DescribeVodSSLCertificateListResponse describeVodSSLCertificateList(const Models::DescribeVodSSLCertificateListRequest &request);

      /**
       * @summary Queries the usage of media asset management, including storage space and outbound storage traffic.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodStorageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodStorageDataResponse
       */
      Models::DescribeVodStorageDataResponse describeVodStorageDataWithOptions(const Models::DescribeVodStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of media asset management, including storage space and outbound storage traffic.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodStorageDataRequest
       * @return DescribeVodStorageDataResponse
       */
      Models::DescribeVodStorageDataResponse describeVodStorageData(const Models::DescribeVodStorageDataRequest &request);

      /**
       * @summary Queries the usage of tiered storage for media asset management.
       *
       * @description - Currently, the service is available only in the **China (Shanghai)** region.
       * - If the query time range is within 7 days, hourly data is returned. If the query time range is greater than 7 days, daily data is returned. The maximum time range is 31 days.
       *
       * @param request DescribeVodTieringStorageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodTieringStorageDataResponse
       */
      Models::DescribeVodTieringStorageDataResponse describeVodTieringStorageDataWithOptions(const Models::DescribeVodTieringStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage of tiered storage for media asset management.
       *
       * @description - Currently, the service is available only in the **China (Shanghai)** region.
       * - If the query time range is within 7 days, hourly data is returned. If the query time range is greater than 7 days, daily data is returned. The maximum time range is 31 days.
       *
       * @param request DescribeVodTieringStorageDataRequest
       * @return DescribeVodTieringStorageDataResponse
       */
      Models::DescribeVodTieringStorageDataResponse describeVodTieringStorageData(const Models::DescribeVodTieringStorageDataRequest &request);

      /**
       * @summary Queries the retrieval data usage of tiered storage in media asset management.
       *
       * @description > - Currently, the service address supports only **China (Shanghai)**.
       * > - If the query time interval is within 7 days, data at the hour granularity is returned. If the query time interval is greater than 7 days, data at the day granularity is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodTieringStorageRetrievalDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodTieringStorageRetrievalDataResponse
       */
      Models::DescribeVodTieringStorageRetrievalDataResponse describeVodTieringStorageRetrievalDataWithOptions(const Models::DescribeVodTieringStorageRetrievalDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the retrieval data usage of tiered storage in media asset management.
       *
       * @description > - Currently, the service address supports only **China (Shanghai)**.
       * > - If the query time interval is within 7 days, data at the hour granularity is returned. If the query time interval is greater than 7 days, data at the day granularity is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodTieringStorageRetrievalDataRequest
       * @return DescribeVodTieringStorageRetrievalDataResponse
       */
      Models::DescribeVodTieringStorageRetrievalDataResponse describeVodTieringStorageRetrievalData(const Models::DescribeVodTieringStorageRetrievalDataRequest &request);

      /**
       * @summary Queries transcoding usage data.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodTranscodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodTranscodeDataResponse
       */
      Models::DescribeVodTranscodeDataResponse describeVodTranscodeDataWithOptions(const Models::DescribeVodTranscodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transcoding usage data.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
       *
       * @param request DescribeVodTranscodeDataRequest
       * @return DescribeVodTranscodeDataResponse
       */
      Models::DescribeVodTranscodeDataResponse describeVodTranscodeData(const Models::DescribeVodTranscodeDataRequest &request);

      /**
       * @summary Queries all ApsaraVideo VOD accelerated domain names under your account.
       *
       * @description - Supports fuzzy match filtering and domain name status filtering.
       * - This operation is currently available only in the following region: **China (Shanghai)**.
       *
       * @param request DescribeVodUserDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodUserDomainsResponse
       */
      Models::DescribeVodUserDomainsResponse describeVodUserDomainsWithOptions(const Models::DescribeVodUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all ApsaraVideo VOD accelerated domain names under your account.
       *
       * @description - Supports fuzzy match filtering and domain name status filtering.
       * - This operation is currently available only in the following region: **China (Shanghai)**.
       *
       * @param request DescribeVodUserDomainsRequest
       * @return DescribeVodUserDomainsResponse
       */
      Models::DescribeVodUserDomainsResponse describeVodUserDomains(const Models::DescribeVodUserDomainsRequest &request);

      /**
       * @summary Queries the IP address list of a domain name.
       *
       * @description This operation is supported only in the China (Shanghai) region.
       *
       * @param request DescribeVodUserVipsByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodUserVipsByDomainResponse
       */
      Models::DescribeVodUserVipsByDomainResponse describeVodUserVipsByDomainWithOptions(const Models::DescribeVodUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP address list of a domain name.
       *
       * @description This operation is supported only in the China (Shanghai) region.
       *
       * @param request DescribeVodUserVipsByDomainRequest
       * @return DescribeVodUserVipsByDomainResponse
       */
      Models::DescribeVodUserVipsByDomainResponse describeVodUserVipsByDomain(const Models::DescribeVodUserVipsByDomainRequest &request);

      /**
       * @summary Retrieves the domain ownership verification content.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVodVerifyContentResponse
       */
      Models::DescribeVodVerifyContentResponse describeVodVerifyContentWithOptions(const Models::DescribeVodVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the domain ownership verification content.
       *
       * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
       *
       * @param request DescribeVodVerifyContentRequest
       * @return DescribeVodVerifyContentResponse
       */
      Models::DescribeVodVerifyContentResponse describeVodVerifyContent(const Models::DescribeVodVerifyContentRequest &request);

      /**
       * @summary Invokes this operation to revoke application authorization from a specified account identity (Resource Access Management (RAM) user or RAM role).
       *
       * @description >Notice: Each Resource Access Management (RAM) user or RAM role can be granted permissions for up to 10 applications.
       * -  If the policy name is **VODAppAdministratorAccess**, **AppId** is optional. For other policies, **AppId** is required.
       *
       * @param request DetachAppPolicyFromIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachAppPolicyFromIdentityResponse
       */
      Models::DetachAppPolicyFromIdentityResponse detachAppPolicyFromIdentityWithOptions(const Models::DetachAppPolicyFromIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to revoke application authorization from a specified account identity (Resource Access Management (RAM) user or RAM role).
       *
       * @description >Notice: Each Resource Access Management (RAM) user or RAM role can be granted permissions for up to 10 applications.
       * -  If the policy name is **VODAppAdministratorAccess**, **AppId** is optional. For other policies, **AppId** is required.
       *
       * @param request DetachAppPolicyFromIdentityRequest
       * @return DetachAppPolicyFromIdentityResponse
       */
      Models::DetachAppPolicyFromIdentityResponse detachAppPolicyFromIdentity(const Models::DetachAppPolicyFromIdentityRequest &request);

      /**
       * @summary Generates a key for secure download. The secure download feature of ApsaraVideo Player SDK encrypts videos with a key file when they are downloaded to a local device. This ensures that the videos can only be decrypted and played by using the key file generated by a pre-bound unique app, which effectively protects video content and prevents downloaded videos from being maliciously played or distributed.
       *
       * @description - To use the secure download feature, you must first enable the download feature and set the download method to secure download in the ApsaraVideo VOD console. For more information, see [Download settings](https://help.aliyun.com/document_detail/86107.html).
       * - After generating a key for secure download, you must configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
       *
       * @param request GenerateDownloadSecretKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDownloadSecretKeyResponse
       */
      Models::GenerateDownloadSecretKeyResponse generateDownloadSecretKeyWithOptions(const Models::GenerateDownloadSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a key for secure download. The secure download feature of ApsaraVideo Player SDK encrypts videos with a key file when they are downloaded to a local device. This ensures that the videos can only be decrypted and played by using the key file generated by a pre-bound unique app, which effectively protects video content and prevents downloaded videos from being maliciously played or distributed.
       *
       * @description - To use the secure download feature, you must first enable the download feature and set the download method to secure download in the ApsaraVideo VOD console. For more information, see [Download settings](https://help.aliyun.com/document_detail/86107.html).
       * - After generating a key for secure download, you must configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
       *
       * @param request GenerateDownloadSecretKeyRequest
       * @return GenerateDownloadSecretKeyResponse
       */
      Models::GenerateDownloadSecretKeyResponse generateDownloadSecretKey(const Models::GenerateDownloadSecretKeyRequest &request);

      /**
       * @summary Invokes the operation to generate a random KMS data key (DK) for ApsaraVideo VOD HLS encryption.
       *
       * @param request GenerateKMSDataKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKeyWithOptions(const Models::GenerateKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the operation to generate a random KMS data key (DK) for ApsaraVideo VOD HLS encryption.
       *
       * @param request GenerateKMSDataKeyRequest
       * @return GenerateKMSDataKeyResponse
       */
      Models::GenerateKMSDataKeyResponse generateKMSDataKey(const Models::GenerateKMSDataKeyRequest &request);

      /**
       * @summary Queries the list of AI image tasks.
       *
       * @description - This operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - Submit an AI image processing task by calling the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation, and then call this operation to query the list of AI image tasks.
       * - You can query up to 10 AI image processing tasks at a time.
       *
       * @param request GetAIImageJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIImageJobsResponse
       */
      Models::GetAIImageJobsResponse getAIImageJobsWithOptions(const Models::GetAIImageJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI image tasks.
       *
       * @description - This operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - Submit an AI image processing task by calling the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation, and then call this operation to query the list of AI image tasks.
       * - You can query up to 10 AI image processing tasks at a time.
       *
       * @param request GetAIImageJobsRequest
       * @return GetAIImageJobsResponse
       */
      Models::GetAIImageJobsResponse getAIImageJobs(const Models::GetAIImageJobsRequest &request);

      /**
       * @summary Queries automated review jobs. After an AI job is submitted, it is processed asynchronously. You can call this operation to query the job information in real time.
       *
       * @description <props="intl">
       * - This operation is supported only in the Singapore region.
       * - Image resources in the results of automated review jobs are retained in the free storage provided by ApsaraVideo VOD for only two weeks. They are automatically deleted after two weeks.
       *
       * @param request GetAIMediaAuditJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIMediaAuditJobResponse
       */
      Models::GetAIMediaAuditJobResponse getAIMediaAuditJobWithOptions(const Models::GetAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries automated review jobs. After an AI job is submitted, it is processed asynchronously. You can call this operation to query the job information in real time.
       *
       * @description <props="intl">
       * - This operation is supported only in the Singapore region.
       * - Image resources in the results of automated review jobs are retained in the free storage provided by ApsaraVideo VOD for only two weeks. They are automatically deleted after two weeks.
       *
       * @param request GetAIMediaAuditJobRequest
       * @return GetAIMediaAuditJobResponse
       */
      Models::GetAIMediaAuditJobResponse getAIMediaAuditJob(const Models::GetAIMediaAuditJobRequest &request);

      /**
       * @summary Queries an AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Obtain the AI template ID first, and then call this operation to query the configuration information of the AI template.
       *
       * @param request GetAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAITemplateResponse
       */
      Models::GetAITemplateResponse getAITemplateWithOptions(const Models::GetAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Obtain the AI template ID first, and then call this operation to query the configuration information of the AI template.
       *
       * @param request GetAITemplateRequest
       * @return GetAITemplateResponse
       */
      Models::GetAITemplateResponse getAITemplate(const Models::GetAITemplateRequest &request);

      /**
       * @summary Retrieves the smart tagging results.
       *
       * @description - This operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - Retrieves smart tagging results by video ID.
       *
       * @param request GetAIVideoTagResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAIVideoTagResultResponse
       */
      Models::GetAIVideoTagResultResponse getAIVideoTagResultWithOptions(const Models::GetAIVideoTagResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the smart tagging results.
       *
       * @description - This operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - Retrieves smart tagging results by video ID.
       *
       * @param request GetAIVideoTagResultRequest
       * @return GetAIVideoTagResultResponse
       */
      Models::GetAIVideoTagResultResponse getAIVideoTagResult(const Models::GetAIVideoTagResultRequest &request);

      /**
       * @summary Queries application information by application ID.
       *
       * @description - Batch queries are supported.
       * - AppIds supports a maximum of 10 IDs.
       * ### QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetAppInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppInfosResponse
       */
      Models::GetAppInfosResponse getAppInfosWithOptions(const Models::GetAppInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries application information by application ID.
       *
       * @description - Batch queries are supported.
       * - AppIds supports a maximum of 10 IDs.
       * ### QPS limit
       * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetAppInfosRequest
       * @return GetAppInfosResponse
       */
      Models::GetAppInfosResponse getAppInfos(const Models::GetAppInfosRequest &request);

      /**
       * @summary Retrieves the application playback key.
       *
       * @param request GetAppPlayKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppPlayKeyResponse
       */
      Models::GetAppPlayKeyResponse getAppPlayKeyWithOptions(const Models::GetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the application playback key.
       *
       * @param request GetAppPlayKeyRequest
       * @return GetAppPlayKeyResponse
       */
      Models::GetAppPlayKeyResponse getAppPlayKey(const Models::GetAppPlayKeyRequest &request);

      /**
       * @summary Queries the basic information and access URLs of multiple auxiliary media assets, such as watermark images, subtitle files, and materials, that are uploaded to ApsaraVideo VOD.
       *
       * @description You can retrieve the information of up to 20 auxiliary media assets at a time.
       *
       * @param request GetAttachedMediaInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttachedMediaInfoResponse
       */
      Models::GetAttachedMediaInfoResponse getAttachedMediaInfoWithOptions(const Models::GetAttachedMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information and access URLs of multiple auxiliary media assets, such as watermark images, subtitle files, and materials, that are uploaded to ApsaraVideo VOD.
       *
       * @description You can retrieve the information of up to 20 auxiliary media assets at a time.
       *
       * @param request GetAttachedMediaInfoRequest
       * @return GetAttachedMediaInfoResponse
       */
      Models::GetAttachedMediaInfoResponse getAttachedMediaInfo(const Models::GetAttachedMediaInfoRequest &request);

      /**
       * @summary Retrieves the history of manual review records.
       *
       * @param request GetAuditHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuditHistoryResponse
       */
      Models::GetAuditHistoryResponse getAuditHistoryWithOptions(const Models::GetAuditHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the history of manual review records.
       *
       * @param request GetAuditHistoryRequest
       * @return GetAuditHistoryResponse
       */
      Models::GetAuditHistoryResponse getAuditHistory(const Models::GetAuditHistoryRequest &request);

      /**
       * @summary Invokes this operation to perform a filtered query for specified categorization information and the list of its sub-categorizations by ID or type.
       *
       * @param request GetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategoriesWithOptions(const Models::GetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to perform a filtered query for specified categorization information and the list of its sub-categorizations by ID or type.
       *
       * @param request GetCategoriesRequest
       * @return GetCategoriesResponse
       */
      Models::GetCategoriesResponse getCategories(const Models::GetCategoriesRequest &request);

      /**
       * @summary Retrieves the full traffic data of media assets for a specified date and region. The data is generated based on CDN traffic logs and primarily reflects the traffic consumption of videos. The generated CSV file contains the following information: date, video ID, domain name, traffic, application ID, and category ID. You can download the file to your local machine for scenarios such as operational data analytics.
       *
       * @description - Currently, the service address of this operation only supports: **China (Shanghai)**.
       * - Only data within the past 90 days can be queried (data starts from April 29, 2025).
       * - The traffic data provided by this operation is raw traffic data. To align with billing traffic, multiply the data by a TCP coefficient of 1.1.
       *
       * @param request GetDailyPlayRegionStatisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDailyPlayRegionStatisResponse
       */
      Models::GetDailyPlayRegionStatisResponse getDailyPlayRegionStatisWithOptions(const Models::GetDailyPlayRegionStatisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the full traffic data of media assets for a specified date and region. The data is generated based on CDN traffic logs and primarily reflects the traffic consumption of videos. The generated CSV file contains the following information: date, video ID, domain name, traffic, application ID, and category ID. You can download the file to your local machine for scenarios such as operational data analytics.
       *
       * @description - Currently, the service address of this operation only supports: **China (Shanghai)**.
       * - Only data within the past 90 days can be queried (data starts from April 29, 2025).
       * - The traffic data provided by this operation is raw traffic data. To align with billing traffic, multiply the data by a TCP coefficient of 1.1.
       *
       * @param request GetDailyPlayRegionStatisRequest
       * @return GetDailyPlayRegionStatisResponse
       */
      Models::GetDailyPlayRegionStatisResponse getDailyPlayRegionStatis(const Models::GetDailyPlayRegionStatisRequest &request);

      /**
       * @summary Queries the default AI template.
       *
       * @description - This API operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Currently, you can only query the default AI template for automated review.
       *
       * @param request GetDefaultAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultAITemplateResponse
       */
      Models::GetDefaultAITemplateResponse getDefaultAITemplateWithOptions(const Models::GetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default AI template.
       *
       * @description - This API operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Currently, you can only query the default AI template for automated review.
       *
       * @param request GetDefaultAITemplateRequest
       * @return GetDefaultAITemplateResponse
       */
      Models::GetDefaultAITemplateResponse getDefaultAITemplate(const Models::GetDefaultAITemplateRequest &request);

      /**
       * @summary Queries the results of digital watermark extraction jobs (copyright watermarks or tracing watermarks) after you invoke this operation, including the job status and the successfully extracted watermark text.
       *
       * @description - This API operation is available only in the China (Shanghai) and China (Beijing) regions.
       * - After you invoke the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright watermark or tracing watermark from a video, invoke this operation to query the extracted watermark text.
       * - You can query only the watermark extraction jobs created within the last two years.
       *
       * @param request GetDigitalWatermarkExtractResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDigitalWatermarkExtractResultResponse
       */
      Models::GetDigitalWatermarkExtractResultResponse getDigitalWatermarkExtractResultWithOptions(const Models::GetDigitalWatermarkExtractResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of digital watermark extraction jobs (copyright watermarks or tracing watermarks) after you invoke this operation, including the job status and the successfully extracted watermark text.
       *
       * @description - This API operation is available only in the China (Shanghai) and China (Beijing) regions.
       * - After you invoke the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright watermark or tracing watermark from a video, invoke this operation to query the extracted watermark text.
       * - You can query only the watermark extraction jobs created within the last two years.
       *
       * @param request GetDigitalWatermarkExtractResultRequest
       * @return GetDigitalWatermarkExtractResultResponse
       */
      Models::GetDigitalWatermarkExtractResultResponse getDigitalWatermarkExtractResult(const Models::GetDigitalWatermarkExtractResultRequest &request);

      /**
       * @summary Queries the details of an online editing project (video editing task).
       *
       * @param request GetEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectResponse
       */
      Models::GetEditingProjectResponse getEditingProjectWithOptions(const Models::GetEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an online editing project (video editing task).
       *
       * @param request GetEditingProjectRequest
       * @return GetEditingProjectResponse
       */
      Models::GetEditingProjectResponse getEditingProject(const Models::GetEditingProjectRequest &request);

      /**
       * @summary Queries the list of materials to be edited in an online editing project.
       *
       * @description During the editing process, materials can be added to the timeline, but they are not necessarily fully used.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterialsWithOptions(const Models::GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of materials to be edited in an online editing project.
       *
       * @description During the editing process, materials can be added to the timeline, but they are not necessarily fully used.
       *
       * @param request GetEditingProjectMaterialsRequest
       * @return GetEditingProjectMaterialsResponse
       */
      Models::GetEditingProjectMaterialsResponse getEditingProjectMaterials(const Models::GetEditingProjectMaterialsRequest &request);

      /**
       * @summary Queries the basic information and access URL of an image by image ID after the image is uploaded to ApsaraVideo VOD.
       *
       * @description This operation only supports querying image information for images uploaded to ApsaraVideo VOD. To query snapshot information generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
       *
       * @param request GetImageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageInfoResponse
       */
      Models::GetImageInfoResponse getImageInfoWithOptions(const Models::GetImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information and access URL of an image by image ID after the image is uploaded to ApsaraVideo VOD.
       *
       * @description This operation only supports querying image information for images uploaded to ApsaraVideo VOD. To query snapshot information generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
       *
       * @param request GetImageInfoRequest
       * @return GetImageInfoResponse
       */
      Models::GetImageInfoResponse getImageInfo(const Models::GetImageInfoRequest &request);

      /**
       * @summary Retrieves the basic information and access URLs of multiple images uploaded to ApsaraVideo VOD by specifying image IDs.
       *
       * @description - This operation only supports querying image information for images uploaded to ApsaraVideo VOD. To query snapshot information generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
       * - You can query information about up to 20 images at a time.
       *
       * @param request GetImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageInfosResponse
       */
      Models::GetImageInfosResponse getImageInfosWithOptions(const Models::GetImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information and access URLs of multiple images uploaded to ApsaraVideo VOD by specifying image IDs.
       *
       * @description - This operation only supports querying image information for images uploaded to ApsaraVideo VOD. To query snapshot information generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
       * - You can query information about up to 20 images at a time.
       *
       * @param request GetImageInfosRequest
       * @return GetImageInfosResponse
       */
      Models::GetImageInfosResponse getImageInfos(const Models::GetImageInfosRequest &request);

      /**
       * @summary Queries the details of an asynchronous task based on the job ID.
       *
       * @description **Usage notes**
       * This operation only supports querying asynchronous task data within the last 6 months. Queryable task types include transcoding tasks, snapshot tasks, AI tasks, and workflow tasks.
       * **QPS limit**
       * The QPS limit for a single user calling this operation is 15 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetJobDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobDetailResponse
       */
      Models::GetJobDetailResponse getJobDetailWithOptions(const Models::GetJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an asynchronous task based on the job ID.
       *
       * @description **Usage notes**
       * This operation only supports querying asynchronous task data within the last 6 months. Queryable task types include transcoding tasks, snapshot tasks, AI tasks, and workflow tasks.
       * **QPS limit**
       * The QPS limit for a single user calling this operation is 15 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetJobDetailRequest
       * @return GetJobDetailResponse
       */
      Models::GetJobDetailResponse getJobDetail(const Models::GetJobDetailRequest &request);

      /**
       * @summary Retrieves the results of video AI analysis.
       *
       * @param request GetMediaAiAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAiAnalysisResponse
       */
      Models::GetMediaAiAnalysisResponse getMediaAiAnalysisWithOptions(const Models::GetMediaAiAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the results of video AI analysis.
       *
       * @param request GetMediaAiAnalysisRequest
       * @return GetMediaAiAnalysisResponse
       */
      Models::GetMediaAiAnalysisResponse getMediaAiAnalysis(const Models::GetMediaAiAnalysisRequest &request);

      /**
       * @summary Retrieves the details of the automated audio review.
       *
       * @description ### Usage notes
       * <props="china">After the automated review is completed, if you have configured the [Automated review completed](https://help.aliyun.com/document_detail/89576.html) event notification, the system sends a callback notification to the callback URL. You can call this operation to query the details of the audio review results.
       * <props="intl">
       * - This operation is supported only in the Singapore region.
       * - After the automated review is completed, if you have configured the [Automated review completed](https://help.aliyun.com/document_detail/89576.html) event notification, the system sends a callback notification to the callback URL. You can call this operation to query the details of the audio review results.
       *
       * @param request GetMediaAuditAudioResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditAudioResultDetailResponse
       */
      Models::GetMediaAuditAudioResultDetailResponse getMediaAuditAudioResultDetailWithOptions(const Models::GetMediaAuditAudioResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of the automated audio review.
       *
       * @description ### Usage notes
       * <props="china">After the automated review is completed, if you have configured the [Automated review completed](https://help.aliyun.com/document_detail/89576.html) event notification, the system sends a callback notification to the callback URL. You can call this operation to query the details of the audio review results.
       * <props="intl">
       * - This operation is supported only in the Singapore region.
       * - After the automated review is completed, if you have configured the [Automated review completed](https://help.aliyun.com/document_detail/89576.html) event notification, the system sends a callback notification to the callback URL. You can call this operation to query the details of the audio review results.
       *
       * @param request GetMediaAuditAudioResultDetailRequest
       * @return GetMediaAuditAudioResultDetailResponse
       */
      Models::GetMediaAuditAudioResultDetailResponse getMediaAuditAudioResultDetail(const Models::GetMediaAuditAudioResultDetailRequest &request);

      /**
       * @summary Retrieves the summary of automated review results.
       *
       * @description <props="intl">
       * ### Usage notes
       * This operation is supported only in the Singapore region.
       * ### QPS limit
       * The queries per second (QPS) limit per user for this operation is 20. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetMediaAuditResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditResultResponse
       */
      Models::GetMediaAuditResultResponse getMediaAuditResultWithOptions(const Models::GetMediaAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the summary of automated review results.
       *
       * @description <props="intl">
       * ### Usage notes
       * This operation is supported only in the Singapore region.
       * ### QPS limit
       * The queries per second (QPS) limit per user for this operation is 20. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetMediaAuditResultRequest
       * @return GetMediaAuditResultResponse
       */
      Models::GetMediaAuditResultResponse getMediaAuditResult(const Models::GetMediaAuditResultRequest &request);

      /**
       * @summary Retrieves the details of automated review results in real time.
       *
       * @description - By default, only the details of snapshots that are flagged as violations or suspected violations are returned. Results cannot be queried for videos and images that do not contain violations.
       * - Image resources in review results are retained in the free storage provided by ApsaraVideo VOD for only two weeks. They are automatically deleted after two weeks.
       * <props="intl">
       * - This operation is supported only in the Singapore region.
       *
       * @param request GetMediaAuditResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditResultDetailResponse
       */
      Models::GetMediaAuditResultDetailResponse getMediaAuditResultDetailWithOptions(const Models::GetMediaAuditResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of automated review results in real time.
       *
       * @description - By default, only the details of snapshots that are flagged as violations or suspected violations are returned. Results cannot be queried for videos and images that do not contain violations.
       * - Image resources in review results are retained in the free storage provided by ApsaraVideo VOD for only two weeks. They are automatically deleted after two weeks.
       * <props="intl">
       * - This operation is supported only in the Singapore region.
       *
       * @param request GetMediaAuditResultDetailRequest
       * @return GetMediaAuditResultDetailResponse
       */
      Models::GetMediaAuditResultDetailResponse getMediaAuditResultDetail(const Models::GetMediaAuditResultDetailRequest &request);

      /**
       * @summary Retrieves the timestamps of all screenshots that contain violations.
       *
       * @description > By default, only screenshot details for violations and suspected violations are returned. No results are returned for compliant videos and images.
       * <props="intl">
       * This operation is supported only in the Singapore region.
       *
       * @param request GetMediaAuditResultTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaAuditResultTimelineResponse
       */
      Models::GetMediaAuditResultTimelineResponse getMediaAuditResultTimelineWithOptions(const Models::GetMediaAuditResultTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the timestamps of all screenshots that contain violations.
       *
       * @description > By default, only screenshot details for violations and suspected violations are returned. No results are returned for compliant videos and images.
       * <props="intl">
       * This operation is supported only in the Singapore region.
       *
       * @param request GetMediaAuditResultTimelineRequest
       * @return GetMediaAuditResultTimelineResponse
       */
      Models::GetMediaAuditResultTimelineResponse getMediaAuditResultTimeline(const Models::GetMediaAuditResultTimelineRequest &request);

      /**
       * @summary Retrieves media fingerprint results. After a media fingerprint job is complete, you can call this operation to query the results in real time.
       *
       * @description This operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request GetMediaDNAResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaDNAResultResponse
       */
      Models::GetMediaDNAResultResponse getMediaDNAResultWithOptions(const Models::GetMediaDNAResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves media fingerprint results. After a media fingerprint job is complete, you can call this operation to query the results in real time.
       *
       * @description This operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request GetMediaDNAResultRequest
       * @return GetMediaDNAResultResponse
       */
      Models::GetMediaDNAResultResponse getMediaDNAResult(const Models::GetMediaDNAResultRequest &request);

      /**
       * @summary Queries task information such as task status and filter policies for video refresh or prefetch tasks.
       *
       * @description ### Usage notes
       * You can query the task information of all audio and video files under a refresh or prefetch task, or specify a single audio or video file to query its task information.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user calling this API operation is 50. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetMediaRefreshJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaRefreshJobsResponse
       */
      Models::GetMediaRefreshJobsResponse getMediaRefreshJobsWithOptions(const Models::GetMediaRefreshJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries task information such as task status and filter policies for video refresh or prefetch tasks.
       *
       * @description ### Usage notes
       * You can query the task information of all audio and video files under a refresh or prefetch task, or specify a single audio or video file to query its task information.
       * ### QPS limit
       * The queries per second (QPS) limit for a single user calling this API operation is 50. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetMediaRefreshJobsRequest
       * @return GetMediaRefreshJobsResponse
       */
      Models::GetMediaRefreshJobsResponse getMediaRefreshJobs(const Models::GetMediaRefreshJobsRequest &request);

      /**
       * @summary Queries the callback method, callback URL, and event types of event notifications.
       *
       * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetMessageCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessageCallbackResponse
       */
      Models::GetMessageCallbackResponse getMessageCallbackWithOptions(const Models::GetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the callback method, callback URL, and event types of event notifications.
       *
       * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
       *
       * @param request GetMessageCallbackRequest
       * @return GetMessageCallbackResponse
       */
      Models::GetMessageCallbackResponse getMessageCallback(const Models::GetMessageCallbackRequest &request);

      /**
       * @summary Retrieves the source file information of an audio or video file, including the file URL, resolution, and bitrate.
       *
       * @description You can retrieve the complete source file information only after a video or audio stream is transcoded.
       *
       * @param request GetMezzanineInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMezzanineInfoResponse
       */
      Models::GetMezzanineInfoResponse getMezzanineInfoWithOptions(const Models::GetMezzanineInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the source file information of an audio or video file, including the file URL, resolution, and bitrate.
       *
       * @description You can retrieve the complete source file information only after a video or audio stream is transcoded.
       *
       * @param request GetMezzanineInfoRequest
       * @return GetMezzanineInfoResponse
       */
      Models::GetMezzanineInfoResponse getMezzanineInfo(const Models::GetMezzanineInfoRequest &request);

      /**
       * @summary Retrieves the playback URL of an audio or video file based on the media ID. You can then use ApsaraVideo Player or a third-party player, such as a native, open-source, or custom player, to play the media content.
       *
       * @description - **Before you invoke this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Downloading or playing videos directly from the playback URL of ApsaraVideo VOD incurs outbound traffic fees. If no accelerated domain name is configured, refer to [Billing of storage outbound traffic](~~188308#section-rwh-e88-f7j~~). If an accelerated domain name is configured, refer to [Billing of acceleration services](~~188308#section-c5t-oq9-15e~~). If you have enabled storage transfer acceleration, downloading or playing videos directly from the playback URL of ApsaraVideo VOD also incurs download acceleration fees. For billing details, refer to [Billing of storage transfer acceleration](~~188310#section_sta_zm2_tsv~~).**
       * - Only videos in the Normal status (the value of the Status field is Normal) can be played normally. For more information about the playback instructions and limits of playback URLs, refer to [Media playback](https://help.aliyun.com/document_detail/57290.html).
       * - When the [media asset storage](https://help.aliyun.com/document_detail/2392368.html) type is non-standard storage, you must configure the StorageClass field in the PlayConfig parameter accordingly. For more information, refer to [PlayConfig](~~86952#section-9g7-s9b-v7z~~).
       * - If video playback is abnormal, you can invoke the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the information about the video source file is correct.
       * <props="china">
       * - To invoke this operation to generate an m3u8 tracing watermark video stream, submit a ticket to apply for activation. For more information about how to submit a ticket, refer to [Contact us](https://help.aliyun.com/document_detail/464625.html). For more information about tracing watermarks, refer to [Digital watermarking](https://help.aliyun.com/document_detail/2527021.html).
       *
       * @param request GetPlayInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfoWithOptions(const Models::GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the playback URL of an audio or video file based on the media ID. You can then use ApsaraVideo Player or a third-party player, such as a native, open-source, or custom player, to play the media content.
       *
       * @description - **Before you invoke this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Downloading or playing videos directly from the playback URL of ApsaraVideo VOD incurs outbound traffic fees. If no accelerated domain name is configured, refer to [Billing of storage outbound traffic](~~188308#section-rwh-e88-f7j~~). If an accelerated domain name is configured, refer to [Billing of acceleration services](~~188308#section-c5t-oq9-15e~~). If you have enabled storage transfer acceleration, downloading or playing videos directly from the playback URL of ApsaraVideo VOD also incurs download acceleration fees. For billing details, refer to [Billing of storage transfer acceleration](~~188310#section_sta_zm2_tsv~~).**
       * - Only videos in the Normal status (the value of the Status field is Normal) can be played normally. For more information about the playback instructions and limits of playback URLs, refer to [Media playback](https://help.aliyun.com/document_detail/57290.html).
       * - When the [media asset storage](https://help.aliyun.com/document_detail/2392368.html) type is non-standard storage, you must configure the StorageClass field in the PlayConfig parameter accordingly. For more information, refer to [PlayConfig](~~86952#section-9g7-s9b-v7z~~).
       * - If video playback is abnormal, you can invoke the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the information about the video source file is correct.
       * <props="china">
       * - To invoke this operation to generate an m3u8 tracing watermark video stream, submit a ticket to apply for activation. For more information about how to submit a ticket, refer to [Contact us](https://help.aliyun.com/document_detail/464625.html). For more information about tracing watermarks, refer to [Digital watermarking](https://help.aliyun.com/document_detail/2527021.html).
       *
       * @param request GetPlayInfoRequest
       * @return GetPlayInfoResponse
       */
      Models::GetPlayInfoResponse getPlayInfo(const Models::GetPlayInfoRequest &request);

      /**
       * @summary Queries video transcoding summary of one or more audio or video files by their IDs, including video transcoding status and transcoding progress.
       *
       * @description - Because an audio or video file may be transcoded multiple times, this operation returns only the most recent transcoding summary.
       * - Batch queries are supported. You can query the transcoding summaries of up to 10 audio or video files at a time.
       * - To query historical transcoding task information, call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation.
       * - **This operation supports querying transcoding task data only within the last year.**
       *
       * @param request GetTranscodeSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeSummaryResponse
       */
      Models::GetTranscodeSummaryResponse getTranscodeSummaryWithOptions(const Models::GetTranscodeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries video transcoding summary of one or more audio or video files by their IDs, including video transcoding status and transcoding progress.
       *
       * @description - Because an audio or video file may be transcoded multiple times, this operation returns only the most recent transcoding summary.
       * - Batch queries are supported. You can query the transcoding summaries of up to 10 audio or video files at a time.
       * - To query historical transcoding task information, call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation.
       * - **This operation supports querying transcoding task data only within the last year.**
       *
       * @param request GetTranscodeSummaryRequest
       * @return GetTranscodeSummaryResponse
       */
      Models::GetTranscodeSummaryResponse getTranscodeSummary(const Models::GetTranscodeSummaryRequest &request);

      /**
       * @summary Queries the details of transcoding jobs based on the transcoding task ID.
       *
       * @description ### Usage notes
       * **This operation only supports querying transcoding task data within the last year.**
       * ### QPS limit
       * The queries per second (QPS) limit for a single user calling this operation is 15. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetTranscodeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeTaskResponse
       */
      Models::GetTranscodeTaskResponse getTranscodeTaskWithOptions(const Models::GetTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of transcoding jobs based on the transcoding task ID.
       *
       * @description ### Usage notes
       * **This operation only supports querying transcoding task data within the last year.**
       * ### QPS limit
       * The queries per second (QPS) limit for a single user calling this operation is 15. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetTranscodeTaskRequest
       * @return GetTranscodeTaskResponse
       */
      Models::GetTranscodeTaskResponse getTranscodeTask(const Models::GetTranscodeTaskRequest &request);

      /**
       * @summary Queries the details of the transcoding configuration based on the ID of the transcoding template group.
       *
       * @description Retrieves the information about a single template group and returns the configuration information of all transcoding templates in the template group.
       *
       * @param request GetTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTranscodeTemplateGroupResponse
       */
      Models::GetTranscodeTemplateGroupResponse getTranscodeTemplateGroupWithOptions(const Models::GetTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the transcoding configuration based on the ID of the transcoding template group.
       *
       * @description Retrieves the information about a single template group and returns the configuration information of all transcoding templates in the template group.
       *
       * @param request GetTranscodeTemplateGroupRequest
       * @return GetTranscodeTemplateGroupResponse
       */
      Models::GetTranscodeTemplateGroupResponse getTranscodeTemplateGroup(const Models::GetTranscodeTemplateGroupRequest &request);

      /**
       * @summary Queries URL upload information.
       *
       * @description - Retrieves URL upload information by using the JobId returned during URL upload or the URL used for upload. The information includes the URL upload status, UserData, creation time, and completion time.
       * - **This operation only supports querying upload task data within the last year.**
       * - This operation is currently available only in the following regions: **China (Shanghai)** and **Singapore**.
       * - After you call the [UploadMediaByURL](~~UploadMediaByURL~~) operation to upload media files to ApsaraVideo VOD, you can call this operation to query the upload information of specified media files by using the URL pull upload task IDs (JobIds) or the media source file URLs (UploadURLs).
       * - When you call this operation, you must specify either JobIds or UploadURLs. If both are specified, only JobIds is processed.
       * - If a media file fails to be uploaded, you can call this operation to view the error code and error message. If a media file is uploaded, you can call this operation to view the corresponding media ID.
       *
       * @param request GetURLUploadInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetURLUploadInfosResponse
       */
      Models::GetURLUploadInfosResponse getURLUploadInfosWithOptions(const Models::GetURLUploadInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries URL upload information.
       *
       * @description - Retrieves URL upload information by using the JobId returned during URL upload or the URL used for upload. The information includes the URL upload status, UserData, creation time, and completion time.
       * - **This operation only supports querying upload task data within the last year.**
       * - This operation is currently available only in the following regions: **China (Shanghai)** and **Singapore**.
       * - After you call the [UploadMediaByURL](~~UploadMediaByURL~~) operation to upload media files to ApsaraVideo VOD, you can call this operation to query the upload information of specified media files by using the URL pull upload task IDs (JobIds) or the media source file URLs (UploadURLs).
       * - When you call this operation, you must specify either JobIds or UploadURLs. If both are specified, only JobIds is processed.
       * - If a media file fails to be uploaded, you can call this operation to view the error code and error message. If a media file is uploaded, you can call this operation to view the corresponding media ID.
       *
       * @param request GetURLUploadInfosRequest
       * @return GetURLUploadInfosResponse
       */
      Models::GetURLUploadInfosResponse getURLUploadInfos(const Models::GetURLUploadInfosRequest &request);

      /**
       * @summary Queries the upload details of one or more media assets by media ID, such as the upload time, upload ratio, and upload source.
       *
       * @description - This operation only supports querying the upload details of audio and video files.
       * - If the audio or video file is uploaded through the ApsaraVideo VOD console, you can obtain information such as the upload ratio by calling this operation. If the audio or video file is uploaded by using an SDK, you can obtain the upload details only if the [upload SDK](https://help.aliyun.com/document_detail/52200.html) meets the following requirements.
       * > Only server-the upload SDKs support this operation. Client-the upload SDKs do not support this operation. The server-the upload SDK versions that support this operation are as follows:
       * > - Java upload SDK: 1.4.4 or later
       * > - C++ upload SDK: 1.0.0 or later
       * > - PHP upload SDK: 1.0.2 or later
       * > - Python upload SDK: 1.3.0 or later
       * ### QPS limit
       * The QPS limit for a single user is 100 calls per second. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Call this operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetUploadDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUploadDetailsResponse
       */
      Models::GetUploadDetailsResponse getUploadDetailsWithOptions(const Models::GetUploadDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the upload details of one or more media assets by media ID, such as the upload time, upload ratio, and upload source.
       *
       * @description - This operation only supports querying the upload details of audio and video files.
       * - If the audio or video file is uploaded through the ApsaraVideo VOD console, you can obtain information such as the upload ratio by calling this operation. If the audio or video file is uploaded by using an SDK, you can obtain the upload details only if the [upload SDK](https://help.aliyun.com/document_detail/52200.html) meets the following requirements.
       * > Only server-the upload SDKs support this operation. Client-the upload SDKs do not support this operation. The server-the upload SDK versions that support this operation are as follows:
       * > - Java upload SDK: 1.4.4 or later
       * > - C++ upload SDK: 1.0.0 or later
       * > - PHP upload SDK: 1.0.2 or later
       * > - Python upload SDK: 1.3.0 or later
       * ### QPS limit
       * The QPS limit for a single user is 100 calls per second. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Call this operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request GetUploadDetailsRequest
       * @return GetUploadDetailsResponse
       */
      Models::GetUploadDetailsResponse getUploadDetails(const Models::GetUploadDetailsRequest &request);

      /**
       * @summary Retrieves the details of a single audio or video file by its ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
       *
       * @description After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure [event notifications](https://help.aliyun.com/document_detail/55627.html) for [audio and video analysis completion](https://help.aliyun.com/document_detail/99935.html). After receiving the event notification for [audio and video analysis completion](https://help.aliyun.com/document_detail/99935.html), call this operation to retrieve the audio or video information.
       *
       * @param request GetVideoInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoInfoResponse
       */
      Models::GetVideoInfoResponse getVideoInfoWithOptions(const Models::GetVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a single audio or video file by its ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
       *
       * @description After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure [event notifications](https://help.aliyun.com/document_detail/55627.html) for [audio and video analysis completion](https://help.aliyun.com/document_detail/99935.html). After receiving the event notification for [audio and video analysis completion](https://help.aliyun.com/document_detail/99935.html), call this operation to retrieve the audio or video information.
       *
       * @param request GetVideoInfoRequest
       * @return GetVideoInfoResponse
       */
      Models::GetVideoInfoResponse getVideoInfo(const Models::GetVideoInfoRequest &request);

      /**
       * @summary Retrieves the information about multiple audio and video files at a time by audio or video ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
       *
       * @description - You can retrieve information about up to 20 audio and video files at a time.
       * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) [event notification](https://help.aliyun.com/document_detail/55627.html). After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio and video information.
       *
       * @param request GetVideoInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoInfosResponse
       */
      Models::GetVideoInfosResponse getVideoInfosWithOptions(const Models::GetVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about multiple audio and video files at a time by audio or video ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
       *
       * @description - You can retrieve information about up to 20 audio and video files at a time.
       * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) [event notification](https://help.aliyun.com/document_detail/55627.html). After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio and video information.
       *
       * @param request GetVideoInfosRequest
       * @return GetVideoInfosResponse
       */
      Models::GetVideoInfosResponse getVideoInfos(const Models::GetVideoInfosRequest &request);

      /**
       * @summary Retrieves a list of video information.
       *
       * @description This operation retrieves up to the first **5,000** audio and video assets that match specified filter conditions, such as video status and category ID. Specify StartTime and EndTime to retrieve data in batches. To query more audio and video assets or traverse all audio and video information, refer to [Search for media assets](https://help.aliyun.com/document_detail/86044.html).
       *
       * @param request GetVideoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoListWithOptions(const Models::GetVideoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of video information.
       *
       * @description This operation retrieves up to the first **5,000** audio and video assets that match specified filter conditions, such as video status and category ID. Specify StartTime and EndTime to retrieve data in batches. To query more audio and video assets or traverse all audio and video information, refer to [Search for media assets](https://help.aliyun.com/document_detail/86044.html).
       *
       * @param request GetVideoListRequest
       * @return GetVideoListResponse
       */
      Models::GetVideoListResponse getVideoList(const Models::GetVideoListRequest &request);

      /**
       * @summary Retrieves the playback credential (PlayAuth) for an audio or video file. ApsaraVideo Player SDK uses this credential to automatically obtain the playback URL. Because the playback credential has a validity period and is bound to a specific audio or video file, it cannot be shared or reused. An expired or invalid credential will cause playback failure. This playback method is suitable for audio and video playback scenarios that require high security.
       *
       * @description - When using ApsaraVideo Player SDK (applicable to the PlayAuth playback method), call this operation to obtain the playback credential. ApsaraVideo Player SDK uses the playback credential to automatically obtain the playback URL for playback. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
       * - If the playback credential expires, the playback URL cannot be obtained. You must obtain a new playback credential.
       *
       * @param request GetVideoPlayAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoPlayAuthResponse
       */
      Models::GetVideoPlayAuthResponse getVideoPlayAuthWithOptions(const Models::GetVideoPlayAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the playback credential (PlayAuth) for an audio or video file. ApsaraVideo Player SDK uses this credential to automatically obtain the playback URL. Because the playback credential has a validity period and is bound to a specific audio or video file, it cannot be shared or reused. An expired or invalid credential will cause playback failure. This playback method is suitable for audio and video playback scenarios that require high security.
       *
       * @description - When using ApsaraVideo Player SDK (applicable to the PlayAuth playback method), call this operation to obtain the playback credential. ApsaraVideo Player SDK uses the playback credential to automatically obtain the playback URL for playback. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
       * - If the playback credential expires, the playback URL cannot be obtained. You must obtain a new playback credential.
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
       * @summary Invokes this operation to query the configuration information of a single image watermark template or text watermark template by watermark template ID. The configuration information includes the position, size, and display time of an image watermark, as well as the parameter settings such as the content, font, color, and position of a text watermark.
       *
       * @param request GetWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWatermarkResponse
       */
      Models::GetWatermarkResponse getWatermarkWithOptions(const Models::GetWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to query the configuration information of a single image watermark template or text watermark template by watermark template ID. The configuration information includes the position, size, and display time of an image watermark, as well as the parameter settings such as the content, font, color, and position of a text watermark.
       *
       * @param request GetWatermarkRequest
       * @return GetWatermarkResponse
       */
      Models::GetWatermarkResponse getWatermark(const Models::GetWatermarkRequest &request);

      /**
       * @summary Queries the execution information of a workflow task.
       *
       * @description - **Before calling this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Using workflows may incur fees for transcoding, encryption, and automated review. For more information, see [ApsaraVideo VOD billing overview](https://help.aliyun.com/document_detail/188307.html).**
       * - After you call the SubmitWorkflowJob operation to submit a workflow task, you can pass the returned task ID to this operation to query the execution status and result of the task.
       * - This operation currently supports only querying video understanding workflow tasks. Querying tasks of other workflow versions is not supported.
       *
       * @param request GetWorkflowTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkflowTaskResponse
       */
      Models::GetWorkflowTaskResponse getWorkflowTaskWithOptions(const Models::GetWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution information of a workflow task.
       *
       * @description - **Before calling this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Using workflows may incur fees for transcoding, encryption, and automated review. For more information, see [ApsaraVideo VOD billing overview](https://help.aliyun.com/document_detail/188307.html).**
       * - After you call the SubmitWorkflowJob operation to submit a workflow task, you can pass the returned task ID to this operation to query the execution status and result of the task.
       * - This operation currently supports only querying video understanding workflow tasks. Querying tasks of other workflow versions is not supported.
       *
       * @param request GetWorkflowTaskRequest
       * @return GetWorkflowTaskResponse
       */
      Models::GetWorkflowTaskResponse getWorkflowTask(const Models::GetWorkflowTaskRequest &request);

      /**
       * @summary Queries the AI image information of a specified video.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - This operation can query AI image information of only a single video. **Batch queries are not supported**.
       *
       * @param request ListAIImageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIImageInfoResponse
       */
      Models::ListAIImageInfoResponse listAIImageInfoWithOptions(const Models::ListAIImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AI image information of a specified video.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - This operation can query AI image information of only a single video. **Batch queries are not supported**.
       *
       * @param request ListAIImageInfoRequest
       * @return ListAIImageInfoResponse
       */
      Models::ListAIImageInfoResponse listAIImageInfo(const Models::ListAIImageInfoRequest &request);

      /**
       * @summary Queries smart tagging or media fingerprint jobs. After a smart tagging or media fingerprint job is submitted, it is processed asynchronously. You can use this operation to query job information in real time.
       *
       * @description - Regions supported by media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Regions supported by smart tagging: **China (Beijing)** and **China (Shanghai)**.
       *
       * @param request ListAIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAIJobResponse
       */
      Models::ListAIJobResponse listAIJobWithOptions(const Models::ListAIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries smart tagging or media fingerprint jobs. After a smart tagging or media fingerprint job is submitted, it is processed asynchronously. You can use this operation to query job information in real time.
       *
       * @description - Regions supported by media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Regions supported by smart tagging: **China (Beijing)** and **China (Shanghai)**.
       *
       * @param request ListAIJobRequest
       * @return ListAIJobResponse
       */
      Models::ListAIJobResponse listAIJob(const Models::ListAIJobRequest &request);

      /**
       * @summary Queries the list of AI templates.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - You can call this operation to query the list of AI templates of a specified type.
       *
       * @param request ListAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAITemplateResponse
       */
      Models::ListAITemplateResponse listAITemplateWithOptions(const Models::ListAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI templates.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - You can call this operation to query the list of AI templates of a specified type.
       *
       * @param request ListAITemplateRequest
       * @return ListAITemplateResponse
       */
      Models::ListAITemplateResponse listAITemplate(const Models::ListAITemplateRequest &request);

      /**
       * @summary Queries a list of applications that you are authorized to access based on specified filter conditions.
       *
       * @description ### Usage notes
       * You can filter applications by application status.
       * ### QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppInfoResponse
       */
      Models::ListAppInfoResponse listAppInfoWithOptions(const Models::ListAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of applications that you are authorized to access based on specified filter conditions.
       *
       * @description ### Usage notes
       * You can filter applications by application status.
       * ### QPS limit
       * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListAppInfoRequest
       * @return ListAppInfoResponse
       */
      Models::ListAppInfoResponse listAppInfo(const Models::ListAppInfoRequest &request);

      /**
       * @summary Invokes this operation to list the application permissions granted to a specified account identity (Resource Access Management (RAM) user or RAM role).
       *
       * @description - The **IdentityType** and **IdentityName** parameters take effect only when the caller invokes this operation with administrator permissions. Otherwise, only the application access policies granted to the current account identity are returned.
       *
       * @param request ListAppPoliciesForIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppPoliciesForIdentityResponse
       */
      Models::ListAppPoliciesForIdentityResponse listAppPoliciesForIdentityWithOptions(const Models::ListAppPoliciesForIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to list the application permissions granted to a specified account identity (Resource Access Management (RAM) user or RAM role).
       *
       * @description - The **IdentityType** and **IdentityName** parameters take effect only when the caller invokes this operation with administrator permissions. Otherwise, only the application access policies granted to the current account identity are returned.
       *
       * @param request ListAppPoliciesForIdentityRequest
       * @return ListAppPoliciesForIdentityResponse
       */
      Models::ListAppPoliciesForIdentityResponse listAppPoliciesForIdentity(const Models::ListAppPoliciesForIdentityRequest &request);

      /**
       * @summary Retrieves the list of China Chinese review security IPs.
       *
       * @param request ListAuditSecurityIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuditSecurityIpResponse
       */
      Models::ListAuditSecurityIpResponse listAuditSecurityIpWithOptions(const Models::ListAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of China Chinese review security IPs.
       *
       * @param request ListAuditSecurityIpRequest
       * @return ListAuditSecurityIpResponse
       */
      Models::ListAuditSecurityIpResponse listAuditSecurityIp(const Models::ListAuditSecurityIpRequest &request);

      /**
       * @summary Queries the list of animated images for a video by video ID.
       *
       * @description ### Usage notes
       * - After animated image capturing for a video is complete, call this operation to obtain the animated image information of the video.
       * - Animated image tasks can be initiated by calling an API operation ([SubmitDynamicImageJob](https://help.aliyun.com/document_detail/186842.html)) or by using the console. For more information, see [Animated images](https://help.aliyun.com/document_detail/177484.html).
       * ### QPS limit
       * The QPS limit for a single user for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListDynamicImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDynamicImageResponse
       */
      Models::ListDynamicImageResponse listDynamicImageWithOptions(const Models::ListDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of animated images for a video by video ID.
       *
       * @description ### Usage notes
       * - After animated image capturing for a video is complete, call this operation to obtain the animated image information of the video.
       * - Animated image tasks can be initiated by calling an API operation ([SubmitDynamicImageJob](https://help.aliyun.com/document_detail/186842.html)) or by using the console. For more information, see [Animated images](https://help.aliyun.com/document_detail/177484.html).
       * ### QPS limit
       * The QPS limit for a single user for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListDynamicImageRequest
       * @return ListDynamicImageResponse
       */
      Models::ListDynamicImageResponse listDynamicImage(const Models::ListDynamicImageRequest &request);

      /**
       * @summary Queries the list of historical tasks by media asset ID.
       *
       * @description **Usage notes**
       * - To query detailed task information, call the [GetJobDetail](https://help.aliyun.com/document_detail/2861326.html) operation.
       * - This operation only supports querying asynchronous task data within the last 6 months. Queryable task types include transcoding tasks, snapshot tasks, and AI tasks.
       * **QPS limit**
       * The QPS limit for a single user calling this operation is 15 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListJobInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobInfoResponse
       */
      Models::ListJobInfoResponse listJobInfoWithOptions(const Models::ListJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of historical tasks by media asset ID.
       *
       * @description **Usage notes**
       * - To query detailed task information, call the [GetJobDetail](https://help.aliyun.com/document_detail/2861326.html) operation.
       * - This operation only supports querying asynchronous task data within the last 6 months. Queryable task types include transcoding tasks, snapshot tasks, and AI tasks.
       * **QPS limit**
       * The QPS limit for a single user calling this operation is 15 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListJobInfoRequest
       * @return ListJobInfoResponse
       */
      Models::ListJobInfoResponse listJobInfo(const Models::ListJobInfoRequest &request);

      /**
       * @summary Queries a list of Live to VOD videos.
       *
       * @description You can retrieve up to 5,000 records that match the specified filter conditions.
       *
       * @param request ListLiveRecordVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLiveRecordVideoResponse
       */
      Models::ListLiveRecordVideoResponse listLiveRecordVideoWithOptions(const Models::ListLiveRecordVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Live to VOD videos.
       *
       * @description You can retrieve up to 5,000 records that match the specified filter conditions.
       *
       * @param request ListLiveRecordVideoRequest
       * @return ListLiveRecordVideoResponse
       */
      Models::ListLiveRecordVideoResponse listLiveRecordVideo(const Models::ListLiveRecordVideoRequest &request);

      /**
       * @summary Queries the created ManifestEdit track orchestration templates by paging.
       *
       * @param request ListManifestEditTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManifestEditTemplateResponse
       */
      Models::ListManifestEditTemplateResponse listManifestEditTemplateWithOptions(const Models::ListManifestEditTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the created ManifestEdit track orchestration templates by paging.
       *
       * @param request ListManifestEditTemplateRequest
       * @return ListManifestEditTemplateResponse
       */
      Models::ListManifestEditTemplateResponse listManifestEditTemplate(const Models::ListManifestEditTemplateRequest &request);

      /**
       * @summary Queries snapshots generated by video snapshot jobs and thumbnail snapshots automatically generated by the system during video upload.
       *
       * @description If multiple snapshot jobs have been initiated for a video, this operation returns only the data of the most recent successful snapshot job.
       *
       * @param request ListSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshotsWithOptions(const Models::ListSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries snapshots generated by video snapshot jobs and thumbnail snapshots automatically generated by the system during video upload.
       *
       * @description If multiple snapshot jobs have been initiated for a video, this operation returns only the data of the most recent successful snapshot job.
       *
       * @param request ListSnapshotsRequest
       * @return ListSnapshotsResponse
       */
      Models::ListSnapshotsResponse listSnapshots(const Models::ListSnapshotsRequest &request);

      /**
       * @summary Queries the historical transcoding task information of an audio or video file by its ID. This operation does not return specific job details.
       *
       * @description ### Usage notes
       * - To query detailed transcoding job information, call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation.
       * - **This operation supports only querying transcoding task data within the last year.**
       * ### QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListTranscodeTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscodeTaskResponse
       */
      Models::ListTranscodeTaskResponse listTranscodeTaskWithOptions(const Models::ListTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical transcoding task information of an audio or video file by its ID. This operation does not return specific job details.
       *
       * @description ### Usage notes
       * - To query detailed transcoding job information, call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation.
       * - **This operation supports only querying transcoding task data within the last year.**
       * ### QPS limit
       * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request ListTranscodeTaskRequest
       * @return ListTranscodeTaskResponse
       */
      Models::ListTranscodeTaskResponse listTranscodeTask(const Models::ListTranscodeTaskRequest &request);

      /**
       * @summary Queries the list of transcoding template configurations.
       *
       * @description > This operation does not return the transcoding template configuration information under each transcoding template group. You can call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation to obtain the information.
       *
       * @param request ListTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTranscodeTemplateGroupResponse
       */
      Models::ListTranscodeTemplateGroupResponse listTranscodeTemplateGroupWithOptions(const Models::ListTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of transcoding template configurations.
       *
       * @description > This operation does not return the transcoding template configuration information under each transcoding template group. You can call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation to obtain the information.
       *
       * @param request ListTranscodeTemplateGroupRequest
       * @return ListTranscodeTemplateGroupResponse
       */
      Models::ListTranscodeTemplateGroupResponse listTranscodeTemplateGroup(const Models::ListTranscodeTemplateGroupRequest &request);

      /**
       * @summary Queries the list of snapshot templates.
       *
       * @param request ListVodTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVodTemplateResponse
       */
      Models::ListVodTemplateResponse listVodTemplateWithOptions(const Models::ListVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of snapshot templates.
       *
       * @param request ListVodTemplateRequest
       * @return ListVodTemplateResponse
       */
      Models::ListVodTemplateResponse listVodTemplate(const Models::ListVodTemplateRequest &request);

      /**
       * @summary Invokes this operation to query the configuration information of all image and text watermark templates added in the current service region. The information includes the position, size, and display duration of image watermarks, as well as the parameter settings such as the content, font, color, and position of text watermarks.
       *
       * @param request ListWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWatermarkResponse
       */
      Models::ListWatermarkResponse listWatermarkWithOptions(const Models::ListWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to query the configuration information of all image and text watermark templates added in the current service region. The information includes the position, size, and display duration of image watermarks, as well as the parameter settings such as the content, font, color, and position of text watermarks.
       *
       * @param request ListWatermarkRequest
       * @return ListWatermarkResponse
       */
      Models::ListWatermarkResponse listWatermark(const Models::ListWatermarkRequest &request);

      /**
       * @summary Invokes this operation to migrate resources such as media assets from one application to another. Application administrators can directly transfer resources. Resource Access Management (RAM) users or RAM roles must have write permissions on both the source and destination applications. Batch migration is supported.
       *
       * @param request MoveAppResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveAppResourceResponse
       */
      Models::MoveAppResourceResponse moveAppResourceWithOptions(const Models::MoveAppResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes this operation to migrate resources such as media assets from one application to another. Application administrators can directly transfer resources. Resource Access Management (RAM) users or RAM roles must have write permissions on both the source and destination applications. Batch migration is supported.
       *
       * @param request MoveAppResourceRequest
       * @return MoveAppResourceResponse
       */
      Models::MoveAppResourceResponse moveAppResource(const Models::MoveAppResourceRequest &request);

      /**
       * @summary Prefetches content from the origin server to L2 cache nodes so that first-time requests can directly hit the cache, reducing the load on the origin server.
       *
       * @description - Currently, the service endpoint only supports **China (Shanghai)**.
       * - Each account can submit up to 500 prefetch URL requests per day. Directory-level prefetching is not supported.
       * - The purge and prefetch operations include the [RefreshVodObjectCaches](~~RefreshVodObjectCaches~~) purge operation and the [PreloadVodObjectCaches](~~PreloadVodObjectCaches~~) prefetch operation.
       *
       * @param request PreloadVodObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadVodObjectCachesResponse
       */
      Models::PreloadVodObjectCachesResponse preloadVodObjectCachesWithOptions(const Models::PreloadVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches content from the origin server to L2 cache nodes so that first-time requests can directly hit the cache, reducing the load on the origin server.
       *
       * @description - Currently, the service endpoint only supports **China (Shanghai)**.
       * - Each account can submit up to 500 prefetch URL requests per day. Directory-level prefetching is not supported.
       * - The purge and prefetch operations include the [RefreshVodObjectCaches](~~RefreshVodObjectCaches~~) purge operation and the [PreloadVodObjectCaches](~~PreloadVodObjectCaches~~) prefetch operation.
       *
       * @param request PreloadVodObjectCachesRequest
       * @return PreloadVodObjectCachesResponse
       */
      Models::PreloadVodObjectCachesResponse preloadVodObjectCaches(const Models::PreloadVodObjectCachesRequest &request);

      /**
       * @summary Produces one or more videos into a finished video. You can submit source videos directly through the timeline parameter, or create an online editing project first and then submit it for production.
       *
       * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Online editing is a paid feature. For more information about billing, see [Video editing and production billing](~~188310#section-pyv-b8h-bo7~~).**
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the online editing project ID is returned (the video has not been produced yet, and the task enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also call [GetEditingProject](https://help.aliyun.com/document_detail/69052.html) to query the task status.
       * - The video resources used in the online editing timeline can be materials in the material library or videos in the media library. If you use videos from the media library, make sure that their status is Normal.
       * - Videos are produced based on ProjectId and Timeline. The logic is as follows:
       *     - ProjectId and Timeline cannot both be empty. Otherwise, no basis exists to produce videos.
       *     - If ProjectId is empty and Timeline is not empty, an online editing project is automatically created with the specified Timeline. The materials referenced in the Timeline are extracted and set as the project materials. Then, video production begins.
       *     - If ProjectId is not empty and Timeline is empty, the most recently saved Timeline is retrieved based on ProjectId and used to produce videos.
       *     - If both ProjectId and Timeline are not empty, the specified Timeline is used to produce videos, and the corresponding online editing project is updated (Timeline and project materials). If other fields are specified, the corresponding project fields are also updated.
       * - The maximum number of tracks for video tracks, image tracks, and subtitle tracks is 100 each.
       * - The total number of materials cannot exceed 200, and the total file size of materials cannot exceed 1 TB.
       * - The region of the input or output bucket must be the same as the region where the ApsaraVideo VOD service is used.
       * - When the output is a video, the following resolution limits apply to the finished video:
       *   - Both the width and height must be at least 128 px.
       *   - Both the width and height must be at most 4096 px.
       *   - The short side must be at most 2160 px.
       * - After video production is complete, the video is automatically uploaded to ApsaraVideo VOD. Therefore, after video production is complete, ApsaraVideo VOD sends the **ProduceMediaComplete** and **FileUploadComplete** event notifications. After the produced video transcoding is complete, the **single definition video transcoding complete** and **all definition video transcoding complete** event notifications are sent.
       * - You can also add effects to the produced video. For more details, see [Effects](https://help.aliyun.com/document_detail/69082.html).
       *
       * @param request ProduceEditingProjectVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProduceEditingProjectVideoResponse
       */
      Models::ProduceEditingProjectVideoResponse produceEditingProjectVideoWithOptions(const Models::ProduceEditingProjectVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Produces one or more videos into a finished video. You can submit source videos directly through the timeline parameter, or create an online editing project first and then submit it for production.
       *
       * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Online editing is a paid feature. For more information about billing, see [Video editing and production billing](~~188310#section-pyv-b8h-bo7~~).**
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the online editing project ID is returned (the video has not been produced yet, and the task enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also call [GetEditingProject](https://help.aliyun.com/document_detail/69052.html) to query the task status.
       * - The video resources used in the online editing timeline can be materials in the material library or videos in the media library. If you use videos from the media library, make sure that their status is Normal.
       * - Videos are produced based on ProjectId and Timeline. The logic is as follows:
       *     - ProjectId and Timeline cannot both be empty. Otherwise, no basis exists to produce videos.
       *     - If ProjectId is empty and Timeline is not empty, an online editing project is automatically created with the specified Timeline. The materials referenced in the Timeline are extracted and set as the project materials. Then, video production begins.
       *     - If ProjectId is not empty and Timeline is empty, the most recently saved Timeline is retrieved based on ProjectId and used to produce videos.
       *     - If both ProjectId and Timeline are not empty, the specified Timeline is used to produce videos, and the corresponding online editing project is updated (Timeline and project materials). If other fields are specified, the corresponding project fields are also updated.
       * - The maximum number of tracks for video tracks, image tracks, and subtitle tracks is 100 each.
       * - The total number of materials cannot exceed 200, and the total file size of materials cannot exceed 1 TB.
       * - The region of the input or output bucket must be the same as the region where the ApsaraVideo VOD service is used.
       * - When the output is a video, the following resolution limits apply to the finished video:
       *   - Both the width and height must be at least 128 px.
       *   - Both the width and height must be at most 4096 px.
       *   - The short side must be at most 2160 px.
       * - After video production is complete, the video is automatically uploaded to ApsaraVideo VOD. Therefore, after video production is complete, ApsaraVideo VOD sends the **ProduceMediaComplete** and **FileUploadComplete** event notifications. After the produced video transcoding is complete, the **single definition video transcoding complete** and **all definition video transcoding complete** event notifications are sent.
       * - You can also add effects to the produced video. For more details, see [Effects](https://help.aliyun.com/document_detail/69082.html).
       *
       * @param request ProduceEditingProjectVideoRequest
       * @return ProduceEditingProjectVideoResponse
       */
      Models::ProduceEditingProjectVideoResponse produceEditingProjectVideo(const Models::ProduceEditingProjectVideoRequest &request);

      /**
       * @summary Submits a refresh or prefetch task for audio or video files by audio or video ID.
       *
       * @description - ApsaraVideo VOD provides resource purge and prefetch features. The purge feature deletes cached resources on points of presence and forces the points of presence to retrieve the latest resources from the origin server through back-to-origin requests. The prefetch feature allows you to download and cache popular resources to points of presence before peak hours to improve access efficiency.
       * - This operation directly submits a refresh or prefetch node by audio or video ID and supports filtering by streaming format and definition, which allows you to refresh or prefetch specific streams as needed.
       * - You can submit a refresh or prefetch node for up to 20 audio or video files at a time.
       * ### QPS limit
       * The QPS limit for a single user for this operation is 50 calls per second. If the limit is exceeded, the API invocation is throttled, which may affect your business. Invoke this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request RefreshMediaPlayUrlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshMediaPlayUrlsResponse
       */
      Models::RefreshMediaPlayUrlsResponse refreshMediaPlayUrlsWithOptions(const Models::RefreshMediaPlayUrlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a refresh or prefetch task for audio or video files by audio or video ID.
       *
       * @description - ApsaraVideo VOD provides resource purge and prefetch features. The purge feature deletes cached resources on points of presence and forces the points of presence to retrieve the latest resources from the origin server through back-to-origin requests. The prefetch feature allows you to download and cache popular resources to points of presence before peak hours to improve access efficiency.
       * - This operation directly submits a refresh or prefetch node by audio or video ID and supports filtering by streaming format and definition, which allows you to refresh or prefetch specific streams as needed.
       * - You can submit a refresh or prefetch node for up to 20 audio or video files at a time.
       * ### QPS limit
       * The QPS limit for a single user for this operation is 50 calls per second. If the limit is exceeded, the API invocation is throttled, which may affect your business. Invoke this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request RefreshMediaPlayUrlsRequest
       * @return RefreshMediaPlayUrlsResponse
       */
      Models::RefreshMediaPlayUrlsResponse refreshMediaPlayUrls(const Models::RefreshMediaPlayUrlsRequest &request);

      /**
       * @summary Refreshes the upload credential for a video file after the upload times out.
       *
       * @description This operation can also be used to overwrite the source file of a video or audio file. This means that after you obtain the upload URL of the source file, you can upload the file again while keeping the audio or video ID unchanged. However, this may automatically trigger transcoding and snapshot capture if you have configured transcoding or snapshot capture upon upload. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request RefreshUploadVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshUploadVideoResponse
       */
      Models::RefreshUploadVideoResponse refreshUploadVideoWithOptions(const Models::RefreshUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the upload credential for a video file after the upload times out.
       *
       * @description This operation can also be used to overwrite the source file of a video or audio file. This means that after you obtain the upload URL of the source file, you can upload the file again while keeping the audio or video ID unchanged. However, this may automatically trigger transcoding and snapshot capture if you have configured transcoding or snapshot capture upon upload. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
       *
       * @param request RefreshUploadVideoRequest
       * @return RefreshUploadVideoResponse
       */
      Models::RefreshUploadVideoResponse refreshUploadVideo(const Models::RefreshUploadVideoRequest &request);

      /**
       * @summary Purges file content on nodes. Specifies URL content to purge on cache nodes, and supports batch URL purging.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Each account can submit up to 2,000 URL purge requests and 100 directory purge requests per day.
       * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
       *
       * @param request RefreshVodObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshVodObjectCachesResponse
       */
      Models::RefreshVodObjectCachesResponse refreshVodObjectCachesWithOptions(const Models::RefreshVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purges file content on nodes. Specifies URL content to purge on cache nodes, and supports batch URL purging.
       *
       * @description - Currently, the only supported service region is **China (Shanghai)**.
       * - Each account can submit up to 2,000 URL purge requests and 100 directory purge requests per day.
       * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
       *
       * @param request RefreshVodObjectCachesRequest
       * @return RefreshVodObjectCachesResponse
       */
      Models::RefreshVodObjectCachesResponse refreshVodObjectCaches(const Models::RefreshVodObjectCachesRequest &request);

      /**
       * @summary Registers media assets. If you have existing media asset files stored in your own OSS buckets integrated with ApsaraVideo VOD, you must register the media assets to generate the associated data required by ApsaraVideo VOD before you can use features such as transcoding and snapshot generation.
       *
       * @description - For audio and video media files already stored in OSS buckets integrated with ApsaraVideo VOD, you must call the media asset registration operation to generate the associated data required by ApsaraVideo VOD. Then, you can initiate transcoding, snapshot generation, and AI processing for these media files by using their media IDs in ApsaraVideo VOD.
       * - You can register up to **10 OSS media files** at a time, and the storage addresses of the media files submitted at a time must be the same.
       * - For media files uploaded to ApsaraVideo VOD, if no transcoding template group ID is specified, the default template group is used for transcoding. In contrast, after you register media assets, if no transcoding template group ID is specified, transcoding is not automatically triggered. If a transcoding template group ID is specified, the specified template group is used for transcoding.
       * - For repeatedly registered media files, only the **unique media ID associated** with the file is returned, and no other processing is performed.
       * - Make sure that the media asset files you want to register have valid file name extensions. Otherwise, the registration fails.
       *
       * @param request RegisterMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RegisterMediaResponse
       */
      Models::RegisterMediaResponse registerMediaWithOptions(const Models::RegisterMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers media assets. If you have existing media asset files stored in your own OSS buckets integrated with ApsaraVideo VOD, you must register the media assets to generate the associated data required by ApsaraVideo VOD before you can use features such as transcoding and snapshot generation.
       *
       * @description - For audio and video media files already stored in OSS buckets integrated with ApsaraVideo VOD, you must call the media asset registration operation to generate the associated data required by ApsaraVideo VOD. Then, you can initiate transcoding, snapshot generation, and AI processing for these media files by using their media IDs in ApsaraVideo VOD.
       * - You can register up to **10 OSS media files** at a time, and the storage addresses of the media files submitted at a time must be the same.
       * - For media files uploaded to ApsaraVideo VOD, if no transcoding template group ID is specified, the default template group is used for transcoding. In contrast, after you register media assets, if no transcoding template group ID is specified, transcoding is not automatically triggered. If a transcoding template group ID is specified, the specified template group is used for transcoding.
       * - For repeatedly registered media files, only the **unique media ID associated** with the file is returned, and no other processing is performed.
       * - Make sure that the media asset files you want to register have valid file name extensions. Otherwise, the registration fails.
       *
       * @param request RegisterMediaRequest
       * @return RegisterMediaResponse
       */
      Models::RegisterMediaResponse registerMedia(const Models::RegisterMediaRequest &request);

      /**
       * @summary Restores media assets from frozen storage.
       *
       * @description - Make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD before you call this operation. Restoring media assets incurs storage fees. For more information, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
       * - This operation applies only to Archive and Cold Archive audio and video files. After a file is restored, it can be accessed. The storage class of an audio or video file that is being restored cannot be changed.
       * Restoration generates retrieval traffic. After a Cold Archive audio or video file is restored, a Standard storage copy of the file is generated for access. The file copy incurs Standard storage fees until the restoration period ends.
       *
       * @param request RestoreMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreMediaResponse
       */
      Models::RestoreMediaResponse restoreMediaWithOptions(const Models::RestoreMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores media assets from frozen storage.
       *
       * @description - Make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD before you call this operation. Restoring media assets incurs storage fees. For more information, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
       * - This operation applies only to Archive and Cold Archive audio and video files. After a file is restored, it can be accessed. The storage class of an audio or video file that is being restored cannot be changed.
       * Restoration generates retrieval traffic. After a Cold Archive audio or video file is restored, a Standard storage copy of the file is generated for access. The file copy incurs Standard storage fees until the restoration period ends.
       *
       * @param request RestoreMediaRequest
       * @return RestoreMediaResponse
       */
      Models::RestoreMediaResponse restoreMedia(const Models::RestoreMediaRequest &request);

      /**
       * @summary Queries online editing projects (video editing list).
       *
       * @param request SearchEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchEditingProjectResponse
       */
      Models::SearchEditingProjectResponse searchEditingProjectWithOptions(const Models::SearchEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries online editing projects (video editing list).
       *
       * @param request SearchEditingProjectRequest
       * @return SearchEditingProjectResponse
       */
      Models::SearchEditingProjectResponse searchEditingProject(const Models::SearchEditingProjectRequest &request);

      /**
       * @summary Searches for media asset information such as videos, audio files, and images produced by ApsaraVideo VOD. You can use this operation with the media asset search protocol to perform multi-dimensional searches in ApsaraVideo VOD, including specifying return fields, exact matching, fuzzy matching, multi-value queries, range queries, and sort fields.
       *
       * @description For fields that support exact matching and fuzzy matching, when other query methods are used, the returned results follow the query method supported by the field. For example, if a field supports only fuzzy matching, results obtained through multi-value queries are also based on fuzzy matching.
       * The following describes the limits on the number of data records that can be retrieved:
       * - Method 1: Paged traversal
       *     For matched search results, you can set the pagination parameters PageNo (page number) and PageSize (number of records per page) to traverse up to 5,000 records. If the search results exceed 5,000 records, adjust the search conditions to narrow the result range. This method cannot traverse the complete dataset. To traverse more data, refer to Method 2.
       * - Method 2: Full traversal (for audio and video searches only)
       *   This method applies to video and audio content searches and supports traversing up to 2 million search results. If the number of search results exceeds 2 million, add more filter conditions to reduce the result count. When using this method, in addition to PageNo and PageSize, you must use the ScrollToken parameter for pagination. Each request supports traversing up to 100 records forward.
       * Using a PageSize of 20 as an example, the pagination logic is as follows:
       *     - If PageNo is 1, you can query up to the next 5 pages of data.
       *     - If PageNo is 2, you can query up to the next 6 pages of data.
       * Set pagination parameters properly and choose the appropriate traversal method based on the result set size. If you need to page through more than 1,000 records, use Method 2 for faster and more convenient data processing.
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for media asset information such as videos, audio files, and images produced by ApsaraVideo VOD. You can use this operation with the media asset search protocol to perform multi-dimensional searches in ApsaraVideo VOD, including specifying return fields, exact matching, fuzzy matching, multi-value queries, range queries, and sort fields.
       *
       * @description For fields that support exact matching and fuzzy matching, when other query methods are used, the returned results follow the query method supported by the field. For example, if a field supports only fuzzy matching, results obtained through multi-value queries are also based on fuzzy matching.
       * The following describes the limits on the number of data records that can be retrieved:
       * - Method 1: Paged traversal
       *     For matched search results, you can set the pagination parameters PageNo (page number) and PageSize (number of records per page) to traverse up to 5,000 records. If the search results exceed 5,000 records, adjust the search conditions to narrow the result range. This method cannot traverse the complete dataset. To traverse more data, refer to Method 2.
       * - Method 2: Full traversal (for audio and video searches only)
       *   This method applies to video and audio content searches and supports traversing up to 2 million search results. If the number of search results exceeds 2 million, add more filter conditions to reduce the result count. When using this method, in addition to PageNo and PageSize, you must use the ScrollToken parameter for pagination. Each request supports traversing up to 100 records forward.
       * Using a PageSize of 20 as an example, the pagination logic is as follows:
       *     - If PageNo is 1, you can query up to the next 5 pages of data.
       *     - If PageNo is 2, you can query up to the next 6 pages of data.
       * Set pagination parameters properly and choose the appropriate traversal method based on the result set size. If you need to page through more than 1,000 records, use Method 2 for faster and more convenient data processing.
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary Sets the application playback key.
       *
       * @param request SetAppPlayKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAppPlayKeyResponse
       */
      Models::SetAppPlayKeyResponse setAppPlayKeyWithOptions(const Models::SetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the application playback key.
       *
       * @param request SetAppPlayKeyRequest
       * @return SetAppPlayKeyResponse
       */
      Models::SetAppPlayKeyResponse setAppPlayKey(const Models::SetAppPlayKeyRequest &request);

      /**
       * @summary Sets the review security IP addresses.
       *
       * @description When a video is in the Checking or Blocked state, only requests from review security IP addresses can play the video.
       *
       * @param request SetAuditSecurityIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAuditSecurityIpResponse
       */
      Models::SetAuditSecurityIpResponse setAuditSecurityIpWithOptions(const Models::SetAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the review security IP addresses.
       *
       * @description When a video is in the Checking or Blocked state, only requests from review security IP addresses can play the video.
       *
       * @param request SetAuditSecurityIpRequest
       * @return SetAuditSecurityIpResponse
       */
      Models::SetAuditSecurityIpResponse setAuditSecurityIp(const Models::SetAuditSecurityIpRequest &request);

      /**
       * @summary Updates the content of the cross-domain file crossdomain.xml for ApsaraVideo VOD.
       *
       * @description >Notice: If you access the cross-domain file through a domain name, purge the CDN cache for the update to take effect immediately. You can logon to the console to [purge files](https://help.aliyun.com/document_detail/86098.html) or invoke the [Refresh Cache operation](https://help.aliyun.com/document_detail/69215.html).
       *
       * @param request SetCrossdomainContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCrossdomainContentResponse
       */
      Models::SetCrossdomainContentResponse setCrossdomainContentWithOptions(const Models::SetCrossdomainContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content of the cross-domain file crossdomain.xml for ApsaraVideo VOD.
       *
       * @description >Notice: If you access the cross-domain file through a domain name, purge the CDN cache for the update to take effect immediately. You can logon to the console to [purge files](https://help.aliyun.com/document_detail/86098.html) or invoke the [Refresh Cache operation](https://help.aliyun.com/document_detail/69215.html).
       *
       * @param request SetCrossdomainContentRequest
       * @return SetCrossdomainContentResponse
       */
      Models::SetCrossdomainContentResponse setCrossdomainContent(const Models::SetCrossdomainContentRequest &request);

      /**
       * @summary Sets a default AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Obtain the AI template ID first, and then call this operation to set the template as the default AI template. A default AI template cannot be deleted.
       *
       * @param request SetDefaultAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultAITemplateResponse
       */
      Models::SetDefaultAITemplateResponse setDefaultAITemplateWithOptions(const Models::SetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a default AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - Obtain the AI template ID first, and then call this operation to set the template as the default AI template. A default AI template cannot be deleted.
       *
       * @param request SetDefaultAITemplateRequest
       * @return SetDefaultAITemplateResponse
       */
      Models::SetDefaultAITemplateResponse setDefaultAITemplate(const Models::SetDefaultAITemplateRequest &request);

      /**
       * @summary Sets the default transcoding template group configuration.
       *
       * @param request SetDefaultTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultTranscodeTemplateGroupResponse
       */
      Models::SetDefaultTranscodeTemplateGroupResponse setDefaultTranscodeTemplateGroupWithOptions(const Models::SetDefaultTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the default transcoding template group configuration.
       *
       * @param request SetDefaultTranscodeTemplateGroupRequest
       * @return SetDefaultTranscodeTemplateGroupResponse
       */
      Models::SetDefaultTranscodeTemplateGroupResponse setDefaultTranscodeTemplateGroup(const Models::SetDefaultTranscodeTemplateGroupRequest &request);

      /**
       * @summary Sets a specified watermark template as the default watermark template.
       *
       * @param request SetDefaultWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultWatermarkResponse
       */
      Models::SetDefaultWatermarkResponse setDefaultWatermarkWithOptions(const Models::SetDefaultWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a specified watermark template as the default watermark template.
       *
       * @param request SetDefaultWatermarkRequest
       * @return SetDefaultWatermarkResponse
       */
      Models::SetDefaultWatermarkResponse setDefaultWatermark(const Models::SetDefaultWatermarkRequest &request);

      /**
       * @summary Sets the materials to be edited for an online editing project.
       *
       * @param request SetEditingProjectMaterialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetEditingProjectMaterialsResponse
       */
      Models::SetEditingProjectMaterialsResponse setEditingProjectMaterialsWithOptions(const Models::SetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the materials to be edited for an online editing project.
       *
       * @param request SetEditingProjectMaterialsRequest
       * @return SetEditingProjectMaterialsResponse
       */
      Models::SetEditingProjectMaterialsResponse setEditingProjectMaterials(const Models::SetEditingProjectMaterialsRequest &request);

      /**
       * @summary Configures the callback method, callback URL, and event types for event notifications.
       *
       * @description Supports HTTP callbacks and Simple Message Queue (formerly MNS) callbacks. For more information, see [Event notifications](https://help.aliyun.com/document_detail/55627.html).
       * ### QPS limits
       * The QPS limit for a single user calling this API operation is 15 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SetMessageCallbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMessageCallbackResponse
       */
      Models::SetMessageCallbackResponse setMessageCallbackWithOptions(const Models::SetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the callback method, callback URL, and event types for event notifications.
       *
       * @description Supports HTTP callbacks and Simple Message Queue (formerly MNS) callbacks. For more information, see [Event notifications](https://help.aliyun.com/document_detail/55627.html).
       * ### QPS limits
       * The QPS limit for a single user calling this API operation is 15 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SetMessageCallbackRequest
       * @return SetMessageCallbackResponse
       */
      Models::SetMessageCallbackResponse setMessageCallback(const Models::SetMessageCallbackRequest &request);

      /**
       * @summary Configures whether the certificate feature is enabled for a specified domain name and modifies certificate information.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       *
       * @param request SetVodDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVodDomainCertificateResponse
       */
      Models::SetVodDomainCertificateResponse setVodDomainCertificateWithOptions(const Models::SetVodDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures whether the certificate feature is enabled for a specified domain name and modifies certificate information.
       *
       * @description - Currently, the service address supports only **China (Shanghai)**.
       *
       * @param request SetVodDomainCertificateRequest
       * @return SetVodDomainCertificateResponse
       */
      Models::SetVodDomainCertificateResponse setVodDomainCertificate(const Models::SetVodDomainCertificateRequest &request);

      /**
       * @summary Enables or disables the certificate feature for a domain name and updates the certificate information.
       *
       * @description - This operation is currently supported only in the **China (Shanghai)** region.
       * - Rate limit per user: 30 calls per second.
       * - Request method: POST.
       *
       * @param request SetVodDomainSSLCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVodDomainSSLCertificateResponse
       */
      Models::SetVodDomainSSLCertificateResponse setVodDomainSSLCertificateWithOptions(const Models::SetVodDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the certificate feature for a domain name and updates the certificate information.
       *
       * @description - This operation is currently supported only in the **China (Shanghai)** region.
       * - Rate limit per user: 30 calls per second.
       * - Request method: POST.
       *
       * @param request SetVodDomainSSLCertificateRequest
       * @return SetVodDomainSSLCertificateResponse
       */
      Models::SetVodDomainSSLCertificateResponse setVodDomainSSLCertificate(const Models::SetVodDomainSSLCertificateRequest &request);

      /**
       * @summary Submits an automated review task for an image. The task is asynchronously executed after it is submitted. The task may not be complete when the response is returned.
       *
       * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">see [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
       * - <props="china">This operation is supported only in the **China (Shanghai), China (Beijing), and Singapore** regions.<props="intl">This operation is supported only in the Singapore region.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. At this point, the task is not complete and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
       * - The size of a single image cannot exceed 20 MB. The height or width cannot exceed 30,000 px. The total number of pixels cannot exceed 250 million px.
       * - (Recommended) The image resolution is at least 256 × 256 px. A lower resolution may affect the review results.
       *
       * @param request SubmitAIImageAuditJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIImageAuditJobResponse
       */
      Models::SubmitAIImageAuditJobResponse submitAIImageAuditJobWithOptions(const Models::SubmitAIImageAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an automated review task for an image. The task is asynchronously executed after it is submitted. The task may not be complete when the response is returned.
       *
       * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">see [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
       * - <props="china">This operation is supported only in the **China (Shanghai), China (Beijing), and Singapore** regions.<props="intl">This operation is supported only in the Singapore region.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. At this point, the task is not complete and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
       * - The size of a single image cannot exceed 20 MB. The height or width cannot exceed 30,000 px. The total number of pixels cannot exceed 250 million px.
       * - (Recommended) The image resolution is at least 256 × 256 px. A lower resolution may affect the review results.
       *
       * @param request SubmitAIImageAuditJobRequest
       * @return SubmitAIImageAuditJobResponse
       */
      Models::SubmitAIImageAuditJobResponse submitAIImageAuditJob(const Models::SubmitAIImageAuditJobRequest &request);

      /**
       * @summary Submits an AI image processing task.
       *
       * @description - This operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned. The task is not completed at this time and enters the background queue for asynchronous execution. The final result is notified through a callback. You can also call [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) to query the task execution result.
       *
       * @param request SubmitAIImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIImageJobResponse
       */
      Models::SubmitAIImageJobResponse submitAIImageJobWithOptions(const Models::SubmitAIImageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an AI image processing task.
       *
       * @description - This operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned. The task is not completed at this time and enters the background queue for asynchronous execution. The final result is notified through a callback. You can also call [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) to query the task execution result.
       *
       * @param request SubmitAIImageJobRequest
       * @return SubmitAIImageJobResponse
       */
      Models::SubmitAIImageJobResponse submitAIImageJob(const Models::SubmitAIImageJobRequest &request);

      /**
       * @summary Submits an intelligent tagging or media fingerprint job.
       *
       * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Intelligent tagging and media fingerprint are paid features. For billing details, see [Video AI billing](~~188310#section-g7l-s3o-9ng~~).**
       * - Regions supported by media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions supported by intelligent tagging: **China (Beijing)** and **China (Shanghai)**.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit an AI job, the job ID is returned. The job is not yet complete at this point and enters a queue for asynchronous execution. We recommend that you configure the [event notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **Video AI Processing Complete** to obtain the final processing result. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the job status.
       * - You must activate the media fingerprint or intelligent tagging service before you can call this operation to submit AI jobs. For more information, see [Video AI](https://help.aliyun.com/document_detail/101148.html).
       * - When you use media fingerprint for the first time, provide your UID and region information and submit a ticket to apply for free activation of the fingerprint library. Otherwise, the media fingerprint feature will not work properly. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
       *
       * @param request SubmitAIJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIJobResponse
       */
      Models::SubmitAIJobResponse submitAIJobWithOptions(const Models::SubmitAIJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an intelligent tagging or media fingerprint job.
       *
       * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Intelligent tagging and media fingerprint are paid features. For billing details, see [Video AI billing](~~188310#section-g7l-s3o-9ng~~).**
       * - Regions supported by media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions supported by intelligent tagging: **China (Beijing)** and **China (Shanghai)**.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit an AI job, the job ID is returned. The job is not yet complete at this point and enters a queue for asynchronous execution. We recommend that you configure the [event notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **Video AI Processing Complete** to obtain the final processing result. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the job status.
       * - You must activate the media fingerprint or intelligent tagging service before you can call this operation to submit AI jobs. For more information, see [Video AI](https://help.aliyun.com/document_detail/101148.html).
       * - When you use media fingerprint for the first time, provide your UID and region information and submit a ticket to apply for free activation of the fingerprint library. Otherwise, the media fingerprint feature will not work properly. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
       *
       * @param request SubmitAIJobRequest
       * @return SubmitAIJobResponse
       */
      Models::SubmitAIJobResponse submitAIJob(const Models::SubmitAIJobRequest &request);

      /**
       * @summary Submits an automated review job for audio and video files. The job is executed asynchronously after submission, and the job may not be complete when the response is returned.
       *
       * @description - **Before using this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">refer to [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
       * - This operation currently supports only the **Shanghai**, **Beijing**, and **Singapore** regions.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned. The task is not yet complete at this point and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
       * - For the development guide on submitting automated review jobs, refer to [Automated review](https://help.aliyun.com/document_detail/101148.html).
       * - After an automated review job is complete, the image resources generated during the job are retained for free for only two weeks in the VOD system bucket allocated by ApsaraVideo VOD. The images are automatically deleted after two weeks.
       *
       * @param request SubmitAIMediaAuditJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAIMediaAuditJobResponse
       */
      Models::SubmitAIMediaAuditJobResponse submitAIMediaAuditJobWithOptions(const Models::SubmitAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an automated review job for audio and video files. The job is executed asynchronously after submission, and the job may not be complete when the response is returned.
       *
       * @description - **Before using this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">refer to [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
       * - This operation currently supports only the **Shanghai**, **Beijing**, and **Singapore** regions.
       * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned. The task is not yet complete at this point and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
       * - For the development guide on submitting automated review jobs, refer to [Automated review](https://help.aliyun.com/document_detail/101148.html).
       * - After an automated review job is complete, the image resources generated during the job are retained for free for only two weeks in the VOD system bucket allocated by ApsaraVideo VOD. The images are automatically deleted after two weeks.
       *
       * @param request SubmitAIMediaAuditJobRequest
       * @return SubmitAIMediaAuditJobResponse
       */
      Models::SubmitAIMediaAuditJobResponse submitAIMediaAuditJob(const Models::SubmitAIMediaAuditJobRequest &request);

      /**
       * @summary Submits a digital watermark extraction job by invoking this operation to asynchronously extract a copyright watermark or a tracing watermark.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Digital watermarking is a paid feature. Both the generation and extraction of digital watermarks incur fees. For more information, see [Billing of digital watermarks](~~188310#62b9c940403se~~).**
       * - Currently, this operation is supported only in the **China (Shanghai)** and **China (Beijing)** regions.
       * - <props="china">For more information about the generation and extraction of digital watermarks, see [Digital watermarks](https://help.aliyun.com/document_detail/2527021.html). Before you submit a digital watermark extraction job, make sure that the following conditions are met:
       *   - The video from which you want to extract the watermark is uploaded to ApsaraVideo VOD.
       *   - The duration of the video from which you want to extract the watermark exceeds 6 minutes.
       * - After the digital watermark extraction job is submitted, call the [GetDigitalWatermarkExtractResult](https://help.aliyun.com/document_detail/2587769.html) operation to query the job result.
       *
       * @param request SubmitDigitalWatermarkExtractJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDigitalWatermarkExtractJobResponse
       */
      Models::SubmitDigitalWatermarkExtractJobResponse submitDigitalWatermarkExtractJobWithOptions(const Models::SubmitDigitalWatermarkExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a digital watermark extraction job by invoking this operation to asynchronously extract a copyright watermark or a tracing watermark.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Digital watermarking is a paid feature. Both the generation and extraction of digital watermarks incur fees. For more information, see [Billing of digital watermarks](~~188310#62b9c940403se~~).**
       * - Currently, this operation is supported only in the **China (Shanghai)** and **China (Beijing)** regions.
       * - <props="china">For more information about the generation and extraction of digital watermarks, see [Digital watermarks](https://help.aliyun.com/document_detail/2527021.html). Before you submit a digital watermark extraction job, make sure that the following conditions are met:
       *   - The video from which you want to extract the watermark is uploaded to ApsaraVideo VOD.
       *   - The duration of the video from which you want to extract the watermark exceeds 6 minutes.
       * - After the digital watermark extraction job is submitted, call the [GetDigitalWatermarkExtractResult](https://help.aliyun.com/document_detail/2587769.html) operation to query the job result.
       *
       * @param request SubmitDigitalWatermarkExtractJobRequest
       * @return SubmitDigitalWatermarkExtractJobResponse
       */
      Models::SubmitDigitalWatermarkExtractJobResponse submitDigitalWatermarkExtractJob(const Models::SubmitDigitalWatermarkExtractJobRequest &request);

      /**
       * @summary Submits a media animated image job for asynchronous processing.
       *
       * @description ### Usage notes
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned. The task is not completed at this time and enters the background queue for asynchronous execution. The final result is notified through a callback. You can also call the [Get task details](https://help.aliyun.com/document_detail/2861326.html) operation to actively query the task status.
       * - You can initiate an animated image job only for videos whose status is **Upload Complete**, **Transcoding**, **Normal**, **Under Review**, or **Blocked**.
       * - Animated image production is billed as video transcoding and follows the same billing standards, which are based on resolution and duration. For more information about billing, see [Billing of media asset transcoding](https://help.aliyun.com/document_detail/188308.html).
       * ### QPS limits
       * The QPS limit for a single user is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SubmitDynamicImageJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJobWithOptions(const Models::SubmitDynamicImageJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media animated image job for asynchronous processing.
       *
       * @description ### Usage notes
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned. The task is not completed at this time and enters the background queue for asynchronous execution. The final result is notified through a callback. You can also call the [Get task details](https://help.aliyun.com/document_detail/2861326.html) operation to actively query the task status.
       * - You can initiate an animated image job only for videos whose status is **Upload Complete**, **Transcoding**, **Normal**, **Under Review**, or **Blocked**.
       * - Animated image production is billed as video transcoding and follows the same billing standards, which are based on resolution and duration. For more information about billing, see [Billing of media asset transcoding](https://help.aliyun.com/document_detail/188308.html).
       * ### QPS limits
       * The QPS limit for a single user is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SubmitDynamicImageJobRequest
       * @return SubmitDynamicImageJobResponse
       */
      Models::SubmitDynamicImageJobResponse submitDynamicImageJob(const Models::SubmitDynamicImageJobRequest &request);

      /**
       * @summary Submits a manifest editing task for an existing adaptive bitrate streaming (AUTO) packaging output to add or remove audio, video, or subtitle tracks to or from the master playlist without re-transcoding.
       *
       * @description ## Request description
       * - This API operation incrementally edits the manifest of an existing HLS/DASH AUTO stream (definition=7) without re-transcoding.
       * - `VideoId` and `JobId` are required parameters used for authentication isolation and consistency verification.
       * - You can specify `TemplateId` to apply a predefined manifest editing template.
       * - This operation supports appending, removing, and replacing audio, subtitle, and video tracks.
       * - The `OutputConfig` parameter specifies the storage location of the edited manifest.
       * - You can pass custom data in `UserData` as pass-through information.
       *
       * @param request SubmitEditMediaManifestJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitEditMediaManifestJobResponse
       */
      Models::SubmitEditMediaManifestJobResponse submitEditMediaManifestJobWithOptions(const Models::SubmitEditMediaManifestJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a manifest editing task for an existing adaptive bitrate streaming (AUTO) packaging output to add or remove audio, video, or subtitle tracks to or from the master playlist without re-transcoding.
       *
       * @description ## Request description
       * - This API operation incrementally edits the manifest of an existing HLS/DASH AUTO stream (definition=7) without re-transcoding.
       * - `VideoId` and `JobId` are required parameters used for authentication isolation and consistency verification.
       * - You can specify `TemplateId` to apply a predefined manifest editing template.
       * - This operation supports appending, removing, and replacing audio, subtitle, and video tracks.
       * - The `OutputConfig` parameter specifies the storage location of the edited manifest.
       * - You can pass custom data in `UserData` as pass-through information.
       *
       * @param request SubmitEditMediaManifestJobRequest
       * @return SubmitEditMediaManifestJobResponse
       */
      Models::SubmitEditMediaManifestJobResponse submitEditMediaManifestJob(const Models::SubmitEditMediaManifestJobRequest &request);

      /**
       * @summary Deletes a media fingerprint job.
       *
       * @description Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request SubmitMediaDNADeleteJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaDNADeleteJobResponse
       */
      Models::SubmitMediaDNADeleteJobResponse submitMediaDNADeleteJobWithOptions(const Models::SubmitMediaDNADeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a media fingerprint job.
       *
       * @description Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       *
       * @param request SubmitMediaDNADeleteJobRequest
       * @return SubmitMediaDNADeleteJobResponse
       */
      Models::SubmitMediaDNADeleteJobResponse submitMediaDNADeleteJob(const Models::SubmitMediaDNADeleteJobRequest &request);

      /**
       * @summary Transcodes a video by using a China Production Studio (China Production Studio) for preprocessing.
       *
       * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is queued for asynchronous execution in the background. The final result is sent through a callback notification. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the task status.
       * - Video preprocessing is essentially a transcoding process that generates videos that meet the playback requirements of the China Production Studio. Therefore, **metering and billing** information is generated. For billing details, see [China Production Studio fees](https://help.aliyun.com/document_detail/64531.html).
       * - To meet the quality requirements of the China Production Studio for materials, videos in MP4 format with a short side of 360 must meet at least one of the following conditions before preprocessing can be initiated: the resolution exceeds 1920, the bit rate exceeds 6000 kbps, or the frame rate exceeds 25.
       * - You can receive the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback message to obtain the processing result. When the callback message contains **Preprocess=true**, it indicates that the preprocessing is complete.
       *
       * @param request SubmitPreprocessJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPreprocessJobsResponse
       */
      Models::SubmitPreprocessJobsResponse submitPreprocessJobsWithOptions(const Models::SubmitPreprocessJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transcodes a video by using a China Production Studio (China Production Studio) for preprocessing.
       *
       * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is queued for asynchronous execution in the background. The final result is sent through a callback notification. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the task status.
       * - Video preprocessing is essentially a transcoding process that generates videos that meet the playback requirements of the China Production Studio. Therefore, **metering and billing** information is generated. For billing details, see [China Production Studio fees](https://help.aliyun.com/document_detail/64531.html).
       * - To meet the quality requirements of the China Production Studio for materials, videos in MP4 format with a short side of 360 must meet at least one of the following conditions before preprocessing can be initiated: the resolution exceeds 1920, the bit rate exceeds 6000 kbps, or the frame rate exceeds 25.
       * - You can receive the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback message to obtain the processing result. When the callback message contains **Preprocess=true**, it indicates that the preprocessing is complete.
       *
       * @param request SubmitPreprocessJobsRequest
       * @return SubmitPreprocessJobsResponse
       */
      Models::SubmitPreprocessJobsResponse submitPreprocessJobs(const Models::SubmitPreprocessJobsRequest &request);

      /**
       * @summary Submits a video snapshot job to start asynchronous snapshot processing.
       *
       * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned (the task is not yet complete and enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also proactively query the task status by calling [Get task details](https://help.aliyun.com/document_detail/2861326.html).
       * - Only JPG images are supported.
       * - When the snapshot is complete, an event notification of [Video snapshot complete](https://help.aliyun.com/document_detail/57337.html) with EventType=SnapshotComplete and SubType=SpecifiedTime is sent.
       * ### QPS limit
       * The QPS limit for a single user on this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param tmpReq SubmitSnapshotJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJobWithOptions(const Models::SubmitSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video snapshot job to start asynchronous snapshot processing.
       *
       * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned (the task is not yet complete and enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also proactively query the task status by calling [Get task details](https://help.aliyun.com/document_detail/2861326.html).
       * - Only JPG images are supported.
       * - When the snapshot is complete, an event notification of [Video snapshot complete](https://help.aliyun.com/document_detail/57337.html) with EventType=SnapshotComplete and SubType=SpecifiedTime is sent.
       * ### QPS limit
       * The QPS limit for a single user on this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request SubmitSnapshotJobRequest
       * @return SubmitSnapshotJobResponse
       */
      Models::SubmitSnapshotJobResponse submitSnapshotJob(const Models::SubmitSnapshotJobRequest &request);

      /**
       * @summary Submits a media transcoding job to start asynchronous transcoding.
       *
       * @description ### Usage notes
       * - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Transcoding is a paid feature. For billing details, see [Billing of media asset transcoding](~~188308#section-ejb-nii-nqa~~).**
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a job, a job ID is returned. The job is not completed at this time and enters the background queue for asynchronous execution. The final result is notified through a callback. You can also call the [Get job details](https://help.aliyun.com/document_detail/454946.html) operation to actively query the job status.
       * - Only videos in the **Upload Completed**, **Normal**, or **Under Review** state can be transcoded.
       * - To obtain the transcoding result, you can receive callback messages: [Transcoding completed for a single definition](https://help.aliyun.com/document_detail/55636.html) and [All transcoding completed](https://help.aliyun.com/document_detail/55638.html).
       * - This operation supports dynamic replacement of subtitle URLs in HLS adaptive bitrate streaming packaging jobs. If the packaging job does not involve subtitle packaging, we do not recommend using this operation to initiate the job. Instead, we recommend setting the corresponding packaging template group ID when uploading the video to automatically initiate the packaging process.
       *
       * @param request SubmitTranscodeJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitTranscodeJobsResponse
       */
      Models::SubmitTranscodeJobsResponse submitTranscodeJobsWithOptions(const Models::SubmitTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media transcoding job to start asynchronous transcoding.
       *
       * @description ### Usage notes
       * - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Transcoding is a paid feature. For billing details, see [Billing of media asset transcoding](~~188308#section-ejb-nii-nqa~~).**
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a job, a job ID is returned. The job is not completed at this time and enters the background queue for asynchronous execution. The final result is notified through a callback. You can also call the [Get job details](https://help.aliyun.com/document_detail/454946.html) operation to actively query the job status.
       * - Only videos in the **Upload Completed**, **Normal**, or **Under Review** state can be transcoded.
       * - To obtain the transcoding result, you can receive callback messages: [Transcoding completed for a single definition](https://help.aliyun.com/document_detail/55636.html) and [All transcoding completed](https://help.aliyun.com/document_detail/55638.html).
       * - This operation supports dynamic replacement of subtitle URLs in HLS adaptive bitrate streaming packaging jobs. If the packaging job does not involve subtitle packaging, we do not recommend using this operation to initiate the job. Instead, we recommend setting the corresponding packaging template group ID when uploading the video to automatically initiate the packaging process.
       *
       * @param request SubmitTranscodeJobsRequest
       * @return SubmitTranscodeJobsResponse
       */
      Models::SubmitTranscodeJobsResponse submitTranscodeJobs(const Models::SubmitTranscodeJobsRequest &request);

      /**
       * @summary Initiates a VOD workflow for a video.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Using a workflow may incur fees for transcoding, encryption, automated review, and other services. For more information about billing, see [Billing overview of ApsaraVideo VOD](https://help.aliyun.com/document_detail/188307.html).**
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a job, a job ID is returned. The job is not completed at this time and enters the background queue for asynchronous execution. The final result is notified by a callback. You can also call the [Get job details](https://help.aliyun.com/document_detail/2861326.html) operation to query the job status.
       * - You can call this operation to initiate a workflow processing job for a video. For more information about workflows, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
       *
       * @param request SubmitWorkflowJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitWorkflowJobResponse
       */
      Models::SubmitWorkflowJobResponse submitWorkflowJobWithOptions(const Models::SubmitWorkflowJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a VOD workflow for a video.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Using a workflow may incur fees for transcoding, encryption, automated review, and other services. For more information about billing, see [Billing overview of ApsaraVideo VOD](https://help.aliyun.com/document_detail/188307.html).**
       * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a job, a job ID is returned. The job is not completed at this time and enters the background queue for asynchronous execution. The final result is notified by a callback. You can also call the [Get job details](https://help.aliyun.com/document_detail/2861326.html) operation to query the job status.
       * - You can call this operation to initiate a workflow processing job for a video. For more information about workflows, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
       *
       * @param request SubmitWorkflowJobRequest
       * @return SubmitWorkflowJobResponse
       */
      Models::SubmitWorkflowJobResponse submitWorkflowJob(const Models::SubmitWorkflowJobRequest &request);

      /**
       * @summary Modifies an AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
       *
       * @param request UpdateAITemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAITemplateResponse
       */
      Models::UpdateAITemplateResponse updateAITemplateWithOptions(const Models::UpdateAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an AI template.
       *
       * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
       * - After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
       *
       * @param request UpdateAITemplateRequest
       * @return UpdateAITemplateResponse
       */
      Models::UpdateAITemplateResponse updateAITemplate(const Models::UpdateAITemplateRequest &request);

      /**
       * @summary Updates the application information.
       *
       * @description After you create an application, you can call this operation to locate the application by its ID and modify the name, description, and status of the application.
       * ### QPS limits
       * The QPS limit for a single user is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateAppInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppInfoResponse
       */
      Models::UpdateAppInfoResponse updateAppInfoWithOptions(const Models::UpdateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the application information.
       *
       * @description After you create an application, you can call this operation to locate the application by its ID and modify the name, description, and status of the application.
       * ### QPS limits
       * The QPS limit for a single user is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateAppInfoRequest
       * @return UpdateAppInfoResponse
       */
      Models::UpdateAppInfoResponse updateAppInfo(const Models::UpdateAppInfoRequest &request);

      /**
       * @summary Updates the titles, descriptions, tags, and categories of multiple auxiliary media assets in ApsaraVideo VOD based on their IDs. Auxiliary media assets include watermarked images, subtitle files, and other materials.
       *
       * @description You can update the information of up to 20 auxiliary media assets at a time.
       *
       * @param request UpdateAttachedMediaInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAttachedMediaInfosResponse
       */
      Models::UpdateAttachedMediaInfosResponse updateAttachedMediaInfosWithOptions(const Models::UpdateAttachedMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the titles, descriptions, tags, and categories of multiple auxiliary media assets in ApsaraVideo VOD based on their IDs. Auxiliary media assets include watermarked images, subtitle files, and other materials.
       *
       * @description You can update the information of up to 20 auxiliary media assets at a time.
       *
       * @param request UpdateAttachedMediaInfosRequest
       * @return UpdateAttachedMediaInfosResponse
       */
      Models::UpdateAttachedMediaInfosResponse updateAttachedMediaInfos(const Models::UpdateAttachedMediaInfosRequest &request);

      /**
       * @summary Updates the name of a category.
       *
       * @description After you create a category, you can call this operation to update the category name. If the category is already tagged on media assets, the category name tagged on these media assets is automatically updated.
       *
       * @param request UpdateCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategoryWithOptions(const Models::UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a category.
       *
       * @description After you create a category, you can call this operation to update the category name. If the category is already tagged on media assets, the category name tagged on these media assets is automatically updated.
       *
       * @param request UpdateCategoryRequest
       * @return UpdateCategoryResponse
       */
      Models::UpdateCategoryResponse updateCategory(const Models::UpdateCategoryRequest &request);

      /**
       * @summary Modifies an online editing project (video editing task).
       *
       * @param request UpdateEditingProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProjectWithOptions(const Models::UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an online editing project (video editing task).
       *
       * @param request UpdateEditingProjectRequest
       * @return UpdateEditingProjectResponse
       */
      Models::UpdateEditingProjectResponse updateEditingProject(const Models::UpdateEditingProjectRequest &request);

      /**
       * @summary Updates the titles, descriptions, tags, and categories of multiple images by image ID after the images are uploaded to ApsaraVideo VOD.
       *
       * @description - This operation only supports modifying uploaded images and does not support modifying images generated from video snapshots.
       * - You can modify the information of up to 20 images at a time.
       *
       * @param request UpdateImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageInfosResponse
       */
      Models::UpdateImageInfosResponse updateImageInfosWithOptions(const Models::UpdateImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the titles, descriptions, tags, and categories of multiple images by image ID after the images are uploaded to ApsaraVideo VOD.
       *
       * @description - This operation only supports modifying uploaded images and does not support modifying images generated from video snapshots.
       * - You can modify the information of up to 20 images at a time.
       *
       * @param request UpdateImageInfosRequest
       * @return UpdateImageInfosResponse
       */
      Models::UpdateImageInfosResponse updateImageInfos(const Models::UpdateImageInfosRequest &request);

      /**
       * @summary Modifies the storage class of a media asset.
       *
       * @description - Before calling this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Modifying the storage class of a media asset in ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
       * - Modifying the storage class of a media asset is an **asynchronous operation**. A callback is sent to you after the operation is complete.
       * - If the current storage class of the media asset is Archive or Cold Archive, calling this operation automatically triggers restoration. The storage class is modified after the restoration is complete. You do not need to manually call the RestoreMedia operation to restore the media asset. For Cold Archive media assets, you must specify the restoration priority. The default value is RestoreTier=Standard.
       * - You cannot initiate another modification task for a media asset that is being modified, nor can you produce or process it.
       * - Media assets in non-standard storage classes have minimum storage duration requirements. Infrequent Access (IA) and Source File IA require a minimum storage duration of 30 days. Archive and Source File Archive require a minimum storage duration of 60 days. Cold Archive and Source File Cold Archive require a minimum storage duration of 180 days. If the storage duration does not meet the requirement when you modify the storage class of a media asset, you are charged for the remaining days of the minimum storage duration. For example, if you change the storage class of a media asset from IA to Standard after 10 days of IA storage, you are charged for the remaining 20 days of IA storage at a time, resulting in a total charge for 30 days of IA storage.
       * - **Modifying the storage class of media assets in your own buckets is not supported.**
       *
       * @param request UpdateMediaStorageClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaStorageClassResponse
       */
      Models::UpdateMediaStorageClassResponse updateMediaStorageClassWithOptions(const Models::UpdateMediaStorageClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the storage class of a media asset.
       *
       * @description - Before calling this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Modifying the storage class of a media asset in ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
       * - Modifying the storage class of a media asset is an **asynchronous operation**. A callback is sent to you after the operation is complete.
       * - If the current storage class of the media asset is Archive or Cold Archive, calling this operation automatically triggers restoration. The storage class is modified after the restoration is complete. You do not need to manually call the RestoreMedia operation to restore the media asset. For Cold Archive media assets, you must specify the restoration priority. The default value is RestoreTier=Standard.
       * - You cannot initiate another modification task for a media asset that is being modified, nor can you produce or process it.
       * - Media assets in non-standard storage classes have minimum storage duration requirements. Infrequent Access (IA) and Source File IA require a minimum storage duration of 30 days. Archive and Source File Archive require a minimum storage duration of 60 days. Cold Archive and Source File Cold Archive require a minimum storage duration of 180 days. If the storage duration does not meet the requirement when you modify the storage class of a media asset, you are charged for the remaining days of the minimum storage duration. For example, if you change the storage class of a media asset from IA to Standard after 10 days of IA storage, you are charged for the remaining 20 days of IA storage at a time, resulting in a total charge for 30 days of IA storage.
       * - **Modifying the storage class of media assets in your own buckets is not supported.**
       *
       * @param request UpdateMediaStorageClassRequest
       * @return UpdateMediaStorageClassResponse
       */
      Models::UpdateMediaStorageClassResponse updateMediaStorageClass(const Models::UpdateMediaStorageClassRequest &request);

      /**
       * @summary Modifies transcoding configurations. You can modify the configuration of a specified transcoding template in a transcoding template group.
       *
       * @description For security purposes, you cannot add, modify, or delete transcoding template groups that are in the locked state. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. Alternatively, you can call this operation to unlock the template group before you add, modify, or delete templates.
       *
       * @param request UpdateTranscodeTemplateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTranscodeTemplateGroupResponse
       */
      Models::UpdateTranscodeTemplateGroupResponse updateTranscodeTemplateGroupWithOptions(const Models::UpdateTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies transcoding configurations. You can modify the configuration of a specified transcoding template in a transcoding template group.
       *
       * @description For security purposes, you cannot add, modify, or delete transcoding template groups that are in the locked state. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. Alternatively, you can call this operation to unlock the template group before you add, modify, or delete templates.
       *
       * @param request UpdateTranscodeTemplateGroupRequest
       * @return UpdateTranscodeTemplateGroupResponse
       */
      Models::UpdateTranscodeTemplateGroupResponse updateTranscodeTemplateGroup(const Models::UpdateTranscodeTemplateGroupRequest &request);

      /**
       * @summary Modifies the information of a single audio or video file.
       *
       * @description ### Usage notes
       * Locates an audio or video file by video ID. You can modify the title, tags, description, and other information of the audio or video file. If a parameter is passed, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
       * ### QPS limits
       * The queries per second (QPS) limit per user for this API operation is 100. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateVideoInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoInfoResponse
       */
      Models::UpdateVideoInfoResponse updateVideoInfoWithOptions(const Models::UpdateVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a single audio or video file.
       *
       * @description ### Usage notes
       * Locates an audio or video file by video ID. You can modify the title, tags, description, and other information of the audio or video file. If a parameter is passed, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
       * ### QPS limits
       * The queries per second (QPS) limit per user for this API operation is 100. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateVideoInfoRequest
       * @return UpdateVideoInfoResponse
       */
      Models::UpdateVideoInfoResponse updateVideoInfo(const Models::UpdateVideoInfoRequest &request);

      /**
       * @summary Modifies the information of multiple audio and video files.
       *
       * @description ### Usage notes
       * - You can locate an audio or video file by its ID. You can modify the title, tags, description, and other information of the audio or video file. If a parameter is passed, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
       * - You can modify the information of up to 20 audio or video files at a time.
       * ### QPS limit
       * The queries per second (QPS) limit on a single user for this API operation is 30. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateVideoInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVideoInfosResponse
       */
      Models::UpdateVideoInfosResponse updateVideoInfosWithOptions(const Models::UpdateVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of multiple audio and video files.
       *
       * @description ### Usage notes
       * - You can locate an audio or video file by its ID. You can modify the title, tags, description, and other information of the audio or video file. If a parameter is passed, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
       * - You can modify the information of up to 20 audio or video files at a time.
       * ### QPS limit
       * The queries per second (QPS) limit on a single user for this API operation is 30. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
       *
       * @param request UpdateVideoInfosRequest
       * @return UpdateVideoInfosResponse
       */
      Models::UpdateVideoInfosResponse updateVideoInfos(const Models::UpdateVideoInfosRequest &request);

      /**
       * @summary Modifies an accelerated domain name.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
       *
       * @param request UpdateVodDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVodDomainResponse
       */
      Models::UpdateVodDomainResponse updateVodDomainWithOptions(const Models::UpdateVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an accelerated domain name.
       *
       * @description > This operation is available only in the **China (Shanghai)** region.
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
       * @summary Modifies the name and watermark configuration (WatermarkConfig) of an image and text watermark template that was added by calling the AddWatermark operation.
       *
       * @description - After you invoke [AddWatermark](~~AddWatermark~~) to add an image and text watermark template, you can invoke this operation to modify the name and watermark configuration of the template.
       * - This operation does not support replacing the image in an image watermark template or modifying the template across templatetypes (such as changing an image watermark template to a text watermark template).
       *
       * @param request UpdateWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWatermarkResponse
       */
      Models::UpdateWatermarkResponse updateWatermarkWithOptions(const Models::UpdateWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and watermark configuration (WatermarkConfig) of an image and text watermark template that was added by calling the AddWatermark operation.
       *
       * @description - After you invoke [AddWatermark](~~AddWatermark~~) to add an image and text watermark template, you can invoke this operation to modify the name and watermark configuration of the template.
       * - This operation does not support replacing the image in an image watermark template or modifying the template across templatetypes (such as changing an image watermark template to a text watermark template).
       *
       * @param request UpdateWatermarkRequest
       * @return UpdateWatermarkResponse
       */
      Models::UpdateWatermarkResponse updateWatermark(const Models::UpdateWatermarkRequest &request);

      /**
       * @summary Pulls and uploads audio and video media files from source URLs. Supports batch uploads.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media assets to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media assets to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - For the media file formats supported by this operation, see [Media formats](~~55396#section-e27-2rj-mde~~).
       * - This operation is mainly applicable to scenarios where files are not stored on local servers or terminals and need to be uploaded through URLs with public network access.
       * - This operation is an [asynchronous upload operation](https://help.aliyun.com/document_detail/3027551.html). It is not real-time and does not guarantee timeliness. Generally, the migration and upload are completed within hours or even days after submission. If you have high requirements for timeliness, use the upload SDK.
       * - If a callback is configured, you will receive a [URL-based video upload complete](https://help.aliyun.com/document_detail/86326.html) event notification after the upload is complete. You can query the upload status by calling the [Get URL upload information](https://help.aliyun.com/document_detail/106830.html) operation.
       * - After an upload task is submitted, an asynchronously executed task is generated in the cloud. URL upload tasks submitted by all users in the corresponding service region are queued for execution. The completion time is affected by the number of existing tasks. After the upload is complete, you can associate the task based on the URL and video ID returned in the event notification (message callback).
       * - This operation is currently supported only in the **China (Shanghai)**, **China (Beijing)**, **China (Shenzhen)**, **Singapore**, and **US** (**Silicon Valley**) regions.
       * - For the same media file URL, each submitted upload task generates a new media asset in ApsaraVideo VOD (that is, a new media ID is generated).
       * - If a single file exceeds 20 GB, it will result in a failed upload. If you need to upload a single file larger than 20 GB, use the upload SDK. For more information, see [Overview of the upload SDK](https://help.aliyun.com/document_detail/52200.html).
       *
       * @param request UploadMediaByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURLWithOptions(const Models::UploadMediaByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pulls and uploads audio and video media files from source URLs. Supports batch uploads.
       *
       * @description - **Before you call this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media assets to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media assets to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - For the media file formats supported by this operation, see [Media formats](~~55396#section-e27-2rj-mde~~).
       * - This operation is mainly applicable to scenarios where files are not stored on local servers or terminals and need to be uploaded through URLs with public network access.
       * - This operation is an [asynchronous upload operation](https://help.aliyun.com/document_detail/3027551.html). It is not real-time and does not guarantee timeliness. Generally, the migration and upload are completed within hours or even days after submission. If you have high requirements for timeliness, use the upload SDK.
       * - If a callback is configured, you will receive a [URL-based video upload complete](https://help.aliyun.com/document_detail/86326.html) event notification after the upload is complete. You can query the upload status by calling the [Get URL upload information](https://help.aliyun.com/document_detail/106830.html) operation.
       * - After an upload task is submitted, an asynchronously executed task is generated in the cloud. URL upload tasks submitted by all users in the corresponding service region are queued for execution. The completion time is affected by the number of existing tasks. After the upload is complete, you can associate the task based on the URL and video ID returned in the event notification (message callback).
       * - This operation is currently supported only in the **China (Shanghai)**, **China (Beijing)**, **China (Shenzhen)**, **Singapore**, and **US** (**Silicon Valley**) regions.
       * - For the same media file URL, each submitted upload task generates a new media asset in ApsaraVideo VOD (that is, a new media ID is generated).
       * - If a single file exceeds 20 GB, it will result in a failed upload. If you need to upload a single file larger than 20 GB, use the upload SDK. For more information, see [Overview of the upload SDK](https://help.aliyun.com/document_detail/52200.html).
       *
       * @param request UploadMediaByURLRequest
       * @return UploadMediaByURLResponse
       */
      Models::UploadMediaByURLResponse uploadMediaByURL(const Models::UploadMediaByURLRequest &request);

      /**
       * @summary Uploads a transcoded stream file from external storage and attaches it to the corresponding ApsaraVideo VOD media asset.
       *
       * @description - **Before you use this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage and transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - This operation is currently supported only in the China (Shanghai), China (Beijing), China (Shenzhen), Singapore, and US (Silicon Valley) regions.
       * - Call this operation to upload a transcoded stream file from external storage and attach it to the corresponding ApsaraVideo VOD media asset. The supported HDR types for transcoded streams are HDR, HDR10, HLG, DolbyVision, HDRVivid, and SDR+.
       * - You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, you receive the [URL Upload Transcoded Stream Complete](https://help.aliyun.com/document_detail/376427.html) event notification.
       *
       * @param request UploadStreamByURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURLWithOptions(const Models::UploadStreamByURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a transcoded stream file from external storage and attaches it to the corresponding ApsaraVideo VOD media asset.
       *
       * @description - **Before you use this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage and transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
       * - This operation is currently supported only in the China (Shanghai), China (Beijing), China (Shenzhen), Singapore, and US (Silicon Valley) regions.
       * - Call this operation to upload a transcoded stream file from external storage and attach it to the corresponding ApsaraVideo VOD media asset. The supported HDR types for transcoded streams are HDR, HDR10, HLG, DolbyVision, HDRVivid, and SDR+.
       * - You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, you receive the [URL Upload Transcoded Stream Complete](https://help.aliyun.com/document_detail/376427.html) event notification.
       *
       * @param request UploadStreamByURLRequest
       * @return UploadStreamByURLResponse
       */
      Models::UploadStreamByURLResponse uploadStreamByURL(const Models::UploadStreamByURLRequest &request);

      /**
       * @summary Calls this operation to verify domain name ownership.
       *
       * @description Currently, the service is supported only in the **China (Shanghai)** region.
       *
       * @param request VerifyVodDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyVodDomainOwnerResponse
       */
      Models::VerifyVodDomainOwnerResponse verifyVodDomainOwnerWithOptions(const Models::VerifyVodDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls this operation to verify domain name ownership.
       *
       * @description Currently, the service is supported only in the **China (Shanghai)** region.
       *
       * @param request VerifyVodDomainOwnerRequest
       * @return VerifyVodDomainOwnerResponse
       */
      Models::VerifyVodDomainOwnerResponse verifyVodDomainOwner(const Models::VerifyVodDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
